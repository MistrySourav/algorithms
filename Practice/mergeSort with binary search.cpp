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
               else if (x > a[mid])
                   {
                       return binarySearch(a,  mid + 1, high,x);// x is on the right side
                   }
               else
                   {
                       return binarySearch(a, low, mid - 1,x);// x is on the left side
                   }
                  }
               }
}

int main()
{
int n=1000;
int *a =new int[n];


ifstream fin("FileCreate.txt");


for(int i=0;i<n;i++)
{
fin>>a[i];
}

cout<<"Enter number to generate = "<<endl;
int n1;
cin>>n1;

mergeSort(a,0,n1);

cout<<"Enter Number to Search = "<<endl;
int x;
cin>>x;


cout<<"==================================="<<endl;
printlist(a,n1);


int index = binarySearch(a,0,n1-1,x);
if(index==-1)
 {
    cout<<"Not Found"<<endl;
 }
else
 {
        cout<<"Found in Index : "<<index<<endl;
 }

return 0;
}
