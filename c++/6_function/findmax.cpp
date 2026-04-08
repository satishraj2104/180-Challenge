#include<iostream>
int findMax(int x , int y){
	if(x>y)
		return x;
	else
		return y;
}

int main(){
	std::cout<<"maximun number between two is "<<findMax(9,8)<<std::endl;
	return 0;
}
