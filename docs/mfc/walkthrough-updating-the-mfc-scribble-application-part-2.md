---
description: "Altre informazioni su: procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)"
title: "Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)"
ms.date: 04/25/2019
helpviewer_keywords:
- walkthroughs [MFC]
ms.assetid: 602df5c2-17d4-4cd9-8cf6-dff652c4cae5
ms.openlocfilehash: 2520ac8fc1c66a2fc388738d22f4851547b6d03b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142961"
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-2"></a>Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)

Nella [parte 1](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md) di questa procedura dettagliata è stato illustrato come aggiungere una barra multifunzione di Office Fluent all'applicazione Scribble classica. In questa parte viene illustrato come aggiungere i pannelli e i controlli della barra multifunzione che possono essere utilizzati dagli utenti anziché i menu e i comandi.

## <a name="prerequisites"></a>Prerequisiti

[Esempi di Visual C++](../overview/visual-cpp-samples.md)

## <a name="sections"></a><a name="top"></a> Sezioni

In questa parte della procedura dettagliata sono incluse le seguenti sezioni:

- [Aggiunta di nuovi pannelli alla barra multifunzione](#addnewpanel)

- [Aggiunta di un pannello Guida alla barra multifunzione](#addhelppanel)

- [Aggiunta di un pannello penna alla barra multifunzione](#addpenpanel)

- [Aggiunta di un pulsante colore alla barra multifunzione](#addcolorbutton)

- [Aggiunta di un membro color alla classe Document](#addcolormember)

- [Inizializzazione di penne e salvataggio delle preferenze](#initpensave)

## <a name="adding-new-panels-to-the-ribbon"></a><a name="addnewpanel"></a> Aggiunta di nuovi pannelli alla barra multifunzione

In questa procedura viene illustrato come aggiungere un pannello di **visualizzazione** che contiene due caselle di controllo che controllano la visibilità della barra degli strumenti e della barra di stato, nonché un pannello della **finestra** che contiene un pulsante di suddivisione orientata verticalmente che controlla la creazione e la disposizione delle finestre di interfaccia a documenti multipli (MDI).

### <a name="to-add-a-view-panel-and-window-panel-to-the-ribbon-bar"></a>Per aggiungere un pannello di visualizzazione e un pannello della finestra alla barra multifunzione

1. Creare un pannello denominato `View` , che dispone di due caselle di controllo che comunicano la barra di stato e la barra degli strumenti.

   1. Dalla **casella degli strumenti** trascinare un **Pannello** nella categoria **Home** . Trascinare quindi due **caselle di controllo** sul pannello.

   1. Fare clic sul pannello per modificarne le proprietà. Modificare la **didascalia** in `View` .

   1. Fare clic sulla prima casella di controllo per modificarne le proprietà. Impostare **ID** su `ID_VIEW_TOOLBAR` e **didascalia** su `Toolbar` .

   1. Fare clic sulla seconda casella di controllo per modificarne le proprietà. Impostare **ID** su `ID_VIEW_STATUS_BAR` e **didascalia** su `Status Bar` .

1. Creare un pannello denominato `Window` con un pulsante di suddivisione. Quando un utente fa clic sul pulsante di menu combinato, un menu di scelta rapida Visualizza tre comandi già definiti nell'applicazione Scribble.

   1. Dalla **casella degli strumenti** trascinare un **Pannello** nella categoria **Home** . Trascinare quindi un **pulsante** sul pannello.

   1. Fare clic sul pannello per modificarne le proprietà. Modificare la **didascalia** in `Window` .

   1. Fare clic sul pulsante. Modificare la **didascalia** in `Windows` , le **chiavi** in `w` , l' **Indice immagine di grandi dimensioni** in `1` e la **modalità divisa** su `False` . Fare quindi clic sui puntini di sospensione (**..**.) accanto alle **voci di menu** per aprire la finestra di dialogo **Editor elementi** .

   1. Fare clic su **Aggiungi** tre volte per aggiungere tre pulsanti.

   1. Fare clic sul primo pulsante, quindi impostare **didascalia** su `New Window` e **ID** su `ID_WINDOW_NEW` .

   1. Fare clic sul secondo pulsante, quindi impostare **didascalia** su `Cascade` e **ID** su `ID_WINDOW_CASCADE` .

   1. Fare clic sul terzo pulsante, quindi impostare **didascalia** su `Tile` e **ID** su `ID_WINDOW_TILE_HORZ` .

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Verranno visualizzati i pannelli **vista** e **finestra** . Fare clic sui pulsanti per verificare che funzionino correttamente.

## <a name="adding-a-help-panel-to-the-ribbon"></a><a name="addhelppanel"></a> Aggiunta di un pannello Guida alla barra multifunzione

A questo punto, è possibile assegnare due voci di menu definite nell'applicazione Scribble ai pulsanti della barra multifunzione denominati **argomenti della Guida** e **informazioni su Scribble**. I pulsanti vengono aggiunti a un nuovo pannello denominato **Help**.

### <a name="to-add-a-help-panel"></a>Per aggiungere un pannello della Guida

1. Dalla **casella degli strumenti** trascinare un **Pannello** nella categoria **Home** . Trascinare quindi due **pulsanti** sul pannello.

1. Fare clic sul pannello per modificarne le proprietà. Modificare la **didascalia** in `Help` .

1. Fare clic sul primo pulsante. Modificare la **didascalia** in `Help Topics` e l' **ID** in `ID_HELP_FINDER` .

1. Fare clic sul secondo pulsante. Modificare la **didascalia** in `About Scribble...` e l' **ID** in `ID_APP_ABOUT` .

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Dovrebbe essere visualizzato un pannello della **Guida** contenente due pulsanti della barra multifunzione.

   > [!IMPORTANT]
   > Quando si fa clic sul pulsante **argomenti della Guida** , l'applicazione Scribble apre un file della Guida HTML compresso (con estensione chm) denominato *Your_Project_Name*. chm. Di conseguenza, se il progetto non è denominato Scribble, è necessario rinominare il file della guida nel nome del progetto.

## <a name="adding-a-pen-panel-to-the-ribbon"></a><a name="addpenpanel"></a> Aggiunta di un pannello penna alla barra multifunzione

A questo punto, aggiungere un pannello per visualizzare i pulsanti che controllano lo spessore e il colore della penna. Questo pannello contiene una casella di controllo che consente di passare tra le penne più spesse e quelle sottili. La relativa funzionalità è simile a quella della voce di menu di **linea spessa** nell'applicazione Scribble.

L'applicazione Scribble originale consente all'utente di selezionare le larghezze della penna da una finestra di dialogo che viene visualizzata quando l'utente fa clic su **larghezze di penna** nel menu. Poiché la barra multifunzione dispone di spazio sufficiente per i nuovi controlli, è possibile sostituire la finestra di dialogo utilizzando due caselle combinate sulla barra multifunzione. Una casella combinata regola la larghezza della penna sottile e l'altra casella combinata regola lo spessore della penna spessa.

#### <a name="to-add-a-pen-panel-and-combo-boxes-to-the-ribbon"></a>Per aggiungere un pannello penna e caselle combinate alla barra multifunzione

1. Dalla **casella degli strumenti** trascinare un **Pannello** nella categoria **Home** . Trascinare quindi una **casella di controllo** e due **caselle combinate** sul pannello.

1. Fare clic sul pannello per modificarne le proprietà. Modificare la **didascalia** in `Pen` .

1. Fare clic sulla casella di controllo. Modificare la **didascalia** in `Use Thick` e l' **ID** in `ID_PEN_THICK_OR_THIN` .

1. Fare clic sulla prima casella combinata. Modificare **didascalia** in `Thin Pen` , **ID** in `ID_PEN_THIN_WIDTH` , **digitare** in `Drop List` , **dati** in `1;2;3;4;5;6;7;8;9;` e **testo** in `2` .

1. Fare clic sulla seconda casella combinata. Modificare **didascalia** in `Thick Pen` , **ID** in `ID_PEN_THICK_WIDTH` , **digitare** in `Drop List` , **dati** in `5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;` e **testo** in `5` .

1. Le nuove caselle combinate non corrispondono ad alcuna voce di menu esistente, pertanto è necessario creare una voce di menu per ogni opzione Pen.

   1. Nella finestra **visualizzazione risorse** aprire la risorsa menu **IDR_SCRIBBTYPE** .

   1. Fare clic su **penna** per aprire il menu penna. Fare quindi clic su **digitare qui** e digitare `Thi&n Pen` .

   1. Fare clic con il pulsante destro del mouse sul testo digitato per aprire la finestra **Proprietà** , quindi impostare la proprietà ID su `ID_PEN_THIN_WIDTH` .

   1. Creare un gestore eventi per ogni voce di menu della penna. Fare clic con il pulsante destro del mouse sulla voce di menu **Thi&n Pen** creata, quindi scegliere **Aggiungi gestore eventi**. Verrà visualizzata la **creazione guidata gestore eventi** .

   1. Nella casella di **Riepilogo classe** della procedura guidata selezionare **CScribbleDoc** e quindi fare clic su **Aggiungi e modifica**. Il comando crea un gestore eventi denominato `CScribbleDoc::OnPenThinWidth` .

   1. Aggiungere il codice seguente a `CScribbleDoc::OnPenThinWidth`.

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

   1. Nella finestra **visualizzazione risorse** aprire la risorsa menu **IDR_SCRIBBTYPE** .

   1. Fare clic su **penna** per aprire il menu penna. Fare quindi clic su **digitare qui** e digitare `Thic&k Pen` .

   1. Fare clic con il pulsante destro del mouse sul testo digitato per visualizzare la finestra **Proprietà** . Modificare la proprietà ID in `ID_PEN_THICK_WIDTH` .

   1. Fare clic con il pulsante destro del mouse sulla voce di menu di **penna spessa** creata e quindi scegliere **Aggiungi gestore eventi**. Verrà visualizzata la **creazione guidata gestore eventi** .

   1. Nella casella di **Riepilogo classe** della procedura guidata selezionare **CScribbleDoc** e quindi fare clic su **Aggiungi e modifica**. Il comando crea un gestore eventi denominato `CScribbleDoc::OnPenThickWidth` .

   1. Aggiungere il codice seguente a `CScribbleDoc::OnPenThickWidth`.

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

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Verranno visualizzati i nuovi pulsanti e le caselle combinate. Provare a usare diverse larghezze di penna per scarabocchiare.

## <a name="adding-a-color-button-to-the-pen-panel"></a><a name="addcolorbutton"></a> Aggiunta di un pulsante colore al pannello penna

Aggiungere quindi un oggetto [CMFCRibbonColorButton](../mfc/reference/cmfcribboncolorbutton-class.md) che consenta all'utente di scarabocchiare a colori.

### <a name="to-add-a-color-button-to-the-pen-panel"></a>Per aggiungere un pulsante colore al pannello penna

1. Prima di aggiungere il pulsante colore, creare una voce di menu. Nella finestra **visualizzazione risorse** aprire la risorsa menu **IDR_SCRIBBTYPE** . Fare clic sulla voce di menu **penna** per aprire il menu penna. Fare quindi clic su **digitare qui** e digitare `&Color` . Fare clic con il pulsante destro del mouse sul testo digitato per visualizzare la finestra **Proprietà** . Modificare l'ID in `ID_PEN_COLOR`.

1. A questo punto, aggiungere il pulsante Color. Dalla **casella degli strumenti** trascinare un **pulsante colore** sul pannello **penna** .

1. Fare clic sul pulsante colore. Modificare la **didascalia** in `Color` , l' **ID** in `ID_PEN_COLOR` , l' **aspetto semplice** `True` , l'indice dell'immagine di **grandi dimensioni** `1` e la **modalità di divisione** su `False` .

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Il pulsante nuovo colore dovrebbe essere visualizzato nel pannello **Pen** . Tuttavia, non può essere usato perché non ha ancora un gestore eventi. Nei passaggi successivi viene illustrato come aggiungere un gestore eventi per il pulsante colore.

## <a name="adding-a-color-member-to-the-document-class"></a><a name="addcolormember"></a> Aggiunta di un membro color alla classe Document

Poiché l'applicazione Scribble originale non dispone di penne colorate, è necessario scriverne un'implementazione. Per archiviare il colore della penna del documento, aggiungere un nuovo membro alla classe del documento `CscribbleDoc` .

### <a name="to-add-a-color-member-to-the-document-class"></a>Per aggiungere un membro color alla classe Document

1. In scribdoc. h, nella `CScribbleDoc` classe, trovare la `// Attributes` sezione. Aggiungere le righe di codice seguenti dopo la definizione del `m_nThickWidth` membro dati.

   ```cpp
   // Current pen color
   COLORREF m_penColor;
   ```

1. Ogni documento contiene un elenco di Stokes già disegnato dall'utente. Ogni tratto è definito da un `CStroke` oggetto. La `CStroke` classe non include informazioni sul colore della penna, quindi è necessario modificare la classe. In scribdoc. h, nella `CStroke` classe aggiungere le righe di codice seguenti dopo la definizione del `m_nPenWidth` membro dati.

   ```cpp
   // Pen color for the stroke
   COLORREF m_penColor;
   ```

1. In scribdoc. h aggiungere un nuovo `CStroke` costruttore i cui parametri specificano una larghezza e un colore. Aggiungere la seguente riga di codice dopo l' `CStroke(UINT nPenWidth);` istruzione.

   ```cpp
   CStroke(UINT nPenWidth, COLORREF penColor);
   ```

1. In scribdoc. cpp aggiungere l'implementazione del nuovo `CStroke` costruttore. Aggiungere il codice seguente dopo l'implementazione del `CStroke::CStroke(UINT nPenWidth)` costruttore.

   ```cpp
   // Constructor that uses the document's current width and color
   CStroke::CStroke(UINT nPenWidth, COLORREF penColor)
   {
       m_nPenWidth = nPenWidth;
       m_penColor = penColor;
       m_rectBounding.SetRectEmpty();
   }
   ```

1. Modificare la seconda riga del `CStroke::DrawStroke` metodo come indicato di seguito.

   ```cpp
   if (!penStroke.CreatePen(PS_SOLID, m_nPenWidth, m_penColor))
   ```

1. Imposta il colore predefinito della penna per la classe del documento. In scribdoc. cpp aggiungere le righe seguenti a `CScribbleDoc::InitDocument` , dopo l' `m_nThickWidth = 5;` istruzione.

   ```cpp
   // default pen color is black
   m_penColor = RGB(0, 0, 0);
   ```

1. In scribdoc. cpp, modificare la prima riga del `CScribbleDoc::NewStroke` metodo come indicato di seguito.

   ```cpp
   CStroke* pStrokeItem = new CStroke(m_nPenWidth, m_penColor);
   ```

1. Modificare l'ultima riga del `CScribbleDoc::ReplacePen` metodo come indicato di seguito.

   ```cpp
   m_penCur.CreatePen(PS_SOLID, m_nPenWidth, m_penColor);
   ```

1. Il membro è `m_penColor` stato aggiunto in un passaggio precedente. A questo punto, creare un gestore eventi per il pulsante colore che imposta il membro.

   1. Nella finestra **visualizzazione risorse** aprire la risorsa menu IDR_SCRIBBTYPE.

   1. Fare clic con il pulsante destro del mouse sulla voce di menu **colore** e scegliere **Aggiungi gestore eventi**. Verrà visualizzata la **creazione guidata gestore eventi** .

   1. Nella casella di **Riepilogo classe** della procedura guidata selezionare **CScribbleDoc** e quindi fare clic sul pulsante **Aggiungi e modifica** . Il comando crea lo `CScribbleDoc::OnPenColor` stub del gestore eventi.

1. Sostituire lo stub per il `CScribbleDoc::OnPenColor` gestore eventi con il codice seguente.

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

1. Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione. È ora possibile premere il pulsante colore e modificare il colore della penna.

## <a name="initializing-pens-and-saving-preferences"></a><a name="initpensave"></a> Inizializzazione di penne e salvataggio delle preferenze

Successivamente, inizializzare il colore e la larghezza delle penne. Infine, salvare e caricare un disegno dei colori da un file.

### <a name="to-initialize-controls-on-the-ribbon-bar"></a>Per inizializzare i controlli sulla barra multifunzione

1. Inizializzare le penne sulla barra multifunzione.

   Aggiungere il codice seguente a scribdoc. cpp, nel `CScribbleDoc::InitDocument` metodo, dopo l' `m_sizeDoc = CSize(200,200)` istruzione.

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

1. Consente di salvare un disegno colori in un file. Aggiungere l'istruzione seguente a scribdoc. cpp, nel `CStroke::Serialize` metodo, dopo l' `ar << (WORD)m_nPenWidth;` istruzione.

   ```cpp
   ar << (COLORREF)m_penColor;
   ```

1. Infine, caricare un disegno colori da un file. Aggiungere la seguente riga di codice, nel `CStroke::Serialize` metodo, dopo l' `m_nPenWidth = w;` istruzione.

   ```cpp
   ar >> m_penColor;
   ```

1. A questo punto, scarabocchiare a colori e salvare il disegno in un file.

## <a name="conclusion"></a>Conclusione

L'applicazione MFC Scribble è stata aggiornata. Usare questa procedura dettagliata come guida per la modifica delle applicazioni esistenti.

## <a name="see-also"></a>Vedi anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)<br/>
[Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 1)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)
