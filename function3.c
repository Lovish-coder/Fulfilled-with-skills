#include<stdio.h>
#include<conio.h>

void namaste();
void bonjour();

int main()
{
    printf("enter i if you are indian or f for french = ");
    char ch;
    scanf("%c",&ch);

    if(ch == 'i')
    {
        namaste();
    }    
    else
    {
        bonjour();
    }
return 0;
}

void namaste()
{
    printf("namaste \n");
    printf("HI \n");
}

void bonjour()
{
    printf("bonjour");
    printf("HELLO");
}