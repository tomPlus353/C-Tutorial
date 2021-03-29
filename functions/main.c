#include <stdio.h>
#include <stdlib.h>

void sayHello(char name[])
{
    printf("Hello %s\n", name);
}

int main()
{
    char name[20] = "Tomás";
    sayHello(name);
    sayHello("Tomas");
    printf("Bottom\n");
    return 0;
}
