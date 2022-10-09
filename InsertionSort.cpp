//InsertionSort;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
	{
		int j=i,key;
		if(a[j]<a[j-1]){
			key=a[j];

			while(key<a[j-1] && j>0){
			a[j]=a[j-1];
			j--;
			}
			a[j]=key;	
		}

	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
/*
Divide array in two sets---unsorted and sorted;
in each iteration pick an element from unsorted array and place in sorted array;
used when size of array is small;
takes minimum time when array is already sorted TC-O(n);
maximum time when array is reverse sorted TC-O(n^2);
Inplace and stable algorithm;
Better than bubble and selection sort;
*/
