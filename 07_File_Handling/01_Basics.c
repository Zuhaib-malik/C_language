/* 
File I/O:
    Allows programs to read from and write to files stored on disk, enabling data persistence beyond the program's execution.
        
    Key Concepts:
        File Pointer (FILE *): A pointer used to manage a file stream, linking the program to the file on disk.
        File Modes: Specify how a file is opened (e.g., "r" for read, "w" for write, "a" for append, "rb" for binary read).
        
Common Functions:
    fopen(): Opens a file and returns a FILE * pointer.
    fclose(): Closes an opened file.
    fprintf(): Writes formatted output to a file.
    fscanf(): Reads formatted input from a file.
    fread(), fwrite(): Used for reading and writing blocks of data (often for binary files).
    fgetc(), fputc(): Used for single character I/O with files.
    fgets(), fputs(): Used for string I/O with files.
    fseek(), ftell(), rewind(): Used for navigating within a file.
Basic I/O Example (Standard I/O):
*/


#include <stdio.h>   // Standard I/O functions (file operations, printf, etc.)
#include <string.h>  // String manipulation functions (strlen, etc.)

int main() {
    /* ========== TEXT FILE WRITING ========== */
    
    // Open a file for writing ("w" mode creates new or overwrites existing)
    FILE *textFile = fopen("example.txt", "w");  
    
    // Check if file opened successfully
    if (textFile == NULL) {
        perror("Error opening file for writing");  // Print error message
        return 1;  // Exit program with error code
    }

    // Different ways to write to a text file:
    
    // 1. fprintf - formatted print to file (like printf but to file)
    fprintf(textFile, "This is a line written by fprintf.\n");
    
    // 2. fputs - write a string to file
    fputs("This is a line written by fputs.\n", textFile);
    
    // 3. fputc - write single characters to file
    fputc('A', textFile);  // Write 'A'
    fputc('\n', textFile); // Write newline
    
    // 4. fwrite - write raw binary data (useful for blocks of data)
    const char *data = "Binary data example\n";
    fwrite(data, sizeof(char), strlen(data), textFile);  
    
    // Always close files when done
    fclose(textFile);
    printf("Data written to file successfully.\n\n");

    /* ========== TEXT FILE READING ========== */
    
    // Open file for reading ("r" mode)
    textFile = fopen("example.txt", "r");  
    if (textFile == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Reading file contents:\n");
    char buffer[100];  // Buffer to hold read data
    
    // Read file line by line using fgets
    // fgets reads until newline or buffer full
    while (fgets(buffer, sizeof(buffer), textFile) != NULL) {
        printf("%s", buffer);  // Print each line
    }
    
    // rewind() moves file pointer back to start
    rewind(textFile);  
    
    // fgetc reads a single character
    printf("\nFirst character: %c\n", fgetc(textFile));
    
    fclose(textFile);

    /* ========== BINARY FILE OPERATIONS ========== */
    
    // Define a structure to store student records
    typedef struct {
        int id;
        char name[20];
        float score;
    } Student;

    // Create array of student records
    Student students[3] = {
        {1, "Alice", 95.5},
        {2, "Bob", 88.0},
        {3, "Charlie", 91.2}
    };

    // Open binary file for writing ("wb" mode)
    FILE *binFile = fopen("students.dat", "wb");
    if (binFile == NULL) {
        perror("Error opening binary file");
        return 1;
    }
    
    // Write entire array to binary file at once
    // Parameters: data pointer, size of each element, count, file pointer
    fwrite(students, sizeof(Student), 3, binFile);
    fclose(binFile);

    // Open binary file for reading ("rb" mode)
    binFile = fopen("students.dat", "rb");
    if (binFile == NULL) {
        perror("Error opening binary file");
        return 1;
    }

    // Array to hold read data
    Student readStudents[3];
    
    // Read binary data back into array
    fread(readStudents, sizeof(Student), 3, binFile);
    
    // Print all student records
    printf("\nStudent records:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s, Score: %.1f\n", 
               readStudents[i].id, 
               readStudents[i].name, 
               readStudents[i].score);
    }

    /* ========== FILE POSITIONING ========== */
    
    // fseek moves file pointer to specific position
    // SEEK_SET means offset from beginning of file
    fseek(binFile, sizeof(Student), SEEK_SET);  // Skip first record
    
    // Read just one record at current position
    Student secondStudent;
    fread(&secondStudent, sizeof(Student), 1, binFile);
    printf("\nSecond student (via fseek): %s\n", secondStudent.name);
    
    // ftell returns current position in file
    printf("Current position: %ld bytes from start\n", ftell(binFile));
    
    // rewind moves pointer back to start of file
    rewind(binFile);  
    
    fclose(binFile);

    /* ========== FILE APPENDING ========== */
    
    // Open file in append mode ("a") - adds to end without overwriting
    textFile = fopen("example.txt", "a");  
    if (textFile == NULL) {
        perror("Error opening file for appending");
        return 1;
    }
    
    // This line will be added to the end of existing content
    fprintf(textFile, "This line was appended.\n");
    fclose(textFile);

    return 0;  // Program completed successfully
}
