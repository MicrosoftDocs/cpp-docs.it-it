---
title: 'Procedura: creare il controllo utente e inserirlo in una finestra di dialogo | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], hosting a Windows Forms Control
- Windows Forms [C++], MFC support
ms.assetid: 03a53032-2f03-4fa2-b567-031615a26011
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 97dde9c90b3cf5c4c4e1e705a605dce98d755abb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50072538"
---
# <a name="how-to-create-the-user-control-and-host-in-a-dialog-box"></a>Procedura: creare il controllo utente e inserirlo in una finestra di dialogo

Le procedure descritte in questo articolo presuppongono che si sta creando una finestra di dialogo basate su ([classe CDialog](../mfc/reference/cdialog-class.md)) progetto di Microsoft Foundation Classes (MFC), ma è possibile aggiungere anche il supporto per un controllo Windows Form a una finestra di dialogo MFC esistente.

### <a name="to-create-the-net-user-control"></a>Per creare il controllo utente .NET

1. Creare un progetto libreria di controlli Windows Form di Visual c# denominato `WindowsFormsControlLibrary1`.

   Scegliere **Nuovo** dal menu **File** , quindi fare clic su **Progetto**. Nel **Visual c#** cartella e selezionare **libreria di controlli Windows Form**.

   Accettare il `WindowsFormsControlLibrary1` nome del progetto, fare clic su **OK**.

   Per impostazione predefinita, il nome del controllo .NET sarà `UserControl1`.

1. Aggiungere controlli figlio a `UserControl1`.

   Nel **casella degli strumenti**, aprire il **tutti i Windows Form** elenco. Trascinare un **sul pulsante** controllo di `UserControl1` nell'area di progettazione.

   Aggiungere anche un **casella di testo** controllo.

1. Nelle **Esplora soluzioni**, fare doppio clic su **UserControl1.Designer.cs** per aprirlo e modificarlo. Modificare le dichiarazioni di TextBox e Button da `private` a `public`.

1. Compilare il progetto.

   Scegliere **Compila soluzione** dal menu **Compila**.

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Scegliere **Nuovo** dal menu **File** , quindi fare clic su **Progetto**. Nel **Visual C++** cartella e selezionare **applicazione MFC**.

   Nella casella **Nome** digitare `MFC01`. Modificare l'impostazione relativa alla soluzione **Aggiungi a soluzione**. Fare clic su **OK**.

   Nel **Creazione guidata applicazione MFC**, tipo di applicazione, selezionare **basato su finestra di dialogo**. Accettare le impostazioni predefinite rimanenti e fare clic su **fine**. Ciò consente di creare un'applicazione MFC che dispone di una finestra di dialogo MFC.

1. Aggiungere un controllo segnaposto alla finestra di dialogo MFC.

   Nel **View** menu, fare clic su **visualizzazione risorse**. Nelle **visualizzazione di risorse**, espandere il **finestra di dialogo** cartella e fare doppio clic `IDD_MFC01_DIALOG`. La risorsa finestra di dialogo viene visualizzato nella **Editor di risorse**.

   Nel **casella degli strumenti**, aprire il **Editor finestre** elenco. Trascinare un **testo statico** controllo risorsa finestra di dialogo. Il **testo statico** controllo funge da segnaposto per il controllo Windows Form. Ridimensionarlo approssimativamente alle dimensioni del controllo Windows Form.

   Nel **delle proprietà** finestra Modifica il **ID** del **testo statico** il controllo a `IDC_CTRL1` e modificare il **TabStop** proprietà **True**.

1. Configurare il progetto per il supporto Common Language Runtime (CLR).

   Nelle **Esplora soluzioni**, fare clic sul nodo MFC01 del progetto e quindi fare clic su **proprietà**.

   Nel **pagine delle proprietà** nella finestra di dialogo **delle proprietà di configurazione**, selezionare **generali**. Nel **impostazioni predefinite progetto** sezione, impostare **supporto Common Language Runtime** al **supporto Common Language Runtime (/ Common Language Runtime)**.

   Sotto **le proprietà di configurazione**, espandere **C/C++** e selezionare il **generali** nodo. Impostare **formato informazioni di Debug** al **programma (/Zi) Database**.

   Selezionare il **generazione di codice** nodo. Impostare **Abilita ricompilazione minima** al **No (/ /GM-)**. Impostare anche **controlli Runtime di base** al **predefinito**.

   Fare clic su **OK** per applicare le modifiche.

1. Aggiungere un riferimento al controllo .NET.

   Nelle **Esplora soluzioni**, fare clic sul nodo MFC01 del progetto e quindi fare clic su **Add**, **riferimenti**. Nel **pagina delle proprietà**, fare clic su **Aggiungi nuovo riferimento**, selezionare **WindowsFormsControlLibrary1** (sotto il **progetti** scheda), fare clic su **OK**. Verrà aggiunto un riferimento sotto forma di una [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che la compilazione del programma. Inserisce anche una copia di WindowsFormsControlLibrary1.dll nella cartella del progetto \MFC01\ in modo che il programma verrà eseguito.

1. In stdafx. h, trovare la seguente riga:

    ```
    #endif // _AFX_NO_AFXCMN_SUPPORT
    ```

   Sopra di esso, aggiungere le righe seguenti:

    ```
    #include <afxwinforms.h>   // MFC Windows Forms support
    ```

1. Aggiungere codice per creare il controllo gestito.

   Innanzitutto, dichiarare il controllo gestito. In MFC01Dlg.h passare alla dichiarazione della classe di finestra di dialogo e aggiungere un membro dati per il controllo utente nell'ambito protetto, come indicato di seguito.

    ```
    class CMFC01Dlg : public CDialog
    {
       // ...
       // Data member for the .NET User Control:
       CWinFormsControl<WindowsFormsControlLibrary1::UserControl1> m_ctrl1;
    ```

   Successivamente, fornire un'implementazione per il controllo gestito. In MFC01Dlg.cpp, nella finestra di dialogo di eseguire l'override di `CMFC01Dlg::DoDataExchange` che è stato generato dalla creazione guidata applicazione MFC (non `CAboutDlg::DoDataExchange`, ovvero nello stesso file), aggiungere il codice seguente per creare il controllo gestito e associarlo al segnaposto statico IDC_CTRL1.

    ```
    void CMFC01Dlg::DoDataExchange(CDataExchange* pDX)
    {
       CDialog::DoDataExchange(pDX);
       DDX_ManagedControl(pDX, IDC_CTRL1, m_ctrl1);
    }
    ```

1. Compilare ed eseguire il progetto.

   Nelle **Esplora soluzioni**, fare doppio clic su **MFC01** e quindi fare clic su **imposta come progetto di avvio**.

   Scegliere **Compila soluzione** dal menu **Compila**.

   Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**. La finestra di dialogo MFC dovrebbe visualizzare il controllo Windows Form.

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form in una finestra di dialogo MFC](../dotnet/hosting-a-windows-form-user-control-in-an-mfc-dialog-box.md)