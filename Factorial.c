#include <stdio.h>
int fact(int n)
{
     if (n >=1)
        return(n * fact(n-1));
     else
        return 1;
}
         
int main()
{
    int n, i;
    unsigned long long factorial = 1;
    //unsigned long long is the same as unsigned long long int. 
    //Its size is platform-dependent, but guaranteed by the C standard (ISO C99) to be at least 64 bits. 

    printf("Enter a number: ");
    scanf("%d",&n);
    factorial = fact(n);
    printf("%d",factorial);
    
    return 0;
}


   
