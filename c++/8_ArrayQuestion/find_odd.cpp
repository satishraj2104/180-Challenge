#include<iostream>
int main(){
	int arr1[6] = {1,3,2,5,0,-11};
	for(int i=0;i<6;i++){
		if(arr1[i]%2==1 || arr1[i]%2==-1){
			std::cout<<arr1[i]<<" ";
		}
	}
	std::cout<<std::endl;
	return 0;
}
