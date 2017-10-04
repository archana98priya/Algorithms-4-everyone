#include<bits/stdc++.h>


using namespace std;
int b[1000005],c[1000005],x[1000005];

   void merge1(int a[],int l,int r,int mid)
   {
       int i=l,j=0,k=0,m=0,z=0,y=0;
       while(i<=mid)
       {
           b[k]=a[i];
           i++;k++;
           //cout<<b[k-1]<<" ";
       }
       //cout<<endl;
       k=0;
       while(i<=r)
       {
           c[k]=a[i];
           i++;k++;
            //cout<<c[k-1]<<" ";
       }
       //cout<<endl;

       while(m<=mid-l && z<k)
       {
           if(b[m]<=c[z])
           {
              x[y]=b[m];
              m++;
           }
           else
            {
                x[y]=c[z];
                z++;

            }
            y++;
       }

       while(m<=mid-l)
       {
           x[y]=b[m];
           m++;
           y++;
       }
       while(z<k)
       {
           x[y]=c[z];
           z++;
           y++;
       }
       /*for(int i=0; i<=mid-l; i++)
        cout<<b[i]<<" ";
        cout<<endl;
       for(int i=0; i<k; i++)
        cout<<c[i]<<" ";
       cout<<endl;
       //cout<<mid<<" mid \n";
       for(int i=l; i<=r; i++)
            cout<<a[i]<<" ";
       cout<<endl;
       cout<<l<<" l r "<<r<<endl;*/
       for(i=l, j=0; i<=r; i++,j++)
       {
           a[i]=x[j];
          // cout<<a[i]<<" ";
       }
       //cout<<endl;

    }


void mergesort(int a[],int l,int r )
{
    int n=r+l;
    int i;
    if(r-l+1<2 || r<l)
        return;
    int mid=n/2;
    //printf("%d %d\n",l,r);

    mergesort(a, l, mid);
    mergesort(a, mid+1, r);
    merge1(a, l, r, mid);

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

    mergesort(a,0,n-1);

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

    return 0;
}


