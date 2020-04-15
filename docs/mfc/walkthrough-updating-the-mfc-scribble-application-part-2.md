---
title: "Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)"
ms.date: 04/25/2019
helpviewer_keywords:
- walkthroughs [MFC]
ms.assetid: 602df5c2-17d4-4cd9-8cf6-dff652c4cae5
ms.openlocfilehash: bc204a152168accf3731eede8ca9ef960ab121d2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360233"
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-2"></a>Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)

[Nella parte 1](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md) di questa procedura dettagliata è stato illustrato come aggiungere una barra multifunzione Office Fluent all'applicazione Scribble classica. In questa parte viene illustrato come aggiungere gruppi e controlli della barra multifunzione che gli utenti possono utilizzare al posto di menu e comandi.

## <a name="prerequisites"></a>Prerequisiti

[Esempi di Visual C++](../overview/visual-cpp-samples.md)

## <a name="sections"></a><a name="top"></a>Sezioni

In questa parte della procedura dettagliata sono incluse le seguenti sezioni:

- [Aggiunta di nuovi gruppi alla barra multifunzione](#addnewpanel)

- [Aggiunta di un gruppo della Guida alla barra multifunzione](#addhelppanel)

- [Aggiunta di un gruppo Penna alla barra multifunzione](#addpenpanel)

- [Aggiunta di un pulsante di colore alla barra multifunzione](#addcolorbutton)

- [Aggiunta di un membro colore alla classe documentoAdding a Color Member to the Document Class](#addcolormember)

- [Inizializzazione delle penne e salvataggio delle preferenze](#initpensave)

## <a name="adding-new-panels-to-the-ribbon"></a><a name="addnewpanel"></a>Aggiunta di nuovi gruppi alla barra multifunzione

Questi passaggi illustrano come aggiungere un pannello **di visualizzazione** che contiene due caselle di controllo che controllano la visibilità della barra degli strumenti e della barra di stato, nonché un pannello **Finestra** che contiene un pulsante di divisione orientato verticalmente che controlla la creazione e la disposizione delle finestre dell'interfaccia a documenti multipli (MDI).

### <a name="to-add-a-view-panel-and-window-panel-to-the-ribbon-bar"></a>Per aggiungere un gruppo Vista e un gruppo Finestra alla barra multifunzione

1. Creare un `View`pannello denominato , che dispone di due caselle di controllo che attivano/disattivano la barra di stato e la barra degli strumenti.

   1. Dalla **Casella degli strumenti**trascinare un **pannello** nella categoria **Home.** Quindi trascinare due **caselle** di controllo nel pannello.

   1. Fare clic sul pannello per modificarne le proprietà. Impostare `View` **Didascalia su** .

   1. Fare clic sulla prima casella di controllo per modificarne le proprietà. Modificare **ID** ID `ID_VIEW_TOOLBAR` in `Toolbar`e **Didascalia in** .

   1. Fare clic sulla seconda casella di controllo per modificarne le proprietà. Modificare **ID** ID `ID_VIEW_STATUS_BAR` in `Status Bar`e **Didascalia in** .

1. Creare un `Window` pannello con nome con un pulsante di divisione. Quando un utente fa clic sul pulsante di divisione, un menu di scelta rapida visualizza tre comandi già definiti nell'applicazione Scribble.

   1. Dalla **Casella degli strumenti**trascinare un **pannello** nella categoria **Home.** Quindi trascinare un **pulsante** nel pannello.

   1. Fare clic sul pannello per modificarne le proprietà. Impostare `Window` **Didascalia su** .

   1. Fare clic sul pulsante. Impostare `Windows` **Didascalia** `w`su , **Tasti** in , **Indice** `1`immagini grandi in e **Modalità di divisione** in `False`. Fare quindi clic sui puntine (**...**) accanto a **Voci di menu** per aprire la finestra di dialogo Editor **voci.**

   1. Fare clic su **Aggiungi** tre volte per aggiungere tre pulsanti.

   1. Fare clic sul primo pulsante, quindi `ID_WINDOW_NEW`impostare **Didascalia** in `New Window`e **ID** in .

   1. Fare clic sul secondo pulsante, quindi `ID_WINDOW_CASCADE`impostare **Didascalia in** `Cascade`e **ID** in .

   1. Fare clic sul terzo pulsante , `ID_WINDOW_TILE_HORZ`quindi impostare **Didascalia** in `Tile`e **ID** in .

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Dovrebbero essere visualizzati i pannelli **Vista** e **Finestra.** Fare clic sui pulsanti per verificare che funzionino correttamente.

## <a name="adding-a-help-panel-to-the-ribbon"></a><a name="addhelppanel"></a>Aggiunta di un gruppo della Guida alla barra multifunzione

A questo punto, è possibile assegnare due voci di menu definite nell'applicazione Scribble ai pulsanti della barra multifunzione denominati **Argomenti della Guida** e Informazioni sullo **scarabocchio**. I pulsanti vengono aggiunti a un nuovo pannello denominato **Guida**.

### <a name="to-add-a-help-panel"></a>Per aggiungere un pannello della Guida

1. Dalla **Casella degli strumenti**trascinare un **pannello** nella categoria **Home.** Quindi trascinare due **pulsanti** nel pannello.

1. Fare clic sul pannello per modificarne le proprietà. Impostare `Help` **Didascalia su** .

1. Fare clic sul primo pulsante. Modificare **Didascalia** in `Help Topics` `ID_HELP_FINDER`E ID **in** .

1. Fare clic sul secondo pulsante. Modificare **Didascalia** in `About Scribble...` `ID_APP_ABOUT`E ID **in** .

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Deve essere visualizzato un gruppo **della Guida** contenente due pulsanti della barra multifunzione.

   > [!IMPORTANT]
   > Quando si fa clic sul pulsante **Argomenti della Guida,** l'applicazione Scribble apre un file della Guida HTML compresso (con estensione chm) denominato *your_project_name*.chm. Di conseguenza, se il progetto non è denominato Scribble, è necessario rinominare il file della Guida con il nome del progetto.

## <a name="adding-a-pen-panel-to-the-ribbon"></a><a name="addpenpanel"></a>Aggiunta di un gruppo Penna alla barra multifunzione

A questo punto, aggiungere un pannello per visualizzare i pulsanti che controllano lo spessore e il colore della penna. Questo pannello contiene una casella di controllo che consente di passare da penne spesse a penne sottili. La sua funzionalità assomiglia a quella della voce di menu **Linea spessa** nell'applicazione Scribble.

L'applicazione Scribble originale consente all'utente di selezionare le larghezze della penna da una finestra di dialogo che viene visualizzata quando l'utente fa clic su **Larghezze della penna** nel menu. Poiché la barra multifunzione dispone di ampio spazio per i nuovi controlli, è possibile sostituire la finestra di dialogo utilizzando due caselle combinate sulla barra multifunzione. Una casella combinata regola la larghezza della penna sottile e l'altra casella combinata regola la larghezza della penna spessa.

#### <a name="to-add-a-pen-panel-and-combo-boxes-to-the-ribbon"></a>Per aggiungere un gruppo Penna e caselle combinate alla barra multifunzione

1. Dalla **Casella degli strumenti**trascinare un **pannello** nella categoria **Home.** Quindi trascinare una **casella di controllo** e due **caselle combinate** nel pannello.

1. Fare clic sul pannello per modificarne le proprietà. Impostare `Pen` **Didascalia su** .

1. Fare clic sulla casella di controllo. Modificare **Didascalia** in `Use Thick` `ID_PEN_THICK_OR_THIN`E ID **in** .

1. Fare clic sulla prima casella combinata. Modificare **Didascalia** `Thin Pen`in `ID_PEN_THIN_WIDTH`, `Drop List` **ID** in `1;2;3;4;5;6;7;8;9;`, **Tipo** in , **Dati** in e **Testo** in `2`.

1. Fare clic sulla seconda casella combinata. Modificare **Didascalia** `Thick Pen`in `ID_PEN_THICK_WIDTH`, `Drop List` **ID** in `5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;`, **Tipo** in , **Dati** in e **Testo** in `5`.

1. Le nuove caselle combinate non corrispondono ad alcuna voce di menu esistente, pertanto è necessario creare una voce di menu per ogni opzione di penna.

   1. Nella finestra **Visualizzazione risorse** aprire la risorsa menu **IDR_SCRIBBTYPE.**

   1. Fare clic su **Penna** per aprire il menu penna. Quindi fare clic `Thi&n Pen`su **Digitare qui** e digitare .

   1. Fare clic con il pulsante destro del mouse sul testo digitato per aprire la finestra **Proprietà,** quindi impostare la proprietà ID in `ID_PEN_THIN_WIDTH`.

   1. Creare un gestore eventi per ogni voce di menu penna. Fare clic con il pulsante destro del mouse sulla voce di menu **Thi&n Pen** creata e quindi **scegliere Aggiungi gestore eventi**. Viene visualizzata la **Creazione guidata gestore eventi.**

   1. Nella casella di **riepilogo Classe** della procedura guidata selezionare **CScribbleDoc** , quindi fare clic su **Aggiungi e modifica**. Il comando crea un `CScribbleDoc::OnPenThinWidth`gestore eventi denominato .

   1. Aggiungere il seguente codice a `CScribbleDoc::OnPenThinWidth`.

        ```cpp
        // Get a pointer to the ribbon bar
        CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();
        ASSERT_VALID(pRibbon);

        // Get a pointer to the Thin Width combo box
        CMFCRibbonComboBox* pThinComboBox = DYNAMIC_DOWNCAST(
        CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THIN_WIDTH));

        //Get the selected value
        int nCurSel = pThinComboBox->GetCurSel();
        if (nCurSel>= 0)
        {
            m_nThinWidth = atoi(CStringA(pThinComboBox->GetItem(nCurSel)));
        }

        // Create a new pen using the selected width
        ReplacePen();
        ```

1. Successivamente, creare una voce di menu e gestori eventi per la penna spessa.

   1. Nella finestra **Visualizzazione risorse** aprire la risorsa menu **IDR_SCRIBBTYPE.**

   1. Fare clic su **Penna** per aprire il menu penna. Quindi fare clic `Thic&k Pen`su **Digitare qui** e digitare .

   1. Fare clic con il pulsante destro del mouse sul testo digitato per visualizzare la finestra **Proprietà.** Modificare la proprietà `ID_PEN_THICK_WIDTH`ID in .

   1. Fare clic con il pulsante destro del mouse sulla voce di menu **Penna spessa** creata e quindi **scegliere Aggiungi gestore eventi**. Viene visualizzata la **Creazione guidata gestore eventi.**

   1. Nella casella di **riepilogo Classe** della procedura guidata selezionare **CScribbleDoc** , quindi fare clic su **Aggiungi e modifica**. Il comando crea un `CScribbleDoc::OnPenThickWidth`gestore eventi denominato .

   1. Aggiungere il seguente codice a `CScribbleDoc::OnPenThickWidth`.

        ```cpp
        // Get a pointer to the ribbon bar
        CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx *) AfxGetMainWnd())->GetRibbonBar();
        ASSERT_VALID(pRibbon);

        CMFCRibbonComboBox* pThickComboBox = DYNAMIC_DOWNCAST(
            CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THICK_WIDTH));
        // Get the selected value
        int nCurSel = pThickComboBox->GetCurSel();
        if (nCurSel>= 0)
        {
            m_nThickWidth = atoi(CStringA(pThickComboBox->GetItem(nCurSel)));
        }

        // Create a new pen using the selected width
        ReplacePen();
        ```

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Dovrebbero essere visualizzati nuovi pulsanti e caselle combinate. Provare a utilizzare diverse larghezze della penna per scarabocchiare.

## <a name="adding-a-color-button-to-the-pen-panel"></a><a name="addcolorbutton"></a>Aggiunta di un pulsante Colore al pannello Penna

Successivamente, aggiungere un [CMFCRibbonColorButton](../mfc/reference/cmfcribboncolorbutton-class.md) oggetto che consente all'utente di scarabocchiare a colori.

### <a name="to-add-a-color-button-to-the-pen-panel"></a>Per aggiungere un pulsante di colore al pannello Penna

1. Prima di aggiungere il pulsante di colore, creare una voce di menu per esso. Nella finestra **Visualizzazione risorse** aprire la risorsa menu **IDR_SCRIBBTYPE.** Fare clic sulla voce di menu **Penna** per aprire il menu Penna. Quindi fare clic `&Color`su **Digitare qui** e digitare . Fare clic con il pulsante destro del mouse sul testo digitato per visualizzare la finestra **Proprietà.** Modificare l'ID in `ID_PEN_COLOR`.

1. Ora aggiungi il pulsante del colore. Dalla **Casella degli strumenti**, trascinare un **pulsante Colore** nel pannello **Penna.**

1. Fare clic sul pulsante del colore. Modificare **Didascalia** `Color`in `ID_PEN_COLOR`, **ID** in , `1`Aspetto **semplice** `True`, Indice immagine **grande** in e **Modalità di divisione** in `False`.

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Il nuovo pulsante Del colore dovrebbe essere visualizzato nel pannello **Penna.** Tuttavia, non può essere utilizzato perché non dispone ancora di un gestore eventi. I passaggi successivi illustrano come aggiungere un gestore eventi per il pulsante di colore.

## <a name="adding-a-color-member-to-the-document-class"></a><a name="addcolormember"></a>Aggiunta di un membro colore alla classe documentoAdding a Color Member to the Document Class

Poiché l'applicazione Scribble originale non dispone di penne a colori, è necessario scrivere un'implementazione per loro. Per memorizzare il colore della penna del documento, `CscribbleDoc`aggiungere un nuovo membro alla classe documento, .

### <a name="to-add-a-color-member-to-the-document-class"></a>Per aggiungere un membro colore alla classe documentoTo add a color member to the document class

1. In scribdoc.h, `CScribbleDoc` nella classe, `// Attributes` trovare la sezione. Aggiungere le seguenti righe di codice `m_nThickWidth` dopo la definizione del membro dati.

   ```cpp
   // Current pen color
   COLORREF m_penColor;
   ```

1. Ogni documento contiene un elenco di stokes che l'utente ha già disegnato. Ogni tratto è `CStroke` definito da un oggetto. La `CStroke` classe non include informazioni sul colore della penna, pertanto è necessario modificare la classe. In scribdoc.h, `CStroke` nella classe, aggiungere le seguenti righe `m_nPenWidth` di codice dopo la definizione del membro dati.

   ```cpp
   // Pen color for the stroke
   COLORREF m_penColor;
   ```

1. In scribdoc.h aggiungere `CStroke` un nuovo costruttore i cui parametri specificano una larghezza e un colore. Aggiungere la seguente riga `CStroke(UINT nPenWidth);` di codice dopo l'istruzione.

   ```cpp
   CStroke(UINT nPenWidth, COLORREF penColor);
   ```

1. In scribdoc.cpp aggiungere l'implementazione del nuovo `CStroke` costruttore. Aggiungere il codice seguente dopo `CStroke::CStroke(UINT nPenWidth)` l'implementazione del costruttore.

   ```cpp
   // Constructor that uses the document's current width and color
   CStroke::CStroke(UINT nPenWidth, COLORREF penColor)
   {
       m_nPenWidth = nPenWidth;
       m_penColor = penColor;
       m_rectBounding.SetRectEmpty();
   }
   ```

1. Modificare la seconda `CStroke::DrawStroke` riga del metodo come segue.

   ```cpp
   if (!penStroke.CreatePen(PS_SOLID, m_nPenWidth, m_penColor))
   ```

1. Impostare il colore della penna predefinito per la classe documento. In scribdoc.cpp aggiungere le `CScribbleDoc::InitDocument`righe seguenti `m_nThickWidth = 5;` a , dopo l'istruzione .

   ```cpp
   // default pen color is black
   m_penColor = RGB(0, 0, 0);
   ```

1. In scribdoc.cpp, modificare la `CScribbleDoc::NewStroke` prima riga del metodo nel modo seguente.

   ```cpp
   CStroke* pStrokeItem = new CStroke(m_nPenWidth, m_penColor);
   ```

1. Modificare l'ultima `CScribbleDoc::ReplacePen` riga del metodo come segue.

   ```cpp
   m_penCur.CreatePen(PS_SOLID, m_nPenWidth, m_penColor);
   ```

1. Il `m_penColor` membro è stato aggiunto in un passaggio precedente. A questo punto, creare un gestore eventi per il pulsante di colore che imposta il membro.

   1. Nella finestra **Visualizzazione risorse** aprire la risorsa menu IDR_SCRIBBTYPE.

   1. Fare clic con il pulsante destro del mouse sulla voce di menu **Colore** e **scegliere Aggiungi gestore eventi**. Viene visualizzata la **Creazione guidata gestore eventi.**

   1. Nella casella di **riepilogo Classe** della procedura guidata selezionare **CScribbleDoc,** quindi fare clic sul pulsante **Aggiungi e modifica.** Il comando `CScribbleDoc::OnPenColor` crea lo stub del gestore eventi.

1. Sostituire lo stub `CScribbleDoc::OnPenColor` per il gestore eventi con il codice seguente.

   ```cpp
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

1. Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione. È ora possibile premere il pulsante del colore e modificare il colore della penna.

## <a name="initializing-pens-and-saving-preferences"></a><a name="initpensave"></a>Inizializzazione delle penne e salvataggio delle preferenze

Successivamente, inizializzare il colore e la larghezza delle penne. Infine, salvare e caricare un disegno a colori da un file.

### <a name="to-initialize-controls-on-the-ribbon-bar"></a>Per inizializzare i controlli sulla barra multifunzione

1. Inizializzare le penne sulla barra multifunzione.

   Aggiungere il codice seguente a scribdoc.cpp, nel `CScribbleDoc::InitDocument` metodo , dopo l'istruzione `m_sizeDoc = CSize(200,200)` .

   ```cpp
   // Reset the ribbon UI to its initial values
   CMFCRibbonBar* pRibbon =
       ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();
   ASSERT_VALID(pRibbon);

   CMFCRibbonColorButton* pColorBtn = DYNAMIC_DOWNCAST(
       CMFCRibbonColorButton,
       pRibbon->FindByID(ID_PEN_COLOR));

   // Set ColorButton to black
   pColorBtn->SetColor(RGB(0, 0, 0));

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

1. Salvare un disegno a colori in un file. Aggiungere l'istruzione seguente a scribdoc.cpp, nel `CStroke::Serialize` metodo, dopo l'istruzione `ar << (WORD)m_nPenWidth;` .

   ```cpp
   ar << (COLORREF)m_penColor;
   ```

1. Infine, caricare un disegno a colori da un file. Aggiungere la seguente riga di `CStroke::Serialize` codice, `m_nPenWidth = w;` nel metodo, dopo l'istruzione .

   ```cpp
   ar >> m_penColor;
   ```

1. Ora scarabocchiare a colori e salvare il disegno in un file.

## <a name="conclusion"></a>Conclusioni

L'applicazione MFC Scribble è stata aggiornata. Utilizzare questa procedura dettagliata come guida quando si modificano le applicazioni esistenti.

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)<br/>
[Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 1)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)
