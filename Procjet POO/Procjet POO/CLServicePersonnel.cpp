#include "CLServicePersonnel.h"
NS_Svc::CLServicePersonnel::CLServicePersonnel(void)
{
	this->oData = gcnew NS_Comp::CLData();									// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLData
	this->oMappTB_Personnel = gcnew NS_Comp::CLmapTB_Personnel();			// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Personnel
	this->oMappTB_Adresse = gcnew NS_Comp::CLmapTB_Adresse();				// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Adresse
	this->oMappTB_Date = gcnew NS_Comp::CLmapTB_Date();						// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe CLmapTB_Date
}
System::Data::DataSet^ NS_Svc::CLServicePersonnel::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;													// Initialisation variable locale pour stocker les requêtes sql

	sql = this->oMappTB_Personnel->Select();								// Stocke requête sql d'affichage du personnel
	return this->oData->getRows(sql, dataTableName);						// retourne les Rows obtenus par la fonction getRows
}
void NS_Svc::CLServicePersonnel::ajouterUnePersonne(System::String^ nom, System::String^ prenom, System::String^ poste, System::String^ adresse, System::String^ ville, int cp, System::String^ date)
{
	System::String^ sql;													// Initialisation variable locale pour stocker les requêtes sql
	int Id_date;															// Initialisation variable locale pour stocker l'id_date
	int Id_adresse;															// Initialisation variable locale pour stocker l'id_adresse

	///////////////////////////////////////////////Adresse///////////////////////////////////////////////
	this->oMappTB_Adresse->setAdresse(adresse);								// Stockage valeur paramètre adresse dans attribut Adresse de l'objet oMappTB_Adresse
	this->oMappTB_Adresse->setVille(ville);									// Stockage valeur paramètre ville dans attribut Ville de l'objet oMappTB_Adresse
	this->oMappTB_Adresse->setCp(cp);										// Stockage valeur paramètre cp dans attribut Cp de l'objet oMappTB_Adresse

	sql = this->oMappTB_Adresse->Insert();									// Stockage requête sql d'ajout d'une adresse
	Id_adresse = this->oData->actionRowsID(sql);							// Exécution de la requête sql stockée et stockage de l'id_adresse retourné dans la variable Id_adresse

	///////////////////////////////////////////////Date///////////////////////////////////////////////
	this->oMappTB_Date->setDate(date);										// Stockage valeur paramètre date dans attribut Date de l'objet oMappTB_Date

	sql = this->oMappTB_Date->Insert();										// Stockage requête sql d'ajout d'une date
	Id_date = this->oData->actionRowsID(sql);								// Exécution de la requête sql stockée et stockage de l'id_date retourné dans la variable Id_date

	///////////////////////////////////////////////Personnel///////////////////////////////////////////////
	this->oMappTB_Personnel->setNom(nom);									// Stockage valeur paramètre nom dans attribut Nom de l'objet oMappTB_Personnel
	this->oMappTB_Personnel->setPrenom(prenom);								// Stockage valeur paramètre prenom dans attribut Prenom de l'objet oMappTB_Personnel
	this->oMappTB_Personnel->setPoste(poste);								// Stockage valeur paramètre poste dans attribut Poste de l'objet oMappTB_Personnel
	this->oMappTB_Personnel->setId_date(Id_date);							// Stockage valeur variable Id_date dans attribut id_date de l'objet oMappTB_Personnel
	this->oMappTB_Personnel->setId_adresse(Id_adresse);						// Stockage valeur variable Id_adresse dans attribut id_adresse de l'objet oMappTB_Personnel

	sql = this->oMappTB_Personnel->Insert();								// Stockage requête sql d'ajout d'un personnel
	this->oData->actionRows(sql);											// Exécution de la requête sql stockée
}

void NS_Svc::CLServicePersonnel::modifierPersonnel(int id_personnel, System::String^ nom, System::String^ prenom, System::String^ poste, System::String^ adresse, System::String^ ville, int cp, System::String^ date_embauche)
{
	System::String^ sql;													// Initialisation variable locale pour stocker les requêtes sql
	
	this->oMappTB_Personnel->setId_Personnel(id_personnel);					// Stockage valeur paramètre id_personnel dans attribut Id_Personnel de l'objet oMappTB_Personnel



	//Update Adresse
	this->oMappTB_Adresse->setAdresse(adresse);								// Stockage valeur paramètre adresse dans attribut Adresse de l'objet oMappTB_Adresse
	this->oMappTB_Adresse->setVille(ville);									// Stockage valeur paramètre ville dans attribut Ville de l'objet oMappTB_Adresse
	this->oMappTB_Adresse->setCp(cp);										// Stockage valeur paramètre cp dans attribut Cp de l'objet oMappTB_Adresse

	//Update Date
	this->oMappTB_Date->setDate(date_embauche);								// Stockage valeur paramètre date_embauche dans attribut Date de l'objet oMappTB_Date

	//Update Personnel
	this->oMappTB_Personnel->setNom(nom);									// Stockage valeur paramètre nom dans attribut Nom de l'objet oMappTB_Personnel
	this->oMappTB_Personnel->setPrenom(prenom);								// Stockage valeur paramètre prenom dans attribut Prenom de l'objet oMappTB_Personnel
	this->oMappTB_Personnel->setPoste(poste);								// Stockage valeur paramètre poste dans attribut Poste de l'objet oMappTB_Personnel

	// Stockage et définition de la requête sql de modification d'un personnel
	sql = "UPDATE Personnel" +
				" SET Nom='" + this->oMappTB_Personnel->getNom() + "', Prenom='" + this->oMappTB_Personnel->getPrenom() + "'" +
				" WHERE(id_personnel ='" + this->oMappTB_Personnel->getId_Personnel() + "')" +
			" UPDATE Adresse" +
				" SET Adresse ='" + this->oMappTB_Adresse->getAdresse() + "', Ville = '" + this->oMappTB_Adresse->getVille() + "', Cp ='" + this->oMappTB_Adresse->getCp() + "'" +
				" FROM Adresse INNER JOIN Personnel ON Adresse.id_adresse = Personnel.id_adresse" +
				" WHERE(id_personnel ='" + this->oMappTB_Personnel->getId_Personnel() + "')" +
			" UPDATE Date" +
				" SET Date ='" + this->oMappTB_Date->getDate() + "'" +
				" FROM Date INNER JOIN Personnel ON Date.Id_date = Personnel.Id_date" +
				" WHERE(id_personnel ='" + this->oMappTB_Personnel->getId_Personnel() + "')";
	this->oData->actionRows(sql);											// Exécution de la requête sql stockée
	
}

void NS_Svc::CLServicePersonnel::supprimerPersonnel(int id_personnel)
{
	System::String^ sql;													// Initialisation variable locale pour stocker les requêtes sql

	this->oMappTB_Personnel->setId_Personnel(id_personnel);					// Stockage valeur paramètre id_personnel dans attribut Id_Personnel de l'objet oMappTB_Personnel

	sql = this->oMappTB_Personnel->Delete();								// Stockage requête sql de suppression d'un personnel
	this->oData->actionRows(sql);											// Exécution de la requête sql stockée
}
