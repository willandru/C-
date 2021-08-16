#include "iostream"
#include "vector"
#include "string.h"
#include "fstream"
#include "stdlib.h"

using namespace std;
struct User{
	int ID;
	char lastName[15];
	char name[15];
	int age;
};

vector<User> userList;
vector<int> frecuency;
vector<int> edades;

int main(){
//Cargamos un usuario
	User admin;
	admin.ID=(int) userList.size();
	strcpy(admin.name, "Admin");
	strcpy(admin.lastName, "kali-linux");
	admin.age=23;
	
	
	userList.push_back(admin);

	ofstream history;
	history.open("log.bat",ios::out);
	// MENÚ
	while(true){
		int rta=0;
		while(rta == 0){
		cout << "----------------------------------------------"<<endl;
		cout << "****MAIN MENU*****"<<endl;
		cout << "1. Search user by \"ID\"" <<endl;
		cout << "2. Find out the frecuency of the ages" <<endl;
		cout << "3. Add a new user"<< endl;
		cout << "4. Delete a user by \"ID\"" <<endl;
		cout << "5. Print all users info and make archivo.bat" <<endl;
		cout << "6. EXIT" <<endl;
		cout << "Enter the desire option(1,2,3,4,5,6): "<<endl;
		cout << "----------------------------------------------"<<endl;
		cin>> rta;
		if (rta==6){
			exit(1);
		}

	}
	switch(rta){
		case 1:
		history<<"1. Search user by \"ID\"" <<endl;
		cout << "----SEARCH USER BY \"ID\"----" <<endl;
		
		// ***espacio para mostrar los ID actuales ****
		cout << "ID / NAME " <<endl;
		for (int i=0; i<(int)userList.size(); i++)
		{
			User user=userList[i];	
			cout << user.ID << "  " << user.name <<endl;
			
		}
			
		
		int wantedID;
		cout << "Enter the wanted \"ID\":"<<endl;
		cin >> wantedID;
		history<<"ID wanted: " <<wantedID<<endl;
		for (int i=0; i<(int)userList.size(); i++)
		{
			User user=userList[i];
			if(wantedID == user.ID){
				cout << user.ID <<endl;
				cout << user.name <<endl;
				cout << user.lastName <<endl;
				cout << user.age <<endl;
			}
			
		}
		
		
			break;
		
		case 2:
		history << "2. Find out the frecuency of the ages" <<endl;
		cout <<endl;
		cout << "----FRECUANCY OF THE AGES----" <<endl;
		cout <<endl;
		
		frecuency.clear();
		for (int i=0; i<(int)userList.size(); i++)
		{
			User user=userList[i];
			frecuency.push_back(user.age);
			
		}
		edades.clear();
		for (int i=0; i<100; i++)
		{
			edades.push_back(0);
		}
	
		
			for (int j=0; j<(int)frecuency.size(); j++)
		{
			int valor=frecuency[j];
			edades[valor]++;
			
		}
			
		cout << "	|  AGE  | FRECUENCY|"<<endl;
		cout << "	|_______|__________|"<<endl;
		for (int i=0; i<(int)edades.size(); i++)
		{
			int n= edades[i];
			if (n!=0){
				cout << "	   "<<i<<"   |     "<<n<<"     "<<endl;
			}
		}
		
		
		
		
			break;
		
		case 3:
		history << "3. Add a new user"<< endl;
		cout << "----ADD A NEW USER----"<< endl;
		User newUser;
		cout << "Enter the name of the New user"<<endl;
		cin >> newUser.name;
		history << newUser.name<<endl;
		cout << "Enter the Last name of the New user"<<endl;
		cin >> newUser.lastName;
		history << newUser.lastName<<endl;
		cout << "Enter the age of the new user"<<endl;
		cin >> newUser.age;
		history << newUser.age<<endl;
		newUser.ID= userList.size();
		history << "ID: "<<newUser.ID<<endl;
		userList.push_back(newUser);
		
		
		
		
			break;
		
		case 4:
		history<< "4. Delete a user by \"ID\"" <<endl;
		cout << "----DELETE USER BY \"ID\"----";
		cout << "ID / NAME " <<endl;
		for (int i=0; i<(int)userList.size(); i++)
		{
			User user=userList[i];	
			cout << user.ID << "  " << user.name <<endl;
			
		}
		int deletID;
		cout << "Enter the wanted \"ID\":"<<endl;
		cin >> deletID;
		history << "The ID deleted was: " << deletID<<endl;
		
		userList.erase(userList.begin()+deletID);
		//for (auto a = userList.begin(); a != userList.end(); ++a)
		//{
			//User user=*a;
			//if(deletID == user.ID){
				//cout << user.name;
				//userList.erase(a);
			//}
		//}
		//for (int i=0; i<(int)userList.size(); i++)
		//{
			//User user=userList[i];	
			//if (user.ID == deletID){
			//vector<int>::iterator it;
			//cout <<userList.begin()<<endl;
			//cout <<userList.begin()+i<<endl;
			//cout <<userList.begin()+user.ID<<endl;
		//}
	//}
	//Esta seccion presenta errores incoherentes
		
		
			break;
		case 5:
		
		history<< "5. Print all users info and make usuarios.bat" <<endl;
			
		// Crear el archivo
		ofstream archivo;
		
		archivo.open("usuarios.bat",ios::out);
		if(archivo.fail()){
			cout << "File cannot be opened"<<endl;
		}
		else{
			
		// Mostrar los usuarios actuales y escribir el archivo
		cout << "ID / NAME / LASTNAME / AGE " <<endl;
		archivo <<"ID / NAME / LASTNAME / AGE " <<endl;
		for (int i=0; i<(int)userList.size(); i++)
		{
			User user=userList[i];	
			cout << user.ID << "  " << user.name << user.lastName << "  " << user.age<<endl;
			archivo << user.ID << "  " << user.name << user.lastName << "  " << user.age<<endl;
		}
			
		}
		archivo.close();
		break;
			
	}
		
		
	}
}
