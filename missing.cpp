#include<iostream>
using namespace std;

int missingnum(int arr[], int n){
    int total = (n + 1)*(n + 2)/ 2;
    int sum = 0;

    for (int i = 0; i < n; i++){
        
        sum +=arr[i];
    }

    return total - sum;
        
}

int main()
{
    int arr[] = {8, 2, 4, 5, 3, 7, 1};
    int n = 7;

    cout<< "miss num: " << missingnum(arr, n);
    return 0;
}