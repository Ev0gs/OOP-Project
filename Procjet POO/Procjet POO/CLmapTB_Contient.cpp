#include "CLmapTB_Contient.h"

System::String^ NS_Comp::CLmapTB_Contient::Insert(void)
{
    return "INSERT INTO Contient (Id_articles, Id_commande, Nombre_articles)" +
        "VALUES ('" + this->Id_articles + "','" + this->Id_commande + "','" + this->Nombre_articles + "');";
}

void NS_Comp::CLmapTB_Contient::setIdArticles(int Id_articles)
{
    this->Id_articles = Id_articles;
}

void NS_Comp::CLmapTB_Contient::setIdCommande(int IdCommande)
{
    this->Id_commande = IdCommande;
}

void NS_Comp::CLmapTB_Contient::setNbArticles(int Nombre_articles)
{
    this->Nombre_articles = Nombre_articles;
}

int NS_Comp::CLmapTB_Contient::getIdArticles(void)
{
    return this->Id_articles;
}

int NS_Comp::CLmapTB_Contient::getIdCommande(void)
{
    return this->Id_commande;
}

int NS_Comp::CLmapTB_Contient::getNbArticles(void)
{
    return this->Nombre_articles;
}
