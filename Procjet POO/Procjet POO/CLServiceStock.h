#pragma once
#include "CLData.h"
#include "CLmapTB_Stock.h"
namespace NS_Svc																												// Définition namespace NS_Svc pour représenter la couche Service 
{
	ref class CLServiceStock																									// Définition de la classe CLServiceStock
	{
	private:
		NS_Comp::CLData^ oData;																									// Instanciation de la classe CLData dynamique managée
		NS_Comp::CLmapTB_Stock^ oMappTB_Stock;																					// Instanciation de la classe CLmapTB_Stock dynamique managée
	public:
		CLServiceStock(void);																									// Initialisation méthode constructeur par défaut
		System::Data::DataSet^ selectionnerTousLesStocks(System::String^); // Selectionner tous les articles					// Initialisation méthode d'affichage du stock
		void ajouterArticle(System::String^, System::String^, int, int, System::String^, float, float, float, float);			// Initialisation méthode d'ajout du stock
		void modifierArticle(int, System::String^, System::String^, int, int, System::String^, float, float, float, float);		// Initialisation méthode de modification du stock
		void supprimerArticle(int);																								// Initialisation méthode de suppression du stock
	};
}