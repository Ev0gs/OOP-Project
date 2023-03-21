#pragma once
#include "CLData.h"
#include "CLmapTB_Statistique.h"
namespace NS_Svc																// Définition namespace NS_Svc pour représenter la couche Service de l'architecture ihm
{
	ref class CLServiceStatistique												// Définition de la classe CLServiceStatistique
	{
	private:
		NS_Comp::CLData^ oData;													// Instanciation de la classe CLData dynamique managée
		NS_Comp::CLmapTB_Statistique^ oMappTB_Statistique;						// Instanciation de la classe CLmapTB_Statistique dynamique managée
	public:	
		CLServiceStatistique(void);												// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ ArticlesReappro(System::String^);				// Initialisation méthode d'affichage des articles sous le seuil de réapprovisionnement
		System::Data::DataSet^ ArticlesPlusVendus(System::String^);				// Initialisation méthode d'affichage des articles les plus vendus
		System::Data::DataSet^ ArticlesMoinsVendus(System::String^);			// Initialisation méthode d'affichage des articles les moins vendus
		System::Data::DataSet^ ValeurCommercialeStock(System::String^);			// Initialisation méthode d'affichage de la valeur commerciale du stock
		System::Data::DataSet^ PanierMoyen(System::String^);					// Initialisation méthode d'affichage du panier moyen
		System::Data::DataSet^ ValeurAchatStock(System::String^);				// Initialisation méthode d'affichage de la valeur d'achat du stock
		System::Data::DataSet^ TotalAchatsClient(System::String^);				// Initialisation méthode d'affichage du total des achats d'un client
		System::Data::DataSet^ ChiffreAffaireMois(System::String^);				// Initialisation méthode d'affichage du chiffre d'affaire par mois
	};
}