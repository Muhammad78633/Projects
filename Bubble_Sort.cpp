#include <iostream>
using namespace std;

int main()
{
	int a=6;
	int array[a] = {1,2,3,14,5,6};
	bool isSwap = false;
	
	for(int i=0; i<a-1; i++){
		for(int j=0; j<a-i-1; j++){
			if(array[j] > array[j+1]){
				swap(array[j],array[j+1]);
				isSwap = true;
			}
		}
		if(!isSwap){
			cout<<"Array is already sorted! ";
			return 1;
		}
	}
	for(int i=0; i<a; i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
