#include "CLData.h"

NS_Comp::CLData::CLData(void)
{
	this->sCnx = "Data Source = MSI\\MSSQL_PIERRE;Initial Catalog = Projet_POO;User ID = CNX_POO; Password=123";	// Lien vers database du projet

	this->sSql = "Rien";																							// Pas de requ�te

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);											// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe SqlConnection
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);									// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe SqlCommand
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();													// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe SqlDataAdapter
	this->oDs = gcnew System::Data::DataSet();																		// Allocation dynamique et initialisation garbage collector pour l'instanciation de la classe DataSet

	this->oCmd->CommandType = System::Data::CommandType::Text;														// D�finit le type de commande en Text
}
System::Data::DataSet^ NS_Comp::CLData::getRows(System::String^ sSql, System::String^ sDataTableName)
{
	this->oDs->Clear();																								// Vide les donn�es contenus dans l'attribut oDs
	this->sSql = sSql;																								// Initialise attribut � la requ�te en param�tre
	this->oCmd->CommandText = this->sSql;																			// Initialise commande � la requ�te contenue dans sSql
	this->oDA->SelectCommand = this->oCmd;																			// Selectionne la commande
	this->oDA->Fill(this->oDs, sDataTableName);																		// Ajoute la table en param�tre � l'attribut oDs

	return this->oDs;																								// Retourne la valeur de oDs (soit les Rows obtenus)
}
void NS_Comp::CLData::actionRows(System::String^ sSql)
{
	this->sSql = sSql;																								// Initialise attribut � la requ�te en param�tre
	this->oCmd->CommandText = this->sSql;																			// Initialise commande � la requ�te contenue dans sSql
	this->oDA->SelectCommand = this->oCmd;																			// Selectionne la commande
	this->oCnx->Open();																								// Ouvre la BDD
	this->oCmd->ExecuteNonQuery();																					// Execute la requ�te SQL
	this->oCnx->Close();																							// Ferme la BDD
}
int NS_Comp::CLData::actionRowsID(System::String^ sSql)
{
	int id;																											// Initialisation variable id
	this->sSql = sSql;																								// Initialise attribut � la requ�te en param�tre
	this->oCmd->CommandText = this->sSql;																			// Initialise commande � la requ�te contenue dans sSql
	this->oDA->SelectCommand = this->oCmd;																			// Selectionne la commande
	this->oCnx->Open();																								// Ouvre la BDD
	id = System::Convert::ToInt32(this->oCmd->ExecuteScalar());														// Stocke la valeur retourn�e de la fonction ExecuteScalar qui ex�cute la requ�te et retourne la premi�re colonne de la premi�re ligne du jeu de r�sultats retourn� par la requ�te
	this->oCnx->Close();																							// Ferme la BDD
	return id;																										// retourne id
}
