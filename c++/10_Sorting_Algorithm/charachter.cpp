#include<iostream>
int main(){
	char arr[6] = {'s','a','t','i','s','h'};
	for(int i=0;i<5;i++){
		char index = i;
		for(int j=i+1;j<5;j++){
			if(arr[index] > arr[j]){
				index = j;
			}
		}
		char temp = arr[index];
		arr[index] = arr[i];
		arr[i]=temp;
	}

	for(int i=0;i<6;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
