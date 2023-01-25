#include<bits/stdc++.h>
using namespace std;

///function
///--> recursive function
///-->library function ---> math.h
///---> #include<bits/stdc++.h>
///cout<<(x+i)<<<" "<<*(x+i)<< " "<<x[i]<<endl;




///1

/*
int f(int x)
{

    erturn 2*x;
}

int main()
{
    cout<<f(23)<<endl;
    return 0;
}
*/





///2
/*
int f(int x,int y)
{

    return 2*(x+y);
}

int main()
{
    cout<<f(2,3)<<endl;
    return 0;
}
*/



///3

/*
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
*/



///4
/*
int *f(int *x,int n)
{

    int *b=new int[n];

    for(int i=0;i<n;i++)
        {
            b[i]=2*x[i];
        }
        return b;
}


int main()
{


    int a[]={10,20,30,40};
    int *p=f(a,4);
    for(int i=0; i<4;i++)
    {

        cout<<p[i]<<" "<<endl;
    }
}
*/



///5

int f(int *x,int n)
{


    int sum=0;
    for(int i=0;i<n;i++)
    {

        sum=sum+x[i];

    }
    return sum;
}

int main()
{

    int a[]={10,20,30,40};
    cout<<f(a,4)<<endl;
    return 0;
}





