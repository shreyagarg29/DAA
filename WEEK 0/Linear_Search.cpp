#include<iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
int main(){
    int n, arr[100], key, count = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    int result = LinearSearch(arr, n, key);
    if(result != -1)
        cout << key <<" found at " << result + 1 << " position";
    else
        cout << key << " not found.";
    return 0;
}