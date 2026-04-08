#include<iostream>
bool isPrime(int n){
	if(n<=1)
		return false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	int arr1[5] = {6,3,4,9,2};
	for(int i=0;i<5;i++){
		if(isPrime(arr1[i]))
				std::cout<<arr1[i]<<" ";
	}
	std::cout<<"\n";
	return 0;
}
