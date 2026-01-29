#include<iostream>
#include<cmath>
using namespace std;
void add(int n1,int n2);
void subtract(int n1,int n2);
void product(int n1,int n2);
void divide(int n1,int n2);
void squarefirst(int n1);
void squaresecond(int n2);
void squarerootfirst(int n1);
void squarerootsecond(int n2);
void percentage(float n1,float n2);
void starline();
int main(){
	change:
	int a,b;
	cout<<"Enter the first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	repeat:
	cout<<"\nEnter the number 1 for addition ";
	cout<<"\nEnter the number 2 for subtraction ";
	cout<<"\nEnter the number 3 for multiplication ";
	cout<<"\nEnter the number 4 for division = ";
	cout<<"\nEnter the number 5 for square of first  number ";
	cout<<"\nEnter the number 6 for square of second number ";
	cout<<"\nEnter the number 7 for square root of first number ";
	cout<<"\nEnter the number 8 for square root of second number ";
	cout<<"\nEnter the number 9 for percentage ";
	cout<<"\nEnter the number 10 for changing the numbers ";
	cout<<"\nEnter the number 0 for existing the program \n";
	int c;
	cin>>c;
	switch(c){
		case 0:
			goto end;
			break;
		case 1:
			add(a,b);
			break;
		case 2:
			subtract(a,b);
			break;
		case 3:
			product(a,b);
			break;
		case 4:
			divide(a,b);
			break;
		case 5:
			squarefirst(a);
			break;
		case 6:
			squaresecond(b);
			break;
		case 7:
			squarerootfirst(a);
			break;
		case 8:
			squarerootsecond(b);
			break;
		case 9:
			percentage(a,b);
			break;
		case 10:
			goto change;
			break;
		default:
			cout<<"/nPlease enter the correct number .......";
			break;
	}
	starline();
	goto repeat;
	end:
	return 0;
}
void add(int n1,int n2){
	cout<<"\nThe sum is = "<<n1+n2;
}
void subtract(int n1,int n2){
	cout<<"\nThe subtraction is = "<<n1-n2;
}
void product(int n1,int n2){
	cout<<"\nThe product is = "<<n1*n2;
}
void divide(int n1,int n2){
	cout<<"\nThe divsion is = "<<n1/n2;
}
void squarefirst(int n1){
	cout<<"\nThe square of first number is = "<<n1*n1;
}
void squaresecond(int n2){
	cout<<"\nThe square of second number is = "<<n2*n2;
}
void squarerootfirst(int n1){
	cout<<"\nThe square root of the first number is = "<<sqrt(n1);
}
void squarerootsecond(int n2){
	cout<<"\nThe square root of second number is = "<<sqrt(n2);
}
void percentage(float n1,float n2){
	float obtaind,total;
	cout<<"\nEnter obtaind marks =";
	cin>>obtaind;
	cout<<"\nEnter total marks = ";
	cin>>total;
	cout<<"\nThe percentage is "<<(obtaind/total)*100;
}
void starline(){
	cout<<"\n";
	for(int i=0;i<45;i++){
		cout<<"*";
	}
	cout<<endl;
}
