#include<iostream>
int main(){
	int arr[5] = {1,3,5,7,9};
	int guess ;
	int low = 0;
	int high = 5-1;
	int item = 3;
	while(low <= high){
		int mid = (low+high)/2;
		guess =arr[mid];
		if(guess==item){
			std::cout<<mid<<" ";
			return 0;
		}
		else if(guess>item){
			high = mid-1;
		}
		else
			low = mid+1;
	}
	std::cout<<"item not found\n";
	return 0;
}
