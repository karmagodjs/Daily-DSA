#include<iostream>
#include<algorithm>
using namespace std;
void array(int arr[], int n){

    reverse(arr, arr + n);
}
int main()
{
    int n = 5;
    int arr[] = {1,2,3,4,5};
    array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}