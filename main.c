#include<stdio.h>
int main()
{
    int ar[20],n,pos,i;
    printf("enter the number of element :");
    scanf("%d",&n);
    printf("enter the elements to enter :");
    for(i=0;i<n;i++)
    {
          scanf("%d",&ar[i]);         
    }
    printf("enter the postion to delete :");
    scanf("%d",&pos);
    if(pos>n+1)
    {
          printf("deletion not possible!");
    }
    else
    {
        for(i=pos-1;i<n;i++)
        {
             ar[i]=ar[i+1];
        }
    }
    n--;
    printf("array after result :");
    for(i=0;i<n;i++)
    printf("%d",ar[i]);

return 0; 
}