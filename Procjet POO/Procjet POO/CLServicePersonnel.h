#pragma once
#include "CLmapTB_Personnel.h"
#include "CLmapTB_Adresse.h"
#include "CLmapTB_Date.h"
#include "CLData.h"
namespace NS_Svc																																	// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CLServicePersonnel																													// Définition de la classe CLServicePersonnel
	{
	private:
		NS_Comp::CLData^ oData;																														// Instanciation de la classe CLData dynamique managée
		NS_Comp::CLmapTB_Personnel^ oMappTB_Personnel;																								// Instanciation de la classe CLmapTB_Personnel dynamique managée
		NS_Comp::CLmapTB_Adresse^ oMappTB_Adresse;																									// Instanciation de la classe CLmapTB_Adresse dynamique managée
		NS_Comp::CLmapTB_Date^ oMappTB_Date;																										// Instanciation de la classe CLmapTB_Date dynamique managée
	public:
		CLServicePersonnel(void);																													// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);																		// Initialisation méthode d'affichage du personnel
		void ajouterUnePersonne(System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);			// Initialisation méthode d'ajout du personnel
		void modifierPersonnel(int, System::String^, System::String^, System::String^, System::String^, System::String^, int, System::String^);		// Initialisation méthode de modification du personnel
		void supprimerPersonnel(int);																												// Initialisation méthode de suppression du personnel
	};
}
