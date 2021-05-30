#include<stdio.h>
#include<math.h>
int main()
{
  int choice;
  printf("\n1.prime or not");
  printf("\n2.perfect square or not");
  printf("\n3.perfect cube or not");
  printf("\n4.Factorial");
  printf("\n5.palindrome or not");
  printf("\n6.neon number or not");
  printf("\n7.Fibonacci series");
  printf("\n8.Armstrong number or not");
  printf("\n9.Disarium number or not");
  printf("\n10.Harshad number or not\n");
  printf("ENTER YOUR CHOICE:-\n");
  scanf("%d",&choice);
  int n,num,i,c=2,m,rem,fact=1,rev=0;
  float p;
  switch(choice)
  {
    case 1:printf("Enter the number\n");
           scanf("%d",&n);
           for(c=2;c<=n-1;c++)
           {
             if(n%c==0)
             {
               printf("%d is not prime\n",n);
               break;
             }
           }
           if(c==n)
           printf("%d is prime\n",n);
    break;
    case 2:printf("Enter the number\n");
           scanf("%d",&n);
           p=sqrt(n);
           m=p;
           if(p==m)
           printf("perfect square\n");
           else
           printf("not perfect square\n");
    break;
    case 3:printf("Enter the number\n");
           scanf("%d",&n);
           i=round(pow(n,1.0/3.0));
           if(i*i*i==n)
           printf("perfect cube\n");
           else
           printf("not perfect cube\n");
    break;
    case 4:printf("Enter the number\n");
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           {
             fact=fact*i;
           }
           printf("factorial of %d is %d\n",n,fact);
    break;
    case 5:printf("Enter the number\n");
           scanf("%d",&num);
           n=num;
           while(num!=0)
           {
             rem=num%10;
             num=num/10;
             rev=rev*10+rem;
           }
           if(rev==n)
           printf("%d is palindrome\n",n);
           else
           printf("%d is not palindrome\n",n);
    break;
           int sq,sum=0;
    case 6:printf("Enter the number\n");
           scanf("%d",&n);

           sq=n*n;
           
           for(i=sq;i>0;i=i/10)
           sum=sum+i%10;

           if(sum==n)
             printf("%d is  neon number\n",n);
           else
             printf("%d is not neon number\n",n);
    break;
           int n1=0,n2=1,n3,i,num;
    case 7:printf("Enter the number of elements:\n");
           scanf("%d",&num);
           printf("\nFibonacci series:%d %d ",n1,n2);
           for(i=2;i<num;++i)
           {
            n3=n1+n2;
            printf("\t%d",n3);
            n1=n2;
            n2=n3;
           }
    break;
           int a,b=0,t,n;
    case 8:printf("Enter the number\n");
           scanf("%d",&n);

           t=n;
           b=0;  
           while(n>0)
           {
             a=n%10;
             b=b+a*a*a;
             n=n/10;
           }
           if(b==t)
           {
             printf(" Armstrong number\n");
           }
           else
           {
             printf("not Armstrong number\n");
           }
    break;
           int rem,num1,c=0;
    case 9:printf("Enter the number\n");
           scanf("%d",&num);
           num1=num;
           c=0;
           while(num1!=0)
           {
            num/=10;
            c++;
           }
           num1=num;
           while(num1!=0)
           {
             rem=num1%10;
             sum+=pow(rem,c);
             num1/=10;
             c--;
           }
           if(sum==num)
           printf("Disarium number\n");
           else
           printf("Not Disarium number\n");
    break;
    case 10:printf("Enter the number\n");
           scanf("%d",&n);

           num=n;

           sum=0;
           while(num>0)
           {
             rem=num%10;
             num=num/10;
             sum=sum+rem;
           }
           if(n%sum==0)
           printf("%d is Harshad number\n",n);
           else
           printf("%d is not Harshad number\n",n);
    break;
    case 11:default:printf("invalid input\n");
    break;
    }
    return 0;
}
    
