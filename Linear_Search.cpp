#include <iostream>
using namespace std;

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int num;
	
	cout<<"Please enter any number 1 to 10: ";
	cin>>num;
	
	for(int i=0; i<10; i++){
		if(array[i] == num){
			cout<<"Your entered number located at the index: "<<i;
			return 1;
		}
	}
	cout<<"You entered a wrong number! ";
	return 0;
}
