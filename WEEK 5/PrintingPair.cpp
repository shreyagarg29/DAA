#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;

void printPair(unordered_set<int> arr, int size, int key)
{
	int val;
	unordered_set<int> :: iterator it;
	
	for(it = arr.begin(); it != arr.end(); it++)
	{
		val = key - (*it);
		if(arr.find(val) != arr.end())
		{
			cout << *it << " " << val;
			cout << ",";
			arr.erase(val);
		}
	}

	cout << endl;

	return;
}

int main()
{
	int T;
	cin >> T;
	int n, x, key;
	while(T--)
	{
		cin >> n;
		unordered_set<int> arr;
		for(int i = 0; i < n; i++){
			cin >> x;
			arr.insert(x);
		}

		cin >> key;

		printPair(arr, n, key);
	}

	return 0;
}