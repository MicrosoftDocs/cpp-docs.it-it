---
description: "Altre informazioni su: procedura: creare il controllo utente e l'host in una finestra di dialogo"
title: 'Procedura: creare il controllo utente e inserirlo in una finestra di dialogo'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: 03a53032-2f03-4fa2-b567-031615a26011
ms.openlocfilehash: 400906344f47f7100e52319adb37c39d1fb370e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97283964"
---
# <a name="how-to-create-the-user-control-and-host-in-a-dialog-box"></a>Procedura: creare il controllo utente e inserirlo in una finestra di dialogo

I passaggi descritti in questo articolo presuppongono che si stia creando un progetto basato su finestra di dialogo ([CDialog Class](../mfc/reference/cdialog-class.md)) Microsoft Foundation Classes (MFC), ma è anche possibile aggiungere il supporto per un controllo Windows Forms a una finestra di dialogo MFC esistente.

### <a name="to-create-the-net-user-control"></a>Per creare il controllo utente .NET

1. Creare un progetto libreria di controlli Windows Forms Visual C# denominato `WindowsFormsControlLibrary1` .

   Nel menu **File** fare clic su **Nuovo** e quindi su **Progetto**. Nella cartella **Visual C#** selezionare **Windows Forms libreria di controlli**.

   Per accettare il `WindowsFormsControlLibrary1` nome del progetto, fare clic su **OK**.

   Per impostazione predefinita, il nome del controllo .NET sarà `UserControl1` .

1. Aggiungere i controlli figlio a `UserControl1` .

   Nella **casella degli strumenti** aprire l'elenco **tutti Windows Forms** . Trascinare un controllo **Button** nell' `UserControl1` area di progettazione.

   Aggiungere anche un controllo **TextBox** .

1. In **Esplora soluzioni** fare doppio clic su **UserControl1.designer.cs** per aprirlo per la modifica. Modificare le dichiarazioni della casella di testo e il pulsante da `private` a `public` .

1. Compilare il progetto.

   Nel menu **Compila** scegliere **Compila soluzione**.

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Nel menu **File** fare clic su **Nuovo** e quindi su **Progetto**. Nella cartella **Visual C++** selezionare **applicazione MFC**.

   Nella casella **Nome** digitare `MFC01`. Modificare l'impostazione della soluzione in **Aggiungi a soluzione**. Fare clic su **OK**.

   Per tipo di applicazione della **creazione guidata applicazione MFC** selezionare **basata su finestra di dialogo**. Accettare le impostazioni predefinite rimanenti e fare clic su **fine**. Verrà creata un'applicazione MFC con una finestra di dialogo MFC.

1. Aggiungere un controllo segnaposto alla finestra di dialogo MFC.

   Scegliere **visualizzazione risorse** dal menu **Visualizza** . In **visualizzazione risorse** espandere la cartella della **finestra di dialogo** e fare doppio clic su `IDD_MFC01_DIALOG` . La risorsa finestra di dialogo viene visualizzata nell' **Editor risorse**.

   Nella **casella degli strumenti** aprire l'elenco **editor finestre** . Trascinare un controllo **testo statico** nella risorsa finestra di dialogo. Il controllo **testo statico** fungerà da segnaposto per il controllo Windows Forms .NET. Ridimensionarlo a circa le dimensioni del controllo Windows Forms.

   Nella finestra **Proprietà** modificare l' **ID** del controllo **testo statico** in `IDC_CTRL1` e impostare la proprietà **TabStop** su **true**.

1. Configurare il progetto per il supporto di Common Language Runtime (CLR).

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto MFC01, quindi scegliere **Proprietà**.

   Nella finestra di dialogo **pagine delle proprietà** , in **proprietà di configurazione**, selezionare **generale**. Nella sezione **impostazioni predefinite progetto** impostare **supporto Common Language Runtime** su **supporto Common Language Runtime (/CLR)**.

   In **proprietà di configurazione** espandere **C/C++** e selezionare il nodo **generale** . Impostare il **formato delle informazioni di debug** su **database di programma (/Zi)**.

   Selezionare il nodo **generazione codice** . Impostare **Abilita ricompilazione minima** su **No (/GM-)**. Impostare anche i **controlli di runtime di base** sul **valore predefinito**.

   Fare clic su **OK** applicare le modifiche.

1. Aggiungere un riferimento al controllo .NET.

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul nodo del progetto MFC01, quindi scegliere **Aggiungi**, **riferimenti**. Nella **pagina delle proprietà** fare clic su **Aggiungi nuovo riferimento**, selezionare **WindowsFormsControlLibrary1** (nella scheda **progetti** ) e fare clic su **OK**. Viene aggiunto un riferimento sotto forma di opzione del compilatore [/fu](../build/reference/fu-name-forced-hash-using-file.md) in modo che il programma venga compilato. Inserisce inoltre una copia di WindowsFormsControlLibrary1.dll nella cartella del progetto \MFC01\, in modo che il programma venga eseguito.

1. In stdafx. h individuare la riga seguente:

    ```
    #endif // _AFX_NO_AFXCMN_SUPPORT
    ```

   Aggiungere le righe seguenti:

    ```
    #include <afxwinforms.h>   // MFC Windows Forms support
    ```

1. Aggiungere il codice per creare il controllo gestito.

   Dichiarare prima di tutto il controllo gestito. In MFC01Dlg. h, passare alla dichiarazione della classe della finestra di dialogo e aggiungere un membro dati per il controllo utente nell'ambito protetto, come indicato di seguito.

    ```
    class CMFC01Dlg : public CDialog
    {
       // ...
       // Data member for the .NET User Control:
       CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_ctrl1;
    ```

   Fornire quindi un'implementazione per il controllo gestito. In MFC01Dlg. cpp, nell'override della finestra di dialogo `CMFC01Dlg::DoDataExchange` generato dalla creazione guidata applicazione MFC (non presente `CAboutDlg::DoDataExchange` nello stesso file), aggiungere il codice seguente per creare il controllo gestito e associarlo al segnaposto statico IDC_CTRL1.

    ```
    void CMFC01Dlg::DoDataExchange(CDataExchange* pDX)
    {
       CDialog::DoDataExchange(pDX);
       DDX_ManagedControl(pDX, IDC_CTRL1, m_ctrl1);
    }
    ```

1. Compilare ed eseguire il progetto.

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse su **MFC01** e quindi scegliere **Imposta come progetto di avvio**.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere **Avvia senza eseguire debug** dal menu **debug** . Nella finestra di dialogo MFC verrà visualizzato il controllo Windows Forms.

## <a name="see-also"></a>Vedi anche

[Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)
