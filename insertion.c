#include<bits/stdc++.h>
void swapp(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void insertion(int a[],int n)
{
    int i,value,hole,l;


    for(i=1;i<n;i++)
    {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
    }

}

int main()
 {
    int i,n;

    //printf("array size\n");

    scanf("%d",&n);

    int a[n];

   // printf("array elements\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    insertion(a,n);

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}


