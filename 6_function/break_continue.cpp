#include<iostream>
int main(){
	for(int i=1;i<=10;i++){
		if(i==7)
			continue;
		std::cout<<i<<" ";
		if(i==3)
			break;
	}
	return 0;
}
