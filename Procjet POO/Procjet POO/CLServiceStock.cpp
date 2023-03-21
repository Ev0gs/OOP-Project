#include "CLServiceStock.h"

NS_Svc::CLServiceStock::CLServiceStock(void)
{
	this->oData = gcnew NS_Comp::CLData();															// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
	this->oMappTB_Stock = gcnew NS_Comp::CLmapTB_Stock();											// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Stock
}

System::Data::DataSet^ NS_Svc::CLServiceStock::selectionnerTousLesStocks(System::String^ dataTableName)
{
	System::String^ sql;																			// Initialisation variable locale pour stocker les requ�tes sql

	sql = this->oMappTB_Stock->Select();															// Stocke requ�te sql d'affichage du stock
	return this->oData->getRows(sql, dataTableName);												// retourne les Rows obtenus par la fonction getRows
}

void NS_Svc::CLServiceStock::ajouterArticle(System::String^ Ref, System::String^ Nature, int Quantite, int SeuilReap, System::String^ Couleur, float taux_tva, float Prix_unitaire_HT, float Prix_unitaire_TTC, float Prix_unitaire_TVA)
{
	System::String ^ sql;																			// Initialisation variable locale pour stocker les requ�tes sql

	this->oMappTB_Stock->setRef(Ref);																// Stockage valeur param�tre Ref dans attribut Reference de l'objet oMappTB_Stock
	this->oMappTB_Stock->setNature(Nature);															// Stockage valeur param�tre Nature dans attribut Nature de l'objet oMappTB_Stock
	this->oMappTB_Stock->setQuantite(Quantite);														// Stockage valeur param�tre Quantite dans attribut Quantite de l'objet oMappTB_Stock
	this->oMappTB_Stock->setSeuilReap(SeuilReap);													// Stockage valeur param�tre SeuilReap dans attribut SeuilReap de l'objet oMappTB_Stock
	this->oMappTB_Stock->setCouleur(Couleur);														// Stockage valeur param�tre Couleur dans attribut Couleur de l'objet oMappTB_Stock
	this->oMappTB_Stock->setTauxTVA(taux_tva);														// Stockage valeur param�tre taux_tva dans attribut Taux_tva de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireHT(Prix_unitaire_HT);										// Stockage valeur param�tre Prix_unitaire_HT dans attribut Prix_unitaire_HT de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTTC(Prix_unitaire_TTC);										// Stockage valeur param�tre Prix_unitaire_TTC dans attribut Prix_unitaire_TTC de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTVA(Prix_unitaire_TVA);										// Stockage valeur param�tre Prix_unitaire_TVA dans attribut Prix_unitaire_TVA de l'objet oMappTB_Stock

	sql = this->oMappTB_Stock->Insert();															// Stockage requ�te sql d'ajout d'un stock

	this->oData->actionRows(sql);																	// Ex�cution de la requ�te sql stock�e
}

void NS_Svc::CLServiceStock::modifierArticle(int id_article, System::String^ Ref, System::String^ Nature, int Quantite, int SeuilReap, System::String^ Couleur, float taux_tva, float Prix_unitaire_HT, float Prix_unitaire_TTC, float Prix_unitaire_TVA)
{
	System::String^ sql;																			// Initialisation variable locale pour stocker les requ�tes sql
	
	this->oMappTB_Stock->setIdArticles(id_article);													// Stockage valeur param�tre id_article dans attribut id_article de l'objet oMappTB_Stock
	this->oMappTB_Stock->setRef(Ref);																// Stockage valeur param�tre Ref dans attribut Reference de l'objet oMappTB_Stock
	this->oMappTB_Stock->setNature(Nature);															// Stockage valeur param�tre Nature dans attribut Nature de l'objet oMappTB_Stock
	this->oMappTB_Stock->setQuantite(Quantite);														// Stockage valeur param�tre Quantite dans attribut Quantite de l'objet oMappTB_Stock
	this->oMappTB_Stock->setSeuilReap(SeuilReap);													// Stockage valeur param�tre SeuilReap dans attribut SeuilReap de l'objet oMappTB_Stock
	this->oMappTB_Stock->setCouleur(Couleur);														// Stockage valeur param�tre Couleur dans attribut Couleur de l'objet oMappTB_Stock
	this->oMappTB_Stock->setTauxTVA(taux_tva);														// Stockage valeur param�tre taux_tva dans attribut Taux_tva de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireHT(Prix_unitaire_HT);										// Stockage valeur param�tre Prix_unitaire_HT dans attribut Prix_unitaire_HT de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTTC(Prix_unitaire_TTC);										// Stockage valeur param�tre Prix_unitaire_TTC dans attribut Prix_unitaire_TTC de l'objet oMappTB_Stock
	this->oMappTB_Stock->setPrixUnitaireTVA(Prix_unitaire_TVA);										// Stockage valeur param�tre Prix_unitaire_TVA dans attribut Prix_unitaire_TVA de l'objet oMappTB_Stock

	sql = this->oMappTB_Stock->Update();															// Stockage requ�te sql de modification d'un stock

	this->oData->actionRows(sql);																	// Ex�cution de la requ�te sql stock�e
}

void NS_Svc::CLServiceStock::supprimerArticle(int id_article)
{
	System::String^ sql;																			// Initialisation variable locale pour stocker les requ�tes sql

	this->oMappTB_Stock->setIdArticles(id_article);													// Stockage valeur param�tre id_article dans attribut id_article de l'objet oMappTB_Stoc 
	
	sql = this->oMappTB_Stock->Delete();															// Stockage requ�te sql de suppression d'un stock
	this->oData->actionRows(sql);																	// Ex�cution de la requ�te sql stock�e
}
