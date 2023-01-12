#include <iostream>
#include <vector>
#include <string>




void showSavedPassword()
{


}



void generatePassword()
{
	std::vector <std::string> bigLetters = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
	std::vector <std::string> smallLetters = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
	std::vector <std::string> symboles = { "!","§","$","%","&","/","(",")","?","{","[","]","}","@" };
	std::vector <std::string> password = {};

	int numberOfLetter = 0;


	std::cout << "Wieviele Zeichen soll das Passwort enthalten ? " << std::endl;
	std::cin >> numberOfLetter ;

	if (numberOfLetter >= 0)
	{

		numberOfLetter--;
	}



}


void mainmenue()
{
	bool menueLoop = true;
	std::string menueInput;
	
	
	
	std::cout << "Willkommen zum Passwort Generator" << std::endl << std::endl << "Was moechten Sie machen ? " << std::endl << "1. Passwort generieren" << std::endl << "2. Passwort abrufen" << std::endl << "3. Exit" << std::endl << std::endl;
	
	while (menueLoop == true)
	{
		std::getline(std::cin, menueInput);

		if (menueInput == "1")
		{
			menueLoop = false;
			generatePassword();
		}
		
		if (menueInput == "2")
		{
			menueLoop = false;
			showSavedPassword();
		}
		
		if (menueInput == "3")
		{
			menueLoop = false;
			exit;
		}
	}


}



int main()
{
	mainmenue();



	return 0;
}