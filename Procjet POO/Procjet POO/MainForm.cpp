#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)					// Fonction principale d'exécution du programme
{
	Application::EnableVisualStyles();						// Fonction d'activation des styles visuels pour l'application
	Application::SetCompatibleTextRenderingDefault(false);  // Fonction permettant de définir la valeur par défaut à l'échelle de l'application
	ProcjetPOO::MainForm monFormulaire;						// Instanciation de la classe MainForm (soit formulaire principal)
	Application::Run(% monFormulaire);						// Exécution du programme via affichage du formulaire principal
}



