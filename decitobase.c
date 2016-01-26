#include<stdio.h> 
int main() 
{ 
	int base,deci,i,rem,digit,quot,count=0; 
        char a[100]; 
        printf("\nEnter the decimal number:\n"); 
        scanf("%d",&deci); 
        if(deci<0)
        {
        	printf("\n Invalid decimal number");
        }
        printf("\nEnter the base to be converted:\n"); 
        scanf("%d",&base);
        if(base<2)
        {
        	printf("\n No possible conversion");
       	}
        quot=deci; 
        
        do 
        { 
        	rem=quot%base; 
        	digit='0'+rem; 
        	if(digit>'9') 
            	digit=digit+7; 
        	a[count]=digit; 
        	count++; 
        	quot=quot/base; 
         } while(quot!=0); 
         
         printf("\nbase %d is same as num %d is ",base,deci); 
         for(i=count-1;i>=0;--i) 
         printf("%c",a[i]); 
         printf("\n"); 
         return 0;
  }
