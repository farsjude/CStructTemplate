#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure
struct Object {
    char name[50];  // Name of the object
    int age;        // Age of the object
    char letter;    // A letter (single character)
    float decimal;  // A decimal number
    long longNumber; // A long number
};

int main() {
    // Pointer to the struct
    struct Object *objPtr;

    // Allocate memory for the struct
    objPtr = malloc(sizeof(struct Object));
    
    // Check if memory allocation was successful
    if (objPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit with error
    }

    // Assign values to the struct fields
    strcpy(objPtr->name, "John Doe");  // Copy name to the 'name' field
    objPtr->age = 30;                  // Set age to 30
    objPtr->letter = 'J';              // Set letter
    objPtr->decimal = 3.14f;           // Set a decimal number
    objPtr->longNumber = 1234567890;   // Set a long number

    // Print the values from the struct
    printf("Name: %s\n", objPtr->name);  // Access 'name' field
    printf("Age: %d\n", objPtr->age);    // Access 'age' field
    printf("Letter: %c\n", objPtr->letter); // Access 'letter' field
    printf("Decimal: %.2f\n", objPtr->decimal); // Access 'decimal' field
    printf("Long Number: %lld\n", objPtr->longNumber); // Access 'longNumber' field

    // Free the allocated memory
    free(objPtr);

    return 0;  // Exit successfully
}