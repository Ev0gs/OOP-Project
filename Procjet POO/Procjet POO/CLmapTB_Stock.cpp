#include "CLmapTB_Stock.h"

System::String^ NS_Comp::CLmapTB_Stock::Select(void)
{
    // Retourne la requête sql d'affichage du stock

    return "SELECT *" +
                "FROM [Projet_POO].[dbo].[Articles]";
}

System::String^ NS_Comp::CLmapTB_Stock::Insert(void)    // Fonctionne mais ne veut pas prendre de virgule. Pourquoi???
{
    // Retourne la requête sql d'ajout du stock

    return "INSERT INTO [Projet_POO].[dbo].[Articles] (Reference, Nature, Quantite, Seuil_Reapprovisionnement, Couleur, Taux_tva, Prix_unitaire_ht, Prix_unitaire_ttc, Prix_unitaire_tva)" +
                "VALUES ('" + this->Reference + "','" + this->Nature + "','" + this->Quantite + "','" + this->SeuilReap + "','" + this->Couleur + "','" + this->Taux_tva + "','" + this->Prix_unitaire_HT + "','" + this->Prix_unitaire_TTC + "','" + this->Prix_unitaire_TVA +"');";
}

System::String^ NS_Comp::CLmapTB_Stock::Update(void)
{
    // Retourne la requête sql de modification du stock

    return "UPDATE [Projet_POO].[dbo].[Articles]" +
        "SET Reference='" + this->Reference + "', Nature='" + this->Nature + "', Quantite='" + this->Quantite + "', Seuil_Reapprovisionnement='" + this->Quantite + "', Couleur='" + this->Couleur + "', Taux_tva='" + this->Taux_tva + "', Prix_unitaire_ht='" + this->Prix_unitaire_HT + "', Prix_unitaire_ttc='" + this->Prix_unitaire_TTC + "', Prix_unitaire_tva='" + this->Prix_unitaire_TVA + "'" +
        "WHERE(Id_articles='" + this->id_articles + "');";
}

System::String^ NS_Comp::CLmapTB_Stock::Delete(void)
{
    // Retourne la requête sql de suppression du stock

    return "DELETE FROM [Projet_POO].[dbo].[Articles]" +
        "WHERE(Id_articles='" + this->getIdArticles() + "');";
}

/// Mutateurs ///

void NS_Comp::CLmapTB_Stock::setIdArticles(int id_articles)
{
    this->id_articles = id_articles;
}

void NS_Comp::CLmapTB_Stock::setRef(System::String^ Ref)
{
    this->Reference = Ref;
}

void NS_Comp::CLmapTB_Stock::setNature(System::String^ Nature)
{
    this->Nature = Nature;
}

void NS_Comp::CLmapTB_Stock::setQuantite(int Quantite)
{
    this->Quantite = Quantite;
}

void NS_Comp::CLmapTB_Stock::setSeuilReap(int SeuilReap)
{
    this->SeuilReap = SeuilReap;
}

void NS_Comp::CLmapTB_Stock::setCouleur(System::String^ Couleur)
{
    this->Couleur = Couleur;
}

void NS_Comp::CLmapTB_Stock::setTauxTVA(float TVA)
{
    this->Taux_tva = TVA;
}

void NS_Comp::CLmapTB_Stock::setPrixUnitaireHT(float Prix_unitaire_HT)
{
    this->Prix_unitaire_HT = Prix_unitaire_HT;
}

void NS_Comp::CLmapTB_Stock::setPrixUnitaireTTC(float Prix_unitaire_TTC)
{
    this->Prix_unitaire_TTC = Prix_unitaire_TTC;
}

void NS_Comp::CLmapTB_Stock::setPrixUnitaireTVA(float Prix_unitaire_TVA)
{
    this->Prix_unitaire_TVA = Prix_unitaire_TVA;
}

/// Accesseurs ///

int NS_Comp::CLmapTB_Stock::getIdArticles(void)
{
    return this->id_articles;
}

System::String^ NS_Comp::CLmapTB_Stock::getRef(void)
{
    return this->Reference;
}

System::String^ NS_Comp::CLmapTB_Stock::getNature(void)
{
    return this->Nature;
}

int NS_Comp::CLmapTB_Stock::getQuantite(void)
{
    return this->Quantite;
}

int NS_Comp::CLmapTB_Stock::getSeuilReap(void)
{
    return this->SeuilReap;
}

System::String^ NS_Comp::CLmapTB_Stock::getCouleur(void)
{
    return this->Couleur;
}

float NS_Comp::CLmapTB_Stock::getTauxTVA(void)
{
    return this->Taux_tva;
}

float NS_Comp::CLmapTB_Stock::getPrixUnitaireHT(void)
{
    return this->Prix_unitaire_HT;
}

float NS_Comp::CLmapTB_Stock::getPrixUnitaireTTC(void)
{
    return this->Prix_unitaire_TTC;
}

float NS_Comp::CLmapTB_Stock::getPrixUnitaireTVA(void)
{
    return this->Prix_unitaire_TVA;
}
