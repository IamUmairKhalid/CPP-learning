#include<iostream>
#include<fstream>

using namespace std;
// define a structure to store student data
struct student {
	int cms;
	char name[30];
	float marks;
	void getData();		// get student data from user
	void displayData(); // display data
};
void student::getData() { // Scope resolution operator
	cout << "\nEnter SAP ID. : ";
	cin >> cms;
	cin.ignore(); // ignore the newline char inserted when you press enter
	cout << "Enter Name : ";
	cin.getline(name, 30);
	cout << "Enter Marks : ";
	cin >> marks;
}

void student::displayData() {
	cout << "\nSAP ID. : " << cms << endl;
	cout << "Name : " << name << endl;
	cout << "Marks : " << marks << endl;
}
void menu();
void writeData();
void readData();
void displayData();
void deleteData();
void updateData();
int maxSize = 3;
int no_of_records = 0;
student s[3]; // array of 3 students
ofstream wfile;
ifstream rfile;
//to count to number of students after deletion

int main() {
	int choice;
	while (true)
	{
		menu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			writeData();
			break;
		case 2:
			readData();
			break;
		case 3:
			displayData();
			break;
		case 4:
			deleteData();
			break;
		case 5:
			updateData();
			break;
		case 6:
			exit(0);
		default:
			break;
		}//end switch()
	}//end while()
	return 0;
}//end main()
void menu()
{
	cout << "Press 1 to write to the file" << endl;
	cout << "Press 2 to read from file" << endl;
	cout << "Press 3 to dispaly student data" << endl;
	cout << "Press 4 to delete a student data" << endl;
	cout << "Press 5 to update student data" << endl;
	cout << "Press 6 to exit" << endl;
}

void writeData()
{
	wfile.open("students.txt"); //, ios::out); // open file for writing
	for (int i = 0; i < maxSize; i++) {
		s[i].getData();
		
		wfile.write((char *)&s[i], sizeof(s[i]));	//(char*)&s - type casting &s into a char pointer.
	}
	wfile.close(); // close the file
}

void readData()
{
	no_of_records = 0;
	rfile.open("students.txt");// , ios::in); // open file for reading
	for (int i = 0; i < maxSize; i++)
	{
		rfile.read((char *)&s[i], sizeof(s[i])); // read an object from a file
		no_of_records++;
	}
	rfile.close(); // close the file
}

void displayData()
{
	for (int i = 0; i < no_of_records; i++) {
		s[i].displayData();
	}
}
void deleteData()
{
	int cms, count = 0;
	wfile.open("students.txt");
	cout << "enter student SAPID to delete it:";
	cin >> cms;

	for (int i = 0; i < maxSize; i++)
	{
		if (s[i].cms != cms)
		{
			wfile.write((char *)&s[i], sizeof(s[i]));
			count++;
		}
	}
	wfile.close();
	maxSize = count;
	readData();
}

void updateData()
{
	int cms, ch, count = 0;
	char name[30];
	wfile.open("students.txt");
	cout << "enter student SAPID to update it:";
	cin >> cms;

	for (int i = 0; i < maxSize; i++)
	{
		if (s[i].cms != cms)
		{
			wfile.write((char *)&s[i], sizeof(s[i]));
		}
		else
		{
			cout << "press 1 to update name" << endl;
			cout << "press 2 to update marks" << endl;
			cin >> ch;
			switch (ch)
			{
			case 1:
				cout << "enter new name: ";
				cin.ignore(); // ignore the newline char inserted when you press enter
				cin.getline(s[i].name, 30);
				break;
			case 2:
				cout << "Enter new marks: ";
				cin >> s[i].marks;
			default:
				break;
			}
			wfile.write((char *)&s[i], sizeof(s[i]));
		}
	}
	wfile.close();
	readData();
}
/*
int main () {
	
	ofstream myfile;
	
	myfile.open ("example2.txt", ios::app);
	
	myfile << "Writing this to a file.\n";
	
	myfile.close();

return 0;
}

int main () {
	
	ofstream myfile;
	string text;

	cout<<"enter some text followed by #"<<endl;
	getline(cin, text,'#');
	
	myfile.open ("example.txt");
	
	myfile <<text;// "Writing this to a file.\n";
	
	myfile.close();

return 0;
}

int main () 
{
	string line;
	ifstream myfile ("example.txt");

	if (myfile.is_open())
	{
		while (! myfile.eof() )
		{
			getline (myfile,line);
			cout << line << endl;
		}

	myfile.close();
	}

	else cout << "Unable to open file";

return 0;
}

int main () {
	
	ofstream myfile;
	
	myfile.open ("example.txt");

	for (int i=0; i< 10; i++)
	{
		myfile<<"Writing line no. "<<i+1<<" to a file.\n\n";
	}//end for
	myfile.close();

return 0;
}

int main()
{
	string text  = "students, with can be; successfull. with a consistent hardwork";
	string separator = " ,;.";
	//Find the start of the first word
	//cout<< text.find_first_of(separator)<<endl;
///*	
	int start = text.find_first_not_of(separator); //index for the end of the word
	int end = 0;
	//Now find and output the words
	int word_count = 0;
	while (start != string::npos)
	{
		end = text.find_first_of(separator, start + 1);
		if (end == string::npos)
		{
			end = text.length();
		}//end if
		cout << text.substr(start, end - start)<< endl;
		word_count++;
		//Find the first character of the next word
		start = text.find_first_not_of(separator, end + 1);
	}//end while()
	cout << "Your string contained "
		<< word_count << " words."<< endl;

return 0;
}


int main () {
	
	ofstream myfile;
	string text;

	myfile.open ("example.txt");

	for(int i=0; i<10; i++)
	{
		cout<<"enter question no. "<<i+1<<" followed by #"<<endl;
		getline(cin, text,'#');

		myfile <<text<<endl;// "Writing this to a file.\n";
	}
	myfile.close();

return 0;
}*/