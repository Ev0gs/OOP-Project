#pragma once
#include "CLmapTB_Adresse.h"
#include "CLmapTB_Date.h"

namespace NS_Comp												// D�finition namespace NS_Comp pour repr�senter la couche Composant de l'architecture ihm
{
	ref class CLmapTB_Client									// D�finition de la classe CLmapTB_Client
	{
	private:
		System::String^ sSql;
		int id_client;											// Initialisation de l'attribut qui stocke l'id_client
		System::String^ Nom;									// Initialisation de l'attribut qui stocke le Nom du client
		System::String^ Prenom;									// Initialisation de l'attribut qui stocke le Pr�nom du client
		int id_adresseLiv;										// Initialisation de l'attribut qui stocke l'id de l'adresse de livraison du client
		int id_adresseFact;										// Initialisation de l'attribut qui stocke l'id de l'adresse de facturation du client
		int id_dateAnniv;										// Initialisation de l'attribut qui stocke l'id de la date d'anniversaire du client
		int id_datePremierAchat;								// Initialisation de l'attribut qui stocke l'id de la date de premier achat du client
	public:
		System::String^ Select(void);							// Initialisation de la m�thode d'affichage du client
		System::String^ Insert(void);							// Initialisation de la m�thode d'ajout du client
		System::String^ Delete(void);							// Initialisation de la m�thode de suppression du client
		void setIdClient(int);									// Initialisation de la m�thode de mutateur de l'id_client
		void setNom(System::String^);							// Initialisation de la m�thode de mutateur du Nom
		void setPrenom(System::String^);						// Initialisation de la m�thode de mutateur du Prenom
		void setIdAdresseLiv(int);								// Initialisation de la m�thode de mutateur de l'id_adresseLiv
		void setIdAdresseFact(int);								// Initialisation de la m�thode de mutateur de l'id_adresseFact
		void setIdDateAnniv(int);								// Initialisation de la m�thode de mutateur de l'id_dateAnniv
		void setIdDatePremierAchat(int);						// Initialisation de la m�thode de mutateur de l'id_datePremierAchat
		int getIdClient(void);									// Initialisation de la m�thode d'accesseur de l'id_client
		System::String^ getNom(void);							// Initialisation de la m�thode d'accesseur du Nom
		System::String^ getPrenom(void);						// Initialisation de la m�thode d'accesseur du Prenom
		int getIdAdresseLiv(void);								// Initialisation de la m�thode d'accesseur de l'id_adresseLiv
		int getIdAdresseFact(void);								// Initialisation de la m�thode d'accesseur de l'id_adresseFact
		int getIdDateAnniv(void);								// Initialisation de la m�thode d'accesseur de l'id_dateAnniv
		int getIdDatePremierAchat(void);						// Initialisation de la m�thode d'accesseur de l'id_datePremierAchat
	};
}

