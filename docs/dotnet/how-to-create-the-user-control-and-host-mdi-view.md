---
title: 'Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms Controls
- Windows Forms [C++], MFC support
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
ms.openlocfilehash: 72501ba32d3b8b9a5c5fd8dd0c56f0628642b147
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374461"
---
# <a name="how-to-create-the-user-control-and-host-mdi-view"></a>Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI

Nei passaggi seguenti viene illustrato come creare un controllo utente .NET Framework, creare il controllo utente in una libreria di classi di controlli (in particolare, un progetto Libreria di controlli Windows) e quindi compilare il progetto in un assembly. Il controllo può quindi essere utilizzato da un'applicazione MFC che utilizza classi derivate dalla [classe CView](../mfc/reference/cview-class.md) e dalla [classe CWinFormsView](../mfc/reference/cwinformsview-class.md).

Per informazioni su come creare un controllo utente Windows Form e creare una libreria di classi di controlli, vedere [Procedura: Creare controlli utente](/dotnet/framework/winforms/controls/how-to-author-composite-controls).

> [!NOTE]
> In alcuni casi, i controlli Windows Form, ad esempio un controllo Grid di terze parti, potrebbero non funzionare in modo affidabile quando sono ospitati in un'applicazione MFC. Una soluzione consigliata consiste nell'inserire un controllo utente Windows Form nell'applicazione MFC e inserire il controllo Grid di terze parti all'interno del controllo utente.

In questa procedura si presuppone che sia stato creato un progetto Libreria di controlli Windows Form denominato WindowsFormsControlLibrary1, in base alla procedura descritta in [Procedura: creare il controllo utente e l'host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Scegliere **Nuovo**dal menu **File** , quindi fare clic su **Progetto**. Selezionare **Applicazione MFC**nella cartella **Visual C.**

   Nella casella **Nome** `MFC02` immettere e modificare l'impostazione **Soluzione** in Aggiungi **a soluzione**. Fare clic su **OK**.

   Nella **Creazione guidata applicazione MFC**accettare tutte le impostazioni predefinite e quindi fare clic su **Fine**. In questo modo viene creata un'applicazione MFC con un'interfaccia a documenti multipli.

1. Configurare il progetto per il supporto di Common Language Runtime (CLR).

   In **Esplora soluzioni**fare `MFC01` clic con il pulsante destro del mouse sul nodo del progetto e **scegliere Proprietà** dal menu di scelta rapida. Verrà visualizzata la finestra di dialogo **Pagine delle proprietà.**

   In **Proprietà di configurazione**selezionare **Generale**. Nella sezione **Impostazioni predefinite progetto** impostare Supporto Common Language **Runtime** su Supporto Common Language **Runtime (/clr)**.

   In **Proprietà di configurazione**, espandere **C/C,** quindi fare clic sul nodo **Generale.** Impostare **Il formato** delle informazioni di debug su Database di programma **(/ .**

   Fare clic sul nodo **Generazione codice.** Impostare **Abilita ricompilazione minima** su **No (/Gm-)**. Impostare inoltre **Controlli runtime di base** su **Predefinito**.

   Fare clic **su OK** per applicare le modifiche.

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti), aggiungere la riga seguente:

    ```
    #using <System.Windows.Forms.dll>
    ```

1. Aggiungere un riferimento al controllo .NET.

   In **Esplora soluzioni**fare `MFC02` clic con il pulsante destro del mouse sul nodo del progetto e scegliere **Aggiungi**, **Riferimenti**. Nella **pagina**delle proprietà fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsFormsControlLibrary1 (nella scheda **Progetti** ) e fare clic su **OK**. Questo aggiunge un riferimento sotto forma di un [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che il programma verrà compilato; copia anche WindowsFormsControlLibrary1.dll nella `MFC02` directory del progetto in modo che il programma verrà eseguito.

1. In stdafx.h, trova questa riga:

    ```
    #endif // _AFX_NO_AFXCMN_SUPPORT
    ```

   Aggiungi queste righe sopra di esso:

    ```
    #include <afxwinforms.h>   // MFC Windows Forms support
    ```

1. Modificare la classe di visualizzazione in modo che erediti da [CWinFormsView](../mfc/reference/cwinformsview-class.md).

   In MFC02View.h sostituire [CView](../mfc/reference/cview-class.md) con [CWinFormsView](../mfc/reference/cwinformsview-class.md) in modo che il codice venga visualizzato come segue:

    ```
    class CMFC02View : public CWinFormsView
    {
    };
    ```

   Se si desidera aggiungere visualizzazioni aggiuntive all'applicazione MDI, è necessario chiamare [CWinApp::AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate) per ogni visualizzazione creata.

1. Modificare il file MFC02View.cpp per modificare CView in CWinFormsView nella macro IMPLEMENT_DYNCREATE e nella mappa messaggi e sostituire il costruttore vuoto esistente con il costruttore illustrato di seguito:

    ```
    IMPLEMENT_DYNCREATE(CMFC02View, CWinFormsView)

    CMFC02View::CMFC02View(): CWinFormsView(WindowsFormsControlLibrary1::UserControl1::typeid)
    {
    }
    BEGIN_MESSAGE_MAP(CMFC02View, CWinFormsView)
    //leave existing body as is
    END_MESSAGE_MAP()
    ```

1. Compilare ed eseguire il progetto.

   In **Esplora soluzioni**fare clic con il pulsante destro del mouse su MFC02 e scegliere Imposta come progetto di **avvio**.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere Avvia senza **eseguire debug**dal menu **Debug** .

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)
