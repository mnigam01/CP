#include <bits/stdc++.h>
using namespace std;


int cow(int arr[],int n,int c)
{
    int low = 0;
    int high = arr[n-1]-arr[0];
    int mid;

    int nofcows;
    while (low<high)
    {
        mid = low + (high-low+1)/2;
        nofcows=1;
        int pos=arr[0];

        for (int i=0;i<n;i++)
        {
            if (arr[i]-pos>=mid)
            {
                ++nofcows;

                pos = arr[i];
            }
        }

        if (nofcows>=c)
            low = mid;
        else
            high = mid-1;

    }
    //cout<<nofcows<<endl;
    return mid;   //may be i should return high
}

void func(int arr[],int mid,int n)
{

    int nofcows=1;
    int pos=arr[0];

    for (int i=0;i<n;i++)
    {
        if (arr[i]-pos>=mid)
        {
            ++nofcows;

            pos = arr[i];
        }
    }
    cout<<nofcows<<endl;
}

int main() {
	int arr[]= {1,2,4,8,9};

	int x = 1;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<cow(arr,n,5)<<endl;



	return 0;
}

