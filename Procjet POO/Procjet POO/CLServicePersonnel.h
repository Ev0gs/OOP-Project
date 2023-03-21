#pragma once
#include "CLmapTB_Personnel.h"
#include "CLmapTB_Adresse.h"
#include "CLmapTB_Date.h"
#include "CLData.h"
namespace NS_Svc																																	// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CLServicePersonnel																													// D�finition de la classe CLServicePersonnel
	{
	private:
		NS_Comp::CLData^ oData;																														// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CLmapTB_Personnel^ oMappTB_Personnel;																								// Instanciation de la classe CLmapTB_Personnel dynamique manag�e
		NS_Comp::CLmapTB_Adresse^ oMappTB_Adresse;																									// Instanciation de la classe CLmapTB_Adresse dynamique manag�e
		NS_Comp::CLmapTB_Date^ oMappTB_Date;																										// Instanciation de la classe CLmapTB_Date dynamique manag�e
	public:
		CLServicePersonnel(void);																													// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);																		// Initialisation m�thode d'affichage du personnel
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);			// Initialisation m�thode d'ajout du personnel
		void modifierPersonnel(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);		// Initialisation m�thode de modification du personnel
		void supprimerPersonnel(int);																												// Initialisation m�thode de suppression du personnel
	};
}
