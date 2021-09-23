#include<iostream>
using namespace std;
int BinarySearch(int *arr, int left, int right, int key)
{
    if (left <= right)
	{
        int mid = left + (right - left)/ 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return BinarySearch(arr, left, mid-1, key);
        else
        {
            return BinarySearch(arr, mid + 1, right, key);
        }
    }
    else{
    	return -1;
    }
}
int count_copies_key(int *arr, int n,int key)
{
    int i, c=1;
    int pos = BinarySearch(arr, 0, n-1, key);
    if(pos==-1) return -1;
    for(i=pos-1; i>=0; --i){
        if(arr[i]==key) ++c;
        else break;
    }
    for(i=pos+1; i<n; ++i){
        if(arr[i]==key) ++c;
        else break;
    }
    return c;
}
int main(){
    int t;
	cin>>t;
	while(t--)
	{
		int n,key;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cin>>key;
		int res = count_copies_key(arr, n, key);
        if(res!=-1)
            cout << key << " - " << res << '\n';
        else
            cout << "Key not present" << '\n';

	}
    return 0;
}