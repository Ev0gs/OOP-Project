#pragma once
namespace NS_Comp									// Définition namespace NS_Comp pour représenter la couche Composant de l'architecture ihm
{
	ref class CLmapTB_Stock							// Définition de la classe CLmapTB_Stock
	{
	private:
		System::String^ sSql;
		int id_articles;							// Initialisation de l'attribut qui stocke l'id_articles
		System::String^ Reference;					// Initialisation de l'attribut qui stocke la référence de l'article
		System::String^ Nature;						// Initialisation de l'attribut qui stocke la nature de l'article
		int Quantite;								// Initialisation de l'attribut qui stocke la quantité de l'article
		int SeuilReap;								// Initialisation de l'attribut qui stocke le seuil de réapprovisionnement de l'article
		System::String^ Couleur;					// Initialisation de l'attribut qui stocke la couleur de l'article
		float Taux_tva;								// Initialisation de l'attribut qui stocke le taux de TVA de l'article
		float Prix_unitaire_HT;						// Initialisation de l'attribut qui stocke le prix unitaire HT de l'article
		float Prix_unitaire_TTC;					// Initialisation de l'attribut qui stocke le prix unitaire TTC de l'article
		float Prix_unitaire_TVA;					// Initialisation de l'attribut qui stocke le prix unitaire TVA de l'article
	public:
		System::String^ Select(void);				// Initialisation de la méthode d'affichage du Stock
		System::String^ Insert(void);				// Initialisation de la méthode d'ajout du Stock
		System::String^ Update(void);				// Initialisation de la méthode de modification du Stock
		System::String^ Delete(void);				// Initialisation de la méthode de suppression du Stock
		void setIdArticles(int);					// Initialisation de la méthode de mutateur de l'id_articles
		void setRef(System::String^);				// Initialisation de la méthode de mutateur de Reference
		void setNature(System::String^);			// Initialisation de la méthode de mutateur de Nature
		void setQuantite(int);						// Initialisation de la méthode de mutateur de Quantite
		void setSeuilReap(int);						// Initialisation de la méthode de mutateur de SeuilReap
		void setCouleur(System::String^);			// Initialisation de la méthode de mutateur de Couleur
		void setTauxTVA(float);						// Initialisation de la méthode de mutateur de Taux_tva
		void setPrixUnitaireHT(float);				// Initialisation de la méthode de mutateur de Prix_unitaire_HT
		void setPrixUnitaireTTC(float);				// Initialisation de la méthode de mutateur de Prix_unitaire_TTC
		void setPrixUnitaireTVA(float);				// Initialisation de la méthode de mutateur de Prix_unitaire_TVA
		int getIdArticles(void);					// Initialisation de la méthode d'accesseur de l'id_articles
		System::String^ getRef(void);				// Initialisation de la méthode d'accesseur de Reference
		System::String^ getNature(void);			// Initialisation de la méthode d'accesseur de Nature
		int getQuantite(void);						// Initialisation de la méthode d'accesseur de Quantite
		int getSeuilReap(void);						// Initialisation de la méthode d'accesseur de SeuilReap
		System::String^ getCouleur(void);			// Initialisation de la méthode d'accesseur de Couleur
		float getTauxTVA(void);						// Initialisation de la méthode d'accesseur de Taux_tva
		float getPrixUnitaireHT(void);				// Initialisation de la méthode d'accesseur de Prix_unitaire_HT
		float getPrixUnitaireTTC(void);				// Initialisation de la méthode d'accesseur de Prix_unitaire_TTC
		float getPrixUnitaireTVA(void);				// Initialisation de la méthode d'accesseur de Prix_unitaire_TVA
	};
}

