/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto y francis
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element)
{
	//TODO: Implement this method
	cout << "You should write the code for adding " << element -> _name << endl;
{
		ifstream read_file("diary.txt");
		Contact Contact;

		read_file.read((char *)&Contact, sizeof(Contact));
		if(read_file.fail())
		{
			cout <<"Came up with a ploblema , trying to open the calendar :(" <<endl;
			exit(1);
		}
		cout <<"id   Name     phone"<<endl;
		while(!read_file.eof())
		{

			cout <<endl <<contact.id <<" -> "<<  contact.name << "   " <<contact.phone << endl;
			read_file.read((char *)&contact, sizeof(contact));

		}
		cout << endl;
	read_file..close();


	}



}

void List::remove(int index)
{
	//TODO: Implement this method
	cout << "You should write the code for removing the index " << index << endl;
	{

		fstream leer_file("Diary.txt");
		ofstream file("delet.txt");
		Contact contact;
		read_file.read((char *)&contact, sizeof(contact));

		if(read_file.fail())
		{
			cout <<"Came up with a ploblema , trying to open the calendar:(" <<endl;
			exit(1);
		}

		while(!read_file.eof())
		{

			if(contact.id != id)
			{

				file.write((char *)&contact, sizeof(contact));
			}
			read_file.read((char *)&contact, sizeof(contact));
		}
		cout << endl;
		read_file.close();
		file.close();

	    remove("diary.txt");
		rename("delet.txt", "diary.txt");



	}

int main()
{
	int option = 0, get out = 0, p = 0, l = 0, id = 1;

	string name, name;



	do
	{
		menu();
		cin >> option;

		switch (option)
		{

		case 1:
			do{
				system("cls");

				save(id);

				cout <<endl << "wants? " <<endl;
				cout << "1 - keep adding" <<endl;
				cout << "2 - get out" <<endl;
				cout << "Select the option=> ";
				cin >>p;
				id++;

			}while (p != 2);

			break;

		case 2:
		system("cls");
		cout << "Contact" <<endl<<endl;
		viewContact();
	    cout <<endl<< "1 - get out" <<endl;
		cout <<endl<< "Select the option to exit: ";
		cin >>get out;
		if(get out == 1)
		{
			menu();
		}
			break;

		case 3:
			do{
				system("cls");
				cout << "delete contact" <<endl<<endl;
				verContact();
				cout <<endl << "Select the option  : ";
				cin <<endl>>delete contact(l);

			    cout <<endl<< "1 - get out" <<endl;
				cout <<endl<< "2 - 
                                continue removing" <<endl;
				cout <<endl<< "Select the option to exit: ";
				cin >>get out;
				if(get out== 1)
				{
					menu();
				}

			}while(get out != 1);
			break;

		}

	} while (option != 4);

	system("pause");
	return 0;
}





}

void List::modify(int index, std::string name)
{
	//TODO: Implement this method
	cout << "You should write the code for modifying the content for index " << index << endl;

		fstream leer_archivo("Diary.txt");
		ofstream file("delet.txt");
		Contact contact;
		read_file.read((char *)&contact, sizeof(contact));

		if(read_file.fail())
		{
			cout <<"Came up with a ploblema , trying to open the calendar:(" <<endl;
			exit(1);
		}

		while(!read_file.eof())
		{

			if(contact.id != id)
			{

				archivo.write((char *)&contact, sizeof(contact));
			}
			read_file.read((char *)&contact, sizeof(contact));
		}
		cout << endl;
		read_file.close();
		file.close();

	    remove("diary.txt");
		rename("delet.txt", "diary.txt");



	}

int main()
{
	int option = 0, get out = 0, p = 0, l = 0, id = 1;

	string name, name;



	do
	{
		menu();
		cin >> option;

		switch (opction)
		{

		case 1:
			do{
				system("cls");

				save(id);

				cout <<endl << "wants? " <<endl;
				cout << "1 - keep adding" <<endl;
				cout << "2 - get out" <<endl;
				cout << "Select the option=> ";
				cin >>p;
				id++;

			}while (p != 2);

			break;

		case 2:
		system("cls");
		cout << "Contact" <<endl<<endl;
		viewContact();
	    cout <<endl<< "1 - get out" <<endl;
		cout <<endl<< "Select the option to exit: ";
		cin >>get out;
		if(get out == 1)
		{
			menu();
		}
			break;

		case 3:
			do{
				system("cls");
				cout << "Change contact" <<endl<<endl;
				viewContact();
				cout <<endl << "Select the option  : ";
				cin <<endl>>Change contact(l);

			    cout <<endl<< "1 - get out" <<endl;
				cout <<endl<< "2 - 
                                continue removing" <<endl;
				cout <<endl<< " Select the option Change: ";
				cin >>get out;
				if(get out== 1)
				{
					menu();
				}

			}while(get out != 1);
			break;

		}

	} while (option != 4);

	system("pause");
	return 0;
}








}
