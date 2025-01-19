#include <iostream>
using namespace std;

int main()
{
	int n=5;
	int array[n] = {4,1,5,2,3};
	bool isSwap = false;
	
	for(int i=0; i<n-1; i++){
		int smallestIdx = i;
		for(int j=i+1; j<n; j++){
			if(array[j] < array[smallestIdx]){
				swap(array[j] , array[smallestIdx]);
				isSwap = true;
			}
		}
		if(!isSwap){
			cout<<"Array is already sorted! ";
			return 1;
		}
	}
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";
	}
}
