#pragma once
#include "CLmapTB_Client.h"
#include "CLmapTB_Adresse.h"
#include "CLmapTB_Date.h"
#include "CLData.h"
namespace NS_Svc																																											// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CLServiceClient																																								// D�finition de la classe CLServiceClient
	{
	private:
		NS_Comp::CLData^ oData;																																								// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CLmapTB_Client^ oMappTB_Client;																																			// Instanciation de la classe CLmapTB_Client dynamique manag�e
		NS_Comp::CLmapTB_Adresse^ oMappTB_Adresse_liv;		//livraison																														// Instanciation de la classe CLmapTB_Adresse dynamique manag�e
		NS_Comp::CLmapTB_Adresse^ oMappTB_Adresse_fact;		//facturation																													// Instanciation de la classe CLmapTB_Adresse dynamique manag�e
		NS_Comp::CLmapTB_Date^ oMappTB_Date_anniv;			//date anniv																													// Instanciation de la classe CLmapTB_Date dynamique manag�e
		NS_Comp::CLmapTB_Date^ oMappTB_Date_Premier_achat;	//date premier achat																											// Instanciation de la classe CLmapTB_Date dynamique manag�e
	public:
		CLServiceClient(void);																																								// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ selectionnerTousLesClients(System::String^);																													// Initialisation m�thode d'affichage du client
		void ajouterUnClient(System::String^, System::String^, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^);				// Initialisation m�thode d'ajout du client
		void modifierUnClient(int, System::String^, System::String^, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^);		// Initialisation m�thode de modification du client
		void supprimerUnClient(int);																																						// Initialisation m�thode de suppression du client
	};
}
