#include<iostream>
int main(){
	int arr[5] = {1,2,3,44,5};
	int guess;
	std::cout<<"Enter number to check in array ";
	std::cin>>guess;
	for(int i=0;i<5;i++){
		if(arr[i] == guess){
			std::cout<<"element present at index "<<i<<"\n";
			return 0;
		}
	}
	std::cout<<"not present \n";
	return 0;

}
