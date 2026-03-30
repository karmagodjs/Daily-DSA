#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int temp[100];
    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= m)
        temp[k++] = arr[i++];
    while (j <= r)
        temp[k++] = arr[j++];

    for (int x = 0; x < k; x++)
        arr[l + x] = temp[x];

}

void mergeSort(int a[], int l, int r)
{
    if (l >= r)
        return;

    int m = (l + r) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);

    merge(a, l, m, r);
}

int main()
{
    int a[] = {3, 2, 8, 5, 1, 4, 23};
    int n = 7;

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}