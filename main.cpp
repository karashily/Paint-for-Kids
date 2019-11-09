#include "ApplicationManager.h"

int main()
{
	ActionType actType;

	//Create an object of ApplicationManager
	ApplicationManager appManager;

	do
	{
		//Read user action
		actType = appManager.GetUserAction();

		//Exexute the action
		appManager.ExecuteAction(actType);

		//Update the interface
		appManager.UpdateInterface();

	} while (actType != EXIT);



	return 0;
}

