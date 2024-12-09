
#include<stdio.h>

int strlenx(char *str)
{

   static int icount=0;
    
    if(*str !='\0')
    {
        icount ++;
        str++;
         strlenx(str);

    }
    return icount;



}


  


int main()
{

  
    char arr[30];
      int iret=0;

    printf("ENter the string \n"); 
    scanf("%d[^'\n]s",arr);

    iret=strlenx(arr);

    printf("String length is %d\n",iret);





    return 0;
}