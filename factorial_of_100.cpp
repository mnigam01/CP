#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n=100;
	int a[200];
	a[0]= 1;
	int temp = 0;
	int m=1;
	for (int i=1;i<=n;i++)
    {
        for (int j=0;j<m;j++)
        {
            int x = a[j]*i+temp;
            a[j] = x%10;
            temp = x/10;

        }
        while (temp>0)
        {
            a[m] = temp%10;
            temp/=10;
            m++;
        }
    }
    for (int i = m-1;i>=0;i--)
        cout<<a[i];
    return 0;
}

