#pragma once
#include "CLData.h"
#include "CLmapTB_Commande.h"
#include "CLmapTB_Date.h"

namespace NS_Svc																																	// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CLServiceCommande																														// Définition de la classe CLServiceCommande
	{
	private:
		NS_Comp::CLData^ oData;																														// Instanciation de la classe CLData dynamique managée
		NS_Comp::CLmapTB_Commande^ oMappTB_Commande;																								// Instanciation de la classe CLmapTB_Commande dynamique managée
		NS_Comp::CLmapTB_Date^ oMappTB_DateEmission;																								// Instanciation de la classe CLmapTB_Date dynamique managée
		NS_Comp::CLmapTB_Date^ oMappTB_DateLivraison;																								// Instanciation de la classe CLmapTB_Date dynamique managée
		System::String^ Reference;																													// Initialisation attribut Reference
		int increment;																																// Initialisation attribut increment
	public:
		CLServiceCommande(void);																													// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);																		// Initialisation méthode d'affichage des commandes
		void ajouterCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);			// Initialisation méthode d'ajout des commandes
		void modifierCommande(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);		// Initialisation méthode de modification des commandes
		void supprimerCommande(int);																												// Initialisation méthode de suppression des commandes

		///////////Référence///////////
		void setReference();																														// Initialisation mutateur de Reference
		System::String^ getReference(void);																											// Initialisation accesseur de Reference
	};
}