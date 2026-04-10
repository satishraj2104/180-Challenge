// binary search for sorted array
#include<iostream>
int main(){
	int arr[10] = {1,2,3,12,23,40,41,45,50,60};
	int guess ;
	int item = 40;
	int low = 0;
	int high = 9;
	for(int i=low;i<=high;i++){
		int mid = (low+high)/2;
		std::cout<<"mid "<<mid<<"\n";
		guess = arr[mid];
		if(guess==item){
			std::cout<<mid<<"\n";
			return 0;
		}
		else if(guess>item){
			high = mid - 1;
		}
		else{
			low = mid+1;
		}
		std::cout<<"high "<<high<<"\n";
		std::cout<<"low "<<low<<"\n";
	}
	std::cout<<"item not found \n";
	return 0;
}
