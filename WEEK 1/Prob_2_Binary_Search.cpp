/* Given : Sorted nonnegative integer array. Design an algorithm to find if given key element is present in 
array or not. Also, find total number of comparisons.
Time Complexity ----> O(nlogn)
*/
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) /2;
        if(arr[mid] == key)   
            return mid; 
        else if(key < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
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
        int result = BinarySearch(arr, n, key);
        if(result != -1)
            cout << "Present " << result + 1 << endl;
        else
            cout << "Not Prsent " << n << endl;
    }
    return 0;
}