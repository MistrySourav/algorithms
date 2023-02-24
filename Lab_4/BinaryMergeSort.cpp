#include<bits/stdc++.h>
using namespace std;



void printlist( int *p,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<i<<" = " <<p[i]<<endl;
    }
cout<<endl;
}



void mergeList(int *a,int l,int m,int r)
{
    int n1=m-l+1;

    int n2=r-m;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=a[m+1+i];
    }


    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]>R[j])
        {
            a[k++]=R[j++];
        }
        else
        {
            a[k++]=L[i++];
        }
    }
    while(i<n1)
        {
        a[k++]=L[i++];
        }
    while(j<n2)
        {
        a[k++]=R[j++];
        }
    //return C;
}


void mergeSort(int *a,int l,int  r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        mergeList(a,l,m,r);
    }
}

int binarySearch(int *a,  int low, int high,int x)
{

    int mid;
           if (low > high)
               {
                return -1;
               }
           else
               {
                   mid = (low + high) / 2;
                  {

                   if(x == a[mid])
                  {

                  return mid;
                  }
               else if (x > a[mid])        // x is on the right side
                   {
                       return binarySearch(a,  mid + 1, high,x);
                   }
               else                        // x is on the left side
                   {
                       return binarySearch(a, low, mid - 1,x);
                   }
                  }
               }
}

int main()
{
int n=100;
int *a =new int[n];


ifstream fin("10k.txt");

for(int i=0;i<n;i++)
{
fin>>a[i];

}


  int n1;
    cin>>n1;


   /// return 0;
///int *a =new int[n]
    //printlist(a,n);
    mergeSort(a,0,n);


    int x;
    cin>>x;


    cout<<"==================================="<<endl;
    printlist(a,n);




    int index = binarySearch(a,n1,100,x);
    if(index==-1)
    {
        cout<<"Not found"<<endl;
    }
    else cout<<"Found in "<<index<<endl;





return 0;
}
