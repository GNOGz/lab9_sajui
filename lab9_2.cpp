#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int row,int column){
if(row <= 0 || column <= 0){
	cout <<"Invalid input";
}
else {
	for(int i = 1 ; i<= row ; i++){
		for(int j = 1 ; j <= column; j++){
			cout<<"O";
		}
		cout << "\n" ;
	}
}
}
int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
