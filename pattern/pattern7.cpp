#include<iostream>
int main(){

	for(int row=1;row<=5;row++){
		char l = 'a';
		for(int col=1;col<=row;col++){
			std::cout<<l<<" ";
			l++;
		}
		std::cout<<std::endl;
	}
	return 0;
}
