---
title: "Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble (parte 1) | Microsoft Docs"
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- examples [MFC], update existing application
- ribbon UI, porting to
- Office Fluent UI, porting to
- samples [MFC], update existing application
- MFC Feature Pack, update existing application
- walkthroughs [MFC], update existing application
ms.assetid: aa6330d3-6cfc-4c79-8fcb-0282263025f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 37cec86d276732bd7273d0f5585de5093f0cd01f
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42541633"
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-1"></a>Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble (parte 1)

In questa procedura dettagliata viene illustrato come modificare un'applicazione MFC esistente per utilizzare l'interfaccia utente della barra multifunzione. Visual Studio supporta sia la barra multifunzione di Office 2007 che la barra multifunzione Windows 7 Scenic. Per altre informazioni sull'interfaccia utente della barra multifunzione, vedere [barre multifunzione](http://go.microsoft.com/fwlink/p/?linkid=129233) sul sito Web MSDN.

In questa procedura dettagliata viene modificato l'esempio classico di Scribble 1.0 di MFC che consente di utilizzare il mouse per disegnare delle linee. Questa parte della procedura dettagliata mostra come modificare l'esempio di Scribble in modo che mostri una barra multifunzione. [Parte 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md) aggiunti altri pulsanti alla barra multifunzione.

## <a name="prerequisites"></a>Prerequisiti

[Esempi di Visual C++](../visual-cpp-samples.md)

[Esempi di Visual C++](../visual-cpp-samples.md)

##  <a name="top"></a> Sezioni

In questa parte della procedura dettagliata sono incluse le seguenti sezioni:

- [Sostituzione delle classi Base](#replaceclass)

- [Aggiunta di bitmap al progetto](#addbitmap)

- [Aggiunta di una risorsa barra multifunzione al progetto](#addribbon)

- [Creazione di un'istanza della barra multifunzione](#createinstance)

- [Aggiunta di una categoria della barra multifunzione](#addcategory)

- [Impostazione dell'aspetto dell'applicazione](#setlook)

##  <a name="replaceclass"></a> Sostituzione delle classi Base

Per convertire un'applicazione che supporta un menu in un'applicazione che supporta una barra multifunzione, è necessario derivare le classi dell'applicazione, della finestra cornice e della barra degli strumenti da classi base aggiornate. Si consiglia di non modificare l'esempio originale di Scribble, ma pulire invece il progetto di Scribble, copiarlo in un'altra directory e lavorare sulla copia.

### <a name="to-replace-the-base-classes-in-the-scribble-application"></a>Per sostituire le classi base nell'applicazione Scribble

1. In SCRIBBLE. cpp, verificare che `CScribbleApp::InitInstance` include una chiamata a [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).

2. Aggiungere il codice seguente al file stdafx.h.

    ```cpp
    #include <afxcontrolbars.h>
    ```

3. In SCRIBBLE. h, modificare la definizione per il `CScribbleApp` classe in modo che deriva da [classe CWinAppEx](../mfc/reference/cwinappex-class.md).

    ```cpp
    class CScribbleApp: public CWinAppEx
    ```

4. Scribble 1.0 è stato scritto quando le applicazioni Windows utilizzavano un file di inizializzazione (con estensione ini) per salvare i dati delle preferenze utente. Anziché utilizzare un file di inizializzazione, modificare Scribble in modo da archiviare le preferenze utente nel Registro di sistema. Per impostare la chiave del Registro di sistema e la base, digitare il seguente codice in `CScribbleApp::InitInstance` dopo l'istruzione `LoadStdProfileSettings()`.

    ```cpp
    SetRegistryKey(_T("MFCNext\\Samples\\Scribble2"));
    SetRegistryBase(_T("Settings"));
    ```

5. La cornice principale di un'applicazione MDI (Multiple Document Interface, interfaccia a documenti multipli) non è più derivata dalla classe `CMDIFrameWnd`. Al contrario, viene derivata dal [CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md) classe.

     Nei file mainfrm.h e mainfrm.cpp sostituire tutti i riferimenti a `CMDIFrameWnd` con `CMDIFrameWndEx`.

6. Nei file childfrm.h e childfrm.cpp sostituire `CMDIChildWnd` con `CMDIChildWndEx`.

     In childfrm. file h, sostituire `CSplitterWnd` con `CSplitterWndEx`.

7. Modificare le barre degli strumenti e le barre di stato per utilizzare le nuove classi MFC.

     Nel file mainfrm.h:

    1. Sostituire `CToolBar` con `CMFCToolBar`.

    2. Sostituire `CStatusBar` con `CMFCStatusBar`.

8. Nel file mainfrm.cpp:

    1. Sostituire `m_wndToolBar.SetBarStyle` con `m_wndToolBar.SetPaneStyle`

    2. Sostituire `m_wndToolBar.GetBarStyle` con `m_wndToolBar.GetPaneStyle`

    3. Sostituire `DockControlBar(&m_wndToolBar)` con `DockPane(&m_wndToolBar)`

9. Nel file ipframe.cpp commentare le tre righe di codice seguenti.

    ```cpp
    m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
    pWndFrame->EnableDocking(CBRS_ALIGN_ANY);
    pWndFrame->DockPane(&m_wndToolBar);
    ```

10. Se si desidera collegare in modo statico l'applicazione, aggiungere il codice seguente all'inizio del file delle risorse del progetto (.rc).

    ```cpp
    #include "afxribbon.rc"
    ```

     Il file afxribbon.rc contiene risorse che vengono richieste in fase di esecuzione. Il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) include questo file automaticamente quando si crea un'applicazione.

11. Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.

[[Sezioni](#top)]

##  <a name="addbitmap"></a> Aggiunta di bitmap al progetto

I quattro passaggi successivi di questa procedura dettagliata richiedono risorse bitmap. È possibile ottenere le bitmap appropriate in diversi modi:

- Usare la [editor di risorse](../windows/resource-editors.md) per creare bitmap personalizzate. Oppure usare l'editor di risorse per assemblare bitmap partendo dalle immagini portable network graphics (PNG) inclusi in Visual Studio. Queste immagini si trovano nel `VS2008ImageLibrary` directory.

     Tuttavia, l'interfaccia utente della barra multifunzione richiede che determinate bitmap supportino le immagini trasparenti. Le bitmap trasparenti utilizzano pixel a 32 bit, dove 24 bit specificano i componenti rossi, verdi e blu del colore e 8 bit definiscono un *canale alfa* che specifica la trasparenza del colore. Con gli editor risorse correnti è possibile visualizzare, ma non modificare, le bitmap con pixel a 32 bit. Pertanto, utilizzare un editor di immagini esterno anziché gli editor risorse per modificare le bitmap trasparenti.

- Copiare un file di risorse appropriato da un'altra applicazione al progetto e importare le bitmap da quel file.

Questa procedura dettagliata consente di copiare i file di risorse da un'applicazione nella directory Esempi.

### <a name="to-add-bitmaps-to-the-project"></a>Per aggiungere bitmap al progetto

1. Utilizzare Esplora file per copiare i file con estensione bmp seguenti dalla directory delle risorse (`res`) dell'esempio RibbonGadgets:

   1. Copiare il file main.bmp nel progetto Scribble.

   2. Copiare i file filesmall.bmp e filelarge.bmp nel progetto Scribble.

   3. Creare nuove copie dei file filelarge.bmp e filesmall.bmp, ma salvare le copie nell'esempio RibbonGadgets. Rinominare le copie homesmall.bmp e homelarge.bmp, quindi spostarle nel progetto Scribble.

   4. Creare una copia del file toolbar.bmp e salvarla nell'esempio RibbonGadgets. Rinominare la copia panelicons.bmp e spostarla nel progetto Scribble.

2. Importare la bitmap per un'applicazione MFC. In **visualizzazione risorse**, fare doppio clic sui **Scribble. rc** nodo, fare doppio clic sui **Bitmap** nodo e quindi fare clic su **Aggiungi risorsa**. Nella finestra di dialogo che viene visualizzata, fare clic su **importazione**. Selezionare il `res` directory, selezionare il file Main bmp e quindi fare clic su **Open**.

   La bitmap main.bmp contiene un'immagine 26x26. Modificare l'ID della bitmap in IDB_RIBBON_MAIN.

3. Importare le bitmap dal menu File associato al pulsante dell'applicazione.

   1. Importare il file filesmall.bmp, il quale contiene dieci immagini 16x16 (16x160). Poiché è necessario che le immagini solo otto 16x16 (16x128), usare il **visualizzazione risorse** per modificare la larghezza di tale bitmap da 160 a 128. Modificare l'ID della bitmap in IDB_RIBBON_FILESMALL.

   2. Importare il file filelarge.bmp, il quale contiene otto immagini 32x32 (32x256). Modificare l'ID della bitmap in IDB_RIBBON_FILELARGE.

4. Importare le bitmap per le categorie e i pannelli della barra multifunzione. Ogni scheda della barra multifunzione è una categoria e consiste in un'etichetta di testo e in un'immagine facoltativa.

   1. Importare la bitmap homesmall.bmp, la quale contiene otto immagini 16x16 per bitmap di pulsanti di piccole dimensioni. Modificare l'ID della bitmap in IDB_RIBBON_HOMESMALL.

   2. Importare la bitmap homelarge.bmp, la quale contiene otto immagini 32x32 per bitmap di pulsanti di grandi dimensioni. Modificare l'ID della bitmap in IDB_RIBBON_HOMELARGE.

5. Importare le bitmap per i pannelli della barra multifunzione ridimensionati. Queste bitmap, o icone di pannello, vengono spesso utilizzate dopo un'operazione di ridimensionamento se la barra multifunzione è troppo piccola per visualizzare l'intero pannello.

   1. Importare la bitmap panelicons.bmp, la quale contiene otto immagini 16x16. Nel **delle proprietà** finestra di **Editor delle Bitmap**, regolare la larghezza della bitmap a 64 (16x64). Modificare l'ID della bitmap in IDB_PANEL_ICONS.

[[Sezioni](#top)]

##  <a name="addribbon"></a> Aggiunta di una risorsa barra multifunzione al progetto

Quando si converte un'applicazione che utilizza menu in un'applicazione che utilizza una barra multifunzione, non è necessario rimuovere o disabilitare i menu esistenti. Piuttosto, è possibile creare una risorsa barra multifunzione, aggiungervi dei pulsanti e successivamente associarli alle voci di menu esistenti. Sebbene i menu non risultino più visibili, i messaggi della barra multifunzione sono indirizzati attraverso i menu. Inoltre, i collegamenti dei menu continuano a funzionare.

Una barra multifunzione è costituita dal pulsante dell'applicazione, ovvero il pulsante di grandi dimensioni posto sul lato superiore sinistro della barra multifunzione, e da una o più schede di categoria. Ogni scheda di categoria contiene uno o più pannelli che fungono da contenitori per i pulsanti e i controlli della barra multifunzione. Nella procedura seguente viene illustrato come creare una risorsa barra multifunzione e come personalizzare il pulsante dell'applicazione.

### <a name="to-add-a-ribbon-resource-to-the-project"></a>Per aggiungere una risorsa barra multifunzione al progetto

1. Nel **Project** menu, fare clic su **Aggiungi risorsa**.

2. Nel **Aggiungi risorsa** finestra di dialogo **della barra multifunzione** e quindi fare clic su **New**.

   In Visual Studio verrà creata una risorsa barra multifunzione che verrà aperta nella visualizzazione Progettazione. L'ID di risorsa barra multifunzione è IDR_RIBBON1, il quale viene visualizzato nella **visualizzazione risorse**. La barra multifunzione contiene una categoria e un pannello.

3. È possibile personalizzare il pulsante dell'applicazione modificandone le proprietà. Gli ID di messaggio che vengono utilizzati in questo codice sono già definiti nel menu per Scribble 1.0.

4. Nella visualizzazione Progettazione fare clic sul pulsante dell'applicazione per visualizzarne le proprietà. Modificare i valori delle proprietà come segue: **immagine** a `IDB_RIBBON_MAIN`, **dei messaggi di richiesta** alla `File`, **chiavi** a `f`, **Large Images** al `IDB_RIBBON_FILELARGE`, e **Small Images** a `IDB_RIBBON_FILESMALL`.

5. Le seguenti modifiche creano il menu che viene visualizzato quando l'utente fa clic sul pulsante dell'applicazione. Fare clic sui puntini di sospensione (**...** ) accanto a **elementi principali** per aprire la **Editor elementi**.

   1. Fare clic su **Add** per aggiungere un pulsante. Change **didascalia** al `&New`, **ID** a `ID_FILE_NEW`, **immagine** a `0`, **immagine di grandi dimensioni** per `0`.

   2. Fare clic su **Add** per aggiungere un secondo pulsante. Change **didascalia** al `&Save`, **ID** a `ID_FILE_SAVE`, **immagine** a `2`, e **immagine di grandi dimensioni** per `2`.

   3. Fare clic su **Add** per aggiungere un terzo pulsante. Change **didascalia** al `Save &As`, **ID** a `ID_FILE_SAVE_AS`, **immagine** a `3`, e **immagine di grandi dimensioni** per `3`.

   4. Fare clic su **Add** per aggiungere un quarto pulsante. Change **didascalia** al `&Print`, **ID** a `ID_FILE_PRINT`, **immagine** a `4`, e **immagine di grandi dimensioni** per `4`.

   5. Modifica il **elemento** tipo **separatore** e quindi fare clic su **Add**.

   6. Modifica il **elemento** tipo **pulsante**. Fare clic su **Add** per aggiungere un quinto pulsante. Change **didascalia** al `&Close`, **ID** a `ID_FILE_CLOSE`, **immagine** a `5`, e **immagine di grandi dimensioni** per `5`.

6. Le seguenti modifiche creano un sottomenu al di sotto del pulsante Stampa creato nel passaggio precedente.

   1. Fare clic sulla **Print** pulsante, cambiare il **elemento** digitare per **etichetta**e quindi fare clic su **Inserisci**. Change **didascalia** a `Preview and print the document`.

   2. Fare clic sul **Print** pulsante, cambiare il **elemento** digitare per **pulsante**e fare clic su **Inserisci**. Change **didascalia** al `&Print`, **ID** a `ID_FILE_PRINT`, **immagine** a `4`, e **immagine di grandi dimensioni** per `4`.

   3. Fare clic sui **Print** pulsante e quindi fare clic su **Inserisci** per aggiungere un pulsante. Change **didascalia** al `&Quick Print`, **ID** a `ID_FILE_PRINT_DIRECT`, **immagine** a `7`, e **immagine di grandi dimensioni** per `7`.

   4. Fare clic sui **Print** pulsante e quindi fare clic su **Inserisci** per aggiungere un altro pulsante. Change **didascalia** al `Print Pre&view`, **ID** a `ID_FILE_PRINT_PREVIEW`, **immagine** a `6`, e **immagine di grandi dimensioni** per `6`.

   5. A questo punto sono state modificate le **elementi principali**. Fare clic su **Close** per chiudere la **Editor elementi**.

7. Le modifiche seguenti creano un pulsante di uscita che viene visualizzato nella parte inferiore del menu del pulsante dell'applicazione.

   1. Nel **delle proprietà** finestra, fare clic sui puntini di sospensione (**...** ) accanto a **pulsante** per aprire la **Editor elementi**.

   2. Fare clic su **Add** per aggiungere un pulsante. Change **didascalia** a `E&xit`, **ID** alla `ID_APP_EXIT`, **immagine** a `8`.

[[Sezioni](#top)]

##  <a name="createinstance"></a> Creazione di un'istanza della barra multifunzione

Nei passaggi seguenti viene illustrato come creare un'istanza della barra multifunzione quando si avvia l'applicazione. Per aggiungere una barra multifunzione a un'applicazione, dichiarare la barra multifunzione nel file mainfrm.h. Quindi, nel file mainfrm.cpp, scrivere il codice per caricare la risorsa barra multifunzione.

### <a name="to-create-an-instance-of-the-ribbon-bar"></a>Per creare un'istanza della barra multifunzione

1. Nel file mainfrm.h aggiungere un membro dati alla sezione protetta di `CMainFrame`, la definizione della classe per la cornice principale. Questo membro rappresenta la barra multifunzione.

    ```cpp
    // Ribbon bar for the application
    CMFCRibbonBar m_wndRibbonBar;
    ```

2. Nel file mainfrm.cpp aggiungere il seguente codice prima dell'istruzione finale `return` alla fine della funzione `CMainFrame::OnCreate`. In questo modo viene creata un'istanza della barra multifunzione.

    ```cpp
    // Create the ribbon bar
    if (!m_wndRibbonBar.Create(this))
    {
        return -1;   //Failed to create ribbon bar
    }
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);
    ```

[[Sezioni](#top)]

##  <a name="addcategory"></a> Personalizzazione della risorsa barra multifunzione

Una volta creato il pulsante dell'applicazione, è possibile aggiungere gli elementi alla barra multifunzione.

> [!NOTE]
> In questa procedura dettagliata viene utilizzata la stessa icona di pannello per tutti i pannelli. Tuttavia, è possibile utilizzare altri indici dell'elenco di immagini per visualizzare altre icone.

### <a name="to-add-a-home-category-and-edit-panel"></a>Per aggiungere una categoria Home e un pannello Modifica

1. Il programma Scribble richiede solo una categoria. Nella visualizzazione progettazione, fare clic su **categoria** per visualizzarne le proprietà. Modificare i valori delle proprietà come segue: **didascalia** al `&Home`, **Large Images** al `IDB_RIBBON_HOMELARGE`, **Small Images** a `IDB_RIBBON_HOMESMALL`.

2. Ogni categoria della barra multifunzione è organizzata in pannelli, ciascuno dei quali dispone di un nome. Ogni pannello contiene un set di controlli che eseguono operazioni correlate. Questa categoria dispone di un solo pannello. Fare clic su **pannello**, quindi modificare **didascalia** a `Edit` e **Image Index** a `0`.

3. Per il **modifica** panel, aggiungere un pulsante che consenta di cancellare il contenuto del documento. L'ID di messaggio per questo pulsante è già stato definito nella risorsa del menu IDR_SCRIBBTYPE. Specificare `Clear All` il testo del pulsante e l'indice della bitmap che decora il pulsante. Aprire il **della casella degli strumenti**, quindi trascinare un **pulsante** per il **modifica** pannello. Fare clic sul pulsante e quindi modificare **didascalia** al `Clear All`, **ID** al `ID_EDIT_CLEAR_ALL`, **Image Index** a `0`, **Large Image Index**  a `0`.

4. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Verrà visualizzata l'applicazione Scribble con una barra multifunzione nella parte superiore della finestra al posto della barra dei menu. Deve disporre di una categoria, la barra multifunzione **casa**, e **Home** deve avere un pannello **modifica**. I pulsanti della barra multifunzione che è stato aggiunto devono essere associati ai gestori di eventi esistente e il **aperto**, **Close**, **Salva**, **stampa**, e **Cancella tutto** pulsanti dovrebbero funzionare come previsto.

[[Sezioni](#top)]

##  <a name="setlook"></a> Impostazione dell'aspetto dell'applicazione

Oggetto *gestore visualizzazione* è un oggetto globale che controlla l'aspetto grafico per un'applicazione. Dal momento che l'applicazione originale Scribble utilizza lo stile dell'interfaccia utente (UI) di Office 2000, l'aspetto dell'applicazione potrebbe risultare datato. È possibile reimpostare l'applicazione in modo che utilizzi il gestore visualizzazione di Office 2007 e che risulti simile a un'applicazione di Office 2007.

### <a name="to-set-the-look-of-the-application"></a>Per impostare l'aspetto dell'applicazione

1. Nella funzione `CMainFrame::OnCreate` digitare il codice seguente per modificare il gestore visualizzazione e lo stile predefiniti.

    ```cpp
    // Set the default manager to Office 2007
    CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2007));
    CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_LunaBlue);
    ```

2. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. L'interfaccia utente dell'applicazione dovrebbe essere simile all'interfaccia utente di Office 2007.

[[Sezioni](#top)]

## <a name="next-steps"></a>Passaggi successivi

Si è modificato l'esempio classico di MFC di Scribble 1.0 per utilizzare la finestra di progettazione della barra multifunzione. Passare ora alla [Part 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md).

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)  
[Questa procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)] (.. / mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md)  
