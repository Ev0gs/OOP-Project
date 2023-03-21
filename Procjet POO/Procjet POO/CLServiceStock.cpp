#include "CLServiceStock.h"

NS_Svc::CLServiceStock::CLServiceStock(void)
{
	this->oData = gcnew NS_Comp::CLData();															// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
	this->oMappTB_Stock = gcnew NS_Comp::CLmapTB_Stock();											// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Stock
}

System::Data::DataSet^ NS_Svc::CLServiceStock::selectionnerTousLesStocks(System::String^ dataTableName)
{
	System::String^ sql;																			// Initialisation variable locale pour stocker les requêtes sql

	sql = this->oMappTB_Stock->Select();															// Stocke requête sql d'affichage du stock
	return this->oData->getRows(sql, dataTableName);												// retourne les Rows obtenus par la fonction getRows
}

void NS_Svc::CLServiceStock::ajouterArticle(System::String^ Ref, System::String^ Nature, int Quantite, int SeuilReap, System::String^ Couleur, float taux_tva, float Prix_unitaire_HT, float Prix_unitaire_TTC, float Prix_unitaire_TVA)
{
	System::String ^ sql;																			// Initialisation variable locale pour stocker les requêtes sql

	this->oMappTB_Stock->setRef(Ref);																// Stockage valeur paramètre Ref dans attribut Reference de l'objet oMappTB_Stock
	this->oMappTB_Stock->setNature(Nature);															// Stockage valeur paramètre Nature dans attribut Nature de l'objet oMappTB_Stock
	this->oMappTB_Stock->setQuantite(Quantite);														// Stockage valeur paramètre Quantite dans attribut Quantite de l'objet oMappTB_Stock
	this->oMappTB_Stock->setSeuilReap(SeuilReap);													// Stockage valeur paramètre SeuilReap dans attribut SeuilReap de l'objet oMappTB_Stock
	this->oMappTB_Stock->setCouleur(Couleur);														// Stockage valeur paramètre Couleur dans attribut Couleur de l'objet oMappTB_Stock
	this->oMappTB_Stock->setTauxTVA(taux_tva);														// Stockage valeur paramètre taux_tva dans attribut Taux_tva de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireHT(Prix_unitaire_HT);										// Stockage valeur paramètre Prix_unitaire_HT dans attribut Prix_unitaire_HT de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTTC(Prix_unitaire_TTC);										// Stockage valeur paramètre Prix_unitaire_TTC dans attribut Prix_unitaire_TTC de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTVA(Prix_unitaire_TVA);										// Stockage valeur paramètre Prix_unitaire_TVA dans attribut Prix_unitaire_TVA de l'objet oMappTB_Stock

	sql = this->oMappTB_Stock->Insert();															// Stockage requête sql d'ajout d'un stock

	this->oData->actionRows(sql);																	// Exécution de la requête sql stockée
}

void NS_Svc::CLServiceStock::modifierArticle(int id_article, System::String^ Ref, System::String^ Nature, int Quantite, int SeuilReap, System::String^ Couleur, float taux_tva, float Prix_unitaire_HT, float Prix_unitaire_TTC, float Prix_unitaire_TVA)
{
	System::String^ sql;																			// Initialisation variable locale pour stocker les requêtes sql
	
	this->oMappTB_Stock->setIdArticles(id_article);													// Stockage valeur paramètre id_article dans attribut id_article de l'objet oMappTB_Stock
	this->oMappTB_Stock->setRef(Ref);																// Stockage valeur paramètre Ref dans attribut Reference de l'objet oMappTB_Stock
	this->oMappTB_Stock->setNature(Nature);															// Stockage valeur paramètre Nature dans attribut Nature de l'objet oMappTB_Stock
	this->oMappTB_Stock->setQuantite(Quantite);														// Stockage valeur paramètre Quantite dans attribut Quantite de l'objet oMappTB_Stock
	this->oMappTB_Stock->setSeuilReap(SeuilReap);													// Stockage valeur paramètre SeuilReap dans attribut SeuilReap de l'objet oMappTB_Stock
	this->oMappTB_Stock->setCouleur(Couleur);														// Stockage valeur paramètre Couleur dans attribut Couleur de l'objet oMappTB_Stock
	this->oMappTB_Stock->setTauxTVA(taux_tva);														// Stockage valeur paramètre taux_tva dans attribut Taux_tva de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireHT(Prix_unitaire_HT);										// Stockage valeur paramètre Prix_unitaire_HT dans attribut Prix_unitaire_HT de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTTC(Prix_unitaire_TTC);										// Stockage valeur paramètre Prix_unitaire_TTC dans attribut Prix_unitaire_TTC de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTVA(Prix_unitaire_TVA);										// Stockage valeur paramètre Prix_unitaire_TVA dans attribut Prix_unitaire_TVA de l'objet oMappTB_Stock

	sql = this->oMappTB_Stock->Update();															// Stockage requête sql de modification d'un stock

	this->oData->actionRows(sql);																	// Exécution de la requête sql stockée
}

void NS_Svc::CLServiceStock::supprimerArticle(int id_article)
{
	System::String^ sql;																			// Initialisation variable locale pour stocker les requêtes sql

	this->oMappTB_Stock->setIdArticles(id_article);													// Stockage valeur paramètre id_article dans attribut id_article de l'objet oMappTB_Stoc 
	
	sql = this->oMappTB_Stock->Delete();															// Stockage requête sql de suppression d'un stock
	this->oData->actionRows(sql);																	// Exécution de la requête sql stockée
}
