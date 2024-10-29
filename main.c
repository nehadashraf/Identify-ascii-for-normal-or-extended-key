#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter ch\n");
    ch=getch();
    switch(ch)
    {
        case -32:
        ch=getch();
        printf("Extended with ascii %i\n",ch);
        break;
        default:
        printf("normal with ascii %i\n",ch);
        break;
    }
    return 0;

}
