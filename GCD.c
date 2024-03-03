//GCD OF N NUMBERS BY Euclidean Algorithm
#include <stdio.h>
#include <stdlib.h>
int calculateGcd(int a,int b){
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
void gcd(int *A,int n)
{
    int gcd=A[0];
    for(int i=1;i<n;i++)
    {
        gcd=calculateGcd(gcd,A[i]);
    }
    printf("GCD is %d",gcd);
}
int main()
{
    int n;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));
    printf("Enter the numbers: \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the number %d: ",i+1);
        scanf("%d",&A[i]);
    }
    gcd(A,n);
    free(A);
    return 0;
}