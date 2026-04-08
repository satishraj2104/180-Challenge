#include<iostream>
int main(){
	int arr1[6] = {2,4,6,4,2,8};
	for(int i=0;i<6;i++){
		bool isUnique = true;
		for(int j=0;j<6;j++){
			if(i!=j && arr1[i]==arr1[j])
				isUnique = false;
		}
		if(isUnique == true)
			std::cout<<arr1[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
