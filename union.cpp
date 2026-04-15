#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> findunion(int arr1[], int arr2[], int n,int m){
    set<int>st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }

    vector<int>unionArr(st.begin(), st.end());
    return unionArr;
}
int main()
{
    int arr1[]= {1,2,3,4,5,6,7,8,9};
    int arr2[]= {2,5,7,11,14,15};
    int n = 9, m = 6;
    vector<int> find = findunion(arr1, arr2, n, m);
    for (int i = 0; i < find.size(); i++)
    {
        cout<<find[i]<< " ";
    }
    
    return 0;
}