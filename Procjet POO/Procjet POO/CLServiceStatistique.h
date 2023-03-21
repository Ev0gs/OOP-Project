#pragma once
#include "CLData.h"
#include "CLmapTB_Statistique.h"
namespace NS_Svc																// D�finition namespace NS_Svc pour repr�senter la couche Service de l'architecture ihm
{
	ref class CLServiceStatistique												// D�finition de la classe CLServiceStatistique
	{
	private:
		NS_Comp::CLData^ oData;													// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CLmapTB_Statistique^ oMappTB_Statistique;						// Instanciation de la classe CLmapTB_Statistique dynamique manag�e
	public:	
		CLServiceStatistique(void);												// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ ArticlesReappro(System::String^);				// Initialisation m�thode d'affichage des articles sous le seuil de r�approvisionnement
		System::Data::DataSet^ ArticlesPlusVendus(System::String^);				// Initialisation m�thode d'affichage des articles les plus vendus
		System::Data::DataSet^ ArticlesMoinsVendus(System::String^);			// Initialisation m�thode d'affichage des articles les moins vendus
		System::Data::DataSet^ ValeurCommercialeStock(System::String^);			// Initialisation m�thode d'affichage de la valeur commerciale du stock
		System::Data::DataSet^ PanierMoyen(System::String^);					// Initialisation m�thode d'affichage du panier moyen
		System::Data::DataSet^ ValeurAchatStock(System::String^);				// Initialisation m�thode d'affichage de la valeur d'achat du stock
		System::Data::DataSet^ TotalAchatsClient(System::String^);				// Initialisation m�thode d'affichage du total des achats d'un client
		System::Data::DataSet^ ChiffreAffaireMois(System::String^);				// Initialisation m�thode d'affichage du chiffre d'affaire par mois
	};
}