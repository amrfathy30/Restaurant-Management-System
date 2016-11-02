/*
============================================================================
this program is made to serve customers in aRestaurant ...
with a chash system and the delivery too...
============================================================================
*/

# include <iostream>
# include <string>
# include <stdio.h>
# include <fstream>
# include <iomanip>
using namespace std;
/*
==========================================================
THIS CLASS DEAL WITH THE GOODS INFORMATION AS NAME , PRICE 
AND ALLOCATE WITH ITS FUCTION TO ADDS THEM ...
==========================================================
*/
class goods
{
private:string name;
	double price;
public : void setprice(double x)
	{
		price = x;
	}
	void setproductname(string nm)
	{
		name = nm ;
	}
	string returnname()
	{
		return name;
	}
	double returnnum()
	{
		return price;
	}
};
int customer = 0;
void filedatastorage(fstream & file, goods w )
{
	file <<w.returnname()<<" ";
	file << w.returnnum();
	
}
/*
====================================================================================
ASTRUCTURE FOR CLINT INFORMATION ...
====================================================================================
*/
struct client
{
	string name;
	string address;
	string tele_number;

};
client s[100];
client s1;
/*
========================================================================
FUNCTION TO DEAL WITH THE STRUCTURE OF THE CUSTOMERS FOR INPUTE DATA ...
========================================================================
*/
void loadinfo(fstream & file, client s[])
{ 
	int i = 0;
	while (!file.eof())
	{
		file >> s[i].tele_number;
		file >> s[i].name;
		file >> s[i].address;
		i++;
	}
	customer = i - 1;
}
void storedata(fstream & file, client x)
{
	file << x.tele_number << endl;
	cout << x.tele_number << endl;
	file << x.name << endl;
	file << x.address << endl;
}
void add();
/*
===========================================================
FUNCTION TO RECONIZE THIS ELEMRNT WHICH IS IMPROTANT .....
===========================================================
*/
string getnum(client w);
/*
======================================================================
FUNCTION TO DEAL WITH THE STRUCTURE OF THE CUSTOMERS FOR SHOW DATA ...
======================================================================
*/
void showinfo(client w);
/*
===================================================================
FUNCTION TO CHECK ON THE OPPENNING OF THE FILE ....AS IFSTREAM TYPE
===================================================================
*/
void test1(ifstream & file);
/*
=================================================================
THIS FUNCTION TO IS MADE TO SPLITE THE PRICE FROM THE CLASS GOODS 
TO BE ADDS LATER ....
=================================================================
*/
double myprice( int x, goods y[])
{
	double e = y[x - 1].returnnum();

	return e;
}
/*
===================================================================
FUNCTIONS TO CHECK ON THE OPPENNING OF THE FILE ....AS OFSTREAM TYPE
===================================================================
*/
void test(ofstream & file);
void test2(fstream & file);
/*
================================================================
THIS FUNCTION IS MADE TO LOAD DATA FRO AFILE INTO THR PROGRAM ..
================================================================
*/
void loadingdata(ifstream & file, goods ptr[]);
/*
==========================================================================
FUNCTION TO SHOW THE FILE CONTENTS  .....LIKE NAME AND PRICE OF FOOD PLATE
==========================================================================
*/
void showdata(goods ptr[], int size);
void showdata1(fstream & file);
int main()
{
	fstream outputefile, cus_data;
	outputefile.open("outpute.txt", ios::in | ios::out | ios::app);
	cus_data.open("Clients.txt", ios::in | ios::out | ios::app);
	ifstream Cake;
	ifstream Fries;
	ifstream Sandwich;
	ifstream shisha;
	ifstream Salad;
	ifstream Pancake;
	ifstream Pizza;
	ifstream Dorayaki;
	ifstream Omelette;
	ifstream maincourse; // THE MAIN FILE WHICH ACCEPTS THE MAIN MENU OF THE PROGRAM .
	Sandwich.open("Sandwich.txt");
	shisha.open("Shisha.txt");
	Salad.open("Salad.txt");
	Pancake.open("Pancake.txt");
	Pizza.open("Pizza.txt");
	Dorayaki.open("Dorayaki.txt");
	Omelette.open("Omelette.txt");
	maincourse.open("Maincources.txt");
	Fries.open("Fries.txt");
	Cake.open("Cake.txt");
	test2(cus_data);
	test2(outputefile);
	int choice1;
	char mn = ' ';
	bool key = true;



	goods myfood1[100];



	loadingdata(Cake, myfood1);


	goods myfood2[100];



	test1(Fries);
	loadingdata(Fries, myfood2);
	goods myfood3[100];
	test1(Sandwich);
	loadingdata(Sandwich, myfood3);





	goods myfood4[100];
	test1(Salad);
	loadingdata(Salad, myfood4);




	goods myfood5[100];
	test1(Pancake);
	loadingdata(Pancake, myfood5);


	goods myfood6[100];
	test1(Dorayaki);
	loadingdata(Dorayaki, myfood6);


	goods myfood10[100];
	test1(shisha);
	loadingdata(shisha, myfood10);

	goods myfood7[100];
	test1(Pizza);
	loadingdata(Pizza, myfood7);

	goods myfood8[100];
	test1(Omelette);


	loadingdata(Omelette, myfood8);

	goods myfood9[1000];
	test1(maincourse);



	loadingdata(maincourse, myfood9);

/*
===========================================================================================
In order to repeat the list view as many times as the user as well as for better service...
===========================================================================================
	*/
	while (key == true)
	{   cout << "===================================================================" << endl;
		cout << ":::::::::::::::::::|         Restaurant        |:::::::::::::::::::" << endl;
		cout << "===================================================================" << endl;
	    A:cout << "1 -   Casheur" << endl;
		cout << "2 -   Delivery " << endl;
		cout << "3 -   Close " << endl;
		cout << "====================================================================\n" << endl;
		cin >> choice1;
		if (choice1 == 1)
		{
			double totalcast = 0;
			/*
			==============================================================================
			THIS ALIST OF FOOD THAT THE CUSTOMER INTERS CHOOSES TO EAT FROM OUR RESTAURANT
			==============================================================================
			*/
			int   choice2;
		MAIN:cout << "       1 - Cake & Fastry " << endl;
			cout << "       2 - Fries" << endl;
			cout << "       3 - Sandwich " << endl;
			cout << "       4 - Salad " << endl;
			cout << "       5 - Pancake " << endl;
			cout << "       6 - Dorayakl " << endl;
			cout << "       7 - Pizza " << endl;
			cout << "       8 - Omlette " << endl;
			cout << "       9 - Main course " << endl;
			cout << "      10 - Shisha" << endl;
			cout << "      11 - close " << endl;
			cout << "EnTER YOUR CHOICE : ";
			cin >> choice2;
			if (choice2 == 1)
			{
				mn = ' ';
				test1(Cake);
			    ST:showdata(myfood1, 7);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood1);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto ST;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else if (choice2 == 2)
			{
				mn = ' ';
			FR: showdata(myfood2, 6);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood2);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto FR;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 3)
			{
				mn = ' ';
			SA: showdata(myfood3, 8);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood3);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto SA;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 4)
			{
				mn = ' ';
			    SAL: showdata(myfood4, 5);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood4);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto SAL;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 5)
			{
				mn = ' ';
			PAN:showdata(myfood5, 2);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood5);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto PAN;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 6)
			{
				mn = ' ';
			   DO: showdata(myfood6, 3);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood6);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto DO;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 7)
			{
				mn = ' ';
			PI: showdata(myfood7, 3);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood7);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto PI;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 8)
			{
				mn = ' ';
			    OM: showdata(myfood8, 3);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood8);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto OM;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 9)
			{
				mn = ' ';
			MA: showdata(myfood9, 8);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood9);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto MA;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 10)
			{

			SH: showdata(myfood10, 4);
				cout << "Enter your choice : ";
				int choice3;
				cin >> choice3;
				totalcast += myprice(choice3, myfood10);
				cout << "IF YOU WANT TO RENTER ANOTHER ONE IN THIS MENU PRESS 'Y' \n **ELSE ,IF YOU WANT TO GO TO THE MAIN MENU AGAIN PRESS M : ";
				cin >> mn;
				if (mn == 'Y' || mn == 'y')
				{
					goto SH;
				}
				else if (mn == 'M' || mn == 'm')
				{
					goto MAIN;
				}
			}
			else  if (choice2 == 11)
			{
				exit(0);
				break;
			}
			else
			cout << "-----------------------------------------------" << endl;
			cout << "the total cast = " << totalcast << endl;
			break;
		}
		else  if (choice1 == 2)
		{
			/*
			=======================================================================================
			THIS ALIST OF OPTIONS THAT ENABLE THE MANAGER TO TAKE ANY DECITION OF HIS CLIENTS LATER
			=======================================================================================
			*/
			int choice4;
		B:  cout << "1- Add New client " << endl;
			cout << "2- Search for one's information " << endl;
			cout << "3- Delete client " << endl;
			cout << "4- Show report About my Client " << endl;
			cout << "------------------------------------------" << endl;
			cout << "ENTER YOUR CHOICE :  ";
			cin >> choice4;
			switch (choice4)
			{
			case 1:
			{
					  add();
					  storedata(cus_data, s1);
					  char ch;
					  cout << "IF YOU WANT TO ENTER ANOTHER ONE PRESS Y " << endl;
					  cin >> ch;
					  if (ch == 'y' || ch == 'Y')
					  {
						  goto  B;
					  }
					  else
						  break;
			}
			case 2:
			{
					  string sr;
					  cout << "Enter the persin's number you want to search for  : " << endl;
					  loadinfo(cus_data,s);
					  cin >> sr;
					  for (int i = 0; i < customer; i++)
					  {
						  if (getnum(s[i]) == sr)
						  {
							  showinfo(s[i]);
							  cout << endl;
						  }
					  }
					  break;
			}
			case 3:
			{
					  string del;
					  cout << "Enter the persin's number you want to delete : ";
					  cin >> del;
					  for (int i = 0; i < customer; i++)
					  {
						  if (getnum(s[i]) == del)
						  {
							  i--;
							  for (int t = i; i < customer; i++)
							  {
								  client change = s[i];
								  s[i] = s[i + 1];
								  s[i + 1] = change;
							  }
							  break;
						  }
					  }
					  break;
			}
			case 4:
			{
					  for (int i = 0; i < customer; i++)
					  {
						  showinfo(s[i]);
					  }
					  break;
			}
			default:
			{
					   cout << "Invalid number " << endl;
					   goto B;
			}
			}
		}
		else if (choice1 == 3)
		{
			exit(0);
		}
		else
			cout << "ERROR .........N'T RIGHT MAN !!!!" << endl;
	}
	cus_data.close();
	 Cake.close();
     Fries.close();
   	Sandwich.close();
	 shisha.close();
	 Salad.close();
	 Pancake.close();
	 Pizza.close();
	 Dorayaki.close();
	 Omelette.close();
	 maincourse.close();
	system("pause");
	return 0;
}
void add()
{
	cout << "Enter the telephone number " << endl;
	cin>> s1.tele_number;
	cout << "Enter your name : ";
	cin>> s1.name;
	cout << "Enter your Address : ";
	cin>>s1.address;
	customer++;
}
string getnum(client w)
{
	return w.tele_number;
}
void showinfo(client w)
{
	cout << "Name : " << w.name << endl;;
	cout << "telt : " << setw(12) << w.tele_number << endl;
	cout << "Address : " << w.address << endl;
}
void test1(ifstream & file)
{
	if (!file)
	{
		cout << "there an fault while openning the file " << endl;
	}

}
void test(ofstream & file)
{
	if (!file)
	{
		cout << "there an fault while openning the file " << endl;
	}

}
void test2(fstream &file)
{
	if (!file)
	{
		cout << "there an fault while openning the file " << endl;
	}
}

void loadingdata(ifstream & file, goods ptr[])
{

	string x;
	double y;
	int i = 0;

	while (!file.eof())
	{


		file >> x;
		ptr[i].setproductname(x);
		file >> y;
		ptr[i].setprice(y);
		i++;

	}

}
void showdata( goods ptr[],int size)
{
	cout << "-------------------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		cout <<i+1<<" - "<<ptr[i].returnname() << " " << ptr[i].returnnum() << endl;
	}
	cout << "-------------------------------------------------" << endl;
}
