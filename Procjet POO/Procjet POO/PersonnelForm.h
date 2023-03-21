#pragma once
#include "CLServicePersonnel.h"
//#include "MainForm.h"

namespace ProcjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de PersonnelForm
	/// </summary>
	public ref class PersonnelForm : public System::Windows::Forms::Form
	{
	public:
		PersonnelForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~PersonnelForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Button^ btn_select;
	protected:


	private: NS_Svc::CLServicePersonnel^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ btn_insert;

	private: System::Windows::Forms::TextBox^ txtbox_nom;
	private: System::Windows::Forms::TextBox^ txtbox_prenom;
	private: System::Windows::Forms::TextBox^ txtbox_adresse;




	private: System::Windows::Forms::Label^ Nom;
	private: System::Windows::Forms::Label^ Prenom;
	private: System::Windows::Forms::Label^ txt_adresse;








	private: System::Windows::Forms::TextBox^ txtbox_poste;
	private: System::Windows::Forms::Label^ txt_poste;
	private: System::Windows::Forms::TextBox^ txtbox_ville;

	private: System::Windows::Forms::Label^ txt_ville;
	private: System::Windows::Forms::TextBox^ txtbox_CP;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtbox_date_embauche;
	private: System::Windows::Forms::Label^ txt_date_embauche;


	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;

	private: System::Windows::Forms::TextBox^ txtbox_idPersonnel;

	private: System::Windows::Forms::Label^ lbl_idPersonnel;










	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_select = (gcnew System::Windows::Forms::Button());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->txtbox_nom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_adresse = (gcnew System::Windows::Forms::TextBox());
			this->Nom = (gcnew System::Windows::Forms::Label());
			this->Prenom = (gcnew System::Windows::Forms::Label());
			this->txt_adresse = (gcnew System::Windows::Forms::Label());
			this->txtbox_poste = (gcnew System::Windows::Forms::TextBox());
			this->txt_poste = (gcnew System::Windows::Forms::Label());
			this->txtbox_ville = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::Label());
			this->txtbox_CP = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtbox_date_embauche = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_embauche = (gcnew System::Windows::Forms::Label());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->txtbox_idPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->lbl_idPersonnel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(356, 12);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->Size = System::Drawing::Size(1300, 563);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_select
			// 
			this->btn_select->Location = System::Drawing::Point(12, 441);
			this->btn_select->Name = L"btn_select";
			this->btn_select->Size = System::Drawing::Size(166, 64);
			this->btn_select->TabIndex = 1;
			this->btn_select->Text = L"Select";
			this->btn_select->UseVisualStyleBackColor = true;
			this->btn_select->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_select_Click);
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(184, 441);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(166, 64);
			this->btn_insert->TabIndex = 2;
			this->btn_insert->Text = L"Insert";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_insert_Click);
			// 
			// txtbox_nom
			// 
			this->txtbox_nom->Location = System::Drawing::Point(11, 68);
			this->txtbox_nom->Name = L"txtbox_nom";
			this->txtbox_nom->Size = System::Drawing::Size(338, 20);
			this->txtbox_nom->TabIndex = 3;
			// 
			// txtbox_prenom
			// 
			this->txtbox_prenom->Location = System::Drawing::Point(11, 120);
			this->txtbox_prenom->Name = L"txtbox_prenom";
			this->txtbox_prenom->Size = System::Drawing::Size(338, 20);
			this->txtbox_prenom->TabIndex = 4;
			// 
			// txtbox_adresse
			// 
			this->txtbox_adresse->Location = System::Drawing::Point(11, 225);
			this->txtbox_adresse->Name = L"txtbox_adresse";
			this->txtbox_adresse->Size = System::Drawing::Size(338, 20);
			this->txtbox_adresse->TabIndex = 6;
			// 
			// Nom
			// 
			this->Nom->AutoSize = true;
			this->Nom->Location = System::Drawing::Point(8, 52);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(29, 13);
			this->Nom->TabIndex = 6;
			this->Nom->Text = L"Nom";
			// 
			// Prenom
			// 
			this->Prenom->AutoSize = true;
			this->Prenom->Location = System::Drawing::Point(8, 104);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(43, 13);
			this->Prenom->TabIndex = 7;
			this->Prenom->Text = L"Pr�nom";
			// 
			// txt_adresse
			// 
			this->txt_adresse->AutoSize = true;
			this->txt_adresse->Location = System::Drawing::Point(8, 209);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(45, 13);
			this->txt_adresse->TabIndex = 8;
			this->txt_adresse->Text = L"Adresse";
			// 
			// txtbox_poste
			// 
			this->txtbox_poste->Location = System::Drawing::Point(11, 171);
			this->txtbox_poste->Name = L"txtbox_poste";
			this->txtbox_poste->Size = System::Drawing::Size(338, 20);
			this->txtbox_poste->TabIndex = 5;
			// 
			// txt_poste
			// 
			this->txt_poste->AutoSize = true;
			this->txt_poste->Location = System::Drawing::Point(8, 155);
			this->txt_poste->Name = L"txt_poste";
			this->txt_poste->Size = System::Drawing::Size(34, 13);
			this->txt_poste->TabIndex = 10;
			this->txt_poste->Text = L"Poste";
			// 
			// txtbox_ville
			// 
			this->txtbox_ville->Location = System::Drawing::Point(11, 282);
			this->txtbox_ville->Name = L"txtbox_ville";
			this->txtbox_ville->Size = System::Drawing::Size(338, 20);
			this->txtbox_ville->TabIndex = 11;
			// 
			// txt_ville
			// 
			this->txt_ville->AutoSize = true;
			this->txt_ville->Location = System::Drawing::Point(8, 266);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(26, 13);
			this->txt_ville->TabIndex = 12;
			this->txt_ville->Text = L"Ville";
			// 
			// txtbox_CP
			// 
			this->txtbox_CP->Location = System::Drawing::Point(11, 339);
			this->txtbox_CP->Name = L"txtbox_CP";
			this->txtbox_CP->Size = System::Drawing::Size(338, 20);
			this->txtbox_CP->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Code postal";
			// 
			// txtbox_date_embauche
			// 
			this->txtbox_date_embauche->Location = System::Drawing::Point(11, 400);
			this->txtbox_date_embauche->Name = L"txtbox_date_embauche";
			this->txtbox_date_embauche->Size = System::Drawing::Size(338, 20);
			this->txtbox_date_embauche->TabIndex = 15;
			// 
			// txt_date_embauche
			// 
			this->txt_date_embauche->AutoSize = true;
			this->txt_date_embauche->Location = System::Drawing::Point(8, 384);
			this->txt_date_embauche->Name = L"txt_date_embauche";
			this->txt_date_embauche->Size = System::Drawing::Size(91, 13);
			this->txt_date_embauche->TabIndex = 16;
			this->txt_date_embauche->Text = L"Date d\'embauche";
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(12, 511);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(166, 64);
			this->btn_update->TabIndex = 19;
			this->btn_update->Text = L"Update";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(183, 511);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(166, 64);
			this->btn_delete->TabIndex = 20;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &PersonnelForm::btn_delete_Click);
			// 
			// txtbox_idPersonnel
			// 
			this->txtbox_idPersonnel->Location = System::Drawing::Point(11, 26);
			this->txtbox_idPersonnel->Name = L"txtbox_idPersonnel";
			this->txtbox_idPersonnel->Size = System::Drawing::Size(338, 20);
			this->txtbox_idPersonnel->TabIndex = 2;
			// 
			// lbl_idPersonnel
			// 
			this->lbl_idPersonnel->AutoSize = true;
			this->lbl_idPersonnel->Location = System::Drawing::Point(7, 12);
			this->lbl_idPersonnel->Name = L"lbl_idPersonnel";
			this->lbl_idPersonnel->Size = System::Drawing::Size(67, 13);
			this->lbl_idPersonnel->TabIndex = 23;
			this->lbl_idPersonnel->Text = L"ID personnel";
			// 
			// PersonnelForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1668, 582);
			this->Controls->Add(this->lbl_idPersonnel);
			this->Controls->Add(this->txtbox_idPersonnel);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->txt_date_embauche);
			this->Controls->Add(this->txtbox_date_embauche);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbox_CP);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->txtbox_ville);
			this->Controls->Add(this->txt_poste);
			this->Controls->Add(this->txtbox_poste);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->Prenom);
			this->Controls->Add(this->Nom);
			this->Controls->Add(this->txtbox_adresse);
			this->Controls->Add(this->txtbox_prenom);
			this->Controls->Add(this->txtbox_nom);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->btn_select);
			this->Controls->Add(this->dgv_enr);
			this->Name = L"PersonnelForm";
			this->Text = L"PersonnelForm";
			this->Load += gcnew System::EventHandler(this, &PersonnelForm::PersonnelForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_select_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
	}
	private: System::Void PersonnelForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Svc::CLServicePersonnel();
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txtbox_nom->Text, this->txtbox_prenom->Text, this->txtbox_poste->Text, this->txtbox_adresse->Text, this->txtbox_ville->Text, Convert::ToInt32(this->txtbox_CP->Text), this->txtbox_date_embauche->Text);
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->modifierPersonnel(Convert::ToInt32(this->txtbox_idPersonnel->Text), this->txtbox_nom->Text, this->txtbox_prenom->Text, this->txtbox_poste->Text, this->txtbox_adresse->Text, this->txtbox_ville->Text, Convert::ToInt32(this->txtbox_CP->Text), this->txtbox_date_embauche->Text);
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->supprimerPersonnel(Convert::ToInt32(this->txtbox_idPersonnel->Text));
	}
};
}
