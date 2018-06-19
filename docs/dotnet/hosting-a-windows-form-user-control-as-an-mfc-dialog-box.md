---
title: Hosting di un Windows Form il controllo utente come la finestra di dialogo MFC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms [C++], hosting as MFC Dialog
- hosting Windows Forms control [C++]
ms.assetid: 0434a9d7-8b14-48e6-ad69-9ba9a684677a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b356bff4974b43445524d9bc07e1e37c62a6f8d4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33138678"
---
# <a name="hosting-a-windows-form-user-control-as-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form come finestra di dialogo MFC
MFC fornisce la classe modello [CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md) in modo che è possibile ospitare un controllo utente Windows Form (<xref:System.Windows.Forms.UserControl>) in una finestra di dialogo MFC modale o non modale. `CWinFormsDialog` è derivato dalla classe MFC [CDialog](../mfc/reference/cdialog-class.md), pertanto la finestra di dialogo può essere avviata come modale o non modale.  
  
 Il processo che `CWinFormsDialog` utilizza per ospitare il controllo utente è simile a quello descritto in [ospita un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md). Tuttavia, `CWinFormsDialog` gestisce l'inizializzazione e l'hosting del controllo utente in modo che non deve essere programmate manualmente.  
  
 Per un'applicazione di esempio che mostra i Windows Form con MFC, vedere [MFC e integrazione con Windows Form](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC  
  
1.  Creare un progetto di applicazione MFC.  
  
     Nel **File** dal menu **New**, quindi fare clic su **progetto**. Nel **Visual C++** cartella, selezionare **applicazione MFC**.  
  
     Nel **nome** immettere `MFC03` e modificare l'impostazione relativa alla soluzione **aggiungere alla soluzione**. Fare clic su **OK**.  
  
     Nel **Creazione guidata applicazione MFC**, accettare tutte le impostazioni predefinite e quindi fare clic su **fine**. Consente di creare un'applicazione MFC con interfaccia a documenti multipli.  
  
2.  Configurare il progetto.  
  
     In **Esplora**, fare doppio clic su di **MFC03** nodo del progetto e scegliere **proprietà**. Il **pagine delle proprietà** viene visualizzata la finestra di dialogo.  
  
     Nel **pagine delle proprietà** della finestra di dialogo di **le proprietà di configurazione** controllo struttura ad albero, seleziona **generale**, quindi nella **impostazionipredefiniteprogetto**sezione, impostare **supporto Common Language Runtime** a **supporto Common Language Runtime (o clr)**. Fare clic su **OK**.  
  
3.  Aggiungere un riferimento al controllo .NET.  
  
     In **Esplora**, fare doppio clic su di **MFC03** nodo del progetto e scegliere **Aggiungi**, **riferimenti**. Nel **pagina delle proprietà**, fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsControlLibrary1 (sotto il **progetti** scheda), fare clic su **OK**. Verrà aggiunto un riferimento sotto forma di un [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che il programma verrà compilato; WindowsControlLibrary1.dll in copia anche il `MFC03` directory del progetto in modo che il programma verrà eseguito.  
  
4.  Aggiungere `#include <afxwinforms.h>` a stdafx. h, alla fine dell'oggetto esistente `#include` istruzioni.  
  
5.  Aggiungere una nuova classe che rappresenta una sottoclasse `CDialog`.  
  
     Fare clic con il pulsante destro sul nome del progetto e aggiungere una classe MFC, denominata CHostForWinForm, che rappresenta una sottoclasse `CDialog`. Poiché non necessaria la risorsa finestra di dialogo, è possibile eliminare l'ID risorsa (selezionare la visualizzazione di risorse, espandere la cartella della finestra di dialogo ed Elimina risorsa IDD_HOSTFORWINFORM.  Quindi, rimuovere tutti i riferimenti all'ID nel codice.).  
  
6.  Sostituire `CDialog` nei file h e CHostForWinForm. cpp con `CWinFormsDialog<WindowsControlLibrary1::UserControl1>`.  
  
7.  Chiamare DoModal nella classe CHostForWinForm.  
  
     In MFC03, aggiungere `#include "HostForWinForm.h"`.  
  
     Prima dell'istruzione return nella definizione di CMFC03App, aggiungere:  
  
     `CHostForWinForm m_HostForWinForm;`  
  
     `m_HostForWinForm.DoModal();`  
  
8.  Compilare ed eseguire il progetto.  
  
     Scegliere **Compila soluzione** dal menu **Compila**.  
  
     Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.  
  
     Successivamente, si aggiungerà codice per monitorare lo stato di un controllo Windows Form dall'applicazione MFC.  
  
9. Aggiungere un gestore per OnInitDialog.  
  
     Visualizzazione di **proprietà** finestra (F4). In **Visualizzazione classi**, selezionare CHostForWinForm. Nel **proprietà** finestra, selezionare sostituzioni e nella riga relativa a OnInitDialog, fare clic nella colonna a sinistra e selezionare \< Aggiungi >. Questo comando aggiunge la riga seguente a h:  
  
    ```  
    virtual BOOL OnInitDialog();  
    ```  
  
10. Definire OnInitDialog (in CHostForWinForm. cpp) come segue:  
  
    ```  
    BOOL CHostForWinForm::OnInitDialog() {  
       CWinFormsDialog<WindowsControlLibrary1::UserControl1>::OnInitDialog();  
       GetControl()->button1->Click += MAKE_DELEGATE(System::EventHandler, OnButton1);  
       return TRUE;  
    }  
    ```  
  
11. Aggiungere il gestore OnButton1. Aggiungere le righe seguenti alla sezione pubblica della classe CHostForWinForm in h:  
  
    ```  
    virtual void OnButton1( System::Object^ sender, System::EventArgs^ e );  
  
    BEGIN_DELEGATE_MAP( CHostForWinForm )  
       EVENT_DELEGATE_ENTRY( OnButton1, System::Object^, System::EventArgs^ );  
    END_DELEGATE_MAP()  
    ```  
  
     In CHostForWinForm. cpp, aggiungere la seguente definizione:  
  
    ```  
    void CHostForWinForm::OnButton1( System::Object^ sender, System::EventArgs^ e )   
    {  
       System::Windows::Forms::MessageBox::Show("test");  
    }  
    ```  
  
12. Compilare ed eseguire il progetto. Quando si sceglie il pulsante, che si trova in Windows Form, verrà eseguito codice nell'applicazione MFC.  
  
     Successivamente, si aggiungerà codice per la visualizzazione dal codice MFC il valore nella casella di testo in Windows Form.  
  
13. Nella sezione pubblica della classe CHostForWinForm in h, aggiungere la seguente dichiarazione:  
  
    ```  
    CString m_sEditBoxOnWinForm;  
    ```  
  
14. Nella definizione di DoDataExchange in CHostForWinForm. cpp, aggiungere le tre righe seguenti alla fine della funzione:  
  
    ```  
    if (pDX->m_bSaveAndValidate)  
       m_sEditBoxOnWinForm = CString( GetControl()->textBox1->Text);  
    else  
       GetControl()->textBox1->Text = gcnew System::String(m_sEditBoxOnWinForm);  
    ```  
  
15. Nella definizione di OnButton1 in CHostForWinForm. cpp, aggiungere le tre righe seguenti alla fine della funzione:  
  
    ```  
    this->UpdateData(TRUE);  
    System::String ^ z = gcnew System::String(m_sEditBoxOnWinForm);  
    System::Windows::Forms::MessageBox::Show(z);  
    ```  
  
16. Compilare ed eseguire il progetto.  
  
## <a name="see-also"></a>Vedere anche  
 <xref:System.Windows.Forms.UserControl?displayProperty=fullName>   
 [Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)