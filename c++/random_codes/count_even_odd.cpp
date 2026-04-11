#include<iostream>
int main(){
	int arr[5] = {1,2,3,4,5};
	int count_even = 0 , count_odd = 0;
	for(int i=0;i<5;i++){
		if(arr[i]%2==0)
			count_even++;
		else
			count_odd++;
	}
	std::cout<<"even number in array are : "<<count_even<<"\n";
	std::cout<<"odd number in array are : "<<count_odd<<"\n";
	return 0;
}
