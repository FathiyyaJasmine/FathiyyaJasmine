#include <iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	
	for(int i=1; i<=x; i++){
		if(i==5)
		continue;
		if(x<=29){
			cout<<i<<endl;
		}
		
		if(x>29){
			cout<<i<<endl;
			if(i>28){
				cout<<"NOT FOUND"<<endl;
				break;
			}
		}
		
	}
	
}

	
