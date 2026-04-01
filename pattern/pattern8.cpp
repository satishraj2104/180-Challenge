#include<iostream>
int main(){
	for(int row=1;row<=5;row++){
		for(int col=1;col<=5;col++){
			if(col>=row){
				std::cout<<col<<" ";
			}
			else{
				std::cout<<" "<<" ";
			}
		}
		std::cout<<"\n";
	}
	return 0;
}
