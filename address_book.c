#include <stdio.h>

int main() {

    //generate file or write to file if it exists
    FILE *fptr;
    fptr = fopen("address.txt", "a");
    //write to that file with name and phone number
    //declare variable
    char name[20];
    char phoneNumber[11];
    //get the name
    printf("Enter the name of the person you want to add to the address book: ");
    fgets(name, 20, stdin);
    //get the phone number
    printf("Enter the phone number: ");
    fgets(phoneNumber, 11, stdin);
    //write to the file
    fprintf(fptr, name);
    fprintf(fptr, phoneNumber);
    //write a new line
    fprintf(fptr,"\n");
    //close file
    fclose(fptr);


    return 0;
}