// EMP no, emp name, basic, da, it, net salary;
// da 52 per of basic
// IT = 30 per of gross
// net = basic+da-it
#include <iostream>
#include <math.h>
using namespace std;

class emp {
	public:
	int empno;
	float da, basic, it, net, gross;
	char name[50];
	void get_data();
	void compute();
	void put_data();
	};
void emp :: get_data(){
	cout<<"Enter the name of the employee: ";
	cin>>name;
	cout<<"\nEnter the employee number: ";
	cin>>empno;
	cout<<"\nEnter the basic salary: ";
	cin>>basic;
	}
void emp :: compute(){
	da = 0.52*basic;
	gross = da + basic;
	it = .3*gross;
	net = (basic+da)-it;
	}
void emp :: put_data(){
	cout<<"\nThe net salary of employee id("<<empno<<") is "<<net<<"\n";
	}
	
int main(){
	int i,n;
	cout<<"\nEnter the number of employees: ";
	cin>>n;
	emp e[10];
	for(i=0;i<n;i++){
	e[i].get_data();
	e[i].compute();
	e[i].put_data();
	}
	return 0;
	}
	