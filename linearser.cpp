#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int num){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            return 1;
        }
        
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int num = 6;

    int find = linearsearch(arr, n, num);

    if (find != -1)
        cout<<"element found index: "<< find;
    else
        cout<<"elemet not found: "<< find;
    
    return 0;
}