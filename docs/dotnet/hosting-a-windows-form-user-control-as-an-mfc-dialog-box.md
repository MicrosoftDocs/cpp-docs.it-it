---
description: 'Altre informazioni su: hosting di un controllo utente Windows Form come finestra di dialogo MFC'
title: Hosting di un controllo utente Windows Form come finestra di dialogo MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms support
- Windows Forms [C++], hosting as MFC Dialog
- hosting Windows Forms control [C++]
ms.assetid: 0434a9d7-8b14-48e6-ad69-9ba9a684677a
ms.openlocfilehash: 64c68ede565b4248a812d46963f072fbab8bdc3c
ms.sourcegitcommit: c20734f18d3d49bb38b1628c68b53b54b3eeeb03
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/03/2021
ms.locfileid: "99522820"
---
# <a name="hosting-a-windows-form-user-control-as-an-mfc-dialog-box"></a>Hosting di un controllo utente Windows Form come finestra di dialogo MFC

MFC fornisce la classe modello [CWinFormsDialog](../mfc/reference/cwinformsdialog-class.md) in modo che sia possibile ospitare un controllo utente Windows Form ( <xref:System.Windows.Forms.UserControl> ) in una finestra di dialogo MFC modale o non modale. `CWinFormsDialog` viene derivato dalla classe MFC [CDialog](../mfc/reference/cdialog-class.md), quindi la finestra di dialogo può essere avviata come modale o non modale.

Il processo `CWinFormsDialog` utilizzato da per ospitare il controllo utente è simile a quello descritto in [hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md). Tuttavia, `CWinFormsDialog` gestisce l'inizializzazione e l'hosting del controllo utente in modo che non debba essere programmato manualmente.

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Scegliere **nuovo** dal menu **file** , quindi fare clic su **progetto**. Nella cartella **Visual C++** selezionare **applicazione MFC**.

   Nella casella **nome** immettere `MFC03` e modificare l'impostazione della soluzione in **Aggiungi a soluzione**. Fare clic su **OK**.

   Nella **creazione guidata applicazione MFC** accettare tutte le impostazioni predefinite, quindi fare clic su **fine**. In questo modo viene creata un'applicazione MFC con un'interfaccia a documenti multipli.

1. Configurare il progetto.

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto **MFC03** e scegliere **proprietà**. Verrà visualizzata la finestra di dialogo **pagine delle proprietà** .

   Nel controllo albero **proprietà di configurazione** della finestra di dialogo **pagine delle proprietà** selezionare **generale**, quindi nella sezione **impostazioni predefinite progetto** impostare **supporto Common Language Runtime** su **supporto Common Language Runtime (/CLR)**. Fare clic su **OK**.

1. Aggiungere un riferimento al controllo .NET.

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto **MFC03** e scegliere **Aggiungi**, **riferimenti**. Nella **pagina delle proprietà** fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsControlLibrary1 (nella scheda **progetti** ) e fare clic su **OK**. Viene aggiunto un riferimento sotto forma di opzione del compilatore [/fu](../build/reference/fu-name-forced-hash-using-file.md) in modo che il programma venga compilato. copia inoltre WindowsControlLibrary1.dll nella directory del `MFC03` progetto, in modo che il programma venga eseguito.

1. Aggiungere `#include <afxwinforms.h>` a *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) alla fine delle `#include` istruzioni esistenti.

1. Aggiungere una nuova classe che sottoclasse `CDialog` .

   Fare clic con il pulsante destro del mouse sul nome del progetto e aggiungere una classe MFC (denominata CHostForWinForm) sottoclassi `CDialog` . Poiché la risorsa della finestra di dialogo non è necessaria, è possibile eliminare l'ID risorsa (selezionare **visualizzazione risorse**, espandere la cartella della **finestra di dialogo** ed eliminare la `IDD_HOSTFORWINFORM` risorsa.  Rimuovere quindi tutti i riferimenti all'ID nel codice.

1. Sostituire `CDialog` nei file CHostForWinForm. h e CHostForWinForm. cpp con `CWinFormsDialog<WindowsControlLibrary1::UserControl1>` .

1. Chiamare DoModal sulla classe CHostForWinForm.

   In MFC03. cpp aggiungere `#include "HostForWinForm.h"` .

   Prima dell'istruzione return nella definizione di CMFC03App:: InitInstance, aggiungere:

    ```cpp
    CHostForWinForm m_HostForWinForm;
    m_HostForWinForm.DoModal();
    ```

1. Compilare ed eseguire il progetto.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere **Avvia senza eseguire debug** dal menu **debug** .

   Successivamente, verrà aggiunto il codice per monitorare lo stato di un controllo nel Windows Form dall'applicazione MFC.

1. Aggiungere un gestore per OnInitDialog.

   Visualizzare la finestra **Proprietà** (F4). In **Visualizzazione classi** selezionare CHostForWinForm. Nella finestra **Proprietà** selezionare sostituzioni e nella riga per OnInitDialog, fare clic nella colonna a sinistra e selezionare \< Add > . In questo modo viene aggiunta la riga seguente a CHostForWinForm. h:

    ```cpp
    virtual BOOL OnInitDialog();
    ```

1. Definire OnInitDialog (in CHostForWinForm. cpp) come indicato di seguito:

    ```cpp
    BOOL CHostForWinForm::OnInitDialog() {
       CWinFormsDialog<WindowsControlLibrary1::UserControl1>::OnInitDialog();
       GetControl()->button1->Click += MAKE_DELEGATE(System::EventHandler, OnButton1);
       return TRUE;
    }
    ```

1. Aggiungere quindi il gestore OnButton1. Aggiungere le righe seguenti alla sezione public della classe CHostForWinForm in CHostForWinForm. h:

    ```cpp
    virtual void OnButton1( System::Object^ sender, System::EventArgs^ e );

    BEGIN_DELEGATE_MAP( CHostForWinForm )
       EVENT_DELEGATE_ENTRY( OnButton1, System::Object^, System::EventArgs^ );
    END_DELEGATE_MAP()
    ```

   In CHostForWinForm. cpp aggiungere questa definizione:

    ```cpp
    void CHostForWinForm::OnButton1( System::Object^ sender, System::EventArgs^ e )
    {
       System::Windows::Forms::MessageBox::Show("test");
    }
    ```

1. Compilare ed eseguire il progetto. Quando si fa clic sul pulsante, che è in Windows Form, verrà eseguito il codice nell'applicazione MFC.

    Successivamente, verrà aggiunto il codice per visualizzare dal codice MFC il valore nella casella di testo del Windows Form.

1. Nella sezione public della classe CHostForWinForm in CHostForWinForm. h aggiungere la dichiarazione seguente:

    ```cpp
    CString m_sEditBoxOnWinForm;
    ```

1. Nella definizione di DoDataExchange in CHostForWinForm. cpp, aggiungere le tre righe seguenti alla fine della funzione:

    ```cpp
    if (pDX->m_bSaveAndValidate)
       m_sEditBoxOnWinForm = CString( GetControl()->textBox1->Text);
    else
       GetControl()->textBox1->Text = gcnew System::String(m_sEditBoxOnWinForm);
    ```

1. Nella definizione di OnButton1 in CHostForWinForm. cpp, aggiungere le tre righe seguenti alla fine della funzione:

    ```cpp
    this->UpdateData(TRUE);
    System::String ^ z = gcnew System::String(m_sEditBoxOnWinForm);
    System::Windows::Forms::MessageBox::Show(z);
    ```

1. Compilare ed eseguire il progetto.

## <a name="see-also"></a>Vedi anche

<xref:System.Windows.Forms.UserControl?displayProperty=fullName>
[Uso di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)
