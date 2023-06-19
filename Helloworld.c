# include <stdio.h>
# include <conio.h>
void main()

{
    int age;

    printf("Enter Your Age: ");
    scanf("%d",& age);

    if (age >= 18){
        printf("You are Eligible for Citizenship");
    }
    else{
        printf("You are not Eligible for Citizenship");
    }
    getch();
}