//write a program to create a array of length 7
// read the input from n user travel to array 
//update the value //
#include <stdio.h>  
#define SIZE 7
int main() {
    int arr[SIZE];
    int i;
    int n=0;

    // Read input from user
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Update the value
    int r;
    printf("Updating the element ",n);
    scanf("%d", &n);
    printf("enter the range ",r);
    scanf("%d", &r);
    arr[n]=r;
  

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}