/* Given sorted array of positive integers, design jump search algorithm to find the key element.
*/
#include<iostream>
#include<cmath>
using namespace std;

int JumpSearch(int arr[], int n, int key)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n)-1] < key)
    {
        prev = step;
        step = step + sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < key)
    {
        prev++;
        if(prev == min(step, n))
            return -1;
    }
    if (arr[prev] == key)
        return prev;
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, key;
        cin >> n; // array length
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];   // elements of array
        cin >> key;    // element to be found
        int result = JumpSearch(arr, n, key);
        if(result == -1)
            cout << "Not Present " << endl;
        else
            cout << "Present " << result << endl;
    }
    return 0;
}