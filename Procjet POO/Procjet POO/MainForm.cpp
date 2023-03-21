#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)					// Fonction principale d'ex�cution du programme
{
	Application::EnableVisualStyles();						// Fonction d'activation des styles visuels pour l'application
	Application::SetCompatibleTextRenderingDefault(false);  // Fonction permettant de d�finir la valeur par d�faut � l'�chelle de l'application
	ProcjetPOO::MainForm monFormulaire;						// Instanciation de la classe MainForm (soit formulaire principal)
	Application::Run(% monFormulaire);						// Ex�cution du programme via affichage du formulaire principal
}



