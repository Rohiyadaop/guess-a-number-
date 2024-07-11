#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int n,m;

int random(){
      srand((unsigned int ) time(NULL));
      int number =(rand()%100) + 1;
     cout<<number;
    return number; 
}
int givennumber(){	
	cout<<"\nplease Enter your guss number";
	cin>>n;
	return n;
}
int actualnumber=random();

bool check(int given_num,int actualnumber){	
		
}
int main(){	
	int given_num=givennumber();
	if(given_num > actualnumber){
			cout<<"\nyour number in **greater** then actual number ";
			main();
	}else if(given_num < actualnumber){
			cout<<"\nyour number in **lower** then actual number  ";
			main();
	}else if(given_num == actualnumber){
			cout<<"\n yes, \\Right Answer\\  ";	
	}else if (given_num ==1){
		main();
	}
	return 0;
}

