#include <iostream> 

using namespace std; 

// method definition 

double divisionby(int num1, int num2){
	if(num2 == 0){
		throw "Division by zero condition !" ; 
	}
	cout<<"answer = ";
	return (num1/num2) ; 
}

int main() {
	// Variable declaration 
	
	int n1, n2; 
	
	// Take user input
	cout<<"Enter two number for division operation : "<<endl;
	cin>>n1>>n2;
	
	double n3 = 0 ;
	
	// try catch to handle run tim error 
	try{
		n3 = divisionby(n1,n2) ; 
		cout<<n1<<endl;
	}catch (const char* msg){
		// it will display error msg 
		cout<<msg<<endl;
	}
	
	return 0;
	 
}
