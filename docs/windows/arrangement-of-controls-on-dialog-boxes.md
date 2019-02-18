---
title: 'Procedura: Disporre i controlli (C++) | Microsoft Docs'
ms.date: 02/15/2019
f1_keywords:
- vc.editors.dialog.grouping
- vc.editors.dialog.combo
helpviewer_keywords:
- controls [C++], positioning
- dialog box controls [C++], placement
- Dialog Editor [C++], arranging controls
- Dialog Editor [C++], guides and margins
- guides, clearing
- guides
- dialog box controls [C++], placement
- controls [C++], guides and margins
- guides, creating
- guides, moving
- margins, moving
- DLUs (dialog units)
- controls [C++], aligning
- Dialog Editor [C++], snap to guides
- guides, tick mark interval
- dialog box controls [C++], placement
- guides, aligning controls
- dialog units (DLUs)
- snap to guides (Dialog editor)
- controls [C++], sizing
- tick mark interval in Dialog editor
- controls [C++], snap to guides/grid
- guides, disabling snapping
- controls [C++], snap to guides/grid
- controls [C++], layout grid
- snap to layout grid
- grids, turning on or off
- layout grid in Dialog Editor
- grids, changing size
- grid spacing
- guides, settings
- layout grid in Dialog Editor
- controls [C++], snap to guides/grid
- Guide Settings dialog box (Dialog editor)
- controls [C++], aligning
- controls [C++], positioning
- Space Evenly command
- dialog box controls [C++], placement
- Center in Dialog command
- Arrange Buttons command
- buttons, arranging push buttons in dialog boxes
- push buttons
- member variables, adding to radio button groups
- variables, dialog box control member variables
- dialog box controls [C++], grouping radio buttons
- grouping controls
- radio buttons [C++], grouping on dialog boxes
- controls [C++], tab order
- focus, tab order
- tab controls [C++], tab order
- Tabstop property for controls
- controls [C++], focus
- dialog box controls [C++], tab order
- Dialog Editor [C++], selecting controls
- dominant controls
- dialog box controls [C++], selecting in editor
- controls [C++], selecting
- size, controls
- controls [C++], dominant
- controls [C++], removing from groups
- Dialog Editor [C++], dominant control
- Size to Content command
- size, controls
- text, autosizing controls to fit text
- controls [C++], sizing
- Make Same Size command
- combo boxes, sizing
- list controls [C++], scroll bar width
- CListBox::SetHorizontalExtent
- controls [C++], scroll bar
- scroll bars [C++], displaying in controls
- horizontal scroll bar width
- CListBox class, scroll bar width
- scroll bars [C++], width
ms.assetid: 832491cf-98af-42e5-a854-2cb135fd45c6
ms.openlocfilehash: d9bd73c9cc81b113f222bbc090c62200c93554b2
ms.sourcegitcommit: 24592ba0a38c7c996ffd3d55fe1024231a59ccc2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/18/2019
ms.locfileid: "56336631"
---
# <a name="how-to-arrange-controls-c"></a>Procedura: Disporre i controlli (C++)

Il **dialogo** editor offre gli strumenti di layout che allineare e ridimensionare automaticamente i controlli. Per la maggior parte delle attività, è possibile usare la [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md). Tutti i **finestra di dialogo Editor** comandi della barra degli strumenti sono disponibili anche nel **formato** menu e la maggior parte sono [tasti di scelta rapida](../windows/accelerator-keys-for-the-dialog-editor.md).

Molti comandi di layout delle finestre di dialogo sono disponibili solo quando più di un controllo è selezionato. È possibile selezionare un singolo controllo o più controlli e quando più di un controllo è selezionato, il primo che è selezionare è per impostazione predefinita del controllo "principale". Per informazioni sulla selezione del controllo dominante e controlli, vedere [selezione di controlli](../windows/selecting-controls.md).

La località, altezza e larghezza del controllo corrente vengono visualizzati nell'angolo inferiore destro della barra di stato. Quando è selezionata l'intera finestra di dialogo, la barra di stato Visualizza la posizione della finestra di dialogo come intero e l'altezza e larghezza.

## <a name="guides-and-grids"></a>Guide e griglie

È possibile disporre i controlli nelle finestre di dialogo con il **dialogo** editor in uno dei tre stati:

- Con le guide e margini in (impostazione predefinita)

- Con la griglia del layout di

- Senza alcuna funzionalità di blocco o allineamento

Il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md) contiene pulsanti che consentono di controllare lo stato. Per modificare lo stato, selezionare l'icona appropriata. È inoltre possibile modificare gli stati tramite le **impostazioni della Guida** comando le **formato** menu.

Il **delle impostazioni Guida** nella finestra di dialogo presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Guide**|Consente di visualizzare le impostazioni per le guide di layout.|
|**None**|Nasconde gli strumenti di layout.|
|**Righelli e guide**|Quando abilitato, aggiunge i righelli per strumenti di layout. le guide possono essere posizionate nei righelli. Le guide all'impostazione predefinita sono i margini, che possono essere spostati mediante il trascinamento. Selezionare i righelli per posizionare una Guida. Controlli "Guide" guide alle procedure quando i controlli vengono spostati sopra o accanto a essi. Controlli vengono spostati anche con una Guida di una volta sono associati a esso. Quando un controllo associato a una Guida su ciascun lato e una Guida viene spostata, il controllo viene ridimensionato.|
|**Griglia**|Crea una griglia di layout. Nuovi controlli vengono automaticamente allineati alla griglia.|
|**Spaziatura della griglia**|Consente di visualizzare le impostazioni per la spaziatura della griglia in unità di finestra di dialogo (DLU-Dialog Unit).|
|**Larghezza: DLU-Dialog Unit**|Imposta la larghezza della griglia di layout in DLU-Dialog Unit. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro.|
|**Height: DLU-Dialog Unit**|Imposta l'altezza della griglia di layout in DLU-Dialog Unit. Una DLU verticale è l'altezza di average del tipo di carattere nella finestra di dialogo diviso per 8.|

### <a name="to-create-edit-and-delete-guides-and-margins"></a>Per creare, modificare ed eliminare guide e margini

Se si spostano i controlli, aggiunta di controlli o ridisporre un layout corrente, guide consentono allineare i controlli in modo accurato all'interno di una finestra di dialogo. Le guide sono visualizzate come blu punteggiata tra la finestra di dialogo visualizzata nell'editor e le frecce corrispondente nei righelli nella parte superiore e il lato sinistro della **dialogo** editor.

Quando si crea una finestra di dialogo, vengono forniti e quattro i margini. I margini sono guide modificate, visualizzati come linee tratteggiate blue. Vedere le azioni seguenti:

- Per creare una Guida, entro il righello, selezionare una sola volta per creare una Guida. (Un solo clic consente di creare una nuova Guida; facendo doppio clic su Avvia il **impostazioni della Guida** finestra di dialogo in cui è possibile specificare impostazioni della Guida.)

- Per impostare una Guida, nella finestra di dialogo, selezionare la Guida e trascinarlo in una nuova posizione. (È anche possibile selezionare la freccia nel righello per trascinare la Guida associata.) Le coordinate della Guida vengono visualizzate nella barra di stato nella parte inferiore della finestra e sul righello. Spostare il puntatore del mouse sulla freccia nel righello per visualizzare la posizione esatta della Guida.

- Per spostare i margini, trascinare il margine per la nuova posizione. Per nascondere un margine, spostare il margine in una posizione zero. Per riportare il margine, posizionare il puntatore sopra il margine posizione zero e spostare il margine in posizione.

- Per eliminare una Guida, trascinare la Guida dalla finestra di dialogo o la freccia corrispondente disattivare il righello.

### <a name="to-align-controls-on-a-guide"></a>Per allineare i controlli su una Guida

Quadratini di ridimensionamento di controlli Blocca sulle guide quando vengono spostati i controlli e le guide di allineamento ai controlli se non sono presenti controlli bloccati in precedenza per la Guida. Quando viene spostata una Guida, i controlli che vengono bloccati a esso spostano anche. I controlli bloccati a più di una Guida vengono ridimensionati quando una delle Guide viene spostata.

I segni di graduazione nei righelli che determinano la spaziatura tra i controlli e le guide sono definiti dalle unità di finestra di dialogo (DLU-Dialog Unit). Una DLU si basa sulle dimensioni del tipo di carattere della finestra di dialogo, normalmente 8 punte MS Shell Dlg. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro. Una DLU verticale è l'altezza di average del tipo di carattere diviso per 8.

#### <a name="to-size-a-group-of-controls-with-guides"></a>Per impostare le dimensioni di un gruppo di controlli con guide

1. Per una Guida di allineamento un lato del controllo (o controlli).

1. Trascinare una Guida a altro lato del controllo (o controlli).

   Se necessario con più controlli, le dimensioni ognuna per la seconda Guida allineare.

1. Spostare due guide per ridimensionare il controllo (o i controlli).

#### <a name="to-change-the-intervals-of-the-tick-marks"></a>Modificare gli intervalli di segni di graduazione

Dal **formato** menu, scegliere **impostazioni della Guida**, quindi nella **spaziatura della griglia** , specificare una nuova larghezza e altezza in DLU.

### <a name="to-disable-guides"></a>Per disabilitare le guide

È possibile usare i tasti speciali in combinazione con il mouse per disabilitare l'effetto di blocco delle Guide. Usando il **Alt** chiave disabilita gli effetti di blocco della Guida selezionata. Lo spostamento di una Guida con i **MAIUSC** chiave che impedisce lo spostamento con la Guida di controlli bloccati.

- Per disabilitare l'effetto di blocco delle guide, trascinare il controllo e tenendo premuto il **Alt** chiave.

- Per spostare le guide senza spostare i controlli bloccati, trascinare la Guida e tenendo premuto il **MAIUSC** chiave.

- Per disattivare le guide, dal **formato** menu, scegliere **impostazioni Guide**. Quindi nel **impostazioni della Guida** nella finestra di dialogo **Guide**, selezionare **None**.

   > [!NOTE]
   > È anche possibile fare doppio clic sulla barra del righello per accedere la **impostazioni della Guida** nella finestra di dialogo.

> [!TIP]
> È in un collegamento per disattivare le guide di **formato** dal menu **Attiva/Disattiva guide**.

### <a name="to-modify-the-layout-grid"></a>Per modificare la griglia del layout

Quando si esegue l'inserimento o la disposizione dei controlli in una finestra di dialogo, è possibile usare la griglia del layout per il posizionamento più preciso. Quando la griglia è attivata, i controlli vengono visualizzati per "Blocca" le linee punteggiate della griglia come se magnetizzato. È possibile attivare e disattivare questa funzionalità "Blocca sulla griglia" e modificare le dimensioni delle celle della griglia di layout.

- Per attivare o disattivare, la griglia di layout dal **formato** menu, scegliere **impostazioni Guide**, quindi selezionare o deselezionare il **griglia** pulsante.

   È comunque possibile controllare la griglia in singoli **finestra di dialogo** finestre dell'editor tramite il **Attiva/Disattiva griglia** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

- Per modificare le dimensioni della griglia di layout, dal **formato** menu, scegliere **impostazioni Guide**, quindi digitare l'altezza e larghezza in DLU per le celle della griglia. Larghezza o all'altezza minima è di 4 DLU.

## <a name="select-controls"></a>Selezionare i controlli

Selezionare i controlli alla dimensione, allineare, spostare, copiare, o eliminarli e quindi completare l'operazione desiderata. Nella maggior parte dei casi, è necessario selezionare più di un controllo per utilizzare gli strumenti di ridimensionamento e l'allineamento della [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

Quando viene selezionato un controllo, ha un bordo intorno a esso ombreggiato pieni (attivi) o (inattivo) vuoto "quadratini di ridimensionamento," quadratini che vengono visualizzate sul bordo di selezione. Quando si selezionano più controlli, al controllo dominante dispone di quadratini di ridimensionamento a tinta unita e tutti gli altri comandi selezionati sono quadratini vuoti.

Quando si esegue il ridimensionamento o allineare più controlli, il **dialogo** editor viene utilizzato il "controllo dominante" per determinare come gli altri controlli vengono ridimensionati o allineati. Per impostazione predefinita, il controllo dominante è il primo controllo selezionato.

### <a name="to-select-controls"></a>Per selezionare i controlli

1. Nel [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox), selezionare la **puntatore** dello strumento.

1. Usare uno dei passaggi seguenti per effettuare la selezione:

   - Trascinare il puntatore del mouse per disegnare una casella di selezione intorno ai controlli che si desidera selezionare nella finestra di dialogo. Quando si rilascia il pulsante del mouse, tutti i controlli all'interno e che si intersecano vengono selezionati la casella di selezione.

   - Tenere premuto il **MAIUSC** la chiave e selezionare i controlli che si desidera includere nella selezione.

   - Tenere premuto il **Ctrl** la chiave e selezionare i controlli che si desidera includere nella selezione.

1. Per aggiungere o rimuovere un controllo dal gruppo di controlli selezionati, tenere premuto il **MAIUSC** , selezionare il controllo che si desidera aggiungere o rimuovere.

> [!NOTE]
> Tenendo premuto il **Ctrl** chiave e selezione di un controllo all'interno di una selezione renderà che controllano il controllo dominante della selezione.

### <a name="to-select-a-dominant-control"></a>Per selezionare un controllo dominante

- Per specificare il controllo dominante, tenere premuto il **Ctrl** , selezionare il controllo che si desidera utilizzare per determinare la dimensione o la posizione di altri controlli *primo*.

- Per modificare il controllo dominante, cancellare la selezione corrente selezionando all'esterno di tutti i controlli attualmente selezionati e ripetere la procedura precedente, selezionare prima un altro controllo.

> [!NOTE]
> Quadratini di ridimensionamento del controllo dominante sono pieni, mentre gli handle dei controlli subordinati sono vuoti. Ulteriore operazione di ridimensionamento o l'allineamento è basato sul controllo dominante.

## <a name="size-controls"></a>Controlli di dimensioni

Usare i quadratini di ridimensionamento per ridimensionare un controllo. Quando il puntatore è posizionato su un quadratino di ridimensionamento, assume la forma per indicare le direzioni in cui è possibile ridimensionare il controllo. Quadratini di ridimensionamento attivi sono pieni e se un quadratino di ridimensionamento è vuoto, non è possibile ridimensionare il controllo lungo l'asse.

> [!TIP]
> È anche possibile modificare le dimensioni di un controllo per il controllo per i margini o le guide di allineamento o spostando un controllo bloccato e la Guida da un altro.

### <a name="to-size-a-control"></a>Per ridimensionare un controllo

1. Selezionare il controllo.

1. Trascinare i quadratini di ridimensionamento per modificare le dimensioni del controllo:

   - Gli handle di dimensione superiore e i lati modificano la dimensione orizzontale o verticale.

   - Gli handle di dimensione negli angoli modificano le dimensioni orizzontali e verticali.

   > [!TIP]
   > È possibile ridimensionare l'unità di una finestra di dialogo (DLU) controllo contemporaneamente tenendo premuto il **Shift** chiave e l'uso di **destra** e **verso il basso** tasti di direzione.

> [!TIP]
> Per ridimensionare automaticamente un controllo per adattarsi al testo all'interno di esso, aprire il **formato** dal menu o fare clic sul controllo e scegliere **adatta al contenuto**.

### <a name="to-make-controls-the-same-size"></a>Per impostare dimensioni uguali per controlli

È possibile ridimensionare un gruppo di controlli in base alla dimensione del controllo dominante.

1. Selezionare i controlli che si intende ridimensionare.

   Il controllo selezionato per primo nella serie è il controllo dominante. Le dimensioni finali dei controlli nel gruppo dipendono dalle dimensioni del controllo dominante.

1. Dal **formato** menu, scegliere **Rendi uguali**, quindi scegliere **entrambi**, **altezza**, o **larghezza**.

### <a name="combo-box"></a>ComboBox

È possibile ridimensionare una casella combinata quando viene aggiunta alla finestra di dialogo. È anche possibile specificare le dimensioni della casella di riepilogo a discesa. Per altre informazioni, vedere [aggiunta di valori da un controllo casella combinata](../windows/adding-values-to-a-combo-box-control.md).

1. Selezionare il pulsante freccia in giù a destra della casella combinata.

   ![Freccia su una casella combinata in un progetto MFC](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   La struttura del controllo cambia per mostrare le dimensioni della casella combinata con l'area di riepilogo a discesa elenco esteso.

1. Utilizzare il quadratino di ridimensionamento inferiore per modificare le dimensioni iniziali dell'area di riepilogo.

   ![Casella combinata&#45;ridimensionamento di casella in un progetto MFC](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

1. Selezionare la freccia a discesa per chiudere la parte dell'elenco a discesa della casella combinata.

### <a name="horizontal-scroll-bar"></a>Barra di scorrimento orizzontale

Quando si aggiunge una casella di riepilogo con una barra di scorrimento orizzontale per una finestra di dialogo utilizzando le classi MFC, la barra di scorrimento non verrà visualizzato automaticamente nell'applicazione.

Impostare una larghezza massima per l'elemento più largo chiamando [CListBox:: SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) nel codice. Senza questo valore è impostato, la barra di scorrimento non sarà più visualizzato, anche quando gli elementi nella casella di riepilogo sono larghi della casella.

## <a name="align-controls"></a>Allineare i controlli

1. Selezionare i controlli che si desidera allineare. Assicurarsi di selezionare il controllo che si desidera essere più importante per prima cosa o impostarlo in modo che sia il controllo dominante prima di eseguire l'allineamento o comando di ridimensionamento.

   L'ultima posizione del gruppo di controlli dipende dalla posizione del controllo dominante.

1. Dal **formato** menu, scegliere **Align**e quindi scegliere una delle seguenti allineamenti:

   |Allineamento|Descrizione|
   |-----|-----------|
   |`Lefts`|Consente di allineare i controlli selezionati lungo il lato sinistro.|
   |`Centers`|Consente di allineare i controlli selezionati in senso orizzontale lungo il punto centrale.|
   |`Rights`|Consente di allineare i controlli selezionati lungo il lato destro.|
   |`Tops`|Consente di allineare i controlli selezionati lungo il bordo superiore.|
   |`Middles`|Consente di allineare i controlli selezionati verticalmente lungo il punto centrale.|
   |`Bottoms`|Consente di allineare i controlli selezionati lungo il bordo inferiore.|

### <a name="to-even-spacing-between-controls"></a>Per la spaziatura uniforme tra controlli

Il **dialogo** editor consente ai controlli di spazio in modo uniforme tra i controlli esterni selezionati.

1. Selezionare i controlli che si desidera riordinare.

1. Dal **formato** menu, scegliere **Ripartisci uniformemente**e quindi scegliere una delle seguenti allineamenti spaziatura:

   |Spacing (Spaziatura)|Descrizione|
   |---|---|
   |`Across`|Spazio tra i controlli in modo uniforme tra più a sinistra e selezionata il controllo all'estrema destra.|
   |`Down`|Spazio tra i controlli in modo uniforme tra i più in alto e il controllo di livello più basso selezionato.|

### <a name="to-center-controls"></a>Per allineare al centro di controlli

1. Selezionare i controlli che si desidera riordinare.

1. Dal **formato** menu, scegliere **Centra nella finestra**, quindi scegliere una delle modalità seguenti:

   |Disposizione|Descrizione|
   |---|---|
   |`Vertical`|Allineare al centro verticalmente i controlli nella finestra di dialogo.|
   |`Horizontal`|Allineare al centro orizzontalmente i controlli nella finestra di dialogo.|

### <a name="to-arrange-push-buttons"></a>Per disporre i pulsanti di comando

1. Selezionare uno o più pulsanti di comando.

1. Dal **formato** menu, scegliere **Disponi pulsanti**, quindi scegliere una delle modalità seguenti:

   |Disposizione|Descrizione|
   |---|---|
   |`Right`|Consente di allineare i pulsanti di comando lungo il bordo destro della finestra di dialogo.|
   |`Bottom`|Consente di allineare i pulsanti di comando lungo il bordo inferiore della finestra di dialogo.|

   Se si seleziona un controllo diverso da un pulsante di comando, la posizione non è interessata.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)