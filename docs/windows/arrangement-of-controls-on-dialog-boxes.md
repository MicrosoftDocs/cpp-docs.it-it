---
title: 'Procedura: Controlli di layout (C++) | Microsoft Docs'
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
ms.openlocfilehash: 878b7371dfa77880d68f1001444ed44b84d7240c
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59037421"
---
# <a name="how-to-layout-controls-c"></a>Procedura: Controlli di layout (C++)

Il **finestra di dialogo Editor** fornisce gli strumenti di layout che allineare e ridimensionare automaticamente i controlli. Per la maggior parte delle attività, è possibile usare la [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md). Tutti i **finestra di dialogo Editor** comandi della barra degli strumenti sono disponibili anche nel **formato** menu e la maggior parte sono [tasti di scelta rapida](../windows/accelerator-keys-for-the-dialog-editor.md).

Molti comandi di layout delle finestre di dialogo sono disponibili solo quando più di un controllo è selezionato. È possibile selezionare un singolo controllo o più controlli e quando più di un controllo è selezionato, il primo che è selezionare è per impostazione predefinita del controllo dominante.

La località, altezza e larghezza del controllo corrente vengono visualizzati nell'angolo inferiore destro della barra di stato. Quando è selezionata l'intera finestra di dialogo, la barra di stato Visualizza la posizione della finestra di dialogo come intero e l'altezza e larghezza.

## <a name="arrange-controls"></a>Disporre i controlli

È possibile disporre i controlli nelle finestre di dialogo con il **finestra di dialogo Editor** in uno dei tre stati:

- Con le guide e margini, impostare come predefinito.

- Con la griglia del layout di.

- Senza funzionalità snap o allineamento.

Il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md) contiene pulsanti che consentono di controllare lo stato.

- Per modificare lo stato, selezionare l'icona appropriata o passare al menu **formato** > **impostazioni Guide**.

Il **delle impostazioni Guida** nella finestra di dialogo presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Guide**|Consente di visualizzare le impostazioni per le guide di layout.|
|**None**|Nasconde gli strumenti di layout.|
|**Righelli e guide**|Quando abilitata, aggiunge righelli per gli strumenti di layout e consente le guide possono essere inseriti nei righelli. Le guide predefiniti sono i margini.|
|**Griglia**|Crea una griglia di layout. Nuovi controlli vengono automaticamente allineati alla griglia.|
|**Spaziatura della griglia**|Consente di visualizzare le impostazioni per la spaziatura della griglia in unità di finestra di dialogo (DLU-Dialog Unit).|
|**Larghezza: DLU-Dialog Unit**|Imposta la larghezza della griglia di layout in DLU-Dialog Unit. Una DLU orizzontale sia la larghezza media del tipo di carattere della finestra di dialogo diviso 4.|
|**Height: DLU-Dialog Unit**|Imposta l'altezza della griglia di layout in DLU-Dialog Unit. Una DLU verticale è l'altezza di average del tipo di carattere finestra dialogo diviso per 8.|

### <a name="guides-and-margins"></a>Guide e margini

Se si spostano i controlli, aggiunta di controlli o ridisporre un layout corrente, guide e margini consentono di allineamento dei controlli in modo accurato all'interno di una finestra di dialogo.

Quando si crea una finestra di dialogo, quattro guide modificate chiamate margini vengono fornite e vengono visualizzati come linee tratteggiate blue.

- Per spostare i margini, trascinare il margine per la nuova posizione.

- Per nascondere un margine, spostare il margine in una posizione zero.

- Per riportare il margine, posizionare il puntatore sopra il margine posizione zero e spostare il margine in posizione.

Le guide sono visualizzate come blu punteggiata tra la finestra di dialogo visualizzata nell'editor e le frecce corrispondente nei righelli nella parte superiore e il lato sinistro della **finestra di dialogo Editor**. Quadratini di ridimensionamento di controlli Blocca sulle guide quando vengono spostati i controlli e le guide di allineamento ai controlli se non sono presenti controlli bloccati in precedenza per la Guida. Quando viene spostata una Guida, i controlli che vengono bloccati a esso spostano anche. I controlli bloccati a più di una Guida vengono ridimensionati quando una delle Guide viene spostata.

- Per creare una Guida all'interno del righello, selezionare una sola volta per creare una Guida, oppure fare doppio clic per avviare il **delle impostazioni Guida** finestra di dialogo in cui è possibile specificare impostazioni della Guida.

- Per impostare una Guida per la finestra di dialogo, selezionare la Guida e trascinarlo in una nuova posizione oppure selezionare la freccia nel righello per trascinare la Guida associata.

   Le coordinate della Guida vengono visualizzate nella barra di stato nella parte inferiore della finestra e il righello o spostare il puntatore del mouse sulla freccia nel righello per visualizzare la posizione esatta della Guida.

- Per eliminare una Guida, trascinare la Guida dalla finestra di dialogo o la freccia corrispondente disattivare il righello.

I segni di graduazione nei righelli che determinano la spaziatura tra i controlli e le guide sono definiti dalle unità di finestra di dialogo (DLU-Dialog Unit). Una DLU si basa sulle dimensioni del tipo di carattere della finestra di dialogo, normalmente 8 punte MS Shell Dlg. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro. Una DLU verticale rappresenta l'altezza di average del tipo di carattere diviso per 8.

- Per modificare gli intervalli di segni di graduazione, passare al menu di scelta **formato** > **impostazioni della Guida**, quindi nella **spaziatura della griglia** , specificare una nuova larghezza e altezza in DLU.

### <a name="layout-grid"></a>Griglia di layout

Quando esegue l'inserimento o la disposizione dei controlli in una finestra di dialogo, utilizzare la griglia di layout per il posizionamento più preciso. Quando la griglia è attivata, i controlli verranno bloccato per le linee punteggiate della griglia come se magnetizzato.

- Per disattivare la griglia del layout, andare al menu **formato** > **impostazioni della Guida** e selezionare o deselezionare i **griglia** pulsante.

   È comunque possibile controllare la griglia in singoli **Editor finestre** windows con il **Attiva/Disattiva griglia** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

- Per modificare le dimensioni della griglia di layout, passare al menu di scelta **formato** > **impostazioni Guide** e digitare l'altezza e larghezza DLU per le celle della griglia. Larghezza o all'altezza minima è 4.

### <a name="disable-guides"></a>Disabilita le guide

È possibile usare i tasti speciali in combinazione con il mouse per disabilitare l'effetto di blocco delle Guide. Usando il **Alt** chiave disabilita gli effetti di blocco della Guida selezionata. Lo spostamento di una Guida con i **MAIUSC** chiave che impedisce lo spostamento con la Guida di controlli bloccati.

- Per disabilitare l'effetto di blocco delle guide, trascinare il controllo e tenendo premuto il **Alt** chiave.

- Per spostare le guide senza spostare i controlli bloccati, trascinare la Guida e tenendo premuto il **MAIUSC** chiave.

- Per disattivare le guide, andare al menu di scelta **formato** > **impostazioni Guide**. Quindi, sotto **Guide**, selezionare **None**.

   > [!TIP]
   > È anche possibile usare il collegamento nel menu di scelta **formato** > **Attiva/Disattiva guide**.

## <a name="select-controls"></a>Selezionare i controlli

Selezionare i controlli alla dimensione, allineare, spostare, copiare, o eliminarli e quindi completare l'operazione desiderata. Nella maggior parte dei casi, è necessario selezionare più di un controllo per utilizzare gli strumenti di ridimensionamento e l'allineamento della [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

Quando un controllo è selezionato, ha un bordo ombreggiato intorno a tinta unita (attiva) o quadratini di ridimensionamento, quadratini che vengono visualizzate sul bordo di selezione vuoto (inattivo). Quando si selezionano più controlli, al controllo dominante dispone di quadratini di ridimensionamento a tinta unita e tutti gli altri comandi selezionati sono quadratini vuoti.

- Per selezionare i controlli, il [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox), selezionare il **puntatore** dello strumento e usare uno dei passaggi seguenti per effettuare la selezione:

  - Trascinare il puntatore del mouse per disegnare una casella di selezione intorno ai controlli che si desidera selezionare nella finestra di dialogo. Quando si rilascia il pulsante del mouse, tutti i controlli all'interno e che si intersecano vengono selezionati la casella di selezione.

  - Tenere premuto il **MAIUSC** la chiave e selezionare i controlli che si desidera includere nella selezione.

  - Tenere premuto il **Ctrl** la chiave e selezionare i controlli che si desidera includere nella selezione.

- Per aggiungere o rimuovere un controllo dal gruppo di controlli selezionati, tenere premuto il **MAIUSC** , selezionare il controllo che si desidera aggiungere o rimuovere.

### <a name="dominant-controls"></a>Controlli dominanti

Quando si esegue il ridimensionamento o allineare più controlli, il **finestra di dialogo Editor** utilizza il controllo dominante per determinare come gli altri controlli vengono ridimensionati o allineati. Per impostazione predefinita, il controllo dominante è il primo controllo selezionato.

- Per specificare il controllo dominante, tenere premuto il **Ctrl** , selezionare il controllo che si desidera utilizzare per determinare la dimensione o la posizione di altri controlli *primo*. Tenendo premuto il **Ctrl** chiave e selezione di un controllo all'interno di una selezione consentirà che controllano il controllo dominante della selezione.

- Per modificare il controllo dominante, cancellare la selezione corrente selezionando all'esterno di tutti i controlli attualmente selezionati e ripetere la procedura precedente, la selezione di un controllo diverso *primo*.

> [!NOTE]
> Quadratini di ridimensionamento del controllo dominante sono pieni, mentre gli handle dei controlli subordinati sono vuoti. Ulteriore operazione di ridimensionamento o l'allineamento è basato sul controllo dominante.

## <a name="size-controls"></a>Controlli di dimensioni

Usare i quadratini di ridimensionamento per ridimensionare un controllo. Quando il puntatore è posizionato su un quadratino di ridimensionamento, assume la forma per indicare le direzioni in cui è possibile ridimensionare il controllo. Quadratini di ridimensionamento attivi sono pieni e se un quadratino di ridimensionamento è vuoto, non è possibile ridimensionare il controllo lungo l'asse.

- Per ridimensionare un controllo, selezionare il controllo e trascinare i quadratini di ridimensionamento per modificare le dimensioni.

  - Gli handle di dimensione superiore e i lati modificano la dimensione orizzontale o verticale.

  - Gli handle di dimensione negli angoli modificano le dimensioni orizzontali e verticali.

   > [!TIP]
   > È possibile ridimensionare l'unità di una finestra di dialogo (DLU) controllo contemporaneamente tenendo premuto il **Shift** chiave e l'uso di **destra** e **verso il basso** tasti di direzione.

- Per ridimensionare automaticamente un controllo per adattarsi al testo all'interno di esso, andare al menu **formato** oppure fare clic sul controllo e scegliere **adatta al contenuto**.

- Per impostare i controlli per la stessa dimensione, selezionare i controlli vengano ridimensionati e passare al menu che si desidera **formato** > **Rendi uguali**, quindi scegliere **entrambi**, **Altezza**, o **larghezza**.

   Si ridimensiona un gruppo di controlli in base alla dimensione del controllo dominante, ovvero il primo controllo selezionato nella serie. Le dimensioni finali dei controlli nel gruppo dipendono dalle dimensioni del controllo dominante.

- Per modificare le dimensioni di un gruppo di controlli con guide, a una Guida di allineamento un lato del controllo (o controlli), quindi trascinare una Guida a altro lato del controllo (o controlli). A questo punto è possibile spostare due guide per ridimensionare il controllo (o i controlli).

   Se necessario con più controlli, le dimensioni ognuna per la seconda Guida allineare.

### <a name="other-controls"></a>Altri controlli

È possibile ridimensionare una casella combinata quando viene aggiunta alla finestra di dialogo. È anche possibile specificare le dimensioni della casella di riepilogo a discesa. Per altre informazioni, vedere [aggiunta di valori da un controllo casella combinata](../windows/adding-values-to-a-combo-box-control.md).

1. Selezionare il pulsante freccia in giù a destra della casella combinata.

   ![Freccia su una casella combinata in un progetto MFC](../mfc/media/vccomboboxarrow.gif "vcComboBoxArrow")

   La struttura del controllo cambia per mostrare le dimensioni della casella combinata con l'area di riepilogo a discesa elenco esteso.

1. Utilizzare il quadratino di ridimensionamento inferiore per modificare le dimensioni iniziali dell'area di riepilogo.

   ![Casella combinata&#45;ridimensionamento di casella in un progetto MFC](../mfc/media/vccomboboxsizing.gif "vcComboBoxSizing")

1. Selezionare la freccia a discesa per chiudere la parte dell'elenco a discesa della casella combinata.

> [!NOTE]
> Quando si aggiunge una casella di riepilogo con una barra di scorrimento orizzontale per una finestra di dialogo utilizza MFC, la barra di scorrimento non verrà visualizzato automaticamente nell'applicazione.
>
> Impostare una larghezza massima per l'elemento più largo chiamando [CListBox:: SetHorizontalExtent](../mfc/reference/clistbox-class.md#sethorizontalextent) nel codice. Senza questo valore è impostato, la barra di scorrimento non sarà più visualizzato, anche quando gli elementi nella casella di riepilogo sono larghi della casella.

## <a name="align-controls"></a>Allineare i controlli

- Per allineare i controlli, selezionare i controlli che si desidera allineare. Passare al menu di scelta **formato** > **Align** e scegliere una delle seguenti allineamenti:

   |Allineamento|Descrizione|
   |-----|-----------|
   |**A sinistra**|Consente di allineare i controlli selezionati lungo il lato sinistro.|
   |**Data Center**|Consente di allineare i controlli selezionati in senso orizzontale lungo il punto centrale.|
   |**Diritti**|Consente di allineare i controlli selezionati lungo il lato destro.|
   |**In alto**|Consente di allineare i controlli selezionati lungo il bordo superiore.|
   |**In mezzo**|Consente di allineare i controlli selezionati verticalmente lungo il punto centrale.|
   |**In basso**|Consente di allineare i controlli selezionati lungo il bordo inferiore.|

   Assicurarsi di selezionare il controllo che si desidera essere più importante per prima cosa o impostarlo in modo che sia il controllo dominante prima di eseguire l'allineamento o dimensioni comando come all'ultima posizione del gruppo di controlli dipende dalla posizione del controllo dominante.

- Per controlli di spazio in modo uniforme, selezionare i controlli che si desidera riordinare. Passare al menu di scelta **formato** > **Ripartisci uniformemente** e scegliere una delle seguenti allineamenti spaziatura:

   |Spacing (Spaziatura)|Descrizione|
   |---|---|
   |**Tra**|Spazio tra i controlli in modo uniforme tra più a sinistra e selezionata il controllo all'estrema destra.|
   |**Giù**|Spazio tra i controlli in modo uniforme tra i più in alto e il controllo di livello più basso selezionato.|

- Per allineare al centro controlli, selezionare i controlli che si desidera riordinare. Passare al menu di scelta **formato** > **Centra nella finestra** e scegliere una delle modalità seguenti:

   |Disposizione|Descrizione|
   |---|---|
   |**Verticale**|Allineare al centro verticalmente i controlli nella finestra di dialogo.|
   |**Orizzontale**|Allineare al centro orizzontalmente i controlli nella finestra di dialogo.|

- Per allineare i pulsanti di comando, selezionare uno o più pulsanti di comando. Passare al menu di scelta **formato** > **Disponi pulsanti**, quindi scegliere una delle modalità seguenti:

   |Disposizione|Descrizione|
   |---|---|
   |**A destra**|Consente di allineare i pulsanti di comando lungo il bordo destro della finestra di dialogo.|
   |**In basso**|Consente di allineare i pulsanti di comando lungo il bordo inferiore della finestra di dialogo.|

   Se si seleziona un controllo diverso da un pulsante di comando, la posizione non è interessata.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Gestire i controlli finestra di dialogo](controls-in-dialog-boxes.md)<br/>
[Procedura: Aggiungere, modificare o eliminare controlli](adding-editing-or-deleting-controls.md)<br/>
[Procedura: Definire l'accesso e i valori per i controlli](defining-mnemonics-access-keys.md)<br/>