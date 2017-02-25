---
title: "Procedura dettagliata: aggiornamento dell&#39;applicazione MFC Scribble (parte 2) | Microsoft Docs"
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
  - "procedure dettagliate [C++]"
ms.assetid: 602df5c2-17d4-4cd9-8cf6-dff652c4cae5
caps.latest.revision: 36
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 32
---
# Procedura dettagliata: aggiornamento dell&#39;applicazione MFC Scribble (parte 2)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[Parte 1](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md) di questa procedura dettagliata è stato illustrato come aggiungere una barra multifunzione Office fluent per l'applicazione scribble classica.  In questa parte come aggiungere pannelli e i controlli della barra multifunzione che gli utenti possono utilizzare invece dei menu e controlli.  
  
## Prerequisiti  
 [Esempi di Visual C\+\+](../top/visual-cpp-samples.md)  
  
##  <a name="top"></a> Sezioni  
 Questa parte della procedura dettagliata presenta le seguenti sezioni:  
  
-   [Aggiunta di nuovi pannelli della barra multifunzione](#addNewPanel)  
  
-   [Aggiunta di un pannello della guida alla barra multifunzione](#addHelpPanel)  
  
-   [Aggiunta di un pannello della penna alla barra multifunzione](#addPenPanel)  
  
-   [Aggiunta di un pulsante di colore alla barra multifunzione](#addColorButton)  
  
-   [Aggiunta di un membro colore alla classe di documento](#addColorMember)  
  
-   [Inizializzare penne e salvare preferenze](#initPenSave)  
  
##  <a name="addNewPanel"></a> Aggiunta di nuovi pannelli della barra multifunzione  
 Questi passaggi viene illustrato come aggiungere un pannello di **Visualizza** che contiene due caselle di controllo che consentono di controllare la visibilità delle barre degli strumenti e della barra di stato e un pannello di **Finestra** contenente un pulsante di menu combinato con orientamento verticale che controlla la creazione e la disposizione delle finestre di multiple\-document interface \(MDI\).  
  
#### Per aggiungere un pannello della finestra e la schermata di visualizzazione della barra della barra multifunzione  
  
1.  Creare un pannello denominato `Visualizza`, con due caselle di controllo che superano la barra di stato e la barra degli strumenti.  
  
    1.  Da **Casella degli strumenti**, trascinare **Pannello** alla categoria di **Home**.  Quindi trascinare due **Caselle di controllo** al pannello.  
  
    2.  Scegliere pannello per modificarne le proprietà.  **Titolo** Di modifica a `Visualizza`.  
  
    3.  Fare clic sulla prima casella di controllo per modificare le proprietà.  **ID** Di modifica a `ID_VIEW_TOOLBAR` e **Titolo** a `Barra degli strumenti`.  
  
    4.  Fare clic sulla seconda casella di controllo per modificare le proprietà.  **ID** Di modifica a `ID_VIEW_STATUS_BAR` e **Titolo** a `Barra di stato`.  
  
2.  Creare un pannello denominato `Finestra` con un pulsante di menu combinato.  Quando un utente fa clic sul pulsante di menu combinato, visualizzazioni di un menu di scelta rapida tre controlli già definiti nell'applicazione scribble.  
  
    1.  Da **Casella degli strumenti**, trascinare **Pannello** alla categoria di **Home**.  Trascinare **Pulsante** al pannello.  
  
    2.  Scegliere pannello per modificarne le proprietà.  **Titolo** Di modifica a `Finestra`.  
  
    3.  Fare clic sul pulsante.  **Titolo** Di modifica a `Windows`, **Chiavi** a `w`, **Large Image Index** a `1` e **Modalità di divisione** a `False`.  Fare clic sui puntini di sospensione \(**...**\) accanto a **Elementi menu** per aprire la finestra di dialogo **Editor elementi**.  
  
    4.  Fare clic **Aggiungi** tre volte per aggiungere tre pulsanti.  
  
    5.  Fare clic sul primo pulsante e quindi **Titolo** di modifica a `Nuova finestra` e **ID** a `ID_WINDOW_NEW`.  
  
    6.  Fare clic sul secondo pulsante e quindi **Titolo** di modifica a `Sovrapponi` e **ID** a `ID_WINDOW_CASCADE`.  
  
    7.  Fare clic sul terzo pulsante e quindi **Titolo** di modifica a `Sezione` e **ID** a `ID_WINDOW_TILE_HORZ`.  
  
3.  Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  I pannelli di **Finestra** e di **Visualizza** devono essere visualizzati.  Fare clic sui pulsanti per confermare che funzionano correttamente.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addHelpPanel"></a> Aggiunta di un pannello della guida alla barra multifunzione  
 A questo punto, è possibile assegnare due voci di menu definite in un'applicazione scribble ai pulsanti della barra multifunzione denominati **Guida**  e **Informazioni su Scribble**.  I pulsanti vengono aggiunti a un nuovo pannello denominato **?**.  
  
#### Per aggiungere un pannello della guida  
  
1.  Da **Casella degli strumenti**, trascinare **Pannello** alla categoria di **Home**.  Quindi trascinare due **Pulsanti** al pannello.  
  
2.  Scegliere pannello per modificarne le proprietà.  **Titolo** Di modifica a `Guida`.  
  
3.  Fare clic sul primo pulsante.  **Titolo** Di modifica a `Guida` e **ID** a `ID_HELP_FINDER`.  
  
4.  Fare clic sul secondo pulsante.  **Titolo** Di modifica a `Su scribble...` e **ID** a `ID_APP_ABOUT`.  
  
5.  Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  Un pannello **?** che contiene due pulsanti della barra multifunzione da visualizzare.  
  
    > [!IMPORTANT]
    >  Quando si fa clic sul pulsante di **Guida**, l'applicazione scribble apre un HTML appiattito \(CHM *your\_project\_name*denominato file della Guida chm.  Pertanto, se il progetto non è denominato scribble, è necessario rinominare il file della Guida al nome del progetto.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addPenPanel"></a> Aggiunta di un pannello della penna alla barra multifunzione  
 A questo punto, aggiungere un pannello ai pulsanti di visualizzazione che controllano lo spessore e il colore penna.  Questo pannello contiene una casella di controllo che passa penne tra spesse e immediatamente evidenti.  La funzionalità è simile a quella della voce di menu di **Linea spessa** nell'applicazione scribble.  
  
 L'applicazione originale scribble dei pesi della penna selezionati dall'utente da una finestra di dialogo visualizzata quando l'utente fa clic **Spessori penna** nel menu.  Poiché la barra della barra multifunzione dispone di spazio per i nuovi controlli, è possibile sostituire la finestra di dialogo utilizzando due caselle combinate della barra multifunzione.  Una casella combinata regola larghezza della penna gravi e l'altra casella combinata regola larghezza della penna spessa.  
  
#### Per aggiungere una penna il pannello e caselle combinate alla barra multifunzione  
  
1.  Da **Casella degli strumenti**, trascinare **Pannello** alla categoria di **Home**.  Trascinare **Casella di controllo** e due **Caselle combinate** al pannello.  
  
2.  Scegliere pannello per modificarne le proprietà.  **Titolo** Di modifica a `Penna`.  
  
3.  Fare clic sulla casella di controllo.  **Titolo** Di modifica a `Utilizzo densamente` e **ID** a `ID_PEN_THICK_OR_THIN`.  
  
4.  Fare clic sulla prima casella combinata.  **Titolo** Di modifica a `Sottile la penna`, **ID** a `ID_PEN_THIN_WIDTH`, **Testo** a `2`, **Tipo** a `Elenco di selezione` e **Dati** a `1; 2; 3; 4; 5; 6; 7; 8; 9;`.  
  
5.  Fare clic sulla seconda casella combinata.  **Titolo** Di modifica a `Penna spessa`, **ID** a `ID_PEN_THICK_WIDTH`, **Testo** a `5`, **Tipo** a `Elenco di selezione` e **Dati** a `5; 6; 7; 8; 9; 10; 11; 12; 13; 14; 15; 16; 17; 18; 19; 20;`.  
  
6.  Le nuove caselle combinate non corrispondono ad alcune voci di menu esistenti.  Pertanto, è necessario creare una voce di menu per ogni opzione penna.  
  
    1.  Nella finestra di **Visualizzazione risorse**, aprire la risorsa menu di IDR\_SCRIBBTYPE.  
  
    2.  Scegliere **Penna** per aprire il menu p**it**.  Scegliere **Digitare qui** e digitare `Thi&penna di n`.  
  
    3.  Fare clic con il pulsante destro del mouse sul testo digitato per aprire la finestra di **Proprietà** quindi modificare la proprietà ID su `ID_PEN_THIN_WIDTH`.  
  
    4.  È inoltre necessario creare un gestore eventi per ogni voce di menu della penna.  Fare clic con il pulsante destro del mouse sulla voce di menu di **Thi&penna di n** appena creato e scegliere **Aggiungi gestore eventi**.  **Creazione guidata gestore eventi** Visualizzare.  
  
    5.  Nella casella di **Elenco classi** nella procedura guidata, **CScribbleDoc** quindi scegliere **Aggiungi**.  In questo modo viene creato un gestore eventi denominato `CScribbleDoc::OnPenThinWidth`.  
  
    6.  Aggiungere il seguente codice a `CScribbleDoc::OnPenThinWidth`.  
  
        ```  
        // Get a pointer to the ribbon bar  
        CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();  
        ASSERT_VALID(pRibbon);  
        // Get a pointer to the Thin Width combo box  
        CMFCRibbonComboBox* pThinComboBox = DYNAMIC_DOWNCAST(  
           CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THIN_WIDTH));  
        //Get the selected value  
        int nCurSel = pThinComboBox->GetCurSel();  
        if (nCurSel >= 0)  
        {  
           m_nThinWidth = atoi(pThinComboBox->GetItem(nCurSel));  
        }  
        // Create a new pen using the selected width  
        ReplacePen();    
        ```  
  
7.  Successivamente, creare una voce di menu e gestori eventi per la penna spessa.  
  
    1.  Nella finestra di **Visualizzazione risorse**, aprire la risorsa menu di IDR\_SCRIBBTYPE.  
  
    2.  Scegliere **Penna** per aprire il menu penna.  Scegliere **Digitare qui** e digitare `Thic&penna K`.  
  
    3.  Fare clic con il pulsante destro del mouse sul testo che si è appena stato digitato per visualizzare la finestra di **Proprietà**.  Modificare la proprietà ID su `ID_PEN_THICK_WIDTH`.  
  
    4.  Fare clic con il pulsante destro del mouse sulla voce di menu di **Penna spessa** appena creato e scegliere **Aggiungi gestore eventi**.  **Creazione guidata gestore eventi** Visualizzare.  
  
    5.  Nella casella di **Elenco classi** della procedura guidata, **CScribbleDoc** quindi scegliere **Aggiungi**.  In questo modo viene creato un gestore eventi denominato `CScribbleDoc::OnPenThickWidth`.  
  
    6.  Aggiungere il seguente codice a `CScribbleDoc::OnPenThickWidth`.  
  
        ```  
        // Get a pointer to the ribbon bar  
        CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx *) AfxGetMainWnd())->GetRibbonBar();  
        ASSERT_VALID(pRibbon);  
        CMFCRibbonComboBox* pThickComboBox = DYNAMIC_DOWNCAST(  
           CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THICK_WIDTH));  
        // Get the selected value  
        int nCurSel = pThickComboBox->GetCurSel();  
        if (nCurSel >= 0)  
        {  
           m_nThickWidth = atoi(pThickComboBox->GetItem(nCurSel));  
        }  
        // Create a new pen using the selected width  
        ReplacePen();  
        ```  
  
8.  Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  I nuovi pulsanti e caselle combinate devono essere visualizzati.  Provare utilizzo di fattori della penna diversi da scarabocchiare.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addColorButton"></a> Aggiunta di un pulsante di colore al pannello della penna  
 Successivamente, aggiungere un oggetto di [CMFCRibbonColorButton](../mfc/reference/cmfcribboncolorbutton-class.md) che consente all'utente scarabocchiare a colori.  
  
#### Per aggiungere un pulsante di colore al pannello della penna  
  
1.  Prima di aggiungere il pulsante colore, creare una voce di menu.  Nella finestra di **Visualizzazione risorse**, aprire la risorsa menu di IDR\_SCRIBBTYPE.  Fare clic sulla voce di menu di **Penna** per aprire il menu penna.  Scegliere **Digitare qui** e digitare `&Color`.  Fare clic con il pulsante destro del mouse sul testo che si è appena stato digitato per visualizzare la finestra di **Proprietà**.  Impostare l'id a `ID_PEN_COLOR`.  
  
2.  Aggiungere quindi il pulsante di colore.  Da **Casella degli strumenti**, trascinare **Pulsante Colore** il pannello di **Penna**.  
  
3.  Fare clic sul pulsante di colore.  **Titolo** Di modifica a `Colore`, **ID** a `ID_PEN_COLOR`, **SimpleAspetto** a `True`, **Large Image Index** a `1` e **Modalità di divisione** a `False`.  
  
4.  Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione.  Il nuovo pulsante di colori devono essere visualizzati nel pannello di **Penna**.  Tuttavia, non può essere utilizzato perché non è ancora presente un gestore eventi.  I punti seguenti viene illustrato come aggiungere un gestore eventi per il pulsante di colore.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="addColorMember"></a> Aggiunta di un membro colore alla classe di documento  
 Poiché l'applicazione originale scribble non ha penne di colore, è necessario creare un'implementazione per essi.  Per archiviare il colore penna del documento, aggiungere un nuovo membro alla classe del documento, `CscribbleDoc.`  
  
#### Per aggiungere un membro di colore al documento class  
  
1.  In scribdoc.h, nella classe di `CScribbleDoc`, trovare la sezione di `// Attributes`.  Aggiungere le seguenti righe di codice dopo la definizione di un membro dati di `m_nThickWidth`.  
  
    ```  
    // Current pen color  
    COLORREF   m_penColor;  
    ```  
  
2.  Ogni documento contiene un elenco di rifornisce che l'utente ha già tracciato.  Ogni tratto è definito da un oggetto di `CStroke`.  La classe di `CStroke` non include informazioni su colore penna.  Pertanto, è necessario modificare la classe.  In scribdoc.h, nella classe di `CStroke`, aggiungere le seguenti righe di codice dopo la definizione di un membro dati di `m_nPenWidth`.  
  
    ```  
    // Pen color for the stroke  
    COLORREF   m_penColor;  
    ```  
  
3.  In scribdoc.h, aggiungere un nuovo costruttore di `CStroke` dei parametri specificano una larghezza e un colore.  Aggiungere la seguente riga di codice dopo l'istruzione di `CStroke(UINT nPenWidth);`.  
  
    ```  
    CStroke(UINT nPenWidth, COLORREF penColor);  
    ```  
  
4.  In scribdoc.cpp, aggiungere l'implementazione di nuovo costruttore di `CStroke`.  Aggiungere il codice seguente dopo l'implementazione del costruttore di `CStroke::CStroke(UINT nPenWidth)`.  
  
    ```  
    // Constructor that uses the document's current width and color  
    CStroke::CStroke(UINT nPenWidth, COLORREF penColor)  
    {  
       m_nPenWidth = nPenWidth;  
       m_penColor = penColor;  
       m_rectBounding.SetRectEmpty();  
    }  
    ```  
  
5.  Modificare la seconda riga del metodo di `CStroke::DrawStroke` come segue.  
  
    ```  
    if (!penStroke.CreatePen(PS_SOLID, m_nPenWidth, m_penColor))  
    ```  
  
6.  Impostare il colore penna predefinito per la classe del documento.  In scribdoc.cpp, aggiungere le seguenti righe a `CScribbleDoc::InitDocument`, dopo l'istruzione di `m_nThickWidth = 5;`.  
  
    ```  
    // default pen color is black  
    m_penColor = RGB(0,0,0);   
    ```  
  
7.  In scribdoc.cpp, modificare la prima riga del metodo di `CScribbleDoc::NewStroke` al seguente.  
  
    ```  
    CStroke* pStrokeItem = new CStroke(m_nPenWidth, m_penColor);  
    ```  
  
8.  Modificare l'ultima riga del metodo di `CScribbleDoc::ReplacePen` al seguente.  
  
    ```  
    m_penCur.CreatePen(PS_SOLID, m_nPenWidth, m_penColor);  
    ```  
  
9. È stato aggiunto il membro di `m_penColor` in un passaggio precedente.  A questo punto, creare un gestore eventi per il pulsante di colore che imposta il membro.  
  
    1.  Nella finestra di **Visualizzazione risorse**, aprire la risorsa menu di IDR\_SCRIBBTYPE.  
  
    2.  Fare clic con il pulsante destro del mouse sulla voce di menu di **Colore** e fare clic **Aggiungi gestore eventi…**.  **Creazione guidata gestore eventi** Viene visualizzato.  
  
    3.  Nella casella di **Elenco classi** nella procedura guidata, **CScribbleDoc** quindi fare clic sul pulsante di **Aggiungi**.  In questo modo viene creato lo stub del gestore eventi di `CScribbleDoc::OnPenColor`.  
  
10. Sostituire lo stub per il gestore eventi di `CScribbleDoc::OnPenColor` con il codice seguente.  
  
    ```  
    void CScribbleDoc::OnPenColor()  
    {  
    // Change pen color to reflect color button's current selection  
    CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();  
    ASSERT_VALID(pRibbon);  
    CMFCRibbonColorButton* pColorBtn = DYNAMIC_DOWNCAST(  
       CMFCRibbonColorButton, pRibbon->FindByID(ID_PEN_COLOR));  
    m_penColor = pColorBtn->GetColor();  
    // Create new pen using the selected color  
    ReplacePen();  
    }  
    ```  
  
11. Salvare i cambiamenti e quindi compilare ed eseguire l'applicazione.  È possibile premere il pulsante di colore e modificare il colore penna.  
  
 \[[Sezioni](#top)\]  
  
##  <a name="initPenSave"></a> Inizializzare penne e salvare preferenze  
 Successivamente, inizializzare il colore e la larghezza di penne.  Infine, salva e carica un disegno di colore da un file.  
  
#### Per inizializzare i controlli della barra multifunzione  
  
1.  Inizializzare penne sulla barra della barra multifunzione.  
  
     Aggiungere il seguente codice a scribdoc.cpp, nel metodo di `CScribbleDoc::InitDocument`, dopo l'istruzione di `m_sizeDoc = CSize(200,200)`.  
  
    ```  
    // Reset the ribbon UI to its initial values  
    CMFCRibbonBar* pRibbon =   
       ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();  
    ASSERT_VALID(pRibbon);  
    CMFCRibbonColorButton* pColorBtn = DYNAMIC_DOWNCAST(  
       CMFCRibbonColorButton,   
       pRibbon->FindByID(ID_PEN_COLOR));  
    // Set ColorButton to black  
    pColorBtn->SetColor(RGB(0,0,0));    
    CMFCRibbonComboBox* pThinComboBox = DYNAMIC_DOWNCAST(  
       CMFCRibbonComboBox,   
       pRibbon->FindByID(ID_PEN_THIN_WIDTH));  
    // Set Thin pen combobox to 2  
    pThinComboBox->SelectItem(1);   
    CMFCRibbonComboBox* pThickComboBox = DYNAMIC_DOWNCAST(  
       CMFCRibbonComboBox,   
       pRibbon->FindByID(ID_PEN_THICK_WIDTH));  
    // Set Thick pen combobox to 5  
    pThickComboBox->SelectItem(0);  
    ```  
  
2.  Salvare un colore che disegna in un file.  Aggiungere l'istruzione seguente a scribdoc.cpp, nel metodo di `CStroke::Serialize`, dopo l'istruzione di `ar << (WORD)m_nPenWidth;`.  
  
    ```  
    ar << (COLORREF)m_penColor;  
    ```  
  
3.  Infine, inserire un disegno di colore da un file.  Aggiungere la seguente riga di codice, nel metodo di `CStroke::Serialize`, dopo l'istruzione di `m_nPenWidth = w;`.  
  
    ```  
    ar >> m_penColor;  
    ```  
  
4.  Ora scribble a colori e salvare il disegno in un file.  
  
 \[[Sezioni](#top)\]  
  
## Conclusione  
 È stata aggiornata l'applicazione scribble MFC.  Utilizzare questa procedura dettagliata come guida quando si modificano le applicazioni esistenti.  
  
## Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)   
 [Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble \(parte 1\)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)