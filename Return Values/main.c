#include <stdio.h>
#include <stdlib.h>
double cube(double num){
    double result = num * num * num;
    return result;
}

double squared(double num){
    return num * num;
}

int main()
{
    printf("Answer: %f", cube(4.0));
    return 0;
}
