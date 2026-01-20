#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter the number of grades: ");
    scanf("%d", &n);

    char *grades = malloc(n * sizeof(char));

    if(grades == NULL) {
        printf("error while renting space.");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        printf("enter the grade of subject %d ", i+1);
        scanf(" %c", &grades[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("%c ", grades[i]);
    }

    free(grades); // returning the rentend space back to OS
    grades = NULL;
    return 0;
}