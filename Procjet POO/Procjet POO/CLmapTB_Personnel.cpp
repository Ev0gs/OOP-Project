#include "CLmapTB_Personnel.h"

System::String^ NS_Comp::CLmapTB_Personnel::Select(void)
{
    // Retour de la requête SQL permettant d'afficher le personnel

    return "SELECT [Personnel].[id_personnel], [Personnel].[Nom], [Personnel].[Prenom], [Personnel].[Poste], [Adresse].[Adresse], [Adresse].[Ville], [Adresse].[Cp] AS [Code postal], [Date].[Date] AS [Date d'embauche]" 
        + "FROM [Projet_POO].[dbo].[Personnel]" 
        + "INNER JOIN [Projet_POO].[dbo].[Adresse] ON [Personnel].[id_adresse] = [Adresse].[id_adresse]" 
        + "INNER JOIN [Projet_POO].[dbo].[Date] ON [Personnel].[id_date] = [Date].[Id_date]";
}

System::String^ NS_Comp::CLmapTB_Personnel::Insert(void)
{
    // Retour de la requête SQL permettant d'ajouter le personnel

    return "INSERT INTO Personnel (Nom, Prenom, Poste, id_adresse, Id_date)" + 
                "VALUES('" + this->Nom + "','" + this->Prenom + "','" + this->Poste + "','" + this->id_adresse + "','" + this->id_date + "');SELECT @@IDENTITY;";
}

System::String^ NS_Comp::CLmapTB_Personnel::Delete(void)
{
    // Retour de la requête SQL permettant de supprimer le personnel

    return "DELETE FROM [Projet_POO].[dbo].[Personnel]" +
                "WHERE(id_personnel='" + this->getId_Personnel() + "');";
}

/// Mutateurs ///

void NS_Comp::CLmapTB_Personnel::setId_Personnel(int Id)
{
    this->id_personnel = Id;
}

void NS_Comp::CLmapTB_Personnel::setNom(System::String^ Nom)
{
    this->Nom = Nom;
}

void NS_Comp::CLmapTB_Personnel::setPrenom(System::String^ Prenom)
{
    this->Prenom = Prenom;
}

void NS_Comp::CLmapTB_Personnel::setPoste(System::String^ poste)
{
    this->Poste = poste;
}

void NS_Comp::CLmapTB_Personnel::setId_adresse(int id_adresse)
{
    this->id_adresse = id_adresse;
}

void NS_Comp::CLmapTB_Personnel::setId_date(int id_date)
{
    this->id_date = id_date;
}

/// Accesseurs ///

int NS_Comp::CLmapTB_Personnel::getId_Personnel(void)
{
    return this->id_personnel;
}

System::String^ NS_Comp::CLmapTB_Personnel::getNom(void)
{
    return this->Nom;
}

System::String^ NS_Comp::CLmapTB_Personnel::getPrenom(void)
{
    return this->Prenom;
}

System::String^ NS_Comp::CLmapTB_Personnel::getPoste(void)
{
    return this->Poste;
}

int NS_Comp::CLmapTB_Personnel::getId_adresse(void)
{
    return this->id_adresse;
}

int NS_Comp::CLmapTB_Personnel::getId_date(void)
{
    return this->id_date;
}
