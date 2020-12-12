---
description: 'Altre informazioni su: procedura: creare il controllo utente e la visualizzazione MDI host'
title: 'Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms Controls
- Windows Forms [C++], MFC support
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
ms.openlocfilehash: d05d2132c4382365b1de16490481049cb43ffe22
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328776"
---
# <a name="how-to-create-the-user-control-and-host-mdi-view"></a>Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI

Nei passaggi seguenti viene illustrato come creare un controllo utente di .NET Framework, creare il controllo utente in una libreria di classi del controllo (in particolare un progetto di libreria di controlli Windows), quindi compilare il progetto in un assembly. Il controllo può quindi essere utilizzato da un'applicazione MFC che utilizza le classi derivate dalla [classe CView](../mfc/reference/cview-class.md) e dalla [classe CWinFormsView](../mfc/reference/cwinformsview-class.md).

Per informazioni sulla creazione di un controllo utente Windows Forms e sulla creazione di una libreria di classi di controlli, vedere [procedura: creare controlli utente](/dotnet/framework/winforms/controls/how-to-author-composite-controls).

> [!NOTE]
> In alcuni casi, i controlli di Windows Forms, ad esempio un controllo griglia di terze parti, potrebbero non funzionare in modo affidabile quando sono ospitati in un'applicazione MFC. Una soluzione alternativa consigliata consiste nell'inserire un controllo utente Windows Forms nell'applicazione MFC e inserire il controllo griglia di terze parti all'interno del controllo utente.

Questa procedura presuppone che sia stato creato un progetto di libreria di controlli Windows Forms denominato WindowsFormsControlLibrary1, in base alla procedura descritta in [procedura: creare il controllo utente e l'host in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Scegliere **nuovo** dal menu **file** , quindi fare clic su **progetto**. Nella cartella **Visual C++** selezionare **applicazione MFC**.

   Nella casella **nome** immettere `MFC02` e modificare l'impostazione della **soluzione** in **Aggiungi a soluzione**. Fare clic su **OK**.

   Nella **creazione guidata applicazione MFC** accettare tutte le impostazioni predefinite, quindi fare clic su **fine**. In questo modo viene creata un'applicazione MFC con un'interfaccia a documenti multipli.

1. Configurare il progetto per il supporto di Common Language Runtime (CLR).

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul `MFC01` nodo del progetto e scegliere **proprietà** dal menu di scelta rapida. Verrà visualizzata la finestra di dialogo **pagine delle proprietà** .

   In **proprietà di configurazione** selezionare **generale**. Nella sezione **impostazioni predefinite progetto** impostare **supporto Common Language Runtime** su **supporto Common Language Runtime (/CLR)**.

   In **proprietà di configurazione** espandere **C/C++** e fare clic sul nodo **generale** . Impostare il **formato delle informazioni di debug** su **database di programma (/Zi)**.

   Fare clic sul nodo **generazione codice** . Impostare **Abilita ricompilazione minima** su **No (/GM-)**. Impostare anche i **controlli di runtime di base** sul **valore predefinito**.

   Fare clic su **OK** per applicare le modifiche.

1. In *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) aggiungere la riga seguente:

    ```
    #using <System.Windows.Forms.dll>
    ```

1. Aggiungere un riferimento al controllo .NET.

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse sul `MFC02` nodo del progetto e scegliere **Aggiungi**, **riferimenti**. Nella **pagina delle proprietà** fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsFormsControlLibrary1 (nella scheda **progetti** ) e fare clic su **OK**. Viene aggiunto un riferimento sotto forma di opzione del compilatore [/fu](../build/reference/fu-name-forced-hash-using-file.md) in modo che il programma venga compilato. copia inoltre WindowsFormsControlLibrary1.dll nella directory del `MFC02` progetto, in modo che il programma venga eseguito.

1. In stdafx. h individuare la riga seguente:

    ```
    #endif // _AFX_NO_AFXCMN_SUPPORT
    ```

   Aggiungere le righe sopra di essa:

    ```
    #include <afxwinforms.h>   // MFC Windows Forms support
    ```

1. Modificare la classe di visualizzazione in modo da ereditare da [CWinFormsView](../mfc/reference/cwinformsview-class.md).

   In MFC02View. h Sostituire [CView](../mfc/reference/cview-class.md) con [CWinFormsView](../mfc/reference/cwinformsview-class.md) in modo che il codice venga visualizzato come segue:

    ```
    class CMFC02View : public CWinFormsView
    {
    };
    ```

   Se si desidera aggiungere visualizzazioni aggiuntive all'applicazione MDI, sarà necessario chiamare [CWinApp:: AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate) per ogni visualizzazione creata.

1. Modificare il file MFC02View. cpp per modificare CView in CWinFormsView nella IMPLEMENT_DYNCREATE macro e la mappa messaggi e sostituire il costruttore vuoto esistente con il costruttore riportato di seguito:

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

   In **Esplora soluzioni** fare clic con il pulsante destro del mouse su MFC02 e scegliere **Imposta come progetto di avvio**.

   Nel menu **Compila** scegliere **Compila soluzione**.

   Scegliere **Avvia senza eseguire debug** dal menu **debug** .

## <a name="see-also"></a>Vedi anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)
