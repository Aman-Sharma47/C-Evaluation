/*Program to check weather the voter is eligible 
for voting or not . If his/her age is equal to or 
greater  than 18, then display message 
‘Eligible’ otherwise ‘Not eligible’.*/

#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are not eligible to vote yet.\n");
    }
    
    return 0;
}