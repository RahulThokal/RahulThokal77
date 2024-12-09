#include<stdio.h>
int main()
{

    int ino=78945;
    int idigit=0;

    while(ino>0)
    {

        idigit=ino % 10;
        printf("%d\n",idigit);
        ino=ino/10;
    }



    return 0;
}