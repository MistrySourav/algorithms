#include <bits/stdc++.h>
using namespace std;


int bianarySearch(int arr[], int l, int h, int x)
{
	if (h >= l)
    {
		int mid = l + (h - l) / 2;


		{
		    if (arr[mid] == x)
            {
			return mid;
            }

		if (arr[mid] > x)
        {


			return bianarySearch(arr, l, mid - 1, x);
        }
    else
        {
		return bianarySearch(arr, mid + 1, h, x);
  	}


	return -1;
    }
}
}
int main()
{
	int arr[] = {2,4,1,6,8,5 };
	int x = 6;
	//int n=6;
	int result = bianarySearch(arr, 0, 7, x);
	if(result == -1)
		 {
		     cout << "Element is not  in array";
		}
		else
        {
            cout << "Element is  at index " << result;
        }
	return 0;
}

