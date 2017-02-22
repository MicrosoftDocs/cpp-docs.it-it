---
title: "Procedura dettagliata: aggiornamento dell&#39;applicazione MFC Scribble (parte 1) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "esempi [C++], aggiornamento di applicazione esistente"
  - "MFC Feature Pack, aggiornamento di applicazione esistente"
  - "interfaccia utente Office Fluent, porting"
  - "interfaccia utente della barra multifunzione, porting"
  - "esempi [C++], aggiornamento di applicazione esistente"
  - "procedure dettagliate [C++], aggiornamento di applicazione esistente"
ms.assetid: aa6330d3-6cfc-4c79-8fcb-0282263025f7
caps.latest.revision: 54
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 50
---
# Procedura dettagliata: aggiornamento dell&#39;applicazione MFC Scribble (parte 1)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata viene illustrato come modificare un'applicazione MFC esistente per utilizzare l'interfaccia utente della barra multifunzione.  Visual Studio supporta sia la barra multifunzione di Office 2007 che la barra multifunzione scenica di Windows 7.  Per ulteriori informazioni sull'interfaccia utente della barra multifunzione, vedere [Barre multifunzione](http://go.microsoft.com/fwlink/?LinkId=129233) sul sito Web MSDN.  
  
 In questa procedura dettagliata si modifica l'esempio classico di Scribble 1.0 di MFC che consente di utilizzare il mouse per disegnare linee.  Questa parte della procedura dettagliata mostra come modificare l'esempio di Scribble di in modo che esso mostri una barra multifunzione.  [Parte 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md) aggiunge altri pulsanti alla barra multifunzione.  
  
## Prerequisiti  
 [Esempi di Visual C\+\+](../top/visual-cpp-samples.md)  
  
 [Esempi di Visual C\+\+](../top/visual-cpp-samples.md)  
  
##  <a name="top"></a> Sezioni  
 Questa parte della procedura dettagliata presenta le seguenti sezioni:  
  
-   [Sostituzione delle classi base](#replaceClass)  
  
-   [Aggiunta di bitmap al progetto](#addBitmap)  
  
-   [Aggiunta di una risorsa della barra multifunzione al progetto](#addRibbon)  
  
-   [Creazione di un'istanza della barra multifunzione](#createInstance)  
  
-   [Aggiunta di una categoria della barra multifunzione](#addCategory)  
  
-   [Impostazione dell'aspetto dell'applicazione](#setLook)  
  
##  <a name="replaceClass"></a> Sostituzione delle classi base  
 Per convertire un'applicazione che supporta un menu in un'applicazione che supporta una barra multifunzione, è necessario derivare le classi dell'applicazione, della finestra cornice e della barra degli strumenti dalle classi di base aggiornate. \(Si consiglia di non modificare l'esempio originale di Scribble; piuttosto, pulire il progetto di Scribble, copiarlo in un'altra directory e modificare la copia.\)  
  
#### Per sostituire le classi base nell'applicazione Scribble  
  
1.  In scribble.cpp, verificare che `CScribbleApp::InitInstance` include una chiamata a [AfxOleInit](../Topic/AfxOleInit.md).  
  
2.  Aggiungere il codice seguente al file stdafx.h.  
  
    ```  
    #include <afxcontrolbars.h>  
    ```  
  
3.  In scribble.h, modificare la definizione della classe `CScribbleApp` in modo che essa derivi da [CWinAppEx Class](../mfc/reference/cwinappex-class.md).  
  
    ```  
    class CScribbleApp: public CWinAppEx  
    ```  
  
4.  Scribble 1.0 è stato scritto quando le applicazioni Windows stato utilizzavano un file di inizializzazione \(.ini\) per salvare i dati delle preferenze utente.  Al posto di un file di inizializzazione, modificare Scribble in modo da archiviare le preferenze utente nel registro di sistema.  Per impostare la chiave del registro di sistema e la base, digitare il seguente codice in `CScribbleApp::InitInstance` dopo l'istruzione `LoadStdProfileSettings()`.  
  
    ```  
    SetRegistryKey(_T("MFCNext\\Samples\\Scribble2"));  
    SetRegistryBase(_T("Settings"));  
    ```  
  
5.  La cornice principale di una applicazione con MDI \(multiple document interface, interfaccia a documenti multipli\) non è derivata dalla classe `CMDIFrameWnd`.  Invece, è derivata dalla classe [CMDIFrameWndEx](../mfc/reference/cmdiframewndex-class.md).  
  
     Nei file mainfrm.h e mainfrm.cpp, sostituire tutti i riferimenti a `CMDIFrameWnd` con `CMDIFrameWndEx`.  
  
6.  Nei file childfrm.h e childfrm.cpp, sostituire `CMDIChildWnd` con `CMDIChildWndEx`.  
  
     Nel file childfrm.h, sostituire `CSplitterWnd` con `CSplitterWndEx`.  
  
7.  Modificare le barre degli strumenti e le barre di stato per utilizzare le nuove classi MFC.  
  
     Nel file mainfrm.h:  
  
    1.  Sostituire `CToolBar` con `CMFCToolBar`.  
  
    2.  Sostituire `CStatusBar` con `CMFCStatusBar`.  
  
8.  Nel file mainfrm.cpp:  
  
    1.  Sostituire `m_wndToolBar.SetBarStyle` con `m_wndToolBar.SetPaneStyle`  
  
    2.  Sostituire `m_wndToolBar.GetBarStyle` con `m_wndToolBar.GetPaneStyle`  
  
    3.  Sostituire `DockControlBar(&m_wndToolBar)` con `DockPane(&m_wndToolBar)`  
  
9. Nel file ipframe.cpp, commentare le tre righe di codice seguenti.  
  
    ```  
    m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);  
    pWndFrame->EnableDocking(CBRS_ALIGN_ANY);  
    pWndFrame->DockPane(&m_wndToolBar);  
    ```  
  
10. Se si desidera collegare in modo statico l'applicazione, aggiungere il codice seguente all'inizio del file delle risorse del progetto \(.rc\).  
  
    ```  
    #include "afxribbon.rc"  
    ```  
  
     Il file afxribbon.rc contiene le risorse richieste in fase di esecuzione.  [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md) include questo file automaticamente quando si crea un'applicazione.  
  
11. Salvare i cambiamenti e quindi compilare ed eseguire l'applicazione.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addBitmap"></a> Aggiunta di bitmap al progetto  
 I quattro passaggi successivi di questa procedura dettagliata richiedono risorse bitmap.  È possibile ottenere le bitmap appropriate in diversi modi:  
  
-   Utilizzare [Resource Editors](../mfc/resource-editors.md) per creare bitmap personalizzate.  Oppure utilizzare gli editor delle risorse per assemblare bitmap a partire da immagini con estensione .png \(portable network graphics\), incluse in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  Queste immagini sono nella directory `VS2008ImageLibrary`.  
  
     Tuttavia, l'interfaccia utente della barra multifunzione richiede che alcune bitmap supportino le immagini trasparenti.  Le bitmap trasparenti utilizzano pixel a 32 bit, dove 24 bit specificano le componenti rossa, verde e blu del colore e 8 bit definiscono un *canale alfa* che specifica la trasparenza del colore.  Gli editor di risorse correnti possano visualizzare, ma non modificare, le bitmap con pixel a 32 bit.  Pertanto, utilizzare un editor di immagini esterno anziché gli editor di risorse per modificare le bitmap trasparenti.  
  
-   Copiare un file di risorse appropriato da un'altra applicazione al progetto e importare le bitmap da esso.  
  
 Questa procedura dettagliata copia i file di risorse da un'applicazione nella directory Esempi.  
  
#### Per aggiungere bitmap al progetto  
  
1.  Utilizzare Esplora file per copiare i file .bmp seguenti dalla directory delle risorse \(`res`\) dell'esempio RibbonGadgets:  
  
    1.  Copiare main.bmp al progetto Scribble.  
  
    2.  Copiare filesmall.bmp e filelarge.bmp al progetto Scribble.  
  
    3.  Creare nuove copie di filelarge.bmp e filesmall.bmp, ma salvare le copie nell'esempio RibbonGadgets.  Rinominare le copie homesmall.bmp e homelarge.bmp, quindi spostarle nel progetto Scribble.  
  
    4.  Fare una copia del file toolbar.bmp, ma salvare la copia nell'esempio RibbonGadgets.  Rinominare la copia panelicons.bmp e spostarla nel progetto Scribble.  
  
2.  Importare la bitmap per un'applicazione MFC.  In **Visualizzazione risorse**, fare doppio clic sul nodo **scribble.rc**, fare doppio clic sul nodo **Bitmap** quindi scegliere **Aggiungi risorsa**.  Fare clic su **Importa** sulla finestra di dialogo visualizzata.  Passare alla directory `res`, selezionare il file main.bmp quindi scegliere **Apri**.  
  
     La bitmap main.bmp contiene un'immagine 26x26.  Impostare l'id della bitmap a IDB\_RIBBON\_MAIN.  
  
3.  Importare le bitmap dal menu File associato al pulsante dell'applicazione.  
  
    1.  Importare il file filesmall.bmp, il quale contiene dieci immagini 16x16 \(16x160\).  Dal momento che sono necessarie solamente otto immagini 16x16 \(16x128\), utilizzare **Visualizzazione risorse** per modificare la larghezza di tale bitmap da 160 a 128.  Impostare l'id della bitmap a IDB\_RIBBON\_FILESMALL.  
  
    2.  Importare il file filelarge.bmp, il quale contiene otto immagini 32x32 \(32x256\).  Impostare l'id della bitmap a IDB\_RIBBON\_FILELARGE.  
  
4.  Importare le bitmap per le categorie e i pannelli della barra multifunzione.  Ogni scheda della barra multifunzione è una categoria e consiste in un'etichetta di testo e in un'immagine facoltativa.  
  
    1.  Importare la bitmap homesmall.bmp, la quale contiene otto immagini 16x16 per bitmap dei pulsanti di piccole dimensioni.  Impostare l'id della bitmap a IDB\_RIBBON\_HOMESMALL.  
  
    2.  Importare la bitmap homelarge.bmp, la quale contiene otto immagini 32x32 per bitmap dei pulsanti di grandi dimensioni.  Impostare l'id della bitmap a IDB\_RIBBON\_HOMELARGE.  
  
5.  Importare le bitmap per i pannelli della barra multifunzione ridimensionati.  Queste bitmap, o le icone del pannello, vengono spesso utilizzate dopo un'operazione di ridimensionamento se la barra multifunzione è troppo piccola per visualizzare l'intero pannello.  
  
    1.  Importare la bitmap panelicons.bmp, la quale contiene otto immagini 16x16.  Nella finestra **Proprietà** dell'**Editor bitmap**, regolare la larghezza della bitmap a 64 \(16x64\).  Impostare l'id della bitmap a IDB\_PANEL\_ICONS.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addRibbon"></a> Aggiunta di una risorsa della barra multifunzione al progetto  
 Quando si converte un'applicazione che utilizza menu in un'applicazione che utilizza una barra multifunzione, non è necessario rimuovere o disabilitare i menu esistenti.  Piuttosto, è possibile creare una risorsa della barra multifunzione, aggiungere pulsanti della barra multifunzione e quindi associare i nuovi pulsanti con le voci di menu esistenti.  Sebbene i menu non risultino più visibili, i messaggi della barra multifunzione sono indirizzati attraverso i menu.  Inoltre, i collegamenti del menu continuano a funzionare.  
  
 Una barra multifunzione consiste del pulsante dell'applicazione, ovvero il pulsante di grandi dimensioni posto sul lato superiore sinistro della barra multifunzione e una o più schede della categoria.  Ogni scheda di categoria contiene uno o più riquadri che fungono da contenitori per i pulsanti ed i controlli della barra multifunzione.  Nella procedura seguente si mostra come creare una risorsa della barra multifunzione e come personalizzare il pulsante dell'applicazione.  
  
#### Per aggiungere una risorsa della barra multifunzione al progetto  
  
1.  Scegliere **Aggiungi risorsa** dal menu **Progetto**.  
  
2.  Nella finestra di dialogo **Aggiungi risorsa**, selezionare **Barra multifunzione**, quindi scegliere **Nuovo**.  
  
     Visual Studio crea una risorsa della barra multifunzione e la apre nella visualizzazione Progettazione.  L'id della risorsa della barra multifunzione è IDR\_RIBBON1, il quale viene mostrato in **Visualizzazione risorse**.  La barra multifunzione contiene una categoria ed un pannello.  
  
3.  È possibile personalizzare il pulsante dell'applicazione modificandone le proprietà.  Per Scribble 1.0 gli id del messaggio che vengono utilizzati in questo codice sono già definiti nel menu.  
  
4.  Nella visualizzazione Progettazione, fare clic sul pulsante dell'applicazione per visualizzarne le proprietà.  Modificare i valori delle proprietà nel modo seguente: **Immagine** in `IDB_RIBBON_MAIN`, **Prompt** in `File`, **Chiavi** in `f`, **Immagini di grandi dimensioni** in `IDB_RIBBON_FILELARGE` e **Immagini di piccole dimensioni** in `IDB_RIBBON_FILESMALL`.  
  
5.  Le seguenti modifiche creano il menu che viene visualizzato quando l'utente fa clic sul pulsante dell'applicazione.  Fare clic sui puntini di sospensione \(**...**\) accanto a **Elementi principali** per aprire **Editor degli elementi**.  
  
    1.  Fare clic su **Aggiungi** per aggiungere un pulsante.  Modificare **Didascalia** in `&Nuovo`, **ID** in `ID_FILE_NEW`, **Immagine** in `0`, **Immagine di grandi dimensioni** in `0`.  
  
    2.  Fare clic su **Aggiungi** per aggiungere un secondo pulsante.  Modificare **Didascalia** in `&Salva`, **ID** in `ID_FILE_SAVE`, **Immagine** in `2` e **Immagine di grandi dimensioni** in `2`.  
  
    3.  Fare clic su **Aggiungi** per aggiungere terzo pulsante.  Modificare **Didascalia** in `Salva &Come`, **ID** in `ID_FILE_SAVE_AS`, **Immagine** in `3` e **Immagine di grandi dimensioni** in `3`.  
  
    4.  Fare clic su **Aggiungi** per aggiungere un quarto pulsante.  Modificare **Didascalia** in `&Stampa`, **ID** in `ID_FILE_PRINT`, **Immagine** in `4` e **Immagine di grandi dimensioni** in `4`.  
  
    5.  Modificare il tipo di **Elemento** in **Separatore** quindi scegliere **Aggiungi**.  
  
    6.  Modificare il tipo di **Elemento** in **Pulsante**.  Fare clic su **Aggiungi** per aggiungere un quinto pulsante.  Modificare **Didascalia** in `&Chiudi`, **ID** in `ID_FILE_CLOSE`, **Immagine** in `5` e **Immagine di grandi dimensioni** in `5`.  
  
6.  Le seguenti modifiche creano un sottomenu al di sotto del pulsante Stampa creato nel passaggio precedente.  
  
    1.  Fare clic sul pulsante **Stampa**, modificare il tipo di **Elemento** in **Etichetta**, quindi scegliere **Inserisci**.  Modificare **Didascalia** in `Anteprima e stampa del documento`.  
  
    2.  Fare clic sul pulsante **Stampa** , modificare il tipo di **Elemento** in **Pulsante**, quindi scegliere **Inserisci**.  Modificare **Didascalia** in `&Stampa`, **ID** in `ID_FILE_PRINT`, **Immagine** in `4` e **Immagine di grandi dimensioni** in `4`.  
  
    3.  Fare clic sul pulsante **Stampa** quindi scegliere **Inserisci** per aggiungere un pulsante.  Modificare **Didascalia** in `&Stampa rapida`, **ID** in `ID_FILE_PRINT_DIRECT`, **Immagine** in `7` e **Immagine di grandi dimensioni** in `7`.  
  
    4.  Fare clic sul pulsante **Stampa** quindi scegliere **Inserisci** per aggiungere un altro pulsante.  Modificare **Didascalia** in `Stampa &anteprima`, **ID** in `ID_FILE_PRINT_PREVIEW`, **Immagine** in `6` e **Immagine di grandi dimensioni** in`6`.  
  
    5.  A questo punto sono stati modificati gli **Elementi principali**.  Fare clic su **Chiudi** per uscire da **Editor degli elementi**.  
  
7.  Le modifiche seguenti viene creano un pulsante di uscita che viene visualizzato nella parte inferiore del pulsante del menu dell'applicazione.  
  
    1.  Nella finestra **Proprietà**, fare clic sui puntini di sospensione \(**...**\) accanto al **Pulsante** per aprire l'**Editor degli elementi**.  
  
    2.  Fare clic su **Aggiungi** per aggiungere un pulsante.  Modificare **Didascalia** in `E&xit`, **ID** in `ID_APP_EXIT`, **Immagine** in`8`.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="createInstance"></a> Creazione di un'istanza della barra multifunzione  
 Nei passaggi seguenti viene illustrato come creare un'istanza della barra multifunzione quando l'applicazione viene avviata.  Per aggiungere una barra multifunzione ad un'applicazione, dichiarare la barra multifunzione nel file mainfrm.h.  Quindi, nel file mainfrm.cpp, scrivere il codice per caricare le risorse della barra multifunzione.  
  
#### Per creare un'istanza della barra multifunzione  
  
1.  Nel file mainfrm.h, aggiungere un membro dati alla sezione protetta di `CMainFrame`, la definizione della classe per la cornice principale.  Questo membro rappresenta la barra multifunzione.  
  
    ```  
    // Ribbon bar for the application  
    CMFCRibbonBar  m_wndRibbonBar;  
    ```  
  
2.  Nel file mainfrm.cpp, aggiungere il seguente codice prima dell'istruzione finale `return` alla fine della funzione `CMainFrame::OnCreate`.  Questo crea un'istanza della barra multifunzione.  
  
    ```  
    // Create the ribbon bar  
    if (!m_wndRibbonBar.Create(this))  
    {  
    return -1;   //Failed to create ribbon bar  
    }  
    m_wndRibbonBar.LoadFromResource(IDR_RIBBON1);  
    ```  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addCategory"></a> Personalizzare le risorse della barra multifunzione  
 Una volta creato il pulsante dell'applicazione, è possibile aggiungere elementi alla barra multifunzione.  
  
> [!NOTE]
>  In questa procedura dettagliata viene utilizzata la stessa icona del pannello per tutti i pannelli.  Tuttavia, è possibile utilizzare altri valori dell'elenco delle immagini per visualizzare altre icone.  
  
#### Per aggiungere una categoria Home e modificare il pannello  
  
1.  Il programma Scribble richiede solamente una categoria.  Nella visualizzazione Progettazione, fare clic su **Categoria** per visualizzarne le proprietà.  Modificare il valori delle proprietà come segue: **Didascalia** in `&Home`, **Immagini di grandi dimensioni** in `IDB_RIBBON_HOMELARGE`, **Immagini di piccole dimensioni** in `IDB_RIBBON_HOMESMALL`.  
  
2.  Ogni categoria della barra multifunzione è organizzata in pannelli, ciascuno dei quali dispone di un nome.  Ogni pannello contiene un insieme di controlli che eseguono operazioni correlate.  Questa categoria dispone di un pannello.  Fare clic su **Pannello** e quindi modificare **Didascalia** in `Modifica` e **Indice immagine** in `0`.  
  
3.  Nel pannello **Modifica**, aggiungere un pulsante che è responsabile di cancellare il contenuto del documento.  L'id del messaggio per questo pulsante è già stato definito nella risorsa del menu IDR\_SCRIBBTYPE.  Specificare `Cancella tutto` come testo del pulsante e l'indice della bitmap che decora il pulsante.  Aprire la **Casella degli strumenti**, quindi trascinare un **Pulsante** nel pannello **Modifica**.  Fare clic sul pulsante, quindi modificare **Didascalia** in `Cancella tutto`, **ID** in `ID_EDIT_CLEAR_ALL`, **Indice immagine** in `0`, **Indice di immagine di grandi dimensioni** in `0`.  
  
4.  Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  Dovrebbe essere visualizzata l'applicazione Scribble ed essa dovrebbe disporre di una barra multifunzione nella parte superiore della finestra anziché una barra dei menu.  La barra multifunzione dovrebbe avere una categoria, **Home** e **Home** dovrebbe disporre di un pannello **Modifica**.  I pulsanti della barra multifunzione aggiunti in precedenza dovrebbero essere associati ai gestori degli eventi esistenti ed i pulsanti **Apri**, **Chiudi**, **Salva**, **Stampa** e **Cancella tutto** dovrebbero funzionare come previsto.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="setLook"></a> Impostazione dell'aspetto dell'applicazione  
 Un *Gestore visualizzazione* è un oggetto globale che controlla l'aspetto grafico per un'applicazione.  Dal momento che l'applicazione originale Scribble utilizza lo stile dell'interfaccia utente \(UI\) di Office 2000, l'aspetto dell'applicazione potrebbe risultare datato.  È possibile reimpostare l'applicazione per utilizzare il gestore visualizzazione di Office 2007 in modo che esso risulti simile a un'applicazione di Office 2007.  
  
#### Per impostare l'aspetto dell'applicazione  
  
1.  Nella funzione `CMainFrame::OnCreate`, digitare il codice seguente per modificare il gestore visualizzazione e lo stile predefiniti.  
  
    ```  
    // Set the default manager to Office 2007   
    CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerOffice2007));  
    CMFCVisualManagerOffice2007::SetStyle(CMFCVisualManagerOffice2007::Office2007_LunaBlue);  
    ```  
  
2.  Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  L'interfaccia utente dell'applicazione dovrebbe essere simile all'interfaccia utente di Office 2007.  
  
 \[[Sezioni](#top)\]  
  
## Passaggi successivi  
 Si è modificato l'esempio classico di MFC di Scribble 1.0 per utilizzare la finestra di progettazione della barra multifunzione.  Ora passare a [Parte 2](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md).  
  
## Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)   
 [Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble \(parte 2\)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-2.md)