#pragma once
#include "CLData.h"
#include "CLmapTB_Commande.h"
#include "CLmapTB_Date.h"

namespace NS_Svc																																	// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CLServiceCommande																														// D�finition de la classe CLServiceCommande
	{
	private:
		NS_Comp::CLData^ oData;																														// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CLmapTB_Commande^ oMappTB_Commande;																								// Instanciation de la classe CLmapTB_Commande dynamique manag�e
		NS_Comp::CLmapTB_Date^ oMappTB_DateEmission;																								// Instanciation de la classe CLmapTB_Date dynamique manag�e
		NS_Comp::CLmapTB_Date^ oMappTB_DateLivraison;																								// Instanciation de la classe CLmapTB_Date dynamique manag�e
		System::String^ Reference;																													// Initialisation attribut Reference
		int increment;																																// Initialisation attribut increment
	public:
		CLServiceCommande(void);																													// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);																		// Initialisation m�thode d'affichage des commandes
		void ajouterCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);			// Initialisation m�thode d'ajout des commandes
		void modifierCommande(int, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, int);		// Initialisation m�thode de modification des commandes
		void supprimerCommande(int);																												// Initialisation m�thode de suppression des commandes

		///////////R�f�rence///////////
		void setReference();																														// Initialisation mutateur de Reference
		System::String^ getReference(void);																											// Initialisation accesseur de Reference
	};
}