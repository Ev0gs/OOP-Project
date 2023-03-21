#include "CLServiceCommande.h"

NS_Svc::CLServiceCommande::CLServiceCommande(void)
{
	this->oData = gcnew NS_Comp::CLData();													// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
	this->oMappTB_Commande = gcnew NS_Comp::CLmapTB_Commande();								// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Commande
	this->oMappTB_DateEmission = gcnew NS_Comp::CLmapTB_Date();								// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
	this->oMappTB_DateLivraison = gcnew NS_Comp::CLmapTB_Date();							// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
}

System::Data::DataSet^ NS_Svc::CLServiceCommande::selectionnerToutesLesCommandes(System::String^ dataTableName)
{
	System::String^ sql;																	// Initialisation variable locale pour stocker les requ�tes sql

	sql = this->oMappTB_Commande->Select();													// Stocke requ�te sql d'affichage des commandes
	return this->oData->getRows(sql, dataTableName);										// retourne les Rows obtenus par la fonction getRows
}

void NS_Svc::CLServiceCommande::ajouterCommande(System::String^ PrenomClient, System::String^ NomClient, System::String^ DateCommande, System::String^ VilleLivraison, System::String^ dateEmission, System::String^ dateLivraison, int id_Client)
{
	System::String^ sql;																	// Initialisation variable locale pour stocker les requ�tes sql
	int id_dateEm;																			// Initialisation variable locale pour stocker l'id_dateEm
	int id_dateLiv;																			// Initialisation variable locale pour stocker l'id_dateLiv

	//////////////////////////////////////////////////////////Reference//////////////////////////////////////////////////////////
	this->oMappTB_Commande->setPrenomClient(PrenomClient);									// Stockage valeur param�tre PrenomClient dans attribut PrenomClient de l'objet oMappTB_Commande		
	this->oMappTB_Commande->setNomClient(NomClient);										// Stockage valeur param�tre NomClient dans attribut NomClient de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setAnneeCommande(DateCommande);									// Stockage valeur param�tre DateCommande dans attribut DateCommande de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setVilleLivraison(VilleLivraison);								// Stockage valeur param�tre VilleLivraison dans attribut VilleLivraison de l'objet oMappTB_Commande	
	this->setReference();																	// Ex�cution de la fonction mutateur de Reference
	
	//////////////////////////////////////////////////////////Date Emission//////////////////////////////////////////////////////////
	this->oMappTB_DateEmission->setDate(dateEmission);										// Stockage valeur param�tre dateEmission dans attribut Date de l'objet oMappTB_DateEmission

	sql = this->oMappTB_DateEmission->Insert();												// Stockage requ�te sql d'ajout d'une date
	id_dateEm = this->oData->actionRowsID(sql);												// Ex�cution de la requ�te sql stock�e et stockage de l'id_date retourn� dans la variable id_dateEm

	//////////////////////////////////////////////////////////Date livraison//////////////////////////////////////////////////////////
	this->oMappTB_DateLivraison->setDate(dateLivraison);									// Stockage valeur param�tre dateLivraison dans attribut Date de l'objet oMappTB_DateLivraison

	sql = this->oMappTB_DateLivraison->Insert();											// Stockage requ�te sql d'ajout d'une date
	id_dateLiv = this->oData->actionRowsID(sql);											// Ex�cution de la requ�te sql stock�e et stockage de l'id_date retourn� dans la variable id_dateLiv

	//////////////////////////////////////////////////////////Commande//////////////////////////////////////////////////////////
	this->oMappTB_Commande->setRef(this->getReference());									// Stockage valeur attribut Reference dans attribut Reference de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setIdDateEmission(id_dateEm);									// Stockage valeur variable id_dateEm dans attribut id_dateEm de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setIdDateLivraison(id_dateLiv);									// Stockage valeur variable id_dateLiv dans attribut id_dateLiv de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setIdClient(id_Client);											// Stockage valeur param�tre id_client dans attribut id_client de l'objet oMappTB_Commande

	sql = this->oMappTB_Commande->Insert();													// Stockage requ�te sql d'ajout d'une date
	this->oData->actionRows(sql);															// Ex�cution de la requ�te sql stock�e
}

void NS_Svc::CLServiceCommande::modifierCommande(int id_commande, System::String^ PrenomClient, System::String^ NomClient, System::String^ DateCommande, System::String^ VilleLivraison, System::String^ dateEmission, System::String^ dateLivraison, int Id_Client)
{
	System::String^ sql;																	// Initialisation variable locale pour stocker les requ�tes sql

	this->oMappTB_Commande->setIdCommande(id_commande);										// Stockage valeur param�tre id_commande dans attribut id_commande de l'objet oMappTB_Commande
	this->oMappTB_Commande->setPrenomClient(PrenomClient);									// Stockage valeur param�tre PrenomClient dans attribut PrenomClient de l'objet oMappTB_Commande
	this->oMappTB_Commande->setNomClient(NomClient);										// Stockage valeur param�tre NomClient dans attribut NomClient de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setAnneeCommande(DateCommande);									// Stockage valeur param�tre DateCommande dans attribut DateCommande de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setVilleLivraison(VilleLivraison);								// Stockage valeur param�tre VilleLivraison dans attribut VilleLivraison de l'objet oMappTB_Commande	
	this->oMappTB_Commande->setIdClient(Id_Client);											// Stockage valeur param�tre Id_Client dans attribut id_client de l'objet oMappTB_Commande
	this->setReference();																	// Ex�cution de la fonction mutateur de Reference

	this->oMappTB_DateEmission->setDate(dateEmission);										// Stockage valeur param�tre dateEmission dans attribut Date de l'objet oMappTB_DateEmission

	this->oMappTB_DateLivraison->setDate(dateLivraison);									// Stockage valeur param�tre dateLivraison dans attribut Date de l'objet oMappTB_DateLivraison

	this->oMappTB_Commande->setRef(this->getReference());									// Stockage valeur attribut Reference dans attribut Reference de l'objet oMappTB_Commande

	// Stockage requ�te sql de modification des commandes suivante
	sql = "UPDATE Commande" +
		" SET Reference='" + this->oMappTB_Commande->getRef() + "'" +
		" WHERE(Commande.Id_commande='" + this->oMappTB_Commande->getIdCommande() + "')" +
		" UPDATE Date" +
		" SET Date='" + this->oMappTB_DateEmission->getDate() + "'" +
		" FROM Date INNER JOIN Commande ON Date.Id_date = Commande.Id_date"
		" WHERE(Commande.Id_commande='" + this->oMappTB_Commande->getIdCommande() + "')" +
		" UPDATE Date" +
		" SET Date='" + this->oMappTB_DateLivraison->getDate() + "'" +
		" FROM Date INNER JOIN Commande ON Date.Id_date = Commande.Id_date_livre_le"
		" WHERE(Commande.Id_commande='" + this->oMappTB_Commande->getIdCommande() + "')";

	this->oData->actionRows(sql);															// Ex�cution de la requ�te sql stock�e
}

void NS_Svc::CLServiceCommande::supprimerCommande(int id_commande)
{
	System::String^ sql;																	// Initialisation variable locale pour stocker les requ�tes sql

	this->oMappTB_Commande->setIdCommande(id_commande);										// Stockage valeur param�tre id_commande dans attribut id_commande de l'objet oMappTB_Commande

	sql = this->oMappTB_Commande->Delete();													// Stockage requ�te sql de suppression d'une commande
	this->oData->actionRows(sql);															// Ex�cution de la requ�te sql stock�e
}

/// Mutateur de Reference ///

void NS_Svc::CLServiceCommande::setReference()
{
	this->Reference = "";																	// Vide la variable Reference
	// R�cup�ration 2 premi�res lettres pr�nom client
	for (int i = 0; i < 2; i++)
	{
		this->Reference += this->oMappTB_Commande->getPrenomClient()[i];
	}
	// R�cup�ration 2 premi�res lettres nom client
	for (int i = 0; i < 2; i++)
	{
		this->Reference += this->oMappTB_Commande->getNomClient()[i];
	}
	// R�cup�ration ann�e commande
	for (int i = 0; i < 4; i++)
	{
		this->Reference += this->oMappTB_Commande->getAnneeCommande()[i];					//Ecrire Date de cette fa�on : YYYY-MM-DD
	}
	// R�cup�ration 3 premi�res lettres ville livraison
	for (int i = 0; i < 3; i++)
	{
		this->Reference += this->oMappTB_Commande->getVilleLivraison()[i];
	}
	this->Reference += this->increment;														// Ajout increment
	this->increment++;																		// incr�mentation
}

/// Accesseur de Reference ///

System::String^ NS_Svc::CLServiceCommande::getReference(void)
{
	return this->Reference;
}


