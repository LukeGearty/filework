#include <stdio.h>

int main() {

    //Create the file and 
    FILE *fptr;
    fptr = fopen("movies.txt", "a");

    char movieName[20];
    char rating;

    printf("Enter the name of the movie: ");
    fgets(movieName, 20, stdin);

    printf("Out of 10, enter the rating: ");
    scanf("%c", &rating);

    fprintf(fptr, movieName);
    fprintf(fptr, "%c", rating);
    fprintf(fptr, "\n");
    fclose(fptr);

    return 0;
}