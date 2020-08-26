---
title: "Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 1)"
ms.date: 09/09/2019
helpviewer_keywords:
- examples [MFC], update existing application
- ribbon UI, porting to
- Office Fluent UI, porting to
- samples [MFC], update existing application
- MFC Feature Pack, update existing application
- walkthroughs [MFC], update existing application
ms.assetid: aa6330d3-6cfc-4c79-8fcb-0282263025f7
ms.openlocfilehash: a9eda80fbabf939b9e3a5f8a0ef5b76e46656740
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840258"
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-1"></a>Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 1)

In questa procedura dettagliata viene illustrato come modificare un'applicazione MFC esistente per utilizzare l'interfaccia utente della barra multifunzione. Visual Studio supporta sia la barra multifunzione di Office 2007 che la barra multifunzione Windows 7 Scenic. Per ulteriori informazioni sull'interfaccia utente della barra multifunzione, vedere [Ribbons](/windows/win32/uxguide/cmd-ribbons).

In questa procedura dettagliata viene modificato l'esempio classico di Scribble 1.0 di MFC che consente di utilizzare il mouse per disegnare delle linee. Questa parte della procedura dettagliata mostra come modificare l'esempio di Scribble in modo che mostri una barra multifunzione. Nella [parte 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md) vengono aggiunti altri pulsanti alla barra multifunzione.

## <a name="prerequisites"></a>Prerequisiti

[Esempio scribble 1,0 MFC](https://download.microsoft.com/download/4/0/9/40946FEC-EE5C-48C2-8750-B0F8DA1C99A8/MFC/general/Scribble.zip.exe). Per informazioni sulla conversione in Visual Studio 2017 o versioni successive, vedere [Guida al porting: MFC Scribble](../porting/porting-guide-mfc-scribble.md).

## <a name="sections"></a><a name="top"></a> Sezioni

In questa parte della procedura dettagliata sono incluse le seguenti sezioni:

- [Sostituzione delle classi base](#replaceclass)

- [Aggiunta di bitmap al progetto](#addbitmap)

- [Aggiunta di una risorsa barra multifunzione al progetto](#addribbon)

- [Creazione di un'istanza della barra multifunzione](#createinstance)

- [Aggiunta di una categoria della barra multifunzione](#addcategory)

- [Impostazione dell'aspetto dell'applicazione](#setlook)

## <a name="replacing-the-base-classes"></a><a name="replaceclass"></a> Sostituzione delle classi di base

Per convertire un'applicazione che supporta un menu in un'applicazione che supporta una barra multifunzione, è necessario derivare le classi dell'applicazione, della finestra cornice e della barra degli strumenti da classi base aggiornate. Si consiglia di non modificare l'esempio Scribble originale. Al contrario, pulire il progetto Scribble, copiarlo in un'altra directory e quindi modificare la copia.

### <a name="to-replace-the-base-classes-in-the-scribble-application"></a>Per sostituire le classi base nell'applicazione Scribble

1. In Scribble. cpp verificare che `CScribbleApp::InitInstance` includa una chiamata a [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).

1. Aggiungere il codice seguente al file *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti):

    ```cpp
    #include <afxcontrolbars.h>
    ```

1. In Scribble. h modificare la definizione della classe in `CScribbleApp` modo che sia derivata dalla [classe CWinAppEx](../mfc/reference/cwinappex-class.md).

    ```cpp
    class CScribbleApp: public CWinAppEx
    ```

1. Scribble 1.0 è stato scritto quando le applicazioni Windows utilizzavano un file di inizializzazione (con estensione ini) per salvare i dati delle preferenze utente. Anziché utilizzare un file di inizializzazione, modificare Scribble in modo da archiviare le preferenze utente nel Registro di sistema. Per impostare la chiave del Registro di sistema e la base, digitare il seguente codice in `CScribbleApp::InitInstance` dopo l'istruzione `LoadStdProfileSettings()`.

    ```cpp
    SetRegistryKey(_T("MFCNext\\Samples\\Scribble2"));
    SetRegistryBase(_T("Settings"));
    ```

1. La cornice principale di un'applicazione MDI (Multiple Document Interface, interfaccia a documenti multipli) non è più derivata dalla classe `CMDIFrameWnd`. Viene invece derivato dalla classe [CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md) .

    Nei file mainfrm.h e mainfrm.cpp sostituire tutti i riferimenti a `CMDIFrameWnd` con `CMDIFrameWndEx`.

1. Nei file childfrm.h e childfrm.cpp sostituire `CMDIChildWnd` con `CMDIChildWndEx`.

    In childfrm. file h, sostituire `CSplitterWnd` con `CSplitterWndEx` .

1. Modificare le barre degli strumenti e le barre di stato per utilizzare le nuove classi MFC.

    Nel file mainfrm.h:

    1. Sostituire `CToolBar` con `CMFCToolBar`.

    1. Sostituire `CStatusBar` con `CMFCStatusBar`.

1. Nel file mainfrm.cpp:

    1. Sostituire `m_wndToolBar.SetBarStyle` con `m_wndToolBar.SetPaneStyle`.

    1. Sostituire `m_wndToolBar.GetBarStyle` con `m_wndToolBar.GetPaneStyle`.

    1. Sostituire `DockControlBar(&m_wndToolBar)` con `DockPane(&m_wndToolBar)`.

1. Nel file ipframe.cpp commentare le tre righe di codice seguenti.

    ```cpp
    m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
    pWndFrame->EnableDocking(CBRS_ALIGN_ANY);
    pWndFrame->DockPane(&m_wndToolBar);
    ```

1. Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.

## <a name="adding-bitmaps-to-the-project"></a><a name="addbitmap"></a> Aggiunta di bitmap al progetto

I quattro passaggi successivi di questa procedura dettagliata richiedono risorse bitmap. È possibile ottenere le bitmap appropriate in diversi modi:

- Usare gli [editor di risorse](../windows/resource-editors.md) per creare bitmap personalizzate. In alternativa, è possibile usare gli editor di risorse per assemblare bitmap dalle immagini con estensione png (Portable Network Graphics) incluse in Visual Studio e scaricabili dalla [libreria di immagini di Visual Studio](/visualstudio/designers/the-visual-studio-image-library).

    Tuttavia, l'interfaccia utente della **barra multifunzione** richiede che alcune bitmap supportino immagini trasparenti. Le bitmap trasparenti utilizzano pixel a 32 bit, dove 24 bit specificano i componenti rosso, verde e blu del colore e 8 bit definiscono un *canale alfa* che specifica la trasparenza del colore. Con gli editor risorse correnti è possibile visualizzare, ma non modificare, le bitmap con pixel a 32 bit. Pertanto, utilizzare un editor di immagini esterno anziché gli editor risorse per modificare le bitmap trasparenti.

- Copiare un file di risorse appropriato da un'altra applicazione al progetto e importare le bitmap da quel file.

In questa procedura dettagliata vengono copiati i file di risorse dall'esempio creato in [procedura dettagliata: creazione di un'applicazione Ribbon utilizzando MFC](../mfc/walkthrough-creating-a-ribbon-application-by-using-mfc.md).

### <a name="to-add-bitmaps-to-the-project"></a>Per aggiungere bitmap al progetto

1. Usare Esplora file per copiare i file con estensione bmp seguenti dalla directory delle risorse ( `res` ) dell'esempio della barra multifunzione alla directory delle risorse ( `res` ) del progetto Scribble:

   1. Copiare il file main.bmp nel progetto Scribble.

   1. Copiare i file filesmall.bmp e filelarge.bmp nel progetto Scribble.

   1. Creare nuove copie dei file filelarge.bmp e filesmall.bmp, ma salvare le copie nell'esempio della barra multifunzione. Rinominare le copie homesmall.bmp e homelarge.bmp, quindi spostarle nel progetto Scribble.

   1. Creare una copia del file di toolbar.bmp, ma salvare la copia nell'esempio della barra multifunzione. Rinominare la copia panelicons.bmp e spostarla nel progetto Scribble.

1. Importare la bitmap per un'applicazione MFC. In **visualizzazione risorse**fare doppio clic sul nodo **Scribble. RC** , fare doppio clic sul nodo **bitmap** , quindi fare clic su **Aggiungi risorsa**. Nella finestra di dialogo visualizzata fare clic su **Importa**. Passare alla `res` Directory, selezionare il file main.bmp e quindi fare clic su **Apri**.

   La bitmap main.bmp contiene un'immagine 26x26. Modificare l'ID della bitmap in `IDB_RIBBON_MAIN` .

1. Importare le bitmap per il menu file collegato al pulsante **dell'applicazione** .

   1. Importare il file di filesmall.bmp, che contiene undici immagini 16x16 (16x176). Modificare l'ID della bitmap in `IDB_RIBBON_FILESMALL` .

   > [!NOTE]
   > Poiché sono necessarie solo le prime otto immagini 16x16 (16x128), è possibile ritagliare la larghezza del lato destro di questa bitmap da 176 a 128.

   1. Importare la filelarge.bmp, che contiene nove immagini 32x32 (32x288). Modificare l'ID della bitmap in `IDB_RIBBON_FILELARGE` .

1. Importare le bitmap per le categorie e i pannelli della barra multifunzione. Ogni scheda della barra multifunzione è una categoria e consiste in un'etichetta di testo e in un'immagine facoltativa.

   1. Importare la bitmap homesmall.bmp, che contiene undici immagini 16x16 per le bitmap di piccoli pulsanti. Modificare l'ID della bitmap in `IDB_RIBBON_HOMESMALL` .

   1. Importare la bitmap homelarge.bmp, che contiene nove immagini 32x32 per le bitmap dei pulsanti di grandi dimensioni. Modificare l'ID della bitmap in `IDB_RIBBON_HOMELARGE` .

1. Importare le bitmap per i pannelli della barra multifunzione ridimensionati. Queste bitmap, o icone di pannello, vengono spesso utilizzate dopo un'operazione di ridimensionamento se la barra multifunzione è troppo piccola per visualizzare l'intero pannello.

   1. Importare la bitmap panelicons.bmp, la quale contiene otto immagini 16x16. Nella finestra **Proprietà** dell' **Editor bitmap**modificare la larghezza della bitmap in 64 (16x64). Modificare l'ID della bitmap in `IDB_PANEL_ICONS` .

   > [!NOTE]
   > Poiché sono necessarie solo le prime quattro immagini 16x16 (16x64), è possibile ritagliare la larghezza del lato destro di questa bitmap da 128 a 64.

## <a name="adding-a-ribbon-resource-to-the-project"></a><a name="addribbon"></a> Aggiunta di una risorsa barra multifunzione al progetto

Quando si converte un'applicazione che utilizza menu in un'applicazione che utilizza una barra multifunzione, non è necessario rimuovere o disabilitare i menu esistenti. È sufficiente creare una risorsa della barra multifunzione, aggiungere pulsanti della barra multifunzione e quindi associare i nuovi pulsanti alle voci di menu esistenti. Sebbene i menu non siano più visibili, i messaggi della barra multifunzione vengono instradati tramite i menu e i collegamenti di menu continuano a funzionare.

Una barra multifunzione è costituita dal pulsante **applicazione** , ovvero dal pulsante grande sul lato superiore sinistro della barra multifunzione e da una o più schede di categoria. Ogni scheda di categoria contiene uno o più pannelli che fungono da contenitori per i pulsanti e i controlli della barra multifunzione. Nella procedura seguente viene illustrato come creare una risorsa della barra multifunzione e quindi personalizzare il pulsante **dell'applicazione** .

### <a name="to-add-a-ribbon-resource-to-the-project"></a>Per aggiungere una risorsa barra multifunzione al progetto

1. Con il progetto Scribble selezionato in **Esplora soluzioni**, scegliere **Aggiungi risorsa**dal menu **progetto** .

1. Nella finestra di dialogo **Aggiungi risorsa** selezionare **barra multifunzione** e quindi fare clic su **nuovo**.

   In Visual Studio verrà creata una risorsa barra multifunzione che verrà aperta nella visualizzazione Progettazione. L'ID della risorsa della barra multifunzione è `IDR_RIBBON1` , che viene visualizzato in **visualizzazione risorse**. La barra multifunzione contiene una categoria e un pannello.

1. È possibile personalizzare il pulsante dell' **applicazione** modificando le relative proprietà. Gli ID di messaggio che vengono utilizzati in questo codice sono già definiti nel menu per Scribble 1.0.

1. Nella visualizzazione Progettazione fare clic sul pulsante **applicazione** per visualizzarne le proprietà. Modificare i valori delle proprietà come segue: **Image** to `IDB_RIBBON_MAIN` , **prompt** to `File` , **Keys** to `f` , **large images** to `IDB_RIBBON_FILELARGE` e **small images** to `IDB_RIBBON_FILESMALL` .

1. Le modifiche seguenti creano il menu visualizzato quando l'utente fa clic sul pulsante dell' **applicazione** . Fare clic sui puntini di sospensione (**...**) accanto a **elementi principali** per aprire l' **Editor elementi**.

   1. Con il **pulsante** tipo di **elemento** selezionato, fare clic su **Aggiungi** per aggiungere un pulsante. Modificare **Caption** in `&New` , **ID** in `ID_FILE_NEW` , **Image** in `0` , **Image large** in `0` .

   1. Fare clic su **Aggiungi** per aggiungere un pulsante. Modificare **didascalia** in `&Save` , **ID** in `ID_FILE_SAVE` , **immagine** in `2` e **immagine di grandi dimensioni** in `2` .

   1. Fare clic su **Aggiungi** per aggiungere un pulsante. Modificare **didascalia** in `Save &As` , **ID** in `ID_FILE_SAVE_AS` , **immagine** in `3` e **immagine di grandi dimensioni** in `3` .

   1. Fare clic su **Aggiungi** per aggiungere un pulsante. Modificare **didascalia** in `&Print` , **ID** in `ID_FILE_PRINT` , **immagine** in `4` e **immagine di grandi dimensioni** in `4` .

   1. Modificare il tipo di **elemento** in **separatore** , quindi fare clic su **Aggiungi**.

   1. Modificare il tipo di **elemento** in **Button**. Fare clic su **Aggiungi** per aggiungere un quinto pulsante. Modificare **didascalia** in `&Close` , **ID** in `ID_FILE_CLOSE` , **immagine** in `5` e **immagine di grandi dimensioni** in `5` .

1. Le modifiche seguenti consentono di creare un sottomenu sotto il pulsante **stampa** creato nel passaggio precedente.

   1. Fare clic sul pulsante **stampa** , modificare il tipo di **elemento** in **etichetta**, quindi fare clic su **Inserisci**. Modificare la **didascalia** in `Preview and print the document` .

   1. Fare clic sul pulsante **stampa** , modificare il tipo di **elemento** in **pulsante**, quindi fare clic su **Inserisci**. Modificare **didascalia** in `&Print` , **ID** in `ID_FILE_PRINT` , **immagine** in `4` e **immagine di grandi dimensioni** in `4` .

   1. Fare clic sul pulsante **stampa** , quindi fare clic su **Inserisci** per aggiungere un pulsante. Modificare **didascalia** in `&Quick Print` , **ID** in `ID_FILE_PRINT_DIRECT` , **immagine** in `7` e **immagine di grandi dimensioni** in `7` .

   1. Fare clic sul pulsante **stampa** , quindi fare clic su **Inserisci** per aggiungere un altro pulsante. Modificare **didascalia** in `Print Pre&view` , **ID** in `ID_FILE_PRINT_PREVIEW` , **immagine** in `6` e **immagine di grandi dimensioni** in `6` .

   1. A questo punto sono stati modificati gli **elementi principali**. Fare clic su **Chiudi** per uscire dall' **Editor elementi**.

1. La modifica seguente consente di creare un pulsante di uscita visualizzato nella parte inferiore del menu del pulsante dell' **applicazione** .

   1. Scegliere la scheda **visualizzazione risorse** in **Esplora soluzioni**.
   1. Nella finestra **Proprietà** fare clic sui puntini di sospensione (**...**) accanto a **pulsante** per aprire l' **Editor elementi**.

   1. Con il **pulsante** tipo di **elemento** selezionato, fare clic su **Aggiungi** per aggiungere un pulsante. Impostare **Caption** su `E&xit` , **ID** su `ID_APP_EXIT` , **Image** su `8` .

   1. Sono stati modificati i **pulsanti**. Fare clic su **Chiudi** per uscire dall' **Editor elementi**.

## <a name="creating-an-instance-of-the-ribbon-bar"></a><a name="createinstance"></a> Creazione di un'istanza della barra multifunzione

Nei passaggi seguenti viene illustrato come creare un'istanza della barra multifunzione quando si avvia l'applicazione. Per aggiungere una barra multifunzione a un'applicazione, dichiarare la barra multifunzione nel file mainfrm.h. Quindi, nel file mainfrm.cpp, scrivere il codice per caricare la risorsa barra multifunzione.

### <a name="to-create-an-instance-of-the-ribbon-bar"></a>Per creare un'istanza della barra multifunzione

1. Nel file mainfrm.h aggiungere un membro dati alla sezione protetta di `CMainFrame`, la definizione della classe per la cornice principale. Questo membro è per la barra multifunzione.

    ```cpp
    // Ribbon bar for the application
    CMFCRibbonBar m_wndRibbonBar;
    ```

2. Nel file MainFrm. cpp aggiungere il codice seguente prima dell' **`return`** istruzione finale alla fine della `CMainFrame::OnCreate` funzione. Viene creata un'istanza della barra multifunzione.

    ```cpp
    // Create the ribbon bar
    if (!m_wndRibbonBar.Create(this))
    {
        return -1;   //Failed to create ribbon bar
    }
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);
    ```

## <a name="customizing-the-ribbon-resource"></a><a name="addcategory"></a> Personalizzazione della risorsa della barra multifunzione

Ora che è stato creato il pulsante **applicazione** , è possibile aggiungere elementi alla barra multifunzione.

> [!NOTE]
> In questa procedura dettagliata viene utilizzata la stessa icona di pannello per tutti i pannelli. Tuttavia, è possibile utilizzare altri indici dell'elenco di immagini per visualizzare altre icone.

### <a name="to-add-a-home-category-and-edit-panel"></a>Per aggiungere una categoria Home e un pannello Modifica

1. Il programma Scribble richiede solo una categoria. Nella visualizzazione progettazione, nella **casella degli strumenti**, fare doppio clic su **categoria** per aggiungerne una e visualizzarne le proprietà. Modificare i valori delle proprietà come segue: **Caption** to `&Home` , **large images** to `IDB_RIBBON_HOMELARGE` , **small images** to `IDB_RIBBON_HOMESMALL` .

1. Ogni categoria della barra multifunzione è organizzata in pannelli, ciascuno dei quali dispone di un nome. Ogni pannello contiene un set di controlli che completano le operazioni correlate. Questa categoria dispone di un solo pannello. Fare clic su **Pannello**, quindi impostare **didascalia** su `Edit` .

1. Nel pannello **modifica** aggiungere un pulsante responsabile della cancellazione del contenuto del documento. L'ID del messaggio per questo pulsante è già stato definito nella `IDR_SCRIBBTYPE` risorsa di menu. Specificare `Clear All` come testo del pulsante e l'indice della bitmap che decora il pulsante. Aprire la **casella degli strumenti**, quindi trascinare un **pulsante** nel pannello **modifica** . Fare clic sul pulsante, quindi impostare **Caption** su `Clear All` , **ID** su `ID_EDIT_CLEAR_ALL` , **Image index** su `0` , **large image index** su `0` .

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Verrà visualizzata l'applicazione Scribble con una barra multifunzione nella parte superiore della finestra al posto della barra dei menu. La barra multifunzione deve avere una categoria, **Home**e **Home** deve avere un pannello, **Edit**. I pulsanti della barra multifunzione aggiunti devono essere associati ai gestori eventi esistenti e i pulsanti **Apri**, **Chiudi**, **Salva**, **stampa**e **Cancella tutti** dovrebbero funzionare come previsto.

## <a name="setting-the-look-of-the-application"></a><a name="setlook"></a> Impostazione dell'aspetto dell'applicazione

Un *gestore di visualizzazione* è un oggetto globale che controlla tutto il disegno per un'applicazione. Dal momento che l'applicazione originale Scribble utilizza lo stile dell'interfaccia utente (UI) di Office 2000, l'aspetto dell'applicazione potrebbe risultare datato. È possibile reimpostare l'applicazione in modo che utilizzi il gestore visualizzazione di Office 2007 e che risulti simile a un'applicazione di Office 2007.

### <a name="to-set-the-look-of-the-application"></a>Per impostare l'aspetto dell'applicazione

1. Nella `CMainFrame::OnCreate` funzione, digitare il codice seguente prima dell' `return 0;` istruzione per modificare lo stile e la gestione visiva predefiniti.

    ```cpp
    // Set the default manager to Office 2007
    CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2007));
    CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_LunaBlue);
    ```

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. L'interfaccia utente dell'applicazione dovrebbe essere simile all'interfaccia utente di Office 2007.

## <a name="next-steps"></a>Passaggi successivi

È stato modificato l'esempio classico di MFC Scribble 1,0 per usare la **finestra di progettazione della barra multifunzione**. Passare ora alla [parte 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md).

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)<br/>
[Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md)
