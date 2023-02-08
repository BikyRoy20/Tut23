#include <bits/stdc++.h>
using namespace std;
  

int countKAverageSubarrays(int arr[], int n,int k)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            int len=j-i+1;

            if(sum%len==0)
            {
                int avg =sum/len;
                if(avg==k)
                {
                    res++;
                }
            }
        }
    }
    return res;
}

int main()
{
    // Given Input
    int K = 6;
    int arr[] = { 12, 5, 3, 10, 4, 8, 10, 12, -6, -1 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    cout << countKAverageSubarrays(arr, N, K);
}