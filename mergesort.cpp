#include <bits/stdc++.h>
using namespace std;



void merge(int arr[],int low,int high,int mid)
{
    int n1 = mid-low+1;
    int n2 = high-mid;
    int L[n1],R[n2];
    for (int i=0;i<n1;i++)
        L[i] = arr[low+i];
    for (int i=0;i<n2;i++)
        R[i] = arr[mid+i+1];
    int i = 0;
    int j= 0;
    int k = low;
    while ((i<n1) && (j<n2))
    {
        if (L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }

        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;

    }
    while (j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;

    }

}

void mergesort(int arr[],int low,int high)
{
    if (low<high)
    {
        int mid = low+ (high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);

        merge(arr,low,high,mid);
    }

}

int main() {
	int arr[]= {80,30,70,10};


    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for (int i =0;i<n;i++)
        cout<<arr[i]<<" ";



	return 0;
}

