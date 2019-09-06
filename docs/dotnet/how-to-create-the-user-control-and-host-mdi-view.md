---
title: 'Procedura: Creare il controllo utente e la visualizzazione MDI host'
ms.custom: get-started-article
ms.date: 11/04/2016
helpviewer_keywords:
- MFC [C++], Windows Forms Controls
- Windows Forms [C++], MFC support
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
ms.openlocfilehash: 634dd9c1ad2ce9199cec0dfa7ef067bd45f242f6
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "70311752"
---
# <a name="how-to-create-the-user-control-and-host-mdi-view"></a>Procedura: Creare il controllo utente e la visualizzazione MDI host

Nei passaggi seguenti viene illustrato come creare un controllo utente di .NET Framework, creare il controllo utente in una libreria di classi del controllo (in particolare un progetto di libreria di controlli Windows), quindi compilare il progetto in un assembly. Il controllo può quindi essere utilizzato da un'applicazione MFC che utilizza le classi derivate dalla [classe CView](../mfc/reference/cview-class.md) e dalla [classe CWinFormsView](../mfc/reference/cwinformsview-class.md).

Per informazioni sulla creazione di un controllo utente Windows Forms e sulla creazione di una libreria di classi di [controlli, vedere Procedura: Modificare i controlli](/dotnet/framework/winforms/controls/how-to-author-composite-controls)utente.

> [!NOTE]
>  In alcuni casi, i controlli di Windows Forms, ad esempio un controllo griglia di terze parti, potrebbero non funzionare in modo affidabile quando sono ospitati in un'applicazione MFC. Una soluzione alternativa consigliata consiste nell'inserire un controllo utente Windows Forms nell'applicazione MFC e inserire il controllo griglia di terze parti all'interno del controllo utente.

Questa procedura presuppone che sia stato creato un progetto di libreria di controlli Windows Forms denominato WindowsFormsControlLibrary1, in base [alla procedura descritta in procedura: Creare il controllo utente e l'host in una finestra](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md)di dialogo.

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Scegliere **nuovo**dal menu **file** , quindi fare clic su **progetto**. Nella cartella **visuale C++**  Selezionare **applicazione MFC**.

   Nella casella **nome** immettere `MFC02` e modificare l'impostazione della **soluzione** in **Aggiungi a soluzione**. Fare clic su **OK**.

   Nella **creazione guidata applicazione MFC**accettare tutte le impostazioni predefinite, quindi fare clic su **fine**. In questo modo viene creata un'applicazione MFC con un'interfaccia a documenti multipli.

1. Configurare il progetto per il supporto di Common Language Runtime (CLR).

   In **Esplora soluzioni**fare clic con il pulsante `MFC01` destro del mouse sul nodo del progetto e scegliere **Proprietà** dal menu di scelta rapida. Verrà visualizzata la finestra di dialogo **pagine delle proprietà** .

   In **proprietà di configurazione**selezionare **generale**. Nella sezione **impostazioni predefinite progetto** impostare **supporto Common Language Runtime** su **supporto Common Language Runtime (/CLR)** .

   In **proprietà di configurazione**espandere **C/C++**  e fare clic sul nodo **generale** . Impostare il **formato delle informazioni di debug** su **database di programma (/Zi)** .

   Fare clic sul nodo **generazione codice** . Impostare **Abilita ricompilazione minima** su **No (/GM-)** . Impostare anche i **controlli di runtime di base** sul **valore predefinito**.

   Fare clic su **OK** per applicare le modifiche.

1. In *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) aggiungere la riga seguente:

    ```
    #using <System.Windows.Forms.dll>
    ```

1. Aggiungere un riferimento al controllo .NET.

   In **Esplora soluzioni**fare clic con il pulsante `MFC02` destro del mouse sul nodo del progetto e scegliere **Aggiungi**, **riferimenti**. Nella **pagina delle proprietà**fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsFormsControlLibrary1 (nella scheda **progetti** ) e fare clic su **OK**. Viene aggiunto un riferimento sotto forma di opzione del compilatore [/fu](../build/reference/fu-name-forced-hash-using-file.md) in modo che il programma venga compilato. copia inoltre WindowsFormsControlLibrary1. dll nella directory del `MFC02` progetto, in modo che il programma venga eseguito.

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

1. Modificare il file MFC02View. cpp per modificare CView in CWinFormsView nella macro IMPLEMENT_DYNCREATE e nella mappa messaggi e sostituire il costruttore vuoto esistente con il costruttore riportato di seguito:

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

   In **Esplora soluzioni**fare clic con il pulsante destro del mouse su MFC02 e scegliere **Imposta come progetto di avvio**.

   Scegliere **Compila soluzione** dal menu **Compila**.

   Scegliere **Avvia senza eseguire debug**dal menu **debug** .

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)
