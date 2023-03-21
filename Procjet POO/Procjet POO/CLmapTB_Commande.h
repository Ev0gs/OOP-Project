#pragma once
namespace NS_Comp												// Définition namespace NS_Comp pour représenter la couche Composant de l'architecture ihm
{
	ref class CLmapTB_Commande									// Définition de la classe CLmapTB_Commande
	{
	private:
		System::String^ sSql;
		int id_commande;										// Initialisation de l'attribut qui stocke l'id_commande
		int id_dateEmission;									// Initialisation de l'attribut qui stocke l'id_dateEmission de la commande
		int id_dateLivraison;									// Initialisation de l'attribut qui stocke l'id_dateLivraison de la commande
		int id_client;											// Initialisation de l'attribut qui stocke l'id_client de la commande
		//////POUR REFERENCE//////
		System::String^ Ref;									// Initialisation de l'attribut qui stocke la référence de la commande
		System::String^ PrenomClient;							// Initialisation de l'attribut qui stocke le prénom du client de la commande
		System::String^ NomClient;								// Initialisation de l'attribut qui stocke le nom du client de la commande
		System::String^ AnneeCommande;							// Initialisation de l'attribut qui stocke l'année de la commande
		System::String^ VilleLivraison;							// Initialisation de l'attribut qui stocke la ville de livraison de la commande
		static int increment;									// Initialisation de l'attribut qui s'incrémente pour la référence de la commande
		//////////////////////////
	public:
		System::String^ Select(void);							// Initialisation de la méthode d'affichage de la commande				
		System::String^ Insert(void);							// Initialisation de la méthode d'ajout de commande
		System::String^ Delete(void);							// Initialisation de la méthode de suppression de commande
		void setIdCommande(int);								// Initialisation de la méthode de mutateur de l'id_commande
		void setIdDateEmission(int);							// Initialisation de la méthode de mutateur de l'id_dateEmission
		void setIdDateLivraison(int);							// Initialisation de la méthode de mutateur de l'id_dateLivraison
		void setIdClient(int);									// Initialisation de la méthode de mutateur de l'id_client
		int getIdCommande(void);								// Initialisation de la méthode d'accesseur de l'id_commande
		int getIdDateEmission(void);							// Initialisation de la méthode d'accesseur de l'id_dateEmission
		int getIdDateLivraison(void);							// Initialisation de la méthode d'accesseur de l'id_dateLivraison
		int getIdClient(void);									// Initialisation de la méthode d'accesseur de l'id_client
		//////POUR REFERENCE//////
		void setRef(System::String^);							// Initialisation de la méthode de mutateur de la référence
		void setPrenomClient(System::String^);					// Initialisation de la méthode de mutateur de PrenomClient
		void setNomClient(System::String^);						// Initialisation de la méthode de mutateur de NomClient
		void setAnneeCommande(System::String^);					// Initialisation de la méthode de mutateur de AnneeCommande
		void setVilleLivraison(System::String^);				// Initialisation de la méthode de mutateur de VilleLivraison
		System::String^ getRef(void);							// Initialisation de la méthode d'accesseur de la Référence
		System::String^ getPrenomClient(void);					// Initialisation de la méthode d'accesseur de PrenomClient
		System::String^ getNomClient(void);						// Initialisation de la méthode d'accesseur de NomClient
		System::String^ getAnneeCommande(void);					// Initialisation de la méthode d'accesseur de AnneCommande
		System::String^ getVilleLivraison(void);				// Initialisation de la méthode d'accesseur de VilleLivraison
		//////////////////////////
	};
}
