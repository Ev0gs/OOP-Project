#pragma once
namespace NS_Comp																								// D�finition namespace NS_Comp pour repr�senter la couche Composant de l'architecture ihm
{
	ref class CLmapTB_Statistique																				// D�finition de la classe CLmapTB_Client
	{
	private:
		System::String^ sSql;
	public:
		System::String^ ArticlesReappro(void);																	// Initialisation de la m�thode d'affichage des articles sous le seuil de reapprovisionnement
		System::String^ ArticlesPlusVendus(void);																// Initialisation de la m�thode d'affichage des 10 articles les plus vendus
		System::String^ ArticlesMoinsVendus(void);																// Initialisation de la m�thode d'affichage des 10 articles les moins vendus
		System::String^ ValeurCommercialeStock(void);															// Initialisation de la m�thode d'affichage de la valeur commerciale du stock
		System::String^ ValeurAchatStock(void);																	// Initialisation de la m�thode d'affichage de la valeur achat du stock
		System::String^ PanierMoyen(void);																		// Initialisation de la m�thode d'affichage du panier moyen
		System::String^ TotalAchatsClient(void);																// Initialisation de la m�thode d'affichage du total achats client
		System::String^ ChiffreAffaireMois(void);																// Initialisation de la m�thode d'affichage du Chiffre d'affaire par mois
	};
}