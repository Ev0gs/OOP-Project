#pragma once
#include "CLServiceStatistique.h"

namespace ProcjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de StatistiqueForm
	/// </summary>
	public ref class StatistiqueForm : public System::Windows::Forms::Form
	{
	public:
		StatistiqueForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StatistiqueForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_statArticleReapp;

	protected:
	
	private: NS_Svc::CLServiceStatistique^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ btn_ArticlesPlusVendus;
	private: System::Windows::Forms::Button^ btn_ArticlesMoinsVendus;
	private: System::Windows::Forms::Button^ btn_valeurAchatStock;
	private: System::Windows::Forms::Button^ btn_valeurCommercialeStock;
	private: System::Windows::Forms::Button^ btn_PanierMoyen;
	private: System::Windows::Forms::Button^ btn_totalAchatsClient;
	private: System::Windows::Forms::Button^ btn_ChiffreAffaireMois;





	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_statArticleReapp = (gcnew System::Windows::Forms::Button());
			this->btn_ArticlesPlusVendus = (gcnew System::Windows::Forms::Button());
			this->btn_ArticlesMoinsVendus = (gcnew System::Windows::Forms::Button());
			this->btn_valeurAchatStock = (gcnew System::Windows::Forms::Button());
			this->btn_valeurCommercialeStock = (gcnew System::Windows::Forms::Button());
			this->btn_PanierMoyen = (gcnew System::Windows::Forms::Button());
			this->btn_totalAchatsClient = (gcnew System::Windows::Forms::Button());
			this->btn_ChiffreAffaireMois = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(385, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1163, 500);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_statArticleReapp
			// 
			this->btn_statArticleReapp->Location = System::Drawing::Point(12, 12);
			this->btn_statArticleReapp->Name = L"btn_statArticleReapp";
			this->btn_statArticleReapp->Size = System::Drawing::Size(150, 68);
			this->btn_statArticleReapp->TabIndex = 1;
			this->btn_statArticleReapp->Text = L"Stat Articles réapprovisionnement";
			this->btn_statArticleReapp->UseVisualStyleBackColor = true;
			this->btn_statArticleReapp->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_articlesReappro_Click);
			// 
			// btn_ArticlesPlusVendus
			// 
			this->btn_ArticlesPlusVendus->Location = System::Drawing::Point(213, 12);
			this->btn_ArticlesPlusVendus->Name = L"btn_ArticlesPlusVendus";
			this->btn_ArticlesPlusVendus->Size = System::Drawing::Size(150, 68);
			this->btn_ArticlesPlusVendus->TabIndex = 2;
			this->btn_ArticlesPlusVendus->Text = L"Stat Articles plus vendus";
			this->btn_ArticlesPlusVendus->UseVisualStyleBackColor = true;
			this->btn_ArticlesPlusVendus->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_articlesPlusVendus_Click);
			// 
			// btn_ArticlesMoinsVendus
			// 
			this->btn_ArticlesMoinsVendus->Location = System::Drawing::Point(12, 113);
			this->btn_ArticlesMoinsVendus->Name = L"btn_ArticlesMoinsVendus";
			this->btn_ArticlesMoinsVendus->Size = System::Drawing::Size(150, 68);
			this->btn_ArticlesMoinsVendus->TabIndex = 3;
			this->btn_ArticlesMoinsVendus->Text = L"Stat Articles moins vendus";
			this->btn_ArticlesMoinsVendus->UseVisualStyleBackColor = true;
			this->btn_ArticlesMoinsVendus->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_articlesMoinsVendus_Click);
			// 
			// btn_valeurAchatStock
			// 
			this->btn_valeurAchatStock->Location = System::Drawing::Point(213, 113);
			this->btn_valeurAchatStock->Name = L"btn_valeurAchatStock";
			this->btn_valeurAchatStock->Size = System::Drawing::Size(150, 68);
			this->btn_valeurAchatStock->TabIndex = 4;
			this->btn_valeurAchatStock->Text = L"Stat Valeur d\'achat Stock";
			this->btn_valeurAchatStock->UseVisualStyleBackColor = true;
			this->btn_valeurAchatStock->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_valeurAchatStock_Click);
			// 
			// btn_valeurCommercialeStock
			// 
			this->btn_valeurCommercialeStock->Location = System::Drawing::Point(12, 216);
			this->btn_valeurCommercialeStock->Name = L"btn_valeurCommercialeStock";
			this->btn_valeurCommercialeStock->Size = System::Drawing::Size(150, 68);
			this->btn_valeurCommercialeStock->TabIndex = 5;
			this->btn_valeurCommercialeStock->Text = L"Stat Valeur commerciale Stock";
			this->btn_valeurCommercialeStock->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_valeurCommercialeStock_Click);
			// 
			// btn_PanierMoyen
			// 
			this->btn_PanierMoyen->Location = System::Drawing::Point(213, 216);
			this->btn_PanierMoyen->Name = L"btn_PanierMoyen";
			this->btn_PanierMoyen->Size = System::Drawing::Size(150, 68);
			this->btn_PanierMoyen->TabIndex = 6;
			this->btn_PanierMoyen->Text = L"Stat Panier moyen";
			this->btn_PanierMoyen->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_valeurPanierMoyen_Click);
			// 
			// btn_totalAchatsClient
			// 
			this->btn_totalAchatsClient->Location = System::Drawing::Point(12, 325);
			this->btn_totalAchatsClient->Name = L"btn_totalAchatsClient";
			this->btn_totalAchatsClient->Size = System::Drawing::Size(150, 68);
			this->btn_totalAchatsClient->TabIndex = 7;
			this->btn_totalAchatsClient->Text = L"Stat Total achats client";
			this->btn_totalAchatsClient->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_totalAchatsClient_Click);
			// 
			// btn_ChiffreAffaireMois
			// 
			this->btn_ChiffreAffaireMois->Location = System::Drawing::Point(213, 325);
			this->btn_ChiffreAffaireMois->Name = L"btn_ChiffreAffaireMois";
			this->btn_ChiffreAffaireMois->Size = System::Drawing::Size(150, 68);
			this->btn_ChiffreAffaireMois->TabIndex = 8;
			this->btn_ChiffreAffaireMois->Text = L"Stat Chiffre d\'affaire par mois";
			this->btn_ChiffreAffaireMois->Click += gcnew System::EventHandler(this, &StatistiqueForm::btn_chiffreAffaireClient_Click);
			// 
			// StatistiqueForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1560, 524);
			this->Controls->Add(this->btn_ChiffreAffaireMois);
			this->Controls->Add(this->btn_totalAchatsClient);
			this->Controls->Add(this->btn_PanierMoyen);
			this->Controls->Add(this->btn_valeurCommercialeStock);
			this->Controls->Add(this->btn_valeurAchatStock);
			this->Controls->Add(this->btn_ArticlesMoinsVendus);
			this->Controls->Add(this->btn_ArticlesPlusVendus);
			this->Controls->Add(this->btn_statArticleReapp);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"StatistiqueForm";
			this->Text = L"StatistiqueForm";
			this->Load += gcnew System::EventHandler(this, &StatistiqueForm::StatistiqueForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StatistiqueForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Svc::CLServiceStatistique();
	}
	private: System::Void btn_articlesReappro_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ArticlesReappro("Rsl1");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl1";
	}
	private: System::Void btn_articlesPlusVendus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ArticlesPlusVendus("Rsl2");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl2";
	}
	private: System::Void btn_articlesMoinsVendus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ArticlesMoinsVendus("Rsl3");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl3";
	}
	private: System::Void btn_valeurCommercialeStock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ValeurCommercialeStock("Rsl4");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl4";
	}
	private: System::Void btn_valeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ValeurAchatStock("Rsl5");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl5";
	}
	private: System::Void btn_valeurPanierMoyen_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->PanierMoyen("Rsl6");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl6";
	}
	private: System::Void btn_totalAchatsClient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->TotalAchatsClient("Rsl7");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl7";
	}
	private: System::Void btn_chiffreAffaireClient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oSvc->ChiffreAffaireMois("Rsl8");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl8";
	}
	};
}
