#pragma once
namespace NS_Comp													// D�finition namespace NS_Comp pour repr�senter la couche Composant de l'architecture ihm
{
	ref class CLmapTB_Personnel										// D�finition de la classe CLmapTB_Personnel
	{
	private:												
		System::String^ sSql;										
		int id_personnel;											// Initialisation de l'attribut qui stocke l'id_personnel
		System::String^ Prenom;										// Initialisation de l'attribut qui stocke le pr�nom du personnel
		System::String^ Nom;										// Initialisation de l'attribut qui stocke le nom du personnel
		System::String^ Poste;										// Initialisation de l'attribut qui stocke le poste du personnel
		int id_adresse;												// Initialisation de l'attribut qui stocke l'id_adresse
		int id_date;												// Initialisation de l'attribut qui stocke l'id_date
	public:
		System::String^ Select(void);								// Initialisation de la m�thode d'affichage du personnel
		System::String^ Insert(void);								// Initialisation de la m�thode d'ajout du personnel
		System::String^ Delete(void);								// Initialisation de la m�thode de suppression du personnel
		void setId_Personnel(int);									// Initialisation de la m�thode de mutateur de l'id_personnel
		void setNom(System::String^);								// Initialisation de la m�thode de mutateur de Nom
		void setPrenom(System::String^);							// Initialisation de la m�thode de mutateur de Prenom
		void setPoste(System::String^);								// Initialisation de la m�thode de mutateur de Poste
		void setId_adresse(int);									// Initialisation de la m�thode de mutateur de Id_adresse
		void setId_date(int);										// Initialisation de la m�thode de mutateur de Id_date
		int getId_Personnel(void);									// Initialisation de la m�thode d'accesseur de l'id_personnel
		System::String^ getNom(void);								// Initialisation de la m�thode d'accesseur de Nom
		System::String^ getPrenom(void);							// Initialisation de la m�thode d'accesseur de Prenom
		System::String^ getPoste(void);								// Initialisation de la m�thode d'accesseur de Poste
		int getId_adresse(void);									// Initialisation de la m�thode d'accesseur de l'id_adresse
		int getId_date(void);										// Initialisation de la m�thode d'accesseur de l'id_date
	};
}
