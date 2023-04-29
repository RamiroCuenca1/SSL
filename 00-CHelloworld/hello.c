#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *cb;
    cb= fopen("output.txt", "w");
    if (cb != NULL)
    {
        fputs("Hola mundo!", cb);
    }

    printf("Hola mundo!\n");
    system("pause");
    return 0;
}
