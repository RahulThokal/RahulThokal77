
#include<stdio.h>

int strlenx(char *str)
{

    int icnt=0;
    
    while(*str !='\0')
    {
        icount ++;
        str++;

    }
    return icount;



}


  


int main()
{

    int iret=0;
    char arr[30];

    printf("ENter the string \n"); 
    scanf("%d[^'\n]s",arr);

    iret=strlenx(arr);

    printf("String length is %d\n",iret);





    return 0;
}