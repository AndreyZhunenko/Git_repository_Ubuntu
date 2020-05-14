#include<iostream>
#include<string>

int main(){

string my_str = "This is C++ programmist" <<endl;

cout <<"How old are you?" <<endl;

int old = 0;

cin >> old;

if (old < 18){
	cout <<"You are a child! Goodbye!" <<endl;
}
else{
	cout <<"You are a adult" <<endl;
	cout <<my_str <<endl;
}





cout << endl;
return 0;
}
