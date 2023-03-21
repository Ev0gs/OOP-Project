#include "CLServiceStatistique.h"

NS_Svc::CLServiceStatistique::CLServiceStatistique(void)
{
    this->oData = gcnew NS_Comp::CLData();                                          // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
    this->oMappTB_Statistique = gcnew NS_Comp::CLmapTB_Statistique();               // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Statistique
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ArticlesReappro(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->ArticlesReappro();                             // Stocke requête sql d'affichage des articles sous le seuil de réapprovisionnement
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ArticlesPlusVendus(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->ArticlesPlusVendus();                          // Stocke requête sql d'affichage des articles les plus vendus
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ArticlesMoinsVendus(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->ArticlesMoinsVendus();                         // Stocke requête sql d'affichage des articles les moins vendus
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ValeurCommercialeStock(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql
        
    sql = this->oMappTB_Statistique->ValeurCommercialeStock();                      // Stocke requête sql d'affichage de la valeur commerciale du stock
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::PanierMoyen(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->PanierMoyen();                                 // Stocke requête sql d'affichage du panier moyen
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ValeurAchatStock(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->ValeurAchatStock();                            // Stocke requête sql d'affichage de la valeur d'achat du stock
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::TotalAchatsClient(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->TotalAchatsClient();                           // Stocke requête sql d'affichage du total des achats d'un client
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ChiffreAffaireMois(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requêtes sql

    sql = this->oMappTB_Statistique->ChiffreAffaireMois();                          // Stocke requête sql d'affichage du chiffre d'affaire par mois
    return this->oData->getRows(sql, dataTableName);                                // Exécution de la requête sql stockée
}
