---
title: Hosting di un Windows Form utente controllo come una finestra di dialogo MFC | Microsoft Docs
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
ms.openlocfilehash: 86a820e54e63c21c3ec4b9ace538bd6bfb4e9c0a
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50052865"
---
# <a name="hosting-a-windows-form-user-control-as-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form come finestra di dialogo MFC

MFC fornisce la classe modello [CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md) in modo che è possibile ospitare un controllo utente Windows Form (<xref:System.Windows.Forms.UserControl>) in una finestra di dialogo MFC modale o non modale. `CWinFormsDialog` è derivato dalla classe MFC [CDialog](../mfc/reference/cdialog-class.md), pertanto può essere avviata la finestra di dialogo come modale o non modale.

Il processo che `CWinFormsDialog` viene utilizzata per ospitare il controllo utente è simile a quello descritto in [che ospita un controllo utente di Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md). Tuttavia, `CWinFormsDialog` gestisce l'inizializzazione e l'hosting del controllo utente in modo che non dovrà essere programmate manualmente.

Per un'applicazione di esempio che illustra Windows Form utilizzato con MFC, vedere [MFC e Windows Forms Integration](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Nel **File** dal menu **New**, quindi fare clic su **progetto**. Nel **Visual C++** cartella e selezionare **applicazione MFC**.

   Nel **Name** casella, immettere `MFC03` e modificare l'impostazione relativa alla soluzione **aggiungere alla soluzione**. Fare clic su **OK**.

   Nel **Creazione guidata applicazione MFC**, accettare tutte le impostazioni predefinite e quindi fare clic su **fine**. Ciò consente di creare un'applicazione MFC con interfaccia a documenti multipli.

1. Configurare il progetto.

   Nelle **Esplora soluzioni**, fare doppio clic il **MFC03** nodo del progetto e scegliere **proprietà**. Il **pagine delle proprietà** verrà visualizzata la finestra di dialogo.

   Nel **pagine delle proprietà** nella finestra di dialogo il **le proprietà di configurazione** controllo albero, seleziona **generali**, quindi nella **impostazionipredefiniteprogetto**sezione, impostare **supporto Common Language Runtime** al **supporto Common Language Runtime (/ Common Language Runtime)**. Fare clic su **OK**.

1. Aggiungere un riferimento al controllo .NET.

   Nella **Esplora soluzioni**, fare doppio clic il **MFC03** nodo del progetto e scegliere **Add**, **riferimenti**. Nel **pagina delle proprietà**, fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsControlLibrary1 (sotto la **progetti** scheda), fare clic su **OK**. Verrà aggiunto un riferimento sotto forma di una [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che la compilazione del programma e viene copiato WindowsControlLibrary1.dll nella `MFC03` directory del progetto in modo che il programma verrà eseguito.

1. Aggiungere `#include <afxwinforms.h>` a stdafx. h, alla fine dell'oggetto esistente `#include` istruzioni.

1. Aggiungere una nuova classe che rappresenti le sottoclassi `CDialog`.

   Fare clic con il pulsante destro sul nome del progetto e aggiungere una classe MFC, denominata CHostForWinForm, che rappresenta una sottoclasse `CDialog`. Poiché non necessaria la risorsa finestra di dialogo, è possibile eliminare l'ID di risorsa (selezionare **visualizzazione di risorse**, espandere il **finestra di dialogo** cartella ed eliminare `IDD_HOSTFORWINFORM` risorsa.  Quindi, rimuovere tutti i riferimenti all'ID nel codice.).

1. Sostituire `CDialog` nei file CHostForWinForm. H e CHostForWinForm. cpp con `CWinFormsDialog<WindowsControlLibrary1::UserControl1>`.

1. Chiamare DoModal nella classe CHostForWinForm.

   In MFC03.cpp, aggiungere `#include "HostForWinForm.h"`.

   Prima dell'istruzione return nella definizione di CMFC03App::InitInstance, aggiungere:

    ```cpp
    CHostForWinForm m_HostForWinForm;
    m_HostForWinForm.DoModal();
    ```

1. Compilare ed eseguire il progetto.

   Scegliere **Compila soluzione** dal menu **Compila**.

   Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.

   Successivamente si aggiungerà codice per monitorare lo stato di un controllo per i moduli di Windows dall'applicazione MFC.

9. Aggiungere un gestore per OnInitDialog.

   Visualizzare il **proprietà** finestra (F4). Nelle **Visualizzazione classi**, selezionare CHostForWinForm. Nel **delle proprietà** finestra, selezionare sostituzioni e nella riga relativa a OnInitDialog, fare clic su nella colonna a sinistra e selezionare \< Aggiungi >. Questo comando aggiunge la seguente riga a CHostForWinForm. H:

    ```cpp
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

11. Successivamente, aggiungere il gestore OnButton1. Aggiungere le righe seguenti nella sezione pubblica della classe CHostForWinForm in CHostForWinForm. H:

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

12. Compilare ed eseguire il progetto. Quando si fa clic sul pulsante che si trova in Windows Form, verrà eseguito codice nell'applicazione MFC.

   Successivamente si aggiungerà codice per la visualizzazione dal codice MFC il valore nella casella di testo nel Form di Windows.

13. Nella sezione pubblica della classe CHostForWinForm in CHostForWinForm. H, aggiungere la dichiarazione seguente:

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
[Utilizzo di un controllo utente di Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)