#pragma once
#define size 6
class Moderator
{
private:
	int moderator_id;
	char mod_username[32];
	char mod_password[32];
	char mod_firstname[32];
	char mod_surname[32];
	
	Recipe* Recipies[size];
	Registered_User* Registered_User1[size];

public:
	Moderator();
	Moderator(int mid, char mfname[32], char mpassword[32], char muser[32], char msurname[32], Registered_User* Registered_User1, Registered_User* Registered_User2);
	void AddModeratorDetails(int mid, char mfname[32], char mpassword[32], char muser[32], char msurname[32]);
	void DeleteModeratorDetails();
	void AddRecipe();
	void login();
	void UpdateModeratorDetails();
	void DisplayModeratorDetails();
	~Moderator();




};

