#include <iostream>
using namespace std;

void count_sort(int arr[],int size){
	int max_val = arr[0];
	for(int i = 1;i<size;i++){
		if(arr[i] > max_val){
			max_val = arr[i];
		}
	}
	
	int temp_arr[max_val+1] = {0};
	
	for(int i = 0 ;i<size;i++){
		temp_arr[arr[i]] += 1;
	}
	
	for(int i = 0,j = 0;i<max_val+1;i++){
		while(temp_arr[i] > 0){
			arr[j] = i;
			temp_arr[i] -=1; 
			j++;
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int n=5;
	int array[n] = {4,3,5,2,1};
	count_sort(array,n);
}
