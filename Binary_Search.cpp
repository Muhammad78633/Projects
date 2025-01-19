#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int array[a] = {11,22,23,44,65,66,77,88,89,110};
	int low=0 , high= a-1 , mid , num;
	
	cout<<"Please enter any number {11,22,23,44,65,66,77,88,89,110}: ";
	cin>>num;
	
	while(low <= high){
		mid = (low + high) / 2;
		if(array[mid] == num){
			cout<<"Your entered number located at the index: "<<mid;
			return 1;
		}
		else if(array[mid] > num){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	cout<<"You Enter a wrong number!"; 
}
