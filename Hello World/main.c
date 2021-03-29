#include <stdio.h>
#include <stdlib.h>

int main()
{   char name[20];
    int age;
    double gpa;
    printf("Enter your name\n");
    scanf("%s", name);
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your GPA\n");
    scanf("%lf", &gpa);
    printf("Your name is %s and you are %d years old. Your GPA is %lf", name, age, gpa);
    return 0;
}
