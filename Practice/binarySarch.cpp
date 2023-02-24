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

int BinarySearch(int a[],  int low, int high,int x)
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
               else if (a[mid]>x)       
                   {
                       return BinarySearch(a, low, mid - 1,x);
                   }
               else                        // x is on the left side
                   {
                        return BinarySearch(a,  mid + 1, high,x);
                      
                   }
                  }
               }
} 

int main()
{


    int a[]= {89,2,45,6,2,1000,30};
    printLIst(a,7);
int n=7
   cout<<"Enter number to search = "<<endl;
int x;
cin>>x;

int index = binarySearch(a,0,n-1,x);
if(index==-1)
{
    cout<<"Not found"<<endl;
}
else
{
        cout<<"Found in "<<index<<endl;
} 
}


