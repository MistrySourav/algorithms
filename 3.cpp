#include <iostream>
using namespace std;
void f (int *x,int n)
{


    for(int i=0;i<n;i++)
    {
        cout<<(x+i)<<" "<<*(x+i)<< " "<<x[i]<<endl;

    }

}


int main()
{
    int a[]={10,20,30,40};
    f(a,4);
    return 0;
}
