---
title: "Procedura dettagliata: Aggiornamento dell'applicazione MFC Scribble (parte 2) | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- walkthroughs [MFC]
ms.assetid: 602df5c2-17d4-4cd9-8cf6-dff652c4cae5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 83caf353ca4a45e3ae834a41062de955a91dbb8a
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36952436"
---
# <a name="walkthrough-updating-the-mfc-scribble-application-part-2"></a>Procedura dettagliata: aggiornamento dell'applicazione MFC Scribble (parte 2)
[Parte 1](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md) di questa procedura dettagliata viene illustrato come aggiungere una barra multifunzione Office Fluent classica applicazione Scribble. Questa sezione illustra come aggiungere pannelli della barra multifunzione e i controlli che gli utenti possono usare invece i menu e comandi.  
  
## <a name="prerequisites"></a>Prerequisiti  
 [Esempi di Visual C++](../visual-cpp-samples.md)  
  
##  <a name="top"></a> Sezioni  
 In questa parte della procedura dettagliata sono incluse le seguenti sezioni:  
  
- [Aggiunta di nuovi pannelli alla barra multifunzione](#addnewpanel)  
  
- [Aggiunta di un pannello della Guida alla barra multifunzione](#addhelppanel)  
  
- [Aggiunta di un pannello penna alla barra multifunzione](#addpenpanel)  
  
- [Aggiungere un pulsante colore della barra multifunzione](#addcolorbutton)  
  
- [Aggiunta di un membro di colore per la classe di documento](#addcolormember)  
  
- [L'inizializzazione penne e salvare le preferenze](#initpensave)  
  
##  <a name="addnewpanel"></a> Aggiunta di nuovi pannelli alla barra multifunzione  
 Procedura mostra come aggiungere un **vista** pannello che contiene due caselle di controllo che consentono di controllare la visibilità della barra degli strumenti e la barra di stato, nonché un **finestra** pannello che contiene una divisione verticale pulsante che consente di controllare la creazione e la disposizione delle finestre di interfaccia a documenti multipli (MDI).  
  
#### <a name="to-add-a-view-panel-and-window-panel-to-the-ribbon-bar"></a>Per aggiungere un pannello della vista e un pannello finestra alla barra multifunzione  
  
1.  Creare un riquadro denominato *vista*, che presenta due caselle di controllo che attiva/disattiva barra di stato e sulla barra degli strumenti.  
  
    1.  Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare quindi due **caselle di controllo** al pannello.  
  
    2.  Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** alla *vista*.  
  
    3.  Fare clic sulla casella di controllo prima per modificarne le proprietà. Change **ID** alla *ID_VIEW_TOOLBAR* e **didascalia** a *della barra degli strumenti*.  
  
    4.  Fare clic sulla casella di controllo secondo per modificarne le proprietà. Change **ID** alla *ID_VIEW_STATUS_BAR* e **didascalia** a *barra di stato*.  
  
2.  Creare un riquadro denominato *finestra* dotato di un pulsante di menu combinato. Quando un utente fa clic sul pulsante di menu combinato, menu di scelta rapida vengono visualizzati i tre comandi seguenti sono già definiti nell'applicazione Scribble.  
  
    1.  Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare un **pulsante** al pannello.  
  
    2.  Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** alla *finestra*.  
  
    3.  Fare clic sul pulsante. Change **didascalia** a *Windows*, **chiavi** a *w*, **l'indice dell'immagine di grandi dimensioni** a *1* , e **modalità di divisione** a *False*. Quindi fare clic sui puntini di sospensione (**...** ) accanto a **voci di Menu** per aprire il **Editor elementi** finestra di dialogo.  
  
    4.  Fare clic su **Aggiungi** tre volte per aggiungere tre pulsanti.  
  
    5.  Fare clic sul primo pulsante e quindi modificare **didascalia** alla *nuova finestra*, e **ID** a *ID_WINDOW_NEW*.  
  
    6.  Fare clic sul secondo pulsante e quindi modificare **didascalia** alla *Cascade*, e **ID** a *ID_WINDOW_CASCADE*.  
  
    7.  Il terzo pulsante e quindi modificare **didascalia** alla *riquadro*, e **ID** a *ID_WINDOW_TILE_HORZ*.  
  
3.  Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Il **vista** e **finestra** pannelli devono essere visualizzati. Fare clic sul pulsante per verificare che funzionino correttamente.  
  
 [[Sezioni](#top)]  
  
##  <a name="addhelppanel"></a> Aggiunta di un pannello della Guida alla barra multifunzione  
 A questo punto, è possibile assegnare due voci di menu che vengono definiti nell'applicazione Scribble ai pulsanti della barra multifunzione che sono denominati **gli argomenti della Guida** e **sulle Scribble**. I pulsanti vengono aggiunti a un altro riquadro denominato **Guida**.  
  
#### <a name="to-add-a-help-panel"></a>Per aggiungere un pannello della Guida  
  
1.  Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare quindi due **pulsanti** al pannello.  
  
2.  Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** alla *Guida*.  
  
3.  Fare clic sul primo pulsante. Change **didascalia** alla *argomenti della Guida*, e **ID** a *ID_HELP_FINDER*.  
  
4.  Fare clic sul secondo pulsante. Change **didascalia** a *su Scribble...* , e **ID** a *ID_APP_ABOUT*.  
  
5.  Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Un **Guida** pannello che contiene due pulsanti della barra multifunzione deve essere visualizzato.  
  
    > [!IMPORTANT]
    >  Quando si fa clic il **gli argomenti della Guida** , l'applicazione Scribble apre un file della Guida HTML (con estensione chm) compresso denominato *your_project_name*. chm. Di conseguenza, se il progetto Scribble non è denominato, è necessario rinominare il file della Guida per il nome del progetto.  
  
 [[Sezioni](#top)]  
  
##  <a name="addpenpanel"></a> Aggiunta di un pannello penna alla barra multifunzione  
 A questo punto, aggiungere un pannello per visualizzare pulsanti che consentono di controllare lo spessore e il colore della penna. In questo pannello contiene una casella di controllo che attiva o disattiva tra penne thick e thin. La funzionalità è simile a quella del **linea spessa** voce di menu nell'applicazione Scribble.  
  
 L'applicazione originale Scribble consente all'utente di selezionare la larghezza della penna da una finestra di dialogo che viene visualizzata quando l'utente fa clic **la larghezza della penna** nel menu. Poiché la barra multifunzione dispone di sufficiente spazio per nuovi controlli, è possibile sostituire la finestra di dialogo utilizzando due caselle combinate della barra multifunzione. Una casella combinata è possibile regolare la larghezza della penna thin e casella combinata regola la larghezza della penna spessa.  
  
#### <a name="to-add-a-pen-panel-and-combo-boxes-to-the-ribbon"></a>Per aggiungere un pannello penna e combinata caselle alla barra multifunzione  
  
1.  Dal **casella degli strumenti**, trascinare un **pannello** per il **Home** categoria. Trascinare un **casella di controllo** e due **caselle combinate** al pannello.  
  
2.  Fare clic sul riquadro per modificarne le proprietà. Change **didascalia** alla *penna*.  
  
3.  Fare clic sulla casella di controllo. Change **didascalia** alla *utilizzano spesso*, e **ID** a *ID_PEN_THICK_OR_THIN*.  
  
4.  Fare clic sulla prima casella combinata. Change **didascalia** a *Thin penna*, **ID** a *ID_PEN_THIN_WIDTH*, **testo** a *2* , **Tipo** a *elenco a discesa*, e **dati** a *1; 2; 3; 4; 5, 6; 7; 8; 9;*.  
  
5.  Fare clic nella seconda casella combinata. Change **didascalia** alla *spessa*, **ID** a *ID_PEN_THICK_WIDTH*, **testo** a  *5*, **tipo** a *elenco a discesa*, e **dati** a *5 6; 7; 8; 9; 10; 11; 12; 13; 14; 15; 16; 17, 18; 19; 20;*.  
  
6.  Caselle combinate nuove non corrispondono a eventuali voci di menu esistenti. Pertanto, è necessario creare una voce di menu per ogni opzione penna.  
  
    1.  Nel **visualizzazione risorse** finestra, aprire la risorsa di menu IDR_SCRIBBTYPE.  
  
    2.  Fare clic su **penna** per aprire la p**en** menu. Quindi fare clic su **digitare qui** e il tipo *parola & n penna*.  
  
    3.  Pulsante destro del mouse il testo digitato per aprire la **delle proprietà** finestra, quindi modificare l'ID proprietà da *ID_PEN_THIN_WIDTH*.  
  
    4.  È inoltre necessario creare un gestore eventi per ogni voce di menu penna. Fare doppio clic sui **parola & n penna** voce di menu che appena creato e quindi fare clic su **Aggiungi gestore**. Il **Creazione guidata gestore eventi** viene visualizzato.  
  
    5.  Nel **elenco delle classi** casella nella procedura guidata, seleziona **CScribbleDoc** e quindi fare clic su **aggiungere e modificare**. Verrà creato un gestore eventi denominato `CScribbleDoc::OnPenThinWidth`.  
  
    6.  Aggiungere il seguente codice a `CScribbleDoc::OnPenThinWidth`.  
  
 ``` *Ottenere un puntatore alla barra multifunzione barra CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd()) -> GetRibbonBar(); ASSERT_VALID(pRibbon); */ / Ottenere un puntatore alla casella combinata larghezza Thin CMFCRibbonComboBox* pThinComboBox = DYNAMIC_DOWNCAST (CMFCRibbonComboBox, pRibbon -> FindByID(ID_PEN_THIN_WIDTH)); * //Get il valore selezionato  
    int nCurSel = pThinComboBox -> GetCurSel(); Se (nCurSel > = 0)  
{  
m_nThinWidth = atoi (pThinComboBox-il > GetItem(nCurSel));

 } * / / Creare un nuovo oggetto pen utilizzando lo spessore selezionato  
    ReplacePen();

 ```  
  
7.  Next, create a menu item and event handlers for the thick pen.  
  
    1.  In the **Resource View** window, open the IDR_SCRIBBTYPE menu resource.  
  
    2.  Click **Pen** to open the pen menu. Then click **Type Here** and type *Thic&k Pen*.  
  
    3.  Right-click the text that you just typed to display the **Properties** window. Change the ID property to *ID_PEN_THICK_WIDTH*.  
  
    4.  Right-click the **Thick Pen** menu item that you just created and then click **Add Event Handler**. The **Event Handler Wizard** is displayed.  
  
    5.  In the **Class list** box of the wizard, select **CScribbleDoc** and then click **Add and Edit**. This creates an event handler named `CScribbleDoc::OnPenThickWidth`.  
  
    6.  Add the following code to `CScribbleDoc::OnPenThickWidth`.  
  
 ``` *// Get a pointer to the ribbon bar  
    CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx *) AfxGetMainWnd())->GetRibbonBar();
ASSERT_VALID(pRibbon);

 CMFCRibbonComboBox* pThickComboBox = DYNAMIC_DOWNCAST(
    CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THICK_WIDTH));
*// Get the selected value  
    int nCurSel = pThickComboBox->GetCurSel();
if (nCurSel>= 0)  
 {  
    m_nThickWidth = atoi(pThickComboBox->GetItem(nCurSel));

 } *// Create a new pen using the selected width  
    ReplacePen();

 ```  
  
8.  Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Devono essere visualizzate nuovi pulsanti e caselle combinate. Provare a utilizzare la larghezza della penna diversi per scribble.  
  
 [[Sezioni](#top)]  
  
##  <a name="addcolorbutton"></a> Aggiunta di un pulsante del colore al pannello penna  
 Successivamente, aggiungere un [CMFCRibbonColorButton](../mfc/reference/cmfcribboncolorbutton-class.md) oggetto che consente all'utente di scribble in colore.  
  
#### <a name="to-add-a-color-button-to-the-pen-panel"></a>Per aggiungere un pulsante del colore al pannello penna  
  
1.  Prima di aggiungere il pulsante colore, creare una voce di menu. Nel **visualizzazione risorse** finestra, aprire la risorsa di menu IDR_SCRIBBTYPE. Fare clic sui **penna** voce di menu per aprire il menu penna. Quindi fare clic su **digitare qui** e il tipo *& colore*. Pulsante destro del mouse il testo digitato per visualizzare il **proprietà** finestra. Modificare l'ID in *ID_PEN_COLOR*.  
  
2.  Aggiungere quindi sul pulsante del colore. Dal **casella degli strumenti**, trascinare un **pulsante colore** per il **penna** pannello.  
  
3.  Fare clic sul pulsante del colore. Change **didascalia** alla *colore*, **ID** a *ID_PEN_COLOR*, **SimpleLook** a  *True*, **immagine di grandi dimensioni indice** a *1*, e **modalità di divisione** a *False*.  
  
4.  Salvare le modifiche, quindi compilare ed eseguire l'applicazione. Il nuovo pulsante colore deve essere visualizzato nella **penna** pannello. Tuttavia, non può essere utilizzato perché non dispone ancora di un gestore eventi. I passaggi successivi viene illustrato come aggiungere un gestore eventi per il pulsante colore.  
  
 [[Sezioni](#top)]  
  
##  <a name="addcolormember"></a> Aggiunta di un membro di colore per la classe di documento  
 Perché l'applicazione originale Scribble non dispone di penne colore, è necessario scrivere un'implementazione per essi. Per archiviare il colore della penna del documento, aggiungere un nuovo membro alla classe di documento, `CscribbleDoc.`  
  
#### <a name="to-add-a-color-member-to-the-document-class"></a>Per aggiungere un membro di colore per la classe di documento  
  
1.  In ScribDoc. h, nelle `CScribbleDoc` classe, trovare il `// Attributes` sezione. Aggiungere le seguenti righe di codice dopo la definizione del `m_nThickWidth` (membro dati).  
  
 ' ' * / / Corrente penna colore  
    M_penColor COLORREF;  
 ```  
  
2.  Every document contains a list of stokes that the user has already drawn. Every stroke is defined by a `CStroke` object. The `CStroke` class does not include information about pen color. Therefore, you must modify the class. In scribdoc.h, in the `CStroke` class, add the following lines of code after the definition of the `m_nPenWidth` data member.  
  
 ``` *// Pen color for the stroke  
    COLORREF m_penColor;  
 ```  
  
3.  In ScribDoc. h, aggiungere un nuovo `CStroke` costruttore i cui parametri specificano una larghezza e il colore. Aggiungere la seguente riga di codice dopo il `CStroke(UINT nPenWidth);` istruzione.  
  
 ```  
    CStroke(UINT nPenWidth, COLORREF penColor);

 ```  
  
4.  In ScribDoc. cpp, aggiungere l'implementazione del nuovo `CStroke` costruttore. Aggiungere il codice seguente dopo l'implementazione del `CStroke::CStroke(UINT nPenWidth)` costruttore.  
  
 ' ' * / / Costruttore che usa il documento corrente della larghezza e il colore  
    CStroke::CStroke (UINT nPenWidth, penColor COLORREF)  
 {  
    m_nPenWidth = nPenWidth;  
    m_penColor = penColor;  
    m_rectBounding.SetRectEmpty();

 }  
 ```  
  
5.  Change the second line of the `CStroke::DrawStroke` method as follows.  
  
 ```  
    Se (! penStroke.CreatePen (PS_SOLID, m_nPenWidth, m_penColor))  
 ```  
  
6.  Set the default pen color for the document class. In scribdoc.cpp, add the following lines to `CScribbleDoc::InitDocument`, after the `m_nThickWidth = 5;` statement.  
  
 ``` *// default pen color is black  
    m_penColor = RGB(0,
    0,
    0);

 ```  
  
7.  In ScribDoc. cpp, modificare la prima riga del `CScribbleDoc::NewStroke` metodo al seguente.  
  
 ```  
    CStroke* pStrokeItem = new CStroke(m_nPenWidth, m_penColor);

 ```  
  
8.  Modificare l'ultima riga del `CScribbleDoc::ReplacePen` metodo al seguente.  
  
 ```  
    m_penCur.CreatePen(PS_SOLID,
    m_nPenWidth,
    m_penColor);

 ```  
  
9. Aggiunto il `m_penColor` membro in un passaggio precedente. A questo punto, creare un gestore eventi per il pulsante colore che imposta il membro.  
  
    1.  Nel **visualizzazione risorse** finestra, aprire la risorsa di menu IDR_SCRIBBTYPE.  
  
    2.  Fare doppio clic sui **colore** voce di menu e fare clic su **Aggiungi gestore**. Il **Creazione guidata gestore eventi** viene visualizzata.  
  
    3.  Nel **elenco delle classi** casella nella procedura guidata, seleziona **CScribbleDoc** e quindi fare clic sul **aggiungere e modificare** pulsante. Questo modo viene creata la `CScribbleDoc::OnPenColor` stub del gestore eventi.  
  
10. Sostituire lo stub per il `CScribbleDoc::OnPenColor` gestore dell'evento con il codice seguente.  
  
 ```  
    void CScribbleDoc::OnPenColor()  
 { *// Change pen color to reflect color button's current selection  
    CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();
ASSERT_VALID(pRibbon);

 CMFCRibbonColorButton* pColorBtn = DYNAMIC_DOWNCAST(
    CMFCRibbonColorButton, pRibbon->FindByID(ID_PEN_COLOR));

    m_penColor = pColorBtn->GetColor();
*// Create new pen using the selected color  
    ReplacePen();

 }  
 ```  
  
11. Salvare i cambiamenti, quindi compilare ed eseguire l'applicazione. Dovrebbe essere possibile premere il pulsante colore e modificare il colore della penna.  
  
 [[Sezioni](#top)]  
  
##  <a name="initpensave"></a> L'inizializzazione penne e salvare le preferenze  
 Inizializzare quindi il colore e larghezza di penne. Infine, salvare e caricare un colore da un file di disegno.  
  
#### <a name="to-initialize-controls-on-the-ribbon-bar"></a>Per inizializzare i controlli della barra multifunzione  
  
1.  Inizializzare le penne sulla barra multifunzione.  
  
     Aggiungere il codice seguente a ScribDoc. cpp, nelle `CScribbleDoc::InitDocument` (metodo), dopo il `m_sizeDoc = CSize(200,200)` istruzione.  
  
 ``` *Reimpostare la barra multifunzione dell'interfaccia utente per i valori iniziali CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd()) -> GetRibbonBar(); ASSERT_VALID(pRibbon);

 CMFCRibbonColorButton * pColorBtn = DYNAMIC_DOWNCAST (CMFCRibbonColorButton, pRibbon -> FindByID(ID_PEN_COLOR)); * / / Impostare ColorButton su nero  
    pColorBtn -> SetColor RGB ((0, 0, 0));

 CMFCRibbonComboBox * pThinComboBox = DYNAMIC_DOWNCAST (CMFCRibbonComboBox, pRibbon -> FindByID(ID_PEN_THIN_WIDTH)); * / / Impostare combobox penna sottile 2  
    pThinComboBox -> SelectItem(1);

 CMFCRibbonComboBox * pThickComboBox = DYNAMIC_DOWNCAST (CMFCRibbonComboBox, pRibbon -> FindByID(ID_PEN_THICK_WIDTH)); * / / Impostare combobox spessa a 5  
    pThickComboBox -> SelectItem(0);

 ```  
  
2.  Save a color drawing to a file. Add the following statement to scribdoc.cpp, in the `CStroke::Serialize` method, after the `ar << (WORD)m_nPenWidth;` statement.  
  
 ```  
    AR << m_penColor (COLORREF);  
 ```  
  
3.  Finally, load a color drawing from a file. Add the following line of code, in the `CStroke::Serialize` method, after the `m_nPenWidth = w;` statement.  
  
 ```  
    AR >> m_penColor;  
 ```  
  
4.  Now scribble in color and save your drawing to a file.  
  
 [[Sections](#top)]  
  
## Conclusion  
 You have updated the MFC Scribble application. Use this walkthrough as a guide when you modify your existing applications.  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)   
 [Walkthrough: Updating the MFC Scribble Application (Part 1)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)

