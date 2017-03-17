#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i=i+1){
	    if(i%2 == 0){
	        cout << i << endl;
	    }
	}
	return 0;
}
