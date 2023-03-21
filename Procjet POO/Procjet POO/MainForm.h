#pragma once
#include "PersonnelForm.h"
#include "ClientForm.h"
#include "CommandeForm.h"
#include "StockForm.h"
#include "StatistiqueForm.h"

namespace ProcjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_gestion_personnel;
	private: System::Windows::Forms::Button^ btn_gestion_clients;
	private: System::Windows::Forms::Button^ btn_gestion_commandes;
	private: System::Windows::Forms::Button^ btn_gestion_stock;
	private: System::Windows::Forms::Button^ btn_gestion_statistiques;
	private: System::Windows::Forms::Label^ label_choix;
	protected:

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
			this->btn_gestion_personnel = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_clients = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_stock = (gcnew System::Windows::Forms::Button());
			this->btn_gestion_statistiques = (gcnew System::Windows::Forms::Button());
			this->label_choix = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_gestion_personnel
			// 
			this->btn_gestion_personnel->Location = System::Drawing::Point(41, 51);
			this->btn_gestion_personnel->Name = L"btn_gestion_personnel";
			this->btn_gestion_personnel->Size = System::Drawing::Size(169, 75);
			this->btn_gestion_personnel->TabIndex = 0;
			this->btn_gestion_personnel->Text = L"gestion personnel";
			this->btn_gestion_personnel->UseVisualStyleBackColor = true;
			this->btn_gestion_personnel->Click += gcnew System::EventHandler(this, &MainForm::btn_gestion_personnel_Click);
			// 
			// btn_gestion_clients
			// 
			this->btn_gestion_clients->Location = System::Drawing::Point(228, 51);
			this->btn_gestion_clients->Name = L"btn_gestion_clients";
			this->btn_gestion_clients->Size = System::Drawing::Size(169, 75);
			this->btn_gestion_clients->TabIndex = 1;
			this->btn_gestion_clients->Text = L"gestion clients";
			this->btn_gestion_clients->UseVisualStyleBackColor = true;
			this->btn_gestion_clients->Click += gcnew System::EventHandler(this, &MainForm::btn_gestion_clients_Click);
			// 
			// btn_gestion_commandes
			// 
			this->btn_gestion_commandes->Location = System::Drawing::Point(41, 144);
			this->btn_gestion_commandes->Name = L"btn_gestion_commandes";
			this->btn_gestion_commandes->Size = System::Drawing::Size(169, 75);
			this->btn_gestion_commandes->TabIndex = 2;
			this->btn_gestion_commandes->Text = L"gestion commandes";
			this->btn_gestion_commandes->UseVisualStyleBackColor = true;
			this->btn_gestion_commandes->Click += gcnew System::EventHandler(this, &MainForm::btn_gestion_commande_Click);
			// 
			// btn_gestion_stock
			// 
			this->btn_gestion_stock->Location = System::Drawing::Point(228, 144);
			this->btn_gestion_stock->Name = L"btn_gestion_stock";
			this->btn_gestion_stock->Size = System::Drawing::Size(169, 75);
			this->btn_gestion_stock->TabIndex = 3;
			this->btn_gestion_stock->Text = L"gestion stock";
			this->btn_gestion_stock->UseVisualStyleBackColor = true;
			this->btn_gestion_stock->Click += gcnew System::EventHandler(this, &MainForm::btn_gestion_stock_Click);
			// 
			// btn_gestion_statistiques
			// 
			this->btn_gestion_statistiques->Location = System::Drawing::Point(133, 235);
			this->btn_gestion_statistiques->Name = L"btn_gestion_statistiques";
			this->btn_gestion_statistiques->Size = System::Drawing::Size(169, 75);
			this->btn_gestion_statistiques->TabIndex = 4;
			this->btn_gestion_statistiques->Text = L"gestion statistiques";
			this->btn_gestion_statistiques->UseVisualStyleBackColor = true;
			this->btn_gestion_statistiques->Click += gcnew System::EventHandler(this, &MainForm::btn_gestion_statistique_Click);
			// 
			// label_choix
			// 
			this->label_choix->AutoSize = true;
			this->label_choix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_choix->Location = System::Drawing::Point(108, 9);
			this->label_choix->Name = L"label_choix";
			this->label_choix->Size = System::Drawing::Size(215, 20);
			this->label_choix->TabIndex = 5;
			this->label_choix->Text = L"Sélectionner un des 5 modes";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 344);
			this->Controls->Add(this->label_choix);
			this->Controls->Add(this->btn_gestion_statistiques);
			this->Controls->Add(this->btn_gestion_stock);
			this->Controls->Add(this->btn_gestion_commandes);
			this->Controls->Add(this->btn_gestion_clients);
			this->Controls->Add(this->btn_gestion_personnel);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_gestion_personnel_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		PersonnelForm^ f_personnel = gcnew PersonnelForm();
		f_personnel->Show();
	}
	private: System::Void btn_gestion_clients_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClientForm^ f_clients = gcnew ClientForm();
		f_clients->Show();
	}
	private: System::Void btn_gestion_commande_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		CommandeForm^ f_commande = gcnew CommandeForm();
		f_commande->Show();
	}
	private: System::Void btn_gestion_stock_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		StockForm^ f_stock = gcnew StockForm();
		f_stock->Show();
	}
	private: System::Void btn_gestion_statistique_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		StatistiqueForm^ f_statistique = gcnew StatistiqueForm();
		f_statistique->Show();
	}
	};
}
