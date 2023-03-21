#include "CLServiceStatistique.h"

NS_Svc::CLServiceStatistique::CLServiceStatistique(void)
{
    this->oData = gcnew NS_Comp::CLData();                                          // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
    this->oMappTB_Statistique = gcnew NS_Comp::CLmapTB_Statistique();               // Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Statistique
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ArticlesReappro(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->ArticlesReappro();                             // Stocke requ�te sql d'affichage des articles sous le seuil de r�approvisionnement
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ArticlesPlusVendus(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->ArticlesPlusVendus();                          // Stocke requ�te sql d'affichage des articles les plus vendus
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ArticlesMoinsVendus(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->ArticlesMoinsVendus();                         // Stocke requ�te sql d'affichage des articles les moins vendus
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ValeurCommercialeStock(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql
        
    sql = this->oMappTB_Statistique->ValeurCommercialeStock();                      // Stocke requ�te sql d'affichage de la valeur commerciale du stock
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::PanierMoyen(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->PanierMoyen();                                 // Stocke requ�te sql d'affichage du panier moyen
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ValeurAchatStock(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->ValeurAchatStock();                            // Stocke requ�te sql d'affichage de la valeur d'achat du stock
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::TotalAchatsClient(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->TotalAchatsClient();                           // Stocke requ�te sql d'affichage du total des achats d'un client
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}

System::Data::DataSet^ NS_Svc::CLServiceStatistique::ChiffreAffaireMois(System::String^ dataTableName)
{
    System::String^ sql;                                                            // Initialisation variable locale pour stocker les requ�tes sql

    sql = this->oMappTB_Statistique->ChiffreAffaireMois();                          // Stocke requ�te sql d'affichage du chiffre d'affaire par mois
    return this->oData->getRows(sql, dataTableName);                                // Ex�cution de la requ�te sql stock�e
}
