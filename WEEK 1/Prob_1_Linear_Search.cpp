/* Given an nonnegative integer array. Designing LINEAR ALGORITHM to find if key element is present or not.
Also, find number of comparisons.
Time Complexity: O(n)
*/
#include<iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        int result = LinearSearch(arr, n, key);
        if(result != -1)
            cout << "Present " << result + 1 << endl;
        else
            cout << "Not Prsent " << n << endl;
    }
    return 0;
}