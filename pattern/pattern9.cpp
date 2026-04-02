#include<iostream>
int main(){
	for(int row=1;row<=5;row++){
		// print space 
		for(int col=1;col<=5-row;col++){
			std::cout<<" ";
		}
		//print stars
		for(int col=1;col<=2*row - 1;col++){
			std::cout<<"*";
		}
		std::cout<<std::endl;	
	}
	return 0;
}
