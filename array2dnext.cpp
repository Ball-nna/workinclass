#include <iostream>
#include <iomanip>
using namespace std;
int main(void){
	int val[2][4];
	for(int i=0;i<2;i++){
		cout<<"Input Subtest "<<i+1<<" : ";
		cin>>val[i][0];
		cout<<"Input midterm "<<i+1<<" : ";
		cin>>val[i][1];
		cout<<"Input Final   "<<i+1<<" : ";
		cin>>val[i][2];
		cout<<endl;
		val[i][3]= val[i][0]+val[i][1]+val[i][2];
		//cout<<setw(30)<<setfill('-')<<" "<<endl;
		
	}
	cout<<"Output"<<endl;
	cout<<setw(80)<<setfill('-')<<" "<<endl;
	cout<<"NO"<<"\t\t"<<"Subtest"<<"\t\t"<<"Midterm"<<"\t\t"<<"Final"<<"\t\t"<<"Total"<<endl;
	cout<<setw(80)<<setfill('-')<<" "<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<i+1<<"\t";
		
		for(int j=0;j<4;j++){
		cout<<"\t"<<val[i][j]<<"\t";
		
		}
		cout<<endl;
	}
return 0;
}