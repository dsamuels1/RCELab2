//Drew Samuels
#include <iostream>

using namespace std;

//create the variable and the bss section
#pragma bss_seg(".bss")
int bssVar;
char* globalVar;

int main(int argc, char* argv[])
{
	//Requirement 2
	char *password;
	password = new char(13); //makes 13 byte char* in the heap
	char* password2 = password; //copies the data in the heap to Data

	//requirement 4
	


	 return 0;
	
}

//requirement 3
void func()
{
	char* funcVar = new char(14);
	globalVar = funcVar;
}