                                             // Hospital Management
                                    // NOTE => Space is not included
#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;
void login();
void display();
void data(int);
void problem(int);
void history(char);
void End(int);
									// Globaly string array
string arr1[50],arr2[50],arr3[50],arr4[50],arr5[50],arr6[50],arr7[50],arr8[50],arr9[50],arr10[50],arr11[50], arr12[50], arr13[50];
int main()

{
	system("color A");
	login();
	int i;
	re://printing the welcome note
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	system("pause");
	system("cls");
	display();	
	//giving option to the user for their choice
	b:
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";	
	cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
	cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
	cout<<"\t\t\t\t\t\t|                                           	                  |\n";
	cout<<"\t\t\t\t\t\t|             1  => Add Patient Record                            |\n";
	cout<<"\t\t\t\t\t\t|             2  => Add Diagnosis Information                     |\n";
	cout<<"\t\t\t\t\t\t|             3  => History of the Patient                        |\n";
	cout<<"\t\t\t\t\t\t|             4  => Information  of  the  Hospital                |\n";
	cout<<"\t\t\t\t\t\t|             5  => Exit the Program                              |\n";
	cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	a:
	cout<<"\t\t\t\t\t\tEnter your choice: ";
	cin>>i;
	Beep(523,500);
	                                  // NOTE => goto is used to to jump back to specific alphabet
	if(i>5||i<1)
	{
		cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
		cout<<"\t\t\t\t\t\tTry again...........\n\n";
		goto a;
	} 
	system("cls");
	//NOTE => "Both Patient's File Name will be same "
	if(i==1)
	{
		data(i);
		system("pause");
		system("cls");
		goto b;
	}
	if(i==2)
	{
		problem(i);
		system("pause");
		system("cls");
		goto b;
	}
	if(i==3)
	{
		history(i);
		system("pause");
		system("cls");
		goto b;
	}
	if(i==4)
	{
		string info;
		ifstream file;
		file.open("M.O.H.txt");
		cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
		while(file)
		{
			getline(file,info);
			cout<<info<<"\n\t\t";
		}
		file.close();
		system("pause");
		system("cls");
		goto b;
	}
	if(i==5)
	{
		End(i);
	}
}

void data(int n)
{
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t\t|                                                                      |\n";
	cout<<"\t\t\t\t\t\t|                            Patient Record                            |\n";
	cout<<"\t\t\t\t\t\t|                                                                      |\n";
	cout<<"\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
	cout<<"\n\n\n\n\t\t\t\t\t\t\tEnter the Number of Patients   : ";
	cin>>n;
	cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<"\t\t\t\t\t\t\tPatient's File Name [ "<<i+1<<" ]      : ";
			cin>>arr1[i];
			
			cout<<"\t\t\t\t\t\t\tEnter Patient Name             : ";
			cin>>arr2[i];
			
			cout<<"\t\t\t\t\t\t\tEnter Father's Name            : ";
			cin>>arr3[i];
			
			cout<<"\t\t\t\t\t\t\tAGE                            : ";
			cin>>arr4[i];
			
			cout<<"\t\t\t\t\t\t\tGender                         : ";
			cin>>arr5[i];
			
			cout<<"\t\t\t\t\t\t\tEnter Patient's Address        : ";
			cin>>arr6[i];
			
			cout<<"\t\t\t\t\t\t\tEnter Patient's Contact Number : ";
			cin>>arr7[i];
			
			cout<<"\t\t\t\t\t\t\tEnter Patient's Blood Group    : ";
			cin>>arr8[i];
			
			cout<<endl;	
		}
		for(int i=0;i<n;i++)
		{
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t\tPatient's File Name [ "<<i+1<<" ]      : "<<arr1[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient Name             : "<<arr2[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Father's Name            : "<<arr3[i]<<endl;
			cout<<"\t\t\t\t\t\t\tAGE                            : "<<arr4[i]<<endl;
			cout<<"\t\t\t\t\t\t\tGender                         : "<<arr5[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient's Address        : "<<arr6[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient's Contact Number : "<<arr7[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient's Blood Group    : "<<arr8[i]<<endl;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
			cout<<endl;		
	}
			cout<<"\t\t\t\t\t\t\t\t..... Record Saved Successfully ....."<<endl;
}

void problem(int n)
{
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t\t|                                                                      |\n";
	cout<<"\t\t\t\t\t\t|                          Diagnostic Record                           |\n";
	cout<<"\t\t\t\t\t\t|                                                                      |\n";
	cout<<"\t\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\n\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
	cout<<"\n\n\n\n\t\t\t\t\t\t\tEnter the Number of Patients   : ";
	cin>>n;
	cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"\t\t\t\t\t\t\tPatient's File Name [ "<<i+1<<" ]      : ";
		cin>>arr1[i];
		
		cout<<"\t\t\t\t\t\t\tSyptom's                       : ";
		cin>>arr9[i];
		
		cout<<"\t\t\t\t\t\t\tDiagnosis                      : ";
		cin>>arr10[i];
		
		cout<<"\t\t\t\t\t\t\tMedicines                      : ";
		cin>>arr11[i];
		
		cout<<"\t\t\t\t\t\t\tAddmission Required?           : ";
		cin>>arr12[i];
		
		cout<<"\t\t\t\t\t\t\tType of ward                   : ";
		cin>>arr13[i];
		
		cout<<endl;
	}
		for(int i=0;i<n;i++)
		{
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t\tPatient's File Name [ "<<i+1<<" ]      : "<<arr1[i]<<endl;
			cout<<"\t\t\t\t\t\t\tSyptom's                       : "<<arr9[i]<<endl;
			cout<<"\t\t\t\t\t\t\tDiagnosis                      : "<<arr10[i]<<endl;
			cout<<"\t\t\t\t\t\t\tMedicines                      : "<<arr11[i]<<endl;
			cout<<"\t\t\t\t\t\t\tAddmission Required?           : "<<arr12[i]<<endl;
			cout<<"\t\t\t\t\t\t\tType of ward                   : "<<arr13[i]<<endl;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
			cout<<endl;
			cout<<"\t\t\t\t\t\t\t\t..... Record Saved Successfully ....."<<endl;
		}
}

void history(char)
{
	cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n";
	cout<<"\t\t\t\t\t\t|                                                                      |\n";
	cout<<"\t\t\t\t\t\t|                                History                               |\n";
	cout<<"\t\t\t\t\t\t|                                                                      |\n";
	cout<<"\t\t\t\t\t\t|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|\n";
	int n;
	cout<<"\n\n\n\n\t\t\t\t\t\tEnter No. of patient You want to Check : ";
	cin>>n;
	cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
	char name[16];
	cout<<"\t\t\t\t\t\t\tEnter the Patient's File Name  : ";
	cin>>name;
	cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;
	for(int i=0;i<n;i++)
	{
		if(name==arr1[i])
		{
			cout<<"\t\t\t\t\t\t\tPatient's File Name            : "<<arr1[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient Name             : "<<arr2[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Father's Name            : "<<arr3[i]<<endl;
			cout<<"\t\t\t\t\t\t\tAGE                            : "<<arr4[i]<<endl;
			cout<<"\t\t\t\t\t\t\tGender                         : "<<arr5[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient's Address        : "<<arr6[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient's Contact Number : "<<arr7[i]<<endl;
			cout<<"\t\t\t\t\t\t\tEnter Patient's Blood Group    : "<<arr8[i]<<endl;
			cout<<endl;
			
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;	
			
			cout<<"\t\t\t\t\t\t\tPatient's File Name            : "<<arr1[i]<<endl;
			cout<<"\t\t\t\t\t\t\tSyptom's                       : "<<arr9[i]<<endl;
			cout<<"\t\t\t\t\t\t\tDiagnosis                      : "<<arr10[i]<<endl;
			cout<<"\t\t\t\t\t\t\tMedicines                      : "<<arr11[i]<<endl;
			cout<<"\t\t\t\t\t\t\tAddmission Required ?          : "<<arr12[i]<<endl;
			cout<<"\t\t\t\t\t\t\tType of ward                   : "<<arr13[i]<<endl;
			cout<<endl;	
		}
	}
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------"<<endl;	
}

void End(int n=5)
{
	if(n==5)
	{
		exit(0);	
	}
}

void display()
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t\t\t\t";cout<<"\" I";Sleep(200);cout<<"N";Sleep(200);cout<<"T";Sleep(200);cout<<"R";Sleep(200);cout<<"O";Sleep(200);cout<<"D";Sleep(200);cout<<"U";Sleep(200);cout<<"C";Sleep(200);cout<<"T";Sleep(200);cout<<"I";Sleep(200);cout<<"O";Sleep(200);cout<<"N \"";Sleep(200);cout<<"\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t";cout<<"M";Sleep(200);cout<<"U";Sleep(200);cout<<"B";Sleep(200);cout<<"A";Sleep(200);cout<<"S";Sleep(200);cout<<"I";Sleep(200);cout<<"L";Sleep(200);cout<<" ";cout<<"B";Sleep(200);cout<<"E";Sleep(200);cout<<"H";Sleep(200);cout<<"Z";Sleep(200);cout<<"A";Sleep(200);cout<<"D";Sleep(200);cout<<" \t\t\t\t\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t\t\t\t";cout<<"( ";Sleep(200);cout<<"-";Sleep(200);cout<<"0";Sleep(200);cout<<"9";Sleep(200);cout<<"2";Sleep(200);cout<<" )";Sleep(200);cout<<"\t\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t";cout<<"A";Sleep(200);cout<<"R";Sleep(200);cout<<"S";Sleep(200);cout<<"H";Sleep(200);cout<<"I";Sleep(200);cout<<"A";Sleep(200);cout<<" ";cout<<"B";Sleep(200);cout<<"U";Sleep(200);cout<<"T";Sleep(200);cout<<"T";Sleep(200);cout<<"\t\t\t\t\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t\t\t\t";cout<<"( ";Sleep(200);cout<<"-";Sleep(200);cout<<"0";Sleep(200);cout<<"9";Sleep(200);cout<<"6";Sleep(200);cout<<" )";Sleep(200);cout<<"\t\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t";cout<<"R";Sleep(200);cout<<"U";Sleep(200);cout<<"B";Sleep(200);cout<<"A";Sleep(200);cout<<" ";cout<<"S";Sleep(200);cout<<"H";Sleep(200);cout<<"A";Sleep(200);cout<<"B";Sleep(200);cout<<"B";Sleep(200);cout<<"I";Sleep(200);cout<<"R";Sleep(200);cout<<"\t\t\t\t\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|";cout<<"\t\t\t\t\t";cout<<"( ";Sleep(200);cout<<"-";Sleep(200);cout<<"1";Sleep(200);cout<<"0";Sleep(200);cout<<"2";Sleep(200);cout<<" )";Sleep(200);cout<<"\t\t\t\t\t  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	system("pause");
	system("cls");
}

void login()
{
	string n=" ";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t|################## Login Page ##################|\n";
	a:
	cout<<"\t\t\t\t\t\t\t            Enter Login Password : ";
	cin>>n;
	
	if(n=="yenyenyen")
	{
		cout<<"\t\t\t\t\t\t\t\t\tAccess Granted \n";
	}
	else
	{
	cout<<"\t\t\t\t\t\t\t\t\tInvalid password \n";
	goto a;
}
	system("pause");
	system("cls");
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////// THE END ////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
