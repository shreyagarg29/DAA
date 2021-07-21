/* Given : Sorted nonnegative integer array. Design an algorithm to find if given key element is present in 
array or not. Also, find total number of comparisons.
Time Complexity ----> O(nlogn)
*/
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid, count = 0;
    while (start <= end)
    {
        count++;
        int mid = (start + end) /2;
        if(arr[mid] == key)
        {
            cout << "Present ";
            return count;
        }
        else if(key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << "Not Present ";
    return count;
}
int main(){
    int t;
    cin >> t; // number of test cases
    while(t--)
    {
        int n; // Length of array
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];  // Elements of array
        int key;
        cin >> key; // Element to check
        cout << BinarySearch(arr, n, key) << endl;
    }
    return 0;
}