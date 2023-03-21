#pragma once
namespace NS_Comp
{
	ref class CLData
	{
	private:
		System::String^ sSql;												// Initialisation attribut qui stocke les requ�tes
		System::String^ sCnx;												// Initialisation attribut qui stocke Chemin d'acc�s � la BDD
		System::Data::SqlClient::SqlConnection^ oCnx;						// Initialisation attribut qui stocke une instanciation de la classe SqlConnection
		System::Data::SqlClient::SqlCommand^ oCmd;							// Initialisation attribut qui stocke une instanciation de la classe SqlCommand
		System::Data::SqlClient::SqlDataAdapter^ oDA;						// Initialisation attribut qui stocke une instanciation de la classe DataAdapter
		System::Data::DataSet^ oDs;											// Initialisation attribut qui stocke une instanciation de la classe DataSet
	public:
		CLData(void);														// Constructeur par d�faut de la classe CLData
		System::Data::DataSet^ getRows(System::String^, System::String^);	// M�thode pour r�cup�rer les Rows d'une table
		void actionRows(System::String^);									// M�thode permettant d'agir sur les Rows d'une table
		int actionRowsID(System::String^);									// M�thode permettant d'agir sur les Rows d'une table et de r�cup�rer un identifiant
	};
}
