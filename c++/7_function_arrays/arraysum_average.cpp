// take 5 input from user and prints its sum and average

#include<iostream>
int main(){
	int arr1[5];
	// for loop for taking input
	std::cout<<"enter 5 input\n";
	for(int i=0;i<5;i++){
		std::cin>>arr1[i];
	}

	// now sum of those input
	int sum = 0;
	for(int i=0;i<5;i++){
		sum = sum + arr1[i];
	}

	std::cout<<"\n"<<sum<<"\n";

	// now average 
	
	int avg = 0;
	avg = sum / 5;

	std::cout<<"\n"<<avg<<"\n";
	return 0;
}
