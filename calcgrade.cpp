#include<iostream>
#include <string>
#include <iomanip>
using namespace std;
void ListStudent(string name[],int score[],int num);
char cal_grade(int score);
int main(){
	int num;
	
	cout<<"Input Number of student :";
	cin>>num;
	int *score = new int[num];
	string *name = new string[num];
	for(int i=0;i<num;i++){
	cout<<"Enter name ["<<i+1<<"]:";
	cin>>name[i];
	cout<<"Enter score ["<<i+1<<"]:";
	cin>>score[i];
	}
	ListStudent(name,score,num);
return 0;
}
void ListStudent(string name[],int score[],int num)
{
cout<<setw(30)<<setfill('-')<<" "<<endl;
cout<<"No\tName\tScore\tGrade"<<endl;
cout<<setw(30)<<setfill('-')<<" "<<endl;
for(int i =0;i<num;i++)
{
	cout<<i+1<<"\t"<<name[i]<<"\t"<<score[i]<<"\t"<<cal_grade(score[i])<<endl;
}
}
char cal_grade(int score)
{
	char grade;
	if(score >=80) grade ='A';
	else if(score >=70) grade  ='B';
	else if(score >=60)	grade ='c';
	else if(score >=50)grade  ='D';
	else grade = 'F';
	return grade;
}
