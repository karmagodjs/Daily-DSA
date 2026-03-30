#include<iostream>
#include<string.h>
using namespace std;
void sensor(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int small = i;
        for (int j = i+1; j< n; j++)
        {
            if (arr[j]<arr[small])
            {
                small = j;
            }
            
        }
        swap(arr[i], arr[small]);
    }
    
}
int main()
{
    int n = 5;
    int arr[] = {5,7,2,1,9};
    sensor(arr,n);
    cout<< "selsor:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}