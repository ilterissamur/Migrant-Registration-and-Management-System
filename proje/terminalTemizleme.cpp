#include<iostream>

using namespace std;


int main(){
	
	int x=1;
	
	
	cout<<"1-Register"<<endl;
	cout<<"2-Display Member"<<endl;
	cout<<"3-Delete"<<endl;

	
	
	while(x!=4){
		cout<<"Input selection:"<<endl;
		cin>>x;
			system("cls");
	
		switch(x){
		
			case 1:
				cout<<"-------Seciton-1---------"<<endl;
				break;
			case 2:
				cout<<"-------Seciton-2--------"<<endl;
				break;
			case 3:
				cout<<"----------Seciton-3---------"<<endl;
				break;
			
			default:
				cout<<"Invalid value!"<<endl;
				break;
	}		
	}	
	
	return 0;
}


