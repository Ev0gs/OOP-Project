#include "CLmapTB_Commande.h"

System::String^ NS_Comp::CLmapTB_Commande::Select(void)
{
	// Retourne la requête sql d'affichage de la commande

	return "SELECT Commande.Id_commande, Commande.Reference AS [Référence commande], DateEmission.Date AS [Date d'émission], DateLiv.Date AS [Date de livraison]" +	//, Contient.Nombre_articles AS [Nombre d'articles]
				" FROM Commande" +
				" INNER JOIN Date AS DateEmission ON DateEmission.Id_date = Commande.Id_date" +
				" INNER JOIN Date AS DateLiv ON DateLiv.Id_date = Commande.Id_date_livre_le";
}

System::String^ NS_Comp::CLmapTB_Commande::Insert(void)
{
	// Retourne la requête sql d'ajout de la commande

	return "INSERT INTO [Projet_POO].[dbo].[Commande] (Reference, Id_date, Id_date_livre_le, id_client)" +
		" VALUES ('" + this->Ref + "','" + this->id_dateEmission + "','" + this->id_dateLivraison + "','" + this->id_client + "');SELECT @@IDENTITY";
}

System::String^ NS_Comp::CLmapTB_Commande::Delete(void)
{
	// Retourne la requête sql de suppression de la commande

	return "DELETE FROM [Projet_POO].[dbo].[Commande]" +
				" WHERE(Id_commande='" + this->getIdCommande() + "');";
}

/// Mutateurs & Accesseurs///

void NS_Comp::CLmapTB_Commande::setIdCommande(int id_commande)
{
	this->id_commande = id_commande;
}

void NS_Comp::CLmapTB_Commande::setIdDateEmission(int id_dateEmission)
{
	this->id_dateEmission = id_dateEmission;
}

void NS_Comp::CLmapTB_Commande::setIdDateLivraison(int id_dateLivraison)
{
	this->id_dateLivraison = id_dateLivraison;
}

int NS_Comp::CLmapTB_Commande::getIdCommande(void)
{
	return this->id_commande;
}

void NS_Comp::CLmapTB_Commande::setIdClient(int id_client)
{
	this->id_client = id_client;
}

int NS_Comp::CLmapTB_Commande::getIdDateEmission(void)
{
	return this->id_dateEmission;
}

int NS_Comp::CLmapTB_Commande::getIdDateLivraison(void)
{
	return this->id_dateLivraison;
}

void NS_Comp::CLmapTB_Commande::setRef(System::String^ Ref)
{
	this->Ref = Ref;
}

int NS_Comp::CLmapTB_Commande::getIdClient(void)
{
	return this->id_client;
}


void NS_Comp::CLmapTB_Commande::setPrenomClient(System::String^ PrenomClient)
{
	this->PrenomClient = PrenomClient;
}

void NS_Comp::CLmapTB_Commande::setNomClient(System::String^ NomClient)
{
	this->NomClient = NomClient;
}

void NS_Comp::CLmapTB_Commande::setAnneeCommande(System::String^ AnneeCommande)
{
	this->AnneeCommande = AnneeCommande;
}

void NS_Comp::CLmapTB_Commande::setVilleLivraison(System::String^ VilleLivraison)
{
	this->VilleLivraison = VilleLivraison;
}

System::String^ NS_Comp::CLmapTB_Commande::getRef(void)
{
	return this->Ref;
}

System::String^ NS_Comp::CLmapTB_Commande::getPrenomClient(void)
{
	return this->PrenomClient;
}

System::String^ NS_Comp::CLmapTB_Commande::getNomClient(void)
{
	return this->NomClient;
}

System::String^ NS_Comp::CLmapTB_Commande::getAnneeCommande(void)
{
	return this->AnneeCommande;
}

System::String^ NS_Comp::CLmapTB_Commande::getVilleLivraison(void)
{
	return this->VilleLivraison;
}
