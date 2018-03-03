---
title: 'Procedura dettagliata: Aggiornamento dell''applicazione MFC Scribble (parte 1) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 65dea486e80e4f6f1b98dffe6c387f2e530c9ef3
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-1"></a>Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble (parte 1)
In questa procedura dettagliata viene illustrato come modificare un'applicazione MFC esistente per utilizzare l'interfaccia utente della barra multifunzione. Visual Studio supporta sia la barra multifunzione di Office 2007 che la barra multifunzione Windows 7 Scenic. Per ulteriori informazioni sull'interfaccia utente della barra multifunzione, vedere [barre multifunzione](http://go.microsoft.com/fwlink/p/?linkid=129233) nel sito Web MSDN.  
  
 In questa procedura dettagliata viene modificato l'esempio classico di Scribble 1.0 di MFC che consente di utilizzare il mouse per disegnare delle linee. Questa parte della procedura dettagliata mostra come modificare l'esempio di Scribble in modo che mostri una barra multifunzione. [Parte 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md) vengono aggiunti altri pulsanti alla barra multifunzione.  
  
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
  
##  <a name="replaceclass"></a>Sostituzione delle classi Base  
 Per convertire un'applicazione che supporta un menu in un'applicazione che supporta una barra multifunzione, è necessario derivare le classi dell'applicazione, della finestra cornice e della barra degli strumenti da classi base aggiornate. Si consiglia di non modificare l'esempio originale di Scribble, ma pulire invece il progetto di Scribble, copiarlo in un'altra directory e lavorare sulla copia.  
  
#### <a name="to-replace-the-base-classes-in-the-scribble-application"></a>Per sostituire le classi base nell'applicazione Scribble  
  
1.  Scribble. cpp, verificare che `CScribbleApp::InitInstance` include una chiamata a [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).  
  
2.  Aggiungere il codice seguente al file stdafx.h.  
  
 ```  
    #include <afxcontrolbars.h>  
 ```  
  
3.  In SCRIBBLE. h, modificare la definizione per il `CScribbleApp` classe in modo che deriva da [CWinAppEx Class](../mfc/reference/cwinappex-class.md).  
  
 ```  
    class CScribbleApp: public CWinAppEx  
 ```  
  
4.  Scribble 1.0 è stato scritto quando le applicazioni Windows utilizzavano un file di inizializzazione (con estensione ini) per salvare i dati delle preferenze utente. Anziché utilizzare un file di inizializzazione, modificare Scribble in modo da archiviare le preferenze utente nel Registro di sistema. Per impostare la chiave del Registro di sistema e la base, digitare il seguente codice in `CScribbleApp::InitInstance` dopo l'istruzione `LoadStdProfileSettings()`.  
  
 ```  
    SetRegistryKey(_T("MFCNext\\Samples\\Scribble2"));

 SetRegistryBase(_T("Settings"));

 ```  
  
5.  La cornice principale di un'applicazione MDI (Multiple Document Interface, interfaccia a documenti multipli) non è più derivata dalla classe `CMDIFrameWnd`. In alternativa, è derivato dal [CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md) classe.  
  
     Nei file mainfrm.h e mainfrm.cpp sostituire tutti i riferimenti a `CMDIFrameWnd` con `CMDIFrameWndEx`.  
  
6.  Nei file childfrm.h e childfrm.cpp sostituire `CMDIChildWnd` con `CMDIChildWndEx`.  
  
     Nel childfrm. file h, sostituire `CSplitterWnd` con `CSplitterWndEx`.  
  
7.  Modificare le barre degli strumenti e le barre di stato per utilizzare le nuove classi MFC.  
  
     Nel file mainfrm.h:  
  
    1.  Sostituire `CToolBar` con `CMFCToolBar`.  
  
    2.  Sostituire `CStatusBar` con `CMFCStatusBar`.  
  
8.  Nel file mainfrm.cpp:  
  
    1.  Sostituire `m_wndToolBar.SetBarStyle` con `m_wndToolBar.SetPaneStyle`  
  
    2.  Sostituire `m_wndToolBar.GetBarStyle` con `m_wndToolBar.GetPaneStyle`  
  
    3.  Sostituire `DockControlBar(&m_wndToolBar)` con `DockPane(&m_wndToolBar)`  
  
9. Nel file ipframe.cpp commentare le tre righe di codice seguenti.  
  
 ```  
    m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);

 pWndFrame->EnableDocking(CBRS_ALIGN_ANY);

    pWndFrame->DockPane(&m_wndToolBar);

 ```  
  
10. Se si desidera collegare in modo statico l'applicazione, aggiungere il codice seguente all'inizio del file delle risorse del progetto (.rc).  
  
 ```  
    #include "afxribbon.rc"  
 ```  
  
     Il file afxribbon.rc contiene risorse che vengono richieste in fase di esecuzione. Il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) include il file automaticamente quando si crea un'applicazione.  
  
11. Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  
  
 [[Sezioni](#top)]  
  
##  <a name="addbitmap"></a>Aggiunta di bitmap al progetto  
 I quattro passaggi successivi di questa procedura dettagliata richiedono risorse bitmap. È possibile ottenere le bitmap appropriate in diversi modi:  
  
-   Utilizzare il [editor risorse](../windows/resource-editors.md) inventare proprio bitmap. In alternativa, utilizzare gli editor risorse per assemblare bitmap partendo da immagini con estensione png (Portable Network Graphics) che sono incluse in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Queste immagini sono nel `VS2008ImageLibrary` directory.  
  
     Tuttavia, l'interfaccia utente della barra multifunzione richiede che determinate bitmap supportino le immagini trasparenti. Bitmap trasparenti utilizzano pixel a 32 bit, dove 24 bit specificano i componenti rossi, verde e blu del colore e 8 bit definiscono un *canale alfa* che specifica la trasparenza del colore. Con gli editor risorse correnti è possibile visualizzare, ma non modificare, le bitmap con pixel a 32 bit. Pertanto, utilizzare un editor di immagini esterno anziché gli editor risorse per modificare le bitmap trasparenti.  
  
-   Copiare un file di risorse appropriato da un'altra applicazione al progetto e importare le bitmap da quel file.  
  
 Questa procedura dettagliata consente di copiare i file di risorse da un'applicazione nella directory Esempi.  
  
#### <a name="to-add-bitmaps-to-the-project"></a>Per aggiungere bitmap al progetto  
  
1.  Utilizzare Esplora file per copiare i file con estensione bmp seguenti dalla directory delle risorse (`res`) dell'esempio RibbonGadgets:  
  
    1.  Copiare il file main.bmp nel progetto Scribble.  
  
    2.  Copiare i file filesmall.bmp e filelarge.bmp nel progetto Scribble.  
  
    3.  Creare nuove copie dei file filelarge.bmp e filesmall.bmp, ma salvare le copie nell'esempio RibbonGadgets. Rinominare le copie homesmall.bmp e homelarge.bmp, quindi spostarle nel progetto Scribble.  
  
    4.  Creare una copia del file toolbar.bmp e salvarla nell'esempio RibbonGadgets. Rinominare la copia panelicons.bmp e spostarla nel progetto Scribble.  
  
2.  Importare la bitmap per un'applicazione MFC. In **visualizzazione risorse**, fare doppio clic su di **Scribble. rc** nodo, fare doppio clic su di **Bitmap** nodo e quindi fare clic su **aggiungere risorse**. Nella finestra di dialogo visualizzata, fare clic su **importazione**. Individuare il `res` directory, selezionare il file main.bmp e quindi fare clic su **aprire**.  
  
     La bitmap main.bmp contiene un'immagine 26x26. Modificare l'ID della bitmap in IDB_RIBBON_MAIN.  
  
3.  Importare le bitmap dal menu File associato al pulsante dell'applicazione.  
  
    1.  Importare il file filesmall.bmp, il quale contiene dieci immagini 16x16 (16x160). Poiché è necessario che le immagini solo otto 16x16 (16x128), utilizzare il **visualizzazione risorse** per modificare la larghezza di tale bitmap da 160 a 128. Modificare l'ID della bitmap in IDB_RIBBON_FILESMALL.  
  
    2.  Importare il file filelarge.bmp, il quale contiene otto immagini 32x32 (32x256). Modificare l'ID della bitmap in IDB_RIBBON_FILELARGE.  
  
4.  Importare le bitmap per le categorie e i pannelli della barra multifunzione. Ogni scheda della barra multifunzione è una categoria e consiste in un'etichetta di testo e in un'immagine facoltativa.  
  
    1.  Importare la bitmap homesmall.bmp, la quale contiene otto immagini 16x16 per bitmap di pulsanti di piccole dimensioni. Modificare l'ID della bitmap in IDB_RIBBON_HOMESMALL.  
  
    2.  Importare la bitmap homelarge.bmp, la quale contiene otto immagini 32x32 per bitmap di pulsanti di grandi dimensioni. Modificare l'ID della bitmap in IDB_RIBBON_HOMELARGE.  
  
5.  Importare le bitmap per i pannelli della barra multifunzione ridimensionati. Queste bitmap, o icone di pannello, vengono spesso utilizzate dopo un'operazione di ridimensionamento se la barra multifunzione è troppo piccola per visualizzare l'intero pannello.  
  
    1.  Importare la bitmap panelicons.bmp, la quale contiene otto immagini 16x16. Nel **proprietà** finestra il **Editor delle Bitmap**, regolare la larghezza della bitmap a 64 (16x64). Modificare l'ID della bitmap in IDB_PANEL_ICONS.  
  
 [[Sezioni](#top)]  
  
##  <a name="addribbon"></a>Aggiunta di una risorsa barra multifunzione al progetto  
 Quando si converte un'applicazione che utilizza menu in un'applicazione che utilizza una barra multifunzione, non è necessario rimuovere o disabilitare i menu esistenti. Piuttosto, è possibile creare una risorsa barra multifunzione, aggiungervi dei pulsanti e successivamente associarli alle voci di menu esistenti. Sebbene i menu non risultino più visibili, i messaggi della barra multifunzione sono indirizzati attraverso i menu. Inoltre, i collegamenti dei menu continuano a funzionare.  
  
 Una barra multifunzione è costituita dal pulsante dell'applicazione, ovvero il pulsante di grandi dimensioni posto sul lato superiore sinistro della barra multifunzione, e da una o più schede di categoria. Ogni scheda di categoria contiene uno o più pannelli che fungono da contenitori per i pulsanti e i controlli della barra multifunzione. Nella procedura seguente viene illustrato come creare una risorsa barra multifunzione e come personalizzare il pulsante dell'applicazione.  
  
#### <a name="to-add-a-ribbon-resource-to-the-project"></a>Per aggiungere una risorsa barra multifunzione al progetto  
  
1.  Nel **progetto** menu, fare clic su **Aggiungi risorsa**.  
  
2.  Nel **Aggiungi risorsa** nella finestra di dialogo **della barra multifunzione** e quindi fare clic su **New**.  
  
     In Visual Studio verrà creata una risorsa barra multifunzione che verrà aperta nella visualizzazione Progettazione. L'ID di risorsa della barra multifunzione è IDR_RIBBON1, il quale viene visualizzato in **visualizzazione risorse**. La barra multifunzione contiene una categoria e un pannello.  
  
3.  È possibile personalizzare il pulsante dell'applicazione modificandone le proprietà. Gli ID di messaggio che vengono utilizzati in questo codice sono già definiti nel menu per Scribble 1.0.  
  
4.  Nella visualizzazione Progettazione fare clic sul pulsante dell'applicazione per visualizzarne le proprietà. Modificare i valori delle proprietà come segue: **immagine** a `IDB_RIBBON_MAIN`, **Prompt** per `File`, **chiavi** a `f`, **Large Images** a `IDB_RIBBON_FILELARGE`, e **Small Images** a `IDB_RIBBON_FILESMALL`.  
  
5.  Le seguenti modifiche creano il menu che viene visualizzato quando l'utente fa clic sul pulsante dell'applicazione. Fare clic sui puntini di sospensione (**...** ) accanto a **elementi principali** per aprire la **Editor elementi**.  
  
    1.  Fare clic su **Aggiungi** per aggiungere un pulsante. Modifica **didascalia** a `&New`, **ID** a `ID_FILE_NEW`, **immagine** a `0`, **immagine di grandi dimensioni** a `0`.  
  
    2.  Fare clic su **Aggiungi** per aggiungere un secondo pulsante. Modifica **didascalia** a `&Save`, **ID** a `ID_FILE_SAVE`, **immagine** a `2`, e **immagine di grandi dimensioni** a `2`.  
  
    3.  Fare clic su **Aggiungi** per aggiungere un terzo pulsante. Modifica **didascalia** a `Save &As`, **ID** a `ID_FILE_SAVE_AS`, **immagine** a `3`, e **immagine di grandi dimensioni** a `3`.  
  
    4.  Fare clic su **Aggiungi** per aggiungere un quarto pulsante. Modifica **didascalia** a `&Print`, **ID** a `ID_FILE_PRINT`, **immagine** a `4`, e **immagine di grandi dimensioni** a `4`.  
  
    5.  Modifica il **elemento** tipo **separatore** e quindi fare clic su **Aggiungi**.  
  
    6.  Modifica il **elemento** tipo **pulsante**. Fare clic su **Aggiungi** per aggiungere un quinto pulsante. Modifica **didascalia** a `&Close`, **ID** a `ID_FILE_CLOSE`, **immagine** a `5`, e **immagine di grandi dimensioni** a `5`.  
  
6.  Le seguenti modifiche creano un sottomenu al di sotto del pulsante Stampa creato nel passaggio precedente.  
  
    1.  Fare clic sul **stampa** pulsante, modificare il **elemento** tipo **etichetta**, quindi fare clic su **inserire**. Modifica **didascalia** a `Preview and print the document`.  
  
    2.  Fare clic su di **stampa** pulsante, modificare il **elemento** tipo **pulsante**, fare clic su **inserire**. Modifica **didascalia** a `&Print`, **ID** a `ID_FILE_PRINT`, **immagine** a `4`, e **immagine di grandi dimensioni** a `4`.  
  
    3.  Fare clic su di **stampa** pulsante e quindi fare clic su **inserire** per aggiungere un pulsante. Modifica **didascalia** a `&Quick Print`, **ID** a `ID_FILE_PRINT_DIRECT`, **immagine** a `7`, e **immagine di grandi dimensioni** a `7`.  
  
    4.  Fare clic su di **stampa** pulsante e quindi fare clic su **inserire** per aggiungere un altro pulsante. Modifica **didascalia** a `Print Pre&view`, **ID** a `ID_FILE_PRINT_PREVIEW`, **immagine** a `6`, e **immagine di grandi dimensioni** a `6`.  
  
    5.  Ora è stata modificata la **elementi principali**. Fare clic su **Chiudi** per uscire dall'installazione di **Editor elementi**.  
  
7.  Le modifiche seguenti creano un pulsante di uscita che viene visualizzato nella parte inferiore del menu del pulsante dell'applicazione.  
  
    1.  Nel **proprietà** finestra, fare clic sui puntini di sospensione (**...** ) accanto a **pulsante** per aprire la **Editor elementi**.  
  
    2.  Fare clic su **Aggiungi** per aggiungere un pulsante. Modifica **didascalia** a `E&xit`, **ID** a `ID_APP_EXIT`, **immagine** a `8`.  
  
 [[Sezioni](#top)]  
  
##  <a name="createinstance"></a>Creazione di un'istanza della barra multifunzione  
 Nei passaggi seguenti viene illustrato come creare un'istanza della barra multifunzione quando si avvia l'applicazione. Per aggiungere una barra multifunzione a un'applicazione, dichiarare la barra multifunzione nel file mainfrm.h. Quindi, nel file mainfrm.cpp, scrivere il codice per caricare la risorsa barra multifunzione.  
  
#### <a name="to-create-an-instance-of-the-ribbon-bar"></a>Per creare un'istanza della barra multifunzione  
  
1.  Nel file mainfrm.h aggiungere un membro dati alla sezione protetta di `CMainFrame`, la definizione della classe per la cornice principale. Questo membro rappresenta la barra multifunzione.  
  
 ' ' * / / Sulla barra multifunzione barra per l'applicazione  
    M_wndRibbonBar CMFCRibbonBar;  
 ```  
  
2.  In the mainfrm.cpp file, add the following code before the final `return` statement at the end of the `CMainFrame::OnCreate` function. This creates an instance of the ribbon bar.  
  
 ``` *// Create the ribbon bar  
    if (!m_wndRibbonBar.Create(this))  
 {  
    return -1;   //Failed to create ribbon bar  
 }  
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);

 ```  
  
 [[Sezioni](#top)]  
  
##  <a name="addcategory"></a>Personalizzazione della risorsa barra multifunzione  
 Una volta creato il pulsante dell'applicazione, è possibile aggiungere gli elementi alla barra multifunzione.  
  
> [!NOTE]
>  In questa procedura dettagliata viene utilizzata la stessa icona di pannello per tutti i pannelli. Tuttavia, è possibile utilizzare altri indici dell'elenco di immagini per visualizzare altre icone.  
  
#### <a name="to-add-a-home-category-and-edit-panel"></a>Per aggiungere una categoria Home e un pannello Modifica  
  
1.  Il programma Scribble richiede solo una categoria. Nella visualizzazione progettazione, fare clic su **categoria** per visualizzarne le proprietà. Modificare i valori delle proprietà come segue: **didascalia** a `&Home`, **Large Images** a `IDB_RIBBON_HOMELARGE`, **Small Images** a `IDB_RIBBON_HOMESMALL`.  
  
2.  Ogni categoria della barra multifunzione è organizzata in pannelli, ciascuno dei quali dispone di un nome. Ogni pannello contiene un set di controlli che eseguono operazioni correlate. Questa categoria dispone di un solo pannello. Fare clic su **pannello**e quindi modificare **didascalia** a `Edit` e **l'indice dell'immagine** a `0`.  
  
3.  Per il **modifica** pannello, aggiungere un pulsante che consenta di cancellare il contenuto del documento. L'ID di messaggio per questo pulsante è già stato definito nella risorsa del menu IDR_SCRIBBTYPE. Specificare `Clear All` il testo del pulsante e l'indice della bitmap che decora il pulsante. Aprire il **della casella degli strumenti**, quindi trascinare un **pulsante** per il **modifica** pannello. Fare clic sul pulsante e quindi modificare **didascalia** a `Clear All`, **ID** a `ID_EDIT_CLEAR_ALL`, **l'indice dell'immagine** a `0`, **l'indice dell'immagine di grandi dimensioni**  a `0`.  
  
4.  Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Verrà visualizzata l'applicazione Scribble con una barra multifunzione nella parte superiore della finestra al posto della barra dei menu. La barra multifunzione deve disporre di una categoria, **Home**, e **Home** deve avere un pannello **modifica**. I pulsanti della barra multifunzione che è stato aggiunto devono essere associati a gestori di eventi esistenti e **aprire**, **Chiudi**, **salvare**, **stampa**, e **Cancella tutto** pulsanti dovrebbero funzionare come previsto.  
  
 [[Sezioni](#top)]  
  
##  <a name="setlook"></a>Impostazione dell'aspetto dell'applicazione  
 Oggetto *gestore visualizzazione* è un oggetto globale che controlla tutti i disegni per un'applicazione. Dal momento che l'applicazione originale Scribble utilizza lo stile dell'interfaccia utente (UI) di Office 2000, l'aspetto dell'applicazione potrebbe risultare datato. È possibile reimpostare l'applicazione in modo che utilizzi il gestore visualizzazione di Office 2007 e che risulti simile a un'applicazione di Office 2007.  
  
#### <a name="to-set-the-look-of-the-application"></a>Per impostare l'aspetto dell'applicazione  
  
1.  Nella funzione `CMainFrame::OnCreate` digitare il codice seguente per modificare il gestore visualizzazione e lo stile predefiniti.  
  
 ' ' * / / Impostare il gestore predefinito per Office 2007   
    CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2007));

 CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_LunaBlue);

 ```  
  
2.  Save the changes, and then build and run the application. The application UI should resemble the Office 2007 UI.  
  
 [[Sections](#top)]  
  
## Next Steps  
 You have modified the classic Scribble 1.0 MFC sample to use the Ribbon Designer. Now go to [Part 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md).  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)   
 [Walkthrough: Updating the MFC Scribble Application (Part 2)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md)

