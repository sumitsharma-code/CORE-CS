#include<stdio.h>
#include<stdlib.h>

int main() {
    // practice sheet
    int n;
    scanf("%d", &n);

    int *marks = malloc(n * sizeof(int));

    if(marks == NULL) {
        printf("error while alloting memory!");
        return 1;
    }
    
    for(int i = 0; i < n; i++) {
        printf("Enter the marks for subject %d ", i + 1);
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("%d", marks[i]);
    }

    free(marks);
    marks = NULL;
    return 0;
}