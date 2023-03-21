#pragma once
namespace NS_Comp									// D�finition namespace NS_Comp pour repr�senter la couche Composant de l'architecture ihm
{
	ref class CLmapTB_Stock							// D�finition de la classe CLmapTB_Stock
	{
	private:
		System::String^ sSql;
		int id_articles;							// Initialisation de l'attribut qui stocke l'id_articles
		System::String^ Reference;					// Initialisation de l'attribut qui stocke la r�f�rence de l'article
		System::String^ Nature;						// Initialisation de l'attribut qui stocke la nature de l'article
		int Quantite;								// Initialisation de l'attribut qui stocke la quantit� de l'article
		int SeuilReap;								// Initialisation de l'attribut qui stocke le seuil de r�approvisionnement de l'article
		System::String^ Couleur;					// Initialisation de l'attribut qui stocke la couleur de l'article
		float Taux_tva;								// Initialisation de l'attribut qui stocke le taux de TVA de l'article
		float Prix_unitaire_HT;						// Initialisation de l'attribut qui stocke le prix unitaire HT de l'article
		float Prix_unitaire_TTC;					// Initialisation de l'attribut qui stocke le prix unitaire TTC de l'article
		float Prix_unitaire_TVA;					// Initialisation de l'attribut qui stocke le prix unitaire TVA de l'article
	public:
		System::String^ Select(void);				// Initialisation de la m�thode d'affichage du Stock
		System::String^ Insert(void);				// Initialisation de la m�thode d'ajout du Stock
		System::String^ Update(void);				// Initialisation de la m�thode de modification du Stock
		System::String^ Delete(void);				// Initialisation de la m�thode de suppression du Stock
		void setIdArticles(int);					// Initialisation de la m�thode de mutateur de l'id_articles
		void setRef(System::String^);				// Initialisation de la m�thode de mutateur de Reference
		void setNature(System::String^);			// Initialisation de la m�thode de mutateur de Nature
		void setQuantite(int);						// Initialisation de la m�thode de mutateur de Quantite
		void setSeuilReap(int);						// Initialisation de la m�thode de mutateur de SeuilReap
		void setCouleur(System::String^);			// Initialisation de la m�thode de mutateur de Couleur
		void setTauxTVA(float);						// Initialisation de la m�thode de mutateur de Taux_tva
		void setPrixUnitaireHT(float);				// Initialisation de la m�thode de mutateur de Prix_unitaire_HT
		void setPrixUnitaireTTC(float);				// Initialisation de la m�thode de mutateur de Prix_unitaire_TTC
		void setPrixUnitaireTVA(float);				// Initialisation de la m�thode de mutateur de Prix_unitaire_TVA
		int getIdArticles(void);					// Initialisation de la m�thode d'accesseur de l'id_articles
		System::String^ getRef(void);				// Initialisation de la m�thode d'accesseur de Reference
		System::String^ getNature(void);			// Initialisation de la m�thode d'accesseur de Nature
		int getQuantite(void);						// Initialisation de la m�thode d'accesseur de Quantite
		int getSeuilReap(void);						// Initialisation de la m�thode d'accesseur de SeuilReap
		System::String^ getCouleur(void);			// Initialisation de la m�thode d'accesseur de Couleur
		float getTauxTVA(void);						// Initialisation de la m�thode d'accesseur de Taux_tva
		float getPrixUnitaireHT(void);				// Initialisation de la m�thode d'accesseur de Prix_unitaire_HT
		float getPrixUnitaireTTC(void);				// Initialisation de la m�thode d'accesseur de Prix_unitaire_TTC
		float getPrixUnitaireTVA(void);				// Initialisation de la m�thode d'accesseur de Prix_unitaire_TVA
	};
}

