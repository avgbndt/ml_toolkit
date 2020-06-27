#include <iostream>

using namespace std;

int main(){
	int num {10};
	cout << "Hello world" << endl;

	for(int i=0; i<num; i++){
		cout << "Hello Again!" << endl;
		if(i==num-1){
			cout << "Preparing to leave" << endl;
			break;
		}
	}
	return 0;
}
