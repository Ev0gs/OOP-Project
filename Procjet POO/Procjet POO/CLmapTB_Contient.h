#pragma once
namespace NS_Comp
{
	ref class CLmapTB_Contient
	{
	private:
		int Id_articles;
		int Id_commande;
		int Nombre_articles;
	public:
		System::String^ Insert(void);
		void setIdArticles(int);
		void setIdCommande(int);
		void setNbArticles(int);
		int getIdArticles(void);
		int getIdCommande(void);
		int getNbArticles(void);
	};
}