/****************************PARKO-The Parking Zone**************************/
#include<constream.h>
#include<string.h>
void main()
{
clrscr();
char choice,confirm_choice;
cout<<"______________________________________***______________________________________"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<endl;
cout<<"\t\t\t-||Welcome to the Parking Zone||-"<<endl;
cout<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"______________________________________***______________________________________"<<endl;
cout<<endl;
cout<<"Hello! Welcome to the 'Parko'- the Parking Zone. I am Jarvis K-0381.";
label:
cout<<"\nSo do you want to:"<<endl<<"1).Enter (press '1')"<<endl<<"2).Exit (press'2')"<<endl;
cin>>choice;
switch(choice)
{
case '1':
	cout<<"So you choose to Enter isn't it? (Y to confirm / N to redirect)";
	cin>>confirm_choice;
	break;
case '2':

	cout<<"So you choose to Exit isn't it? (Y to confirm / N to redirect)";
	cin>>confirm_choice;
	break;
default:
	cout<<"Wrong input. Please choose the option out of the two given below.";
	goto label;
}
getch();
}