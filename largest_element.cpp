#include<iostream>
using namespace std;

int maxelement(int arr[], int n){
    int max = arr[0];

    for (int i = 1; i<n; i++){
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}
int main()
{
    int arr[] = {4,9,2,4,5};
    int n = 5;
    int max = maxelement(arr, n);
    cout << "the largest number: " << max <<endl;    
    return 0;
}