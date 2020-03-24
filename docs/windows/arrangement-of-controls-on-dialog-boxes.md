---
title: 'Procedura: layout di controlli (C++) | Microsoft Docs'
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
ms.openlocfilehash: ee732cfb414f011e95edbbb57b218d81179d44f3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80168577"
---
# <a name="how-to-layout-controls-c"></a>Procedura: layout di controlli (C++)

Nell' **editor finestre** sono disponibili strumenti di layout che consentono di allineare e ridimensionare automaticamente i controlli. Per la maggior parte delle attività, è possibile utilizzare la [barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md). Tutti i comandi della barra degli strumenti dell' **editor finestre** sono disponibili anche nel menu **formato** e la maggior parte dei [tasti di scelta rapida](../windows/accelerator-keys-for-the-dialog-editor.md).

Molti comandi di layout per le finestre di dialogo sono disponibili solo quando è selezionato più di un controllo. È possibile selezionare un singolo controllo o più controlli e, quando si seleziona più di un controllo, il primo è quello selezionato per impostazione predefinita il controllo dominante.

La posizione, l'altezza e la larghezza del controllo corrente vengono visualizzate nell'angolo inferiore destro della barra di stato. Quando viene selezionata l'intera finestra di dialogo, la barra di stato Visualizza la posizione della finestra di dialogo nel suo complesso e l'altezza e la larghezza.

## <a name="arrange-controls"></a>Disponi controlli

È possibile disporre i controlli nelle finestre di dialogo con l' **editor finestre** in uno dei tre stati diversi:

- Con guide e margini su, impostare come predefinito.

- Con la griglia di layout su.

- Senza funzionalità di allineamento o allineamento.

La [barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md) contiene i pulsanti che controllano lo stato.

- Per modificare lo stato, selezionare l'icona appropriata oppure passare a **formato** menu > **impostazioni della Guida**.

La finestra di dialogo **Impostazioni Guida** presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Guide di layout**|Consente di visualizzare le impostazioni per le guide di layout.|
|**Nessuno**|Nasconde gli strumenti di layout.|
|**Righelli e guide**|Se abilitata, aggiunge righelli agli strumenti di layout e consente di inserire le guide nei righelli. Le guide predefinite sono i margini.|
|**Griglia**|Crea una griglia di layout. I nuovi controlli verranno allineati automaticamente alla griglia.|
|**Spaziatura griglia**|Consente di visualizzare le impostazioni per la spaziatura della griglia in unità della finestra di dialogo (DLU).|
|**Larghezza: dlu**|Imposta la larghezza della griglia di layout in DLU. Una DLU orizzontale è la larghezza media del tipo di carattere della finestra di dialogo divisa per 4.|
|**Altezza: dlu**|Imposta l'altezza della griglia di layout in DLU. Una DLU verticale è l'altezza media del tipo di carattere della finestra di dialogo divisa per 8.|

### <a name="guides-and-margins"></a>Guide e margini

La possibilità di spostare i controlli, aggiungere controlli o riorganizzare un layout corrente, guide e margini consente di allineare accuratamente i controlli all'interno di una finestra di dialogo.

Quando si crea una finestra di dialogo, vengono fornite quattro guide modificate denominate margini, che vengono visualizzate come linee tratteggiate blu.

- Per spostare i margini, trascinare il margine nella nuova posizione.

- Per far scomparire un margine, spostare il margine in una posizione zero.

- Per ripristinare il margine, posizionare il puntatore sulla posizione zero del margine e spostare il margine in posizione.

Le guide vengono visualizzate come linee tratteggiate blu nella finestra di dialogo visualizzata nell'editor e le frecce corrispondenti nei righelli nella parte superiore e lungo il lato sinistro dell' **editor finestre**. I quadratini di ridimensionamento dei controlli si bloccano sulle guide quando i controlli vengono spostati e le guide si bloccano sui controlli se non sono presenti controlli precedentemente bloccati alla guida. Quando una guida viene spostata, vengono spostati anche i controlli che vengono bloccati. I controlli bloccati a più di una guida vengono ridimensionati quando una delle guide viene spostata.

- Per creare una guida all'interno del righello, selezionare una volta per creare una guida oppure fare doppio clic per aprire la finestra di dialogo **Impostazioni Guida** in cui è possibile specificare le impostazioni della guida.

- Per impostare una guida nella finestra di dialogo, selezionare la guida e trascinarla in una nuova posizione oppure selezionare la freccia nel righello per trascinare la Guida associata.

   Le coordinate della guida vengono visualizzate nella barra di stato nella parte inferiore della finestra e nel righello o spostano il puntatore sulla freccia nel righello per visualizzare la posizione esatta della guida.

- Per eliminare una guida, trascinare la guida dalla finestra di dialogo o trascinare la freccia corrispondente dal righello.

I segni di graduazione nei righelli che determinano la spaziatura delle guide e dei controlli sono definiti da unità di dialogo (DLU). Una DLU si basa sulle dimensioni del tipo di carattere della finestra di dialogo, normalmente a 8 punti MS Shell Dlg. Una DLU orizzontale è la larghezza media del tipo di carattere della finestra di dialogo divisa per quattro. Una DLU verticale è l'altezza media del tipo di carattere divisa per 8.

- Per modificare gli intervalli dei segni di graduazione, passare a **formato** menu > **Impostazioni Guida**, quindi nel campo **Spaziatura griglia** specificare una nuova larghezza e altezza in DLU.

### <a name="layout-grid"></a>Griglia layout

Quando si posizionano o si organizzano i controlli in una finestra di dialogo, utilizzare la griglia di layout per un posizionamento più preciso. Quando la griglia è attivata, i controlli si bloccano sulle linee tratteggiate della griglia come se fossero magnetizzati.

- Per attivare o disattivare la griglia di layout, passare a **formato** menu > **Impostazioni Guida** e selezionare o deselezionare il pulsante **griglia** .

   È comunque possibile controllare la griglia nelle singole finestre dell' **Editor** finestre usando il pulsante **attiva/Rimuovi griglia** della [barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

- Per modificare le dimensioni della griglia di layout, passare a **formato** menu > **Impostazioni Guida** e digitare l'altezza e la larghezza in DLU per le celle nella griglia. L'altezza o la larghezza minima è 4.

### <a name="disable-guides"></a>Disabilitare le guide

È possibile utilizzare tasti speciali insieme al mouse per disabilitare l'effetto di blocco delle guide. L'utilizzo del tasto **ALT** Disabilita gli effetti di blocco della Guida selezionati. Lo spostamento di una guida con il tasto **MAIUSC** impedisce lo spostamento dei controlli bloccati con la guida.

- Per disabilitare l'effetto di blocco delle guide, trascinare il controllo tenendo premuto il tasto **ALT** .

- Per spostare le guide senza spostare i controlli bloccati, trascinare la guida tenendo premuto il tasto **MAIUSC** .

- Per disattivare le guide, passare a **formato** menu > **impostazioni della Guida**. Quindi, in **guide di layout**selezionare **nessuno**.

   > [!TIP]
   > È anche possibile usare il tasto di scelta rapida nel **formato** menu > Visualizza **/Nascondi guide**.

## <a name="select-controls"></a>Selezionare i controlli

Selezionare i controlli per ridimensionarli, allinearli, spostarli, copiarli o eliminarli, quindi completare l'operazione desiderata. Nella maggior parte dei casi, è necessario selezionare più di un controllo per utilizzare gli strumenti di ridimensionamento e allineamento nella [barra degli strumenti dell'editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

Quando si seleziona un controllo, è presente un bordo ombreggiato con quadratini di ridimensionamento (attivi) o vuoti (inattivi), quadratini piccoli che vengono visualizzati nel bordo di selezione. Quando vengono selezionati più controlli, il controllo dominante dispone di quadratini di ridimensionamento a tinta unita e tutti gli altri controlli selezionati hanno handle di ridimensionamento vuoti.

- Per selezionare i controlli, nella [finestra casella degli strumenti](/visualstudio/ide/reference/toolbox)selezionare lo strumento **puntatore** e usare uno dei passaggi seguenti per effettuare la selezione:

  - Trascinare il puntatore per creare una casella di selezione intorno ai controlli che si desidera selezionare nella finestra di dialogo. Quando si rilascia il pulsante del mouse, vengono selezionati tutti i controlli all'interno e all'intersezione della casella di selezione.

  - Tenere premuto il tasto **MAIUSC** e selezionare i controlli che si desidera includere nella selezione.

  - Tenere premuto il tasto **CTRL** e selezionare i controlli che si desidera includere nella selezione.

- Per aggiungere o rimuovere un controllo dal gruppo di controlli selezionati, tenere premuto il tasto **MAIUSC** e selezionare il controllo che si desidera aggiungere o rimuovere.

### <a name="dominant-controls"></a>Controlli dominanti

Quando si ridimensionano o si allineano più controlli, l' **editor finestre** usa il controllo dominante per determinare la dimensione o l'allineamento degli altri controlli. Per impostazione predefinita, il controllo dominante è il primo controllo selezionato.

- Per specificare il controllo dominante, tenere premuto il tasto **CTRL** e selezionare il controllo che si desidera utilizzare per influenzare *prima*la dimensione o la posizione di altri controlli. Tenendo premuto il tasto **CTRL** e selezionando un controllo all'interno di una selezione, si renderà anche il controllo del controllo dominante nella selezione.

- Per modificare il controllo dominante, deselezionare la selezione corrente selezionando al di fuori di tutti i controlli attualmente selezionati e ripetere la procedura precedente, selezionando *prima*un controllo diverso.

> [!NOTE]
> I quadratini di ridimensionamento del controllo dominante sono solidi mentre gli handle dei controlli subordinati sono vuoti. Tutte le altre operazioni di ridimensionamento o allineamento sono basate sul controllo dominante.

## <a name="size-controls"></a>Controlli dimensioni

Utilizzare gli handle di ridimensionamento per ridimensionare un controllo. Quando il puntatore è posizionato su un quadratino di ridimensionamento, modifica la forma per indicare le direzioni in cui è possibile ridimensionare il controllo. I quadratini di ridimensionamento attivi sono solidi e se un quadratino di ridimensionamento è vuoto, il controllo non può essere ridimensionato lungo tale asse.

- Per ridimensionare un controllo, selezionare il controllo e trascinare i quadratini di ridimensionamento per modificarne le dimensioni.

  - I quadratini di ridimensionamento nella parte superiore e nei lati cambiano la dimensione orizzontale o verticale.

  - Le dimensioni degli handle negli angoli cambiano sia orizzontalmente che verticali.

   > [!TIP]
   > È possibile ridimensionare il controllo una sola unità di dialogo alla volta tenendo premuto il tasto **MAIUSC** e utilizzando i tasti freccia **destra** e freccia **giù** .

- Per ridimensionare automaticamente un controllo in modo da adattarlo al testo al suo interno, passare a **formato** menu o fare clic con il pulsante destro del mouse sul controllo e scegliere **dimensioni per contenuto**.

- Per impostare le stesse dimensioni dei controlli, selezionare i controlli che si desidera ridimensionare e passare a **formato** menu > le **stesse dimensioni**, quindi scegliere **sia**, **altezza**o **larghezza**.

   È possibile ridimensionare un gruppo di controlli in base alla dimensione del controllo dominante, che è il controllo selezionato per primo nella serie. La dimensione finale dei controlli del gruppo dipende dalle dimensioni del controllo dominante.

- Per ridimensionare un gruppo di controlli con guide, agganciare un lato del controllo (o dei controlli) a una guida, quindi trascinare una guida sull'altro lato del controllo o dei controlli. A questo punto è possibile spostare una guida per ridimensionare il controllo o i controlli.

   Se necessario con più controlli, ridimensionare ogni per bloccare la seconda guida.

### <a name="other-controls"></a>Altri controlli

È possibile ridimensionare una casella combinata quando la si aggiunge alla finestra di dialogo. È inoltre possibile specificare le dimensioni della casella di riepilogo a discesa. Per ulteriori informazioni, vedere [aggiunta di valori a un controllo casella combinata](../windows/adding-values-to-a-combo-box-control.md).

1. Selezionare il pulsante con la freccia a discesa a destra della casella combinata.

   ![Freccia su una casella combinata in un progetto MFC](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   Il contorno del controllo cambia per mostrare la dimensione della casella combinata con l'area dell'elenco a discesa estesa.

1. Utilizzare il quadratino di ridimensionamento inferiore per modificare le dimensioni iniziali dell'area dell'elenco a discesa.

   ![Ridimensionamento di una casella combinata&#45;in un progetto MFC](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

1. Selezionare di nuovo la freccia a discesa per chiudere la parte dell'elenco a discesa della casella combinata.

> [!NOTE]
> Quando si aggiunge una casella di riepilogo con una barra di scorrimento orizzontale a una finestra di dialogo tramite MFC, la barra di scorrimento non verrà visualizzata automaticamente nell'applicazione.
>
> Impostare una larghezza massima per l'elemento più ampio chiamando [CListBox:: SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) nel codice. Se non si imposta questo valore, la barra di scorrimento non verrà visualizzata, neanche quando gli elementi nella casella di riepilogo sono più ampi della casella.

## <a name="align-controls"></a>Allinea controlli

- Per allineare i controlli, selezionare i controlli che si desidera allineare. Vai a **formato** menu > **Allinea** e scegli uno degli allineamenti seguenti:

   |Alignment|Descrizione|
   |-----|-----------|
   |**Sinistre**|Allinea i controlli selezionati lungo il lato sinistro.|
   |**Centri**|Allinea orizzontalmente i controlli selezionati lungo i punti centrali.|
   |**Diritti**|Allinea i controlli selezionati lungo il lato destro.|
   |**Parti superiori**|Allinea i controlli selezionati lungo i bordi superiore.|
   |**Mezzo**|Allinea verticalmente i controlli selezionati lungo i punti centrali.|
   |**In basso**|Allinea i controlli selezionati lungo i bordi inferiori.|

   Assicurarsi di selezionare il controllo che si vuole usare per primo o impostarlo come controllo dominante prima di eseguire il comando di allineamento o ridimensionamento come posizione finale del gruppo di controlli in base alla posizione del controllo dominante.

- Per controllare lo spazio uniforme, selezionare i controlli che si desidera ridisporre. Passare a **formato** menu > **spazio** in modo uniforme e scegliere uno degli allineamenti di spaziatura seguenti:

   |Spacing|Descrizione|
   |---|---|
   |**Attraverso**|Spaziatura uniforme tra il controllo più a sinistra e quello più a destra selezionato.|
   |**Giù**|Controlla lo spazio in modo uniforme tra il controllo superiore e il controllo inferiori selezionato.|

- Per centrare i controlli, selezionare il controllo o i controlli che si desidera ridisporre. Passare a **formato** menu > **Center nella finestra di dialogo** e scegliere uno dei seguenti accordi:

   |Disposizione|Descrizione|
   |---|---|
   |**Verticale**|Centra i controlli verticalmente nella finestra di dialogo.|
   |**Orizzontale**|Centra i controlli orizzontalmente nella finestra di dialogo.|

- Per allineare i pulsanti di push, selezionare uno o più pulsanti di push. Passare a **formato** menu > disposizione **pulsanti**, quindi scegliere uno dei seguenti accordi:

   |Disposizione|Descrizione|
   |---|---|
   |**Right**|Allinea i pulsanti di push lungo il bordo destro della finestra di dialogo.|
   |**In basso**|Allinea i pulsanti di push lungo il bordo inferiore della finestra di dialogo.|

   Se si seleziona un controllo diverso da un pulsante di push, la relativa posizione non è interessata.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli della finestra di dialogo Gestisci](controls-in-dialog-boxes.md)<br/>
[Procedura: aggiungere, modificare o eliminare controlli](adding-editing-or-deleting-controls.md)<br/>
[Procedura: definire l'accesso e i valori del controllo](defining-mnemonics-access-keys.md)<br/>
