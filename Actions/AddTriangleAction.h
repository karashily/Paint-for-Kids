#pragma once
#include "Action.h"
#include "..\GUI\Output.h"
#include "..\GUI\Input.h"
#include "..\ApplicationManager.h"

class AddTriangleAction :public Action{
	Point P1;
	Point P2;
	Point P3;
	GfxInfo RectGfxInfo;
	public:
		AddTriangleAction(ApplicationManager *pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();

	void Load(ifstream& input);
	
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
};
