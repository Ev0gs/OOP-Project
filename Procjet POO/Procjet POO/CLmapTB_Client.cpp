#include "CLmapTB_Client.h"
#include "CLServiceClient.h"

System::String^ NS_Comp::CLmapTB_Client::Select(void)
{
    // Retourne la requête sql d'affichage du client

    return "SELECT [Client].[id_client], [Client].[Nom], [Client].[Prenom], [Adresse_liv].[Adresse] AS [Adresse livraison], [Adresse_liv].[Ville] AS [Ville livraison], [Adresse_liv].[Cp] AS [Code postal livraison], [Adresse_fact].[Adresse] AS [Adresse facturation], [Adresse_fact].[Ville] AS [Ville facturation], [Adresse_fact].[Cp] AS [Code postal facturation], [Date_anniv].[Date] AS [Date d'anniversaire], [Date_premier_achat].[Date] AS [Date premier achat]" +
                "FROM [Projet_POO].[dbo].[Client]"  +
                "INNER JOIN [Projet_POO].[dbo].[Adresse] AS [Adresse_liv] ON [Client].[id_adresse] = [Adresse_liv].[id_adresse]" +
                "INNER JOIN [Projet_POO].[dbo].[Adresse] AS [Adresse_fact] ON [Client].[id_adresse_Facture_a] = [Adresse_fact].[id_adresse]" +
                "INNER JOIN [Projet_POO].[dbo].[Date] AS [Date_anniv] ON [Client].[id_date] = [Date_anniv].[id_date]" +
                "INNER JOIN [Projet_POO].[dbo].[Date] AS [Date_premier_achat] ON [Client].[id_date_premier_achat_le] = [Date_premier_achat].[id_date]";
}

System::String^ NS_Comp::CLmapTB_Client::Insert(void)
{
    // Retourne la requête sql d'ajout du client

    return "INSERT INTO [Projet_POO].[dbo].[Client] (Nom, Prenom, id_adresse, id_adresse_Facture_a, Id_date, Id_date_premier_achat_le)" + 
                "VALUES ('" + this->Nom + "','" + this->Prenom + "','" + this->id_adresseLiv + "','" + this->id_adresseFact + "','" + this->id_dateAnniv + "','" + this->id_datePremierAchat + "');";
}


System::String^ NS_Comp::CLmapTB_Client::Delete(void)
{
    // Retourne la requête sql de suppression du client

    return "DELETE FROM [Projet_POO].[dbo].[Client]" +
                "WHERE(id_client='" + this->getIdClient() + "');";
}


/// Mutateurs ///

void NS_Comp::CLmapTB_Client::setIdClient(int id_client)
{
    this->id_client = id_client;
}

void NS_Comp::CLmapTB_Client::setNom(System::String^ Nom)
{
    this->Nom = Nom;
}

void NS_Comp::CLmapTB_Client::setPrenom(System::String^ Prenom)
{
    this->Prenom = Prenom;
}

void NS_Comp::CLmapTB_Client::setIdAdresseLiv(int idAdresseLiv)
{
    this->id_adresseLiv = idAdresseLiv;
}

void NS_Comp::CLmapTB_Client::setIdAdresseFact(int idAdresseFact)
{
    this->id_adresseFact = idAdresseFact;
}

void NS_Comp::CLmapTB_Client::setIdDateAnniv(int idDateAnniv)
{
    this->id_dateAnniv = idDateAnniv;
}

void NS_Comp::CLmapTB_Client::setIdDatePremierAchat(int idDatePremierAchat)
{
    this->id_datePremierAchat = idDatePremierAchat;
}

/// Accesseurs ///

int NS_Comp::CLmapTB_Client::getIdClient(void)
{
    return this->id_client;
}

System::String^ NS_Comp::CLmapTB_Client::getNom(void)
{
    return this->Nom;
}

System::String^ NS_Comp::CLmapTB_Client::getPrenom(void)
{
    return this->Prenom;
}

int NS_Comp::CLmapTB_Client::getIdAdresseLiv(void)
{
    return this->id_adresseLiv;
}

int NS_Comp::CLmapTB_Client::getIdAdresseFact(void)
{
    return this->id_adresseFact;
}

int NS_Comp::CLmapTB_Client::getIdDateAnniv(void)
{
    return this->id_dateAnniv;
}

int NS_Comp::CLmapTB_Client::getIdDatePremierAchat(void)
{
    return this->id_datePremierAchat;
}
