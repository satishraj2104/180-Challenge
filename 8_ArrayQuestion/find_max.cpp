#include<iostream>
int main(){
	int arr[6] = {2,3,11,8,7,-2};
	int max = arr[0];
	for(int i=1;i<6;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	std::cout<<max<<"\n";
	return 0;
}
