#include<iostream>
int main(){
	int arr[3] = {-2,4,0};
	long steps = 0;
	int count_negative = 0;
	int count_zero = 0;

	for(int i=0;i<3;i++){
		if(arr[i]>0){
			steps = steps + (arr[i] - 1);
		}
		else if(arr[i]<0){
			steps = steps + abs(arr[i]) - 1;
			count_negative ++;
		}
		else{
			steps = steps + 1;
			count_zero++;
		}	
	}
	if(count_negative%2 != 0 && count_zero == 0){
		steps = steps + 2;
	}
	std::cout<<steps<<"\n";
	return 0;
}
