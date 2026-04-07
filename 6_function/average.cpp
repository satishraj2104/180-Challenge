#include<iostream>
float average(int x , float y){
	return (x+y)/2;
}
int main(){
	int x ;
       	float y;
	std::cout<<"Enter Numbers : ";
	std::cin>>x,std::cin>>y;
	float ans = average(x,y);
	std::cout<<ans<<"\n";
	return 0;
}
