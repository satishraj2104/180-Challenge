#include<iostream>
#include<string>
int main(){
	int num ;
	std::cin>>num;
	std::string ans = "";
	while(num>0){
		int lastdigit = num%10;
		if(lastdigit==0)
			ans = "1"+ans;
		else
			ans="0"+ans;
		num /= 10;
	}
	std::cout<<ans<<"\n";
	return 0;
}
