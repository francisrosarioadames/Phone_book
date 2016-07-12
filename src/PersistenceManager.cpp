/*
 * PersistenceManager.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "PersistenceManager.h"

PersistenceManager::PersistenceManager() {
	// TODO Auto-generated constructor stub


	}
		cout << endl;
		
	{
		system("cls");
		Contact contact;
		ofstream file;
		string name_file= "diary.txt";
		file.open(name_file.c_str(), ios::app);
		contact.id = id;
		cin.ignore();
				cout << "Add Contact" <<endl;
				cout <<endl << "Name: ";
				cin.getline(contact.name, 50);
				cout <<endl << "Numero: ";
				cin.getline(contact.phone, 13);

		file.write((char *)&contact, sizeof(contact));

		file.close();
	}

	


	}
.close();

}

