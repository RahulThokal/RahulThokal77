
#include<stdio.h>

int countcapital(char *str)
{

    static int icount=0;
    
    if(*str !='\0')
    {
        if(*str>='A'&&*str<='Z')

        {
            icount ++;
        }
       
        str++;
        countcapital( str);

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

    printf("capital is %d\n",iret);





    return 0;
}