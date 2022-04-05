#include<stdio.h>
#include<conio.h>
int main()
{
    int a[30][30], b[30][30],c[30][30],m,n,i,j,p,q;
    printf("Enter the size of row and column of the first Array \n");
    Scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for( j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the size of row and column of the second Array \n");
    int h,k;
    Scanf("%d %d",&h,&k);
    for( p=0;p<m;p++)
    {
        for(q=0;q<n;q++)
        {
            scanf("%d",&b [p] [q]);
        }
    }
    if(n==h)
    {
        for(i=0;i<m;i++)
        {
        for(q=0;q<k;q++)
        {
            c[i][q]=0;
        }
        }
    
    for(j=0;j<n;j++)
    {
        c[i][q] =c[i][q]+a[i][j]* b [j][q];
    }
    printf("Multiplication is \n");
    for(i=0;i<m;i++)
    {
        for(q=0;q<k;q++)
        {
            printf("%d",c[i][q]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("Multiply not possible");
    }
    return 0;
}
