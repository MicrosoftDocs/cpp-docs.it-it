---
title: "Hosting di un controllo utente Windows Form come finestra di dialogo MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hosting di un controllo Windows Form [C++]"
  - "MFC [C++], supporto di Windows Form"
  - "Windows Form [C++], hosting come finestra di dialogo MFC"
ms.assetid: 0434a9d7-8b14-48e6-ad69-9ba9a684677a
caps.latest.revision: 16
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Hosting di un controllo utente Windows Form come finestra di dialogo MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe modello [CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md) fornita da MFC in modo che si possa ospitare un controllo utente Windows Form \(<xref:System.Windows.Forms.UserControl>\) in una finestra di dialogo MFC modale o non modale.  `CWinFormsDialog` viene derivato dalla classe MFC [CDialog](../mfc/reference/cdialog-class.md) in modo da consentire l'avvio della finestra di dialogo come modale o non modale.  
  
 Il processo utilizzato da `CWinFormsDialog` per ospitare il controllo utente è simile a quello descritto in [Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md).  In questo caso, tuttavia, l'inizializzazione e l'hosting del controllo utente vengono gestiti da `CWinFormsDialog` al fine di evitarne la programmazione manuale.  
  
 Per un'applicazione di esempio che illustri il controllo Windows Form utilizzato con MFC, vedere la pagina relativa all' [integrazione di Windows Form e MFC](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
### Per creare l'applicazione host MFC  
  
1.  Creare un progetto di applicazione MFC.  
  
     Dal menu **File** scegliere **Nuovo**, quindi fare clic su **Progetto**.  Nella cartella **Visual C\+\+** selezionare **Applicazione MFC**.  
  
     Nella casella **Nome** immettere `MFC03` e modificare l'impostazione relativa alla soluzione in **Aggiungi a soluzione**.Scegliere **OK**.  
  
     Nella **Creazione guidata applicazione MFC** accettare tutte le impostazioni predefinite e quindi scegliere **Fine**.  Verrà così creata un'applicazione MFC con interfaccia a documenti multipli \(MDI, Multiple Document Interface\).  
  
2.  Configurare il progetto.  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto **MFC03** e scegliere **Proprietà**.  Verrà visualizzata la finestra di dialogo **Pagine delle proprietà**.  
  
     Nel controllo di struttura ad albero **Proprietà di configurazione** della finestra di dialogo **Pagine delle proprietà** selezionare **Generale** e quindi nella sezione **Impostazioni predefinite progetto** impostare **Supporto Common Language Runtime** su **Supporto Common Language Runtime \(\/clr\)**.  Scegliere **OK**.  
  
3.  Aggiungere un riferimento al controllo .NET.  
  
     In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto **MFC03**, quindi scegliere **Aggiungi**, **Riferimenti**.  In **Pagina delle proprietà** scegliere **Aggiungi nuovo riferimento**, selezionare WindowsControlLibrary1 nella scheda **Progetti** e quindi scegliere **OK**.  Viene così aggiunto un riferimento sotto forma di opzione [\/FU](../build/reference/fu-name-forced-hash-using-file.md) del compilatore per la compilazione del programma e viene copiato il file WindowsControlLibrary1.dll nella directory del progetto `MFC03` per l'esecuzione del programma.  
  
4.  Aggiungere `#include <afxwinforms.h>` a stdafx.h alla fine delle istruzioni `#include` esistenti.  
  
5.  Aggiungere una nuova classe che rappresenta una sottoclasse di `CDialog`.  
  
     Fare clic con il pulsante destro del mouse sul nome del progetto e aggiungere una classe MFC, denominata CHostForWinForm, che rappresenta una sottoclasse di `CDialog`.  Poiché la risorsa finestra di dialogo non è necessaria, è possibile eliminare l'ID: selezionare Visualizzazione risorse, espandere la cartella Finestra di dialogo ed eliminare la risorsa IDD\_HOSTFORWINFORM.  Rimuovere quindi tutti i riferimenti all'ID presenti nel codice.  
  
6.  Sostituire `CDialog` nei file CHostForWinForm.h e CHostForWinForm.cpp con `CWinFormsDialog<WindowsControlLibrary1::UserControl1>`.  
  
7.  Chiamare DoModal nella classe CHostForWinForm.  
  
     In MFC03.cpp, aggiungere `#include "HostForWinForm.h"`.  
  
     Prima dell'istruzione return nella definizione di CMFC03App::InitInstance, aggiungere:  
  
     `CHostForWinForm m_HostForWinForm;`  
  
     `m_HostForWinForm.DoModal();`  
  
8.  Compilare ed eseguire il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Scegliere **Avvia senza eseguire debug** dal menu **Debug**.  
  
     Verrà quindi aggiunto codice per monitorare lo stato di un controllo in Windows Form dall'applicazione MFC.  
  
9. Aggiungere un gestore per OnInitDialog.  
  
     Visualizzare la finestra **Proprietà** \(F4\).  In **Visualizzazione classi**, selezionare CHostForWinForm.  Nella finestra **Proprietà**, selezionare gli override quindi, nella riga relativa a OnInitDialog, fare clic nella colonna sinistra e scegliere \< Aggiungi \>.  Verrà aggiunta la seguente riga a CHostForWinForm.h:  
  
    ```  
    virtual BOOL OnInitDialog();  
    ```  
  
10. Definire OnInitDialog \(in CHostForWinForm.cpp\) nel modo seguente:  
  
    ```  
    BOOL CHostForWinForm::OnInitDialog() {  
       CWinFormsDialog<WindowsControlLibrary1::UserControl1>::OnInitDialog();  
       GetControl()->button1->Click += MAKE_DELEGATE(System::EventHandler, OnButton1);  
       return TRUE;  
    }  
    ```  
  
11. Aggiungere quindi il gestore OnButton1.  Nella sezione pubblica della classe CHostForWinForm in CHostForWinForm.h, aggiungere le seguenti righe:  
  
    ```  
    virtual void OnButton1( System::Object^ sender, System::EventArgs^ e );  
  
    BEGIN_DELEGATE_MAP( CHostForWinForm )  
       EVENT_DELEGATE_ENTRY( OnButton1, System::Object^, System::EventArgs^ );  
    END_DELEGATE_MAP()  
    ```  
  
     In CHostForWinForm.cpp, aggiungere la seguente definizione:  
  
    ```  
    void CHostForWinForm::OnButton1( System::Object^ sender, System::EventArgs^ e )   
    {  
       System::Windows::Forms::MessageBox::Show("test");  
    }  
    ```  
  
12. Compilare ed eseguire il progetto.  Facendo clic sul pulsante presente in Windows Form, verrà eseguito il codice dell'applicazione MFC.  
  
     Verrà quindi aggiunto codice per visualizzare il valore della casella di testo in Windows Form dal codice MFC.  
  
13. Nella sezione pubblica della classe CHostForWinForm in CHostForWinForm.h, aggiungere la seguente dichiarazione:  
  
    ```  
    CString m_sEditBoxOnWinForm;  
    ```  
  
14. Nella definizione di DoDataExchange in CHostForWinForm.cpp, aggiungere le tre righe seguenti alla fine della funzione:  
  
    ```  
    if (pDX->m_bSaveAndValidate)  
       m_sEditBoxOnWinForm = CString( GetControl()->textBox1->Text);  
    else  
       GetControl()->textBox1->Text = gcnew System::String(m_sEditBoxOnWinForm);  
    ```  
  
15. Nella definizione di OnButton1 in CHostForWinForm.cpp, aggiungere le tre righe seguenti alla fine della funzione:  
  
    ```  
    this->UpdateData(TRUE);  
    System::String ^ z = gcnew System::String(m_sEditBoxOnWinForm);  
    System::Windows::Forms::MessageBox::Show(z);  
    ```  
  
16. Compilare ed eseguire il progetto.  
  
## Vedere anche  
 <xref:System.Windows.Forms.UserControl?displayProperty=fullName>   
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)