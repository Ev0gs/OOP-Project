#include "CLmapTB_Statistique.h"

System::String^ NS_Comp::CLmapTB_Statistique::ArticlesReappro(void)
{
	// Retourne la requête sql suivante

	return "SELECT Articles.Reference, Articles.Nature, Articles.Quantite, Articles.Seuil_Reapprovisionnement" +
		" FROM Articles" +
		" WHERE(Articles.Quantite < Articles.Seuil_Reapprovisionnement)";
}

System::String^ NS_Comp::CLmapTB_Statistique::ArticlesPlusVendus(void)
{
	// Retourne la requête sql suivante

	return "SELECT TOP 10 Contient.Id_articles, COUNT(Contient.Id_commande) AS [Ventes d'un article]" +
		" FROM Contient" +
		" INNER JOIN Articles ON Contient.Id_articles = Articles.Id_articles" +
		" GROUP BY Contient.Id_articles" +
		" ORDER BY [Ventes d'un article] DESC";
}

System::String^ NS_Comp::CLmapTB_Statistique::ArticlesMoinsVendus(void)
{
	// Retourne la requête sql suivante

	return "SELECT TOP 10 Contient.Id_articles, COUNT(Contient.Id_commande) AS [Ventes d'un article]" +
		" FROM Contient" +
		" INNER JOIN Articles ON Contient.Id_articles = Articles.Id_articles" +
		" GROUP BY Contient.Id_articles" +
		" ORDER BY[Ventes d'un article] ASC";
}


System::String^ NS_Comp::CLmapTB_Statistique::ValeurAchatStock(void)
{
	// Retourne la requête sql suivante

	return "SELECT SUM([Articles].[Quantite]*[Articles].[Prix_unitaire_ht]) AS [Valeur d'achat stock]" +
		" FROM Articles";
}

System::String^ NS_Comp::CLmapTB_Statistique::PanierMoyen(void)
{
	// Retourne la requête sql suivante

	return "SELECT Commande.Reference, AVG(Contient.Nombre_articles*Articles.Prix_unitaire_ttc)" +
		" FROM Commande" + 
		" INNER JOIN Contient ON Commande.Id_commande = Contient.Id_commande" +
		" INNER JOIN Articles ON Contient.Id_articles = Articles.Id_articles" +
		" GROUP BY Commande.Reference";
}

System::String^ NS_Comp::CLmapTB_Statistique::TotalAchatsClient(void)
{
	// Retourne la requête sql suivante

	return "SELECT Commande.id_client, SUM(Articles.Prix_unitaire_ttc*Contient.Nombre_articles) AS [Montant total ttc achats client]" +
		" FROM Commande" +
		" INNER JOIN Date ON Commande.Id_date = Date.Id_date" +
		" INNER JOIN Contient ON Commande.Id_commande = Contient.Id_commande" +
		" INNER JOIN Articles ON Contient.Id_articles = Articles.Id_articles" +
		" GROUP BY Commande.id_client";
}

System::String^ NS_Comp::CLmapTB_Statistique::ChiffreAffaireMois(void)
{
	// Retourne la requête sql suivante

	return "SELECT DATEPART(MONTH, Date.Date) AS [Mois], SUM(Articles.Prix_unitaire_ttc*Contient.Nombre_articles) AS [Chiffre d'affaire du mois]" +
		" FROM Commande" +
		" INNER JOIN Date ON Commande.Id_date = Date.Id_date" +
		" INNER JOIN Contient ON Commande.Id_commande = Contient.Id_commande" +
		" INNER JOIN Articles ON Contient.Id_articles = Articles.Id_articles" +
		" GROUP BY DATEPART(MONTH, Date.Date)";
}

System::String^ NS_Comp::CLmapTB_Statistique::ValeurCommercialeStock(void)
{
	// Retourne la requête sql suivante

	return "SELECT SUM([Articles].[Quantite]*[Articles].[Prix_unitaire_ttc]) AS [Valeur commerciale stock]" +
		" FROM Articles";
}
