#include<stdio.h>
void big3()
{ 
    int a,b,c;
    int largest;
 
    printf("Enter three numbers (separated by space):");
    scanf("%d%d%d",&a,&b,&c);
 
    if(a>b && a>c)        
        largest=a;
    else if(b>a && b>c)       
        largest=b;
    else
        largest=c;
 
    printf("Largest number is = %d",largest);
}
