#include<iostream>
#include<limits.h>
using namespace std;

void seclarsmall(int arr[], int n){
    int small = INT_MAX, secsmall = INT_MAX;
    int larg = INT_MIN, seclar = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]< small)
        {
            secsmall = small;
            small = arr[i];
        }
        else if (arr[i]< secsmall && arr[i] != small)
        {
            secsmall = arr[i];
        }
        
        if (arr[i]> larg)
        {
            seclar = larg;
            larg = arr[i];
        }
        else if (arr[i]> seclar && arr[i] !=larg)
        {
            seclar = arr[i];
        }
        
    }
    cout<<"sec small: " << secsmall<<endl;
    cout<<"sec largest " << seclar<< endl;
}


int main()
{
    int arr[] = {4, 9, 2, 5, 1};
    int n = 5;
    seclarsmall(arr, n);
    return 0;
}