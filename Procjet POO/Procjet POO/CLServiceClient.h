#pragma once
#include "CLmapTB_Client.h"
#include "CLmapTB_Adresse.h"
#include "CLmapTB_Date.h"
#include "CLData.h"
namespace NS_Svc																																											// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CLServiceClient																																								// Définition de la classe CLServiceClient
	{
	private:
		NS_Comp::CLData^ oData;																																								// Instanciation de la classe CLData dynamique managée
		NS_Comp::CLmapTB_Client^ oMappTB_Client;																																			// Instanciation de la classe CLmapTB_Client dynamique managée
		NS_Comp::CLmapTB_Adresse^ oMappTB_Adresse_liv;		//livraison																														// Instanciation de la classe CLmapTB_Adresse dynamique managée
		NS_Comp::CLmapTB_Adresse^ oMappTB_Adresse_fact;		//facturation																													// Instanciation de la classe CLmapTB_Adresse dynamique managée
		NS_Comp::CLmapTB_Date^ oMappTB_Date_anniv;			//date anniv																													// Instanciation de la classe CLmapTB_Date dynamique managée
		NS_Comp::CLmapTB_Date^ oMappTB_Date_Premier_achat;	//date premier achat																											// Instanciation de la classe CLmapTB_Date dynamique managée
	public:
		CLServiceClient(void);																																								// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);																													// Initialisation méthode d'affichage du client
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^);				// Initialisation méthode d'ajout du client
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^);		// Initialisation méthode de modification du client
		void supprimerUnClient(int);																																						// Initialisation méthode de suppression du client
	};
}
