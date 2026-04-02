#include<iostream>
int main(){
	char l = 'a';
	for(int row = 1;row<=5;row++){
		for(int col=1;col<=5;col++){
			std::cout<<l<<" ";
		}
		l++;
		std::cout<<std::endl;
	}
	return 0;
}
