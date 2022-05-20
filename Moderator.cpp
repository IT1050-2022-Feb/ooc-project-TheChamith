#include "Moderator.h"
#include<string.h>
Moderator::Moderator() {
	moderator_id = 0;
	strcpy(mod_username, "");
	strcpy(mod_firstname,"");
	strcpy(mod_password, "");
	strcpy(mod_surname, "");

}
Moderator::Moderator(int mid, char mfname[32], char mpassword[32], char muser[32], char msurname[32], Registered_User* Registered_User1, Registered_User* Registered_User2) {

	moderator_id = mid;
	strcpy(mod_username,muser);
	strcpy(mod_firstname,mfname);
	strcpy(mod_password,mpassword);
	strcpy(mod_surname, msurname);
	Registered_User[1] = Registered_User1;
	Registered_User[2] = Registered_User2;
	
}
void Moderator::AddModeratorDetails(int mid, char mfname[32], char mpassword[32], char muser[32], char msurname[32]) {

}
void Moderator::DeleteModeratorDetails() {

}

void Moderator::DisplayModeratorDetails() {

}
void Moderator::login() {

}
void Moderator::AddRecipe(Recipe* Recipes1,Recipe* Recipies2) {
	Recipies[1] = Recipes1;
	Recipies[2] = Recipies2;

}
