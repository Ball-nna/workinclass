#include <iostream>
#include <iomanip>
using namespace std;
void display(int salary[],int num);
int cal_bonus(int salary);
int main(){
int num;
cout<<"Enter number of Person :";
cin>>num;
int *salary = new int [num];
for(int i=0;i<num;i++)
	{
		cout<<"Enter Salary "<<i+1<<" : ";
		cin>>salary[i];
	}
display(salary,num);
return 0;
}
void display(int salary[],int num)
{
	cout<<setw(50)<<setfill('-')<<" "<<endl;
	cout<<"They Are"<<" "<<num<<" "<<"Person"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"The Salary for person "<<i+1<<" = "<<salary[i]<<" "<<"and Bonus = "<<cal_bonus(salary[i])<<endl;
	}
	cout<<setw(50)<<setfill('-')<<" "<<endl;
}
int cal_bonus(int salary){
	int bonus;
	bonus = salary*2;
	return bonus;
}