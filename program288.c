
#include<stdio.h>

int countcapital(char *str)
{

    int icount=0;
    
    while(*str !='\0')
    {
        if(*str>='A'&&*str<='Z')

        {
            icount ++;
        }
       
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

    iret=countcapital(arr);

    printf("caoital is %d\n",iret);





    return 0;
}