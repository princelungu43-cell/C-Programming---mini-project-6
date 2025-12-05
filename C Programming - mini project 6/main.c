//
//  main.c
//  C Programming - mini project 6
//
//  Created by user on 12/10/2025.
//

#include <stdio.h>

int main() {
    int myNum;
    
    printf("enter number: ");
    scanf("%d", &myNum);

    if (myNum % 2 == 0) {
      printf("%d is even.\n", myNum);
    } else {
      printf("%d is odd.\n", myNum);
    }

   
    return 0;
}
