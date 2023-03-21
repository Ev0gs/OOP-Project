#pragma once
#include "CLData.h"
#include "CLmapTB_Stock.h"
namespace NS_Svc																												// D�finition namespace NS_Svc pour repr�senter la couche Service 
{
	ref class CLServiceStock																									// D�finition de la classe CLServiceStock
	{
	private:
		NS_Comp::CLData^ oData;																									// Instanciation de la classe CLData dynamique manag�e
		NS_Comp::CLmapTB_Stock^ oMappTB_Stock;																					// Instanciation de la classe CLmapTB_Stock dynamique manag�e
	public:
		CLServiceStock(void);																									// Initialisation m�thode constructeur par d�faut
		System::Data::DataSet^ selectionnerTousLesStocks(System::String^); // Selectionner tous les articles					// Initialisation m�thode d'affichage du stock
		void ajouterArticle(System::String^, System::String^, int, int, System::String^, float, float, float, float);			// Initialisation m�thode d'ajout du stock
		void modifierArticle(int, System::String^, System::String^, int, int, System::String^, float, float, float, float);		// Initialisation m�thode de modification du stock
		void supprimerArticle(int);																								// Initialisation m�thode de suppression du stock
	};
}