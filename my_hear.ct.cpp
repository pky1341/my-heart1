#include<iostream>
using namespace std;

/// @brief 
main(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		cout<<" $ ";
	}
	cout<<endl;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==3)
			{
				cout<<" $ ";
			}
			else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
    for(i=1;i<=5;i++)
    {
    	cout<<" $ ";
	}
	cout<<endl;
	cout<<endl;
	for(i=0;i<=2;i++)
	{
		for(j=1;j<=17;j++)
		{
			if((j>=3-i && j<=5+i)||(j>=12-i && j<=15+i))
			{
				cout<<"$";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	for(i=0;i<=8;i++)
	{
		for(j=1;j<=17;j++)
		{
			if(j>=i+1 && j<=17-i)
			{
				cout<<"$";
			}
			else
			{
	 			cout<<" ";
			}
		}
		cout<<endl;
	}
//	for(i=1;i<=7;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((j==i+1&&j<5)||((i==2&&j==1)&&(j==5&&i==2))
//		    {
//				cout<<" * ";
//			}
//			else{
//				cout<<"   ";
//			}
//		}
//		cout<<endl;
//	}
}
