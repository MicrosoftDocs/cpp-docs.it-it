---
title: 'Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI | Microsoft Docs'
ms.custom: get-started-article
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms Controls
- Windows Forms [C++], MFC support
ms.assetid: 625b5821-f923-4701-aca0-c1a4ceca4f63
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 2e61a69661034fb582039c744c3483f461405581
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50056971"
---
# <a name="how-to-create-the-user-control-and-host-mdi-view"></a>Procedura: creare il controllo utente e inserirlo nella visualizzazione MDI

La procedura seguente illustra come creare un controllo utente .NET Framework, modificare un controllo utente in una libreria di classi di controllo (in particolare, un progetto libreria di controlli Windows) e quindi compilare il progetto in un assembly. Il controllo può quindi essere utilizzato da un'applicazione MFC che utilizza le classi derivate da [classe CView](../mfc/reference/cview-class.md) e [classe CWinFormsView](../mfc/reference/cwinformsview-class.md).

Per informazioni su come creare un controllo utente Windows Form, creare e modificare una libreria di classi di controllo, vedere [procedura: creare controlli utente](/dotnet/framework/winforms/controls/how-to-author-composite-controls).

> [!NOTE]
>  In alcuni casi, i controlli Windows Form, ad esempio un controllo griglia di terze parti, potrebbero non comportarsi in modo affidabile quando ospitata in un'applicazione MFC. Soluzione alternativa consigliata consiste nel posizionare un controllo utente di Windows Form nell'applicazione MFC e inserire il controllo griglia di terze parti all'interno del controllo utente.

Questa procedura presuppone che sia creato un progetto libreria di controlli Windows Form denominato WindowsFormsControlLibrary1, come la procedura descritta in [procedura: creare il controllo utente e inserirlo in una finestra di dialogo](../dotnet/how-to-create-the-user-control-and-host-in-a-dialog-box.md).

### <a name="to-create-the-mfc-host-application"></a>Per creare l'applicazione host MFC

1. Creare un progetto di applicazione MFC.

   Nel **File** dal menu **New**, quindi fare clic su **progetto**. Nel **Visual C++** cartella e selezionare **applicazione MFC**.

   Nel **nome** casella, immettere `MFC02` e modificare le **soluzione** impostazione su **aggiungere alla soluzione**. Fare clic su **OK**.

   Nel **Creazione guidata applicazione MFC**, accettare tutte le impostazioni predefinite e quindi fare clic su **fine**. Ciò consente di creare un'applicazione MFC con interfaccia a documenti multipli.

1. Configurare il progetto per il supporto Common Language Runtime (CLR).

   Nella **Esplora soluzioni**, fare doppio clic il `MFC01` nodo del progetto e selezionare **proprietà** dal menu di scelta rapida. Il **pagine delle proprietà** verrà visualizzata la finestra di dialogo.

   Sotto **le proprietà di configurazione**, selezionare **generali**. Sotto il **impostazioni predefinite progetto** sezione, impostare **supporto Common Language Runtime** al **supporto Common Language Runtime (/ Common Language Runtime)**.

   Sotto **le proprietà di configurazione**, espandere **C/C++** e fare clic sui **generali** nodo. Impostare **formato informazioni di Debug** al **programma (/Zi) Database**.

   Scegliere il **generazione di codice** nodo. Impostare **Abilita ricompilazione minima** al **No (/ /GM-)**. Impostare anche **controlli Runtime di base** al **predefinito**.

   Fare clic su **OK** per applicare le modifiche.

1. In stdafx. h, aggiungere la riga seguente:

    ```
    #using <System.Windows.Forms.dll>
    ```

1. Aggiungere un riferimento al controllo .NET.

   Nella **Esplora soluzioni**, fare doppio clic il `MFC02` nodo del progetto e selezionare **Add**, **riferimenti**. Nel **pagina delle proprietà**, fare clic su **Aggiungi nuovo riferimento**, selezionare WindowsFormsControlLibrary1 (sotto la **progetti** scheda), fare clic su **OK** . Verrà aggiunto un riferimento sotto forma di una [/FU](../build/reference/fu-name-forced-hash-using-file.md) opzione del compilatore in modo che la compilazione del programma e viene copiato il file WindowsFormsControlLibrary1.dll nella `MFC02` directory del progetto in modo che il programma verrà eseguito.

1. In stdafx. h, trovare la seguente riga:

    ```
    #endif // _AFX_NO_AFXCMN_SUPPORT
    ```

   Aggiungere le seguenti righe sopra di esso:

    ```
    #include <afxwinforms.h>   // MFC Windows Forms support
    ```

1. Modificare la classe di visualizzazione in modo che erediti da [CWinFormsView](../mfc/reference/cwinformsview-class.md).

   In MFC02View.h, sostituire [CView](../mfc/reference/cview-class.md) con [CWinFormsView](../mfc/reference/cwinformsview-class.md) in modo che il codice viene visualizzato come segue:

    ```
    class CMFC02View : public CWinFormsView
    {
    };
    ```

   Se si desidera aggiungere ulteriori visualizzazioni all'applicazione MDI, è necessario chiamare [CWinApp:: AddDocTemplate](../mfc/reference/cwinapp-class.md#adddoctemplate) per ogni visualizzazione creata.

1. Modificare il file MFC02View da modificare CView in CWinFormsView nella mappa IMPLEMENT_DYNCREATE (macro) e il messaggio e sostituire il costruttore vuoto esistente con il costruttore riportato di seguito:

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

   Nelle **Esplora soluzioni**, fare doppio clic su MFC02 e selezionare **imposta come progetto di avvio**.

   Scegliere **Compila soluzione** dal menu **Compila**.

   Nel **Debug** menu, fare clic su **Avvia senza eseguire debug**.

## <a name="see-also"></a>Vedere anche

[Hosting di un controllo utente Windows Form come visualizzazione MFC](../dotnet/hosting-a-windows-forms-user-control-as-an-mfc-view.md)