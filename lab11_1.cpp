#include<iostream>
using namespace std;

int main(){
	char grade;
	int i=1;
	int a =1, b=1,c=1,d=1,f=1;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student ["<<i<<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A') {// if grade is A
			count[0] = a;
			a++;
			i++;
		}else if(grade == 'B') { // if grade is B
			count[1] = b;
			b++;
			i++;
	}		
		else if(grade == 'C') {
			count[2] = c;
			c++;
			i++;
		}
		else if(grade == 'D') {
			count[3] = d;
			d++;
			i++;
			
		}
		else if(grade == 'F') {
			count[4] =f;
			f++;
			i++;
		}
		else if(grade == '0') {
			i--;
			break;	
		}
		else{ // grade is wrong input
			cout << "Wrong input. Please input again."<<endl;
		}
			
	}while(true);
	
	
	cout << "In total "<<i<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];			
	
	return 0;
}
