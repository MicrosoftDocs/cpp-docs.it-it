---
title: "Procedura dettagliata: L'aggiornamento dell'applicazione MFC Scribble (parte 2)"
ms.date: 09/20/2018
helpviewer_keywords:
- walkthroughs [MFC]
ms.assetid: 602df5c2-17d4-4cd9-8cf6-dff652c4cae5
ms.openlocfilehash: c22a11c54b1957c1d4ac735fe8cb577d9c483d35
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "58781705"
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-2"></a>Procedura dettagliata: L'aggiornamento dell'applicazione MFC Scribble (parte 2)

[Parte 1](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md) di questa procedura dettagliata ha illustrata come aggiungere una barra multifunzione a Office Fluent per il modello di distribuzione classica applicazione Scribble. Questa parte viene illustrato come aggiungere pannelli della barra multifunzione e i controlli che gli utenti possono usare invece i menu e comandi.

## <a name="prerequisites"></a>Prerequisiti

[Esempi di Visual C++](../overview/visual-cpp-samples.md)

##  <a name="top"></a> Sezioni

In questa parte della procedura dettagliata sono incluse le seguenti sezioni:

- [Aggiunta di nuovi pannelli alla barra multifunzione](#addnewpanel)

- [Aggiunta di un pannello della Guida per la barra multifunzione](#addhelppanel)

- [Aggiunta di un pannello penna alla barra multifunzione](#addpenpanel)

- [Aggiunta di un pulsante colore alla barra multifunzione](#addcolorbutton)

- [Aggiunta di un membro di colore per la classe documento](#addcolormember)

- [L'inizializzazione di penne e salvare le preferenze](#initpensave)

##  <a name="addnewpanel"></a> Aggiunta di nuovi pannelli alla barra multifunzione

Questi passaggi illustrano come aggiungere un **View** pannello che contiene due caselle di controllo che consentono di controllare la visibilità della barra degli strumenti e la barra di stato, nonché un **finestra** pannello che contiene una divisione orientata verticalmente pulsante che controlla la creazione e la disposizione delle finestre di interfaccia a documenti multipli (MDI).

### <a name="to-add-a-view-panel-and-window-panel-to-the-ribbon-bar"></a>Per aggiungere un pannello di visualizzazione e nel pannello finestra alla barra multifunzione

1. Creare un riquadro denominato `View`, che ha due caselle di controllo Attiva/Disattiva barra di stato e sulla barra degli strumenti.

   1. Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare quindi due **caselle di controllo** al pannello.

   1. Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** a `View`.

   1. Fare clic sulla prima casella di controllo per modificare le relative proprietà. Change **ID** al `ID_VIEW_TOOLBAR` e **didascalia** a `Toolbar`.

   1. Fare clic sulla casella di controllo secondo per modificarne le proprietà. Change **ID** al `ID_VIEW_STATUS_BAR` e **didascalia** a `Status Bar`.

1. Creare un riquadro denominato `Window` che dispone di un pulsante di menu combinato. Quando un utente fa clic sul pulsante di menu combinato, menu di scelta rapida vengono visualizzati i tre comandi seguenti sono già definiti nell'applicazione Scribble.

   1. Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare un **pulsante** al pannello.

   1. Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** a `Window`.

   1. Fare clic sul pulsante. Change **didascalia** per `Windows`, **chiavi** per `w`, **Large Image Index** per `1`, e **modalità di divisione** per `False`. Quindi fare clic sui puntini di sospensione (**...** ) accanto a **voci di Menu** per aprire la **Editor elementi** nella finestra di dialogo.

   1. Fare clic su **Add** tre volte per aggiungere tre pulsanti.

   1. Fare clic sul primo pulsante e quindi cambiare **didascalia** al `New Window`, e **ID** a `ID_WINDOW_NEW`.

   1. Fare clic sul secondo pulsante e quindi cambiare **didascalia** al `Cascade`, e **ID** a `ID_WINDOW_CASCADE`.

   1. Il terzo pulsante e quindi cambiare **didascalia** a `Tile`, e **ID** a `ID_WINDOW_TILE_HORZ`.

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Il **View** e **finestra** pannelli devono essere visualizzati. Fare clic sui pulsanti per verificare che funzionino correttamente.

##  <a name="addhelppanel"></a> Aggiunta di un pannello della Guida per la barra multifunzione

A questo punto, è possibile assegnare due voci di menu sono definiti nell'applicazione Scribble ai pulsanti della barra multifunzione che sono denominati **gli argomenti della Guida** e **sulle Scribble**. Vengono aggiunti i pulsanti per passare un nuovo riquadro denominato **aiutare**.

### <a name="to-add-a-help-panel"></a>Aggiungere un pannello della Guida

1. Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare quindi due **pulsanti** al pannello.

1. Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** a `Help`.

1. Fare clic sul primo pulsante. Change **didascalia** al `Help Topics`, e **ID** a `ID_HELP_FINDER`.

1. Fare clic sul secondo pulsante. Change **didascalia** al `About Scribble...`, e **ID** a `ID_APP_ABOUT`.

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Oggetto **aiutare** pannello che contiene due pulsanti della barra multifunzione deve essere visualizzato.

   > [!IMPORTANT]
   > Quando si sceglie la **gli argomenti della Guida** , l'applicazione Scribble apre un file della Guida HTML (con estensione chm) compresso denominato *your_project_name*. chm. Di conseguenza, se il progetto Scribble non è denominato, è necessario rinominare il file della Guida per il nome del progetto.

##  <a name="addpenpanel"></a> Aggiunta di un pannello penna alla barra multifunzione

A questo punto, aggiungere un pannello per visualizzare i pulsanti che consentono di controllare lo spessore e il colore della penna. Il pannello contiene una casella di controllo che si alterna tra penne thick e sottile. La funzionalità è simile a quello del **spessa** voce di menu nell'applicazione Scribble.

L'applicazione originale Scribble consente all'utente di selezionare la larghezza della penna da una finestra di dialogo che viene visualizzato quando l'utente sceglie **la larghezza della penna** nel menu. Poiché la barra multifunzione è ampio spazio per i nuovi controlli, è possibile sostituire la finestra di dialogo con due caselle combinate della barra multifunzione. Una casella combinata è possibile regolare la larghezza della penna thin e casella combinata viene regolata la larghezza della penna thick.

#### <a name="to-add-a-pen-panel-and-combo-boxes-to-the-ribbon"></a>Per aggiungere un pannello di penna e combinata caselle alla barra multifunzione

1. Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare un **casella di controllo** e due **caselle combinate** al pannello.

1. Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** a `Pen`.

1. Selezionare la casella di controllo. Change **didascalia** al `Use Thick`, e **ID** a `ID_PEN_THICK_OR_THIN`.

1. Fare clic sulla prima casella combinata. Change **didascalia** a `Thin Pen`, **ID** a `ID_PEN_THIN_WIDTH`, **tipo** a `Drop List`, **dati** a `1;2;3;4;5;6;7;8;9;`, e **testo** a `2`.

1. Fare clic nella seconda casella combinata. Change **didascalia** a `Thick Pen`, **ID** a `ID_PEN_THICK_WIDTH`, **tipo** a `Drop List`, **dati** a `5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;`, e **testo** a `5`.

1. Le caselle combinate nuove non corrispondono a eventuali voci di menu esistenti, pertanto è necessario creare una voce di menu per tutte le opzioni di penna.

   1. Nel **visualizzazione di risorse** finestra, aprire il **IDR_SCRIBBTYPE** risorsa menu.

   1. Fare clic su **penna** per aprire il menu di penna. Quindi fare clic su **digitare qui** e il tipo `Thi&n Pen`.

   1. Pulsante destro del mouse il testo digitato per aprire la **delle proprietà** finestra e quindi modificare l'ID proprietà da `ID_PEN_THIN_WIDTH`.

   1. Creare un gestore eventi per ogni voce di menu della penna. Fare doppio clic il **corrente a & pri n** voce di menu che creato e quindi fare clic su **Aggiungi gestore**. Il **Creazione guidata gestore eventi** viene visualizzato.

   1. Nel **elenco di classi** finestra della procedura guidata, selezionare **CScribbleDoc** e quindi fare clic su **aggiungere e modificare**. Il comando crea un gestore eventi denominato `CScribbleDoc::OnPenThinWidth`.

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

1. Successivamente, creare un menu elemento e gestori eventi per la penna spessa.

   1. Nel **visualizzazione di risorse** finestra, aprire il **IDR_SCRIBBTYPE** risorsa menu.

   1. Fare clic su **penna** per aprire il menu di penna. Quindi fare clic su **digitare qui** e il tipo `Thic&k Pen`.

   1. Pulsante destro del mouse il testo digitato per visualizzare il **proprietà** finestra. Modificare la proprietà ID per `ID_PEN_THICK_WIDTH`.

   1. Fare doppio clic il **spessa** voce di menu che creato e quindi fare clic su **Aggiungi gestore**. Il **Creazione guidata gestore eventi** viene visualizzato.

   1. Nel **elenco di classi** della procedura guidata, seleziona **CScribbleDoc** e quindi fare clic su **aggiungere e modificare**. Il comando crea un gestore eventi denominato `CScribbleDoc::OnPenThickWidth`.

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

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Devono essere visualizzate nuovi pulsanti e caselle combinate. Provare a usare la larghezza della penna diversi per scribble.

##  <a name="addcolorbutton"></a> Aggiunta di un pulsante colore al pannello di penna

Successivamente, aggiungere un [CMFCRibbonColorButton](../mfc/reference/cmfcribboncolorbutton-class.md) oggetto che consente all'utente di scribble in colore.

### <a name="to-add-a-color-button-to-the-pen-panel"></a>Per aggiungere un pulsante colore al pannello di penna

1. Prima di aggiungere il pulsante colore, crea una voce di menu. Nel **visualizzazione di risorse** finestra, aprire il **IDR_SCRIBBTYPE** risorsa menu. Scegliere il **penna** voce di menu per aprire il menu di penna. Quindi fare clic su **digitare qui** e il tipo `&Color`. Pulsante destro del mouse il testo digitato per visualizzare il **proprietà** finestra. Modificare l'ID in `ID_PEN_COLOR`.

1. Ora aggiungere il pulsante colore. Dal **casella degli strumenti**, trascinare un **pulsante colore** per il **penna** pannello.

1. Fare clic sul pulsante del colore. Change **didascalia** a `Color`, **ID** a `ID_PEN_COLOR`, **Simple Look** a `True`, **l'indice dell'immagine di grandi dimensioni** per `1`, e **modalità di divisione** a `False`.

1. Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Il nuovo pulsante colore deve essere visualizzato nella **penna** pannello. Tuttavia, non è utilizzabile in quanto non ha ancora un gestore eventi. I passaggi successivi illustrano come aggiungere un gestore eventi per il pulsante colore.

##  <a name="addcolormember"></a> Aggiunta di un membro di colore per la classe documento

Poiché l'applicazione originale Scribble non ha le penne colore, è necessario scrivere un'implementazione per loro. Per archiviare il colore della penna del documento, aggiungere un nuovo membro alla classe documento, `CscribbleDoc`.

### <a name="to-add-a-color-member-to-the-document-class"></a>Per aggiungere un membro di colore per la classe documento

1. In ScribDoc. h, nelle `CScribbleDoc` classe, trovare il `// Attributes` sezione. Aggiungere le seguenti righe di codice dopo la definizione del `m_nThickWidth` (membro dati).

   ```cpp
   // Current pen color
   COLORREF m_penColor;
   ```

1. Ogni documento contiene un elenco di tratti che l'utente ha già creato. Ciascun oggetto stroke è definita da un `CStroke` oggetto. Il `CStroke` classe non include informazioni sul colore della penna, è necessario modificare la classe. In ScribDoc. h, nelle `CStroke` classe, aggiungere le seguenti righe di codice dopo la definizione del `m_nPenWidth` (membro dati).

   ```cpp
   // Pen color for the stroke
   COLORREF m_penColor;
   ```

1. In ScribDoc. h, aggiungere un nuovo `CStroke` costruttore i cui parametri specificano una larghezza e il colore. Aggiungere la seguente riga di codice dopo il `CStroke(UINT nPenWidth);` istruzione.

   ```cpp
   CStroke(UINT nPenWidth, COLORREF penColor);
   ```

1. In ScribDoc. cpp, aggiungere l'implementazione del nuovo `CStroke` costruttore. Aggiungere il codice seguente dopo l'implementazione del `CStroke::CStroke(UINT nPenWidth)` costruttore.

   ```cpp
   // Constructor that uses the document's current width and color
   CStroke::CStroke(UINT nPenWidth, COLORREF penColor)
   {
       m_nPenWidth = nPenWidth;
       m_penColor = penColor;
       m_rectBounding.SetRectEmpty();
   }
   ```

1. Modificare la riga del secondo il `CStroke::DrawStroke` metodo come indicato di seguito.

   ```cpp
   if (!penStroke.CreatePen(PS_SOLID, m_nPenWidth, m_penColor))
   ```

1. Impostare il colore della penna predefinita per la classe del documento. In ScribDoc. cpp, aggiungere le righe seguenti al `CScribbleDoc::InitDocument`, dopo il `m_nThickWidth = 5;` istruzione.

   ```cpp
   // default pen color is black
   m_penColor = RGB(0, 0, 0);
   ```

1. In ScribDoc. cpp, modificare la prima riga del `CScribbleDoc::NewStroke` metodo al seguente.

   ```cpp
   CStroke* pStrokeItem = new CStroke(m_nPenWidth, m_penColor);
   ```

1. Modificare l'ultima riga del `CScribbleDoc::ReplacePen` metodo al seguente.

   ```cpp
   m_penCur.CreatePen(PS_SOLID, m_nPenWidth, m_penColor);
   ```

1. Si è aggiunta il `m_penColor` membro in un passaggio precedente. A questo punto, creare un gestore eventi per il pulsante colore che imposta il membro.

   1. Nel **visualizzazione risorse** finestra, aprire la risorsa di menu IDR_SCRIBBTYPE.

   1. Fare doppio clic il **colore** voce di menu e fare clic su **Aggiungi gestore**. Il **Creazione guidata gestore eventi** viene visualizzata.

   1. Nel **elenco di classi** finestra della procedura guidata, selezionare **CScribbleDoc** e quindi fare clic sui **aggiungere e modificare** pulsante. Il comando crea il `CScribbleDoc::OnPenColor` stub del gestore eventi.

1. Sostituire lo stub per il `CScribbleDoc::OnPenColor` gestore dell'evento con il codice seguente.

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

##  <a name="initpensave"></a> L'inizializzazione di penne e salvare le preferenze

Inizializzare quindi il colore e spessore di penne. Infine, salvare e caricare un colore da un file di disegno.

### <a name="to-initialize-controls-on-the-ribbon-bar"></a>Per inizializzare i controlli della barra multifunzione

1. Inizializzare le penne sulla barra multifunzione.

   Aggiungere il codice seguente a ScribDoc. cpp, nelle `CScribbleDoc::InitDocument` metodo, dopo il `m_sizeDoc = CSize(200,200)` istruzione.

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

1. Salvare un colore in un file di disegno. Aggiungere l'istruzione seguente per ScribDoc. cpp, il `CStroke::Serialize` metodo, dopo il `ar << (WORD)m_nPenWidth;` istruzione.

   ```cpp
   ar << (COLORREF)m_penColor;
   ```

1. Infine, caricare un colore da un file di disegno. Aggiungere la seguente riga di codice, il `CStroke::Serialize` (metodo), dopo il `m_nPenWidth = w;` istruzione.

   ```cpp
   ar >> m_penColor;
   ```

1. A questo punto scribble a colori e salvare il disegno di un file.

## <a name="conclusion"></a>Conclusione

È stato aggiornato l'applicazione MFC Scribble. Utilizzare questa procedura dettagliata come guida quando si modificano applicazioni esistenti.

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)<br/>
[Procedura dettagliata: L'aggiornamento dell'applicazione MFC Scribble (parte 1)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)
