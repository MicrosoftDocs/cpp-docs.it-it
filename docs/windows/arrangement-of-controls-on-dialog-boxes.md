---
title: Disposizione dei controlli nelle finestre di dialogo (C++) | Microsoft Docs
ms.date: 11/04/2016
f1_keywords:
- vc.editors.dialog.grouping
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
ms.assetid: 832491cf-98af-42e5-a854-2cb135fd45c6
ms.openlocfilehash: 210fbf8e062b4dd8c469f9c40a015bbc19bc2843
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152742"
---
# <a name="arrangement-of-controls-on-dialog-boxes-c"></a>Disposizione dei controlli nelle finestre di dialogo (C++)

Il **dialogo** editor offre gli strumenti di layout che allineare e ridimensionare automaticamente i controlli. Per la maggior parte delle attività, è possibile usare la [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md). Tutti i **finestra di dialogo Editor** comandi della barra degli strumenti sono disponibili anche nel **formato** menu e la maggior parte sono [tasti di scelta rapida](../windows/accelerator-keys-for-the-dialog-editor.md).

Molti comandi di layout delle finestre di dialogo sono disponibili solo quando più di un controllo è selezionato. È possibile selezionare un singolo controllo o più controlli e quando più di un controllo è selezionato, il primo che è selezionare è per impostazione predefinita del controllo "principale". Per informazioni sulla selezione del controllo dominante e controlli, vedere [selezione di controlli](../windows/selecting-controls.md).

La località, altezza e larghezza del controllo corrente vengono visualizzati nell'angolo inferiore destro della barra di stato. Quando è selezionata l'intera finestra di dialogo, la barra di stato Visualizza la posizione della finestra di dialogo come intero e l'altezza e larghezza.

## <a name="dialog-editor-states-guides-and-grids"></a>Gli Stati dell'editor finestre (guide e griglie)

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

### <a name="create-and-set-guides-and-margins"></a>Creare e impostare le guide e margini

Se si spostano i controlli, aggiunta di controlli o ridisporre un layout corrente, guide consentono allineare i controlli in modo accurato all'interno di una finestra di dialogo. Le guide sono visualizzate come blu punteggiata tra la finestra di dialogo visualizzata nell'editor e le frecce corrispondente nei righelli nella parte superiore e il lato sinistro della **dialogo** editor.

Quando si crea una finestra di dialogo, vengono forniti e quattro i margini. I margini sono guide modificate, visualizzati come linee tratteggiate blue.

|Process|Passaggi|
|----------------|----------------|
|Per creare una Guida|All'interno del righello, selezionare una sola volta per creare una Guida. (Un solo clic consente di creare una nuova Guida; facendo doppio clic su Avvia il **impostazioni della Guida** finestra di dialogo in cui è possibile specificare impostazioni della Guida.)|
|Per impostare una Guida|Nella finestra di dialogo, fare clic su Guida e trascinarlo in una nuova posizione. (È possibile anche fare clic sulla freccia nel righello per trascinare la Guida associata.)<br/><br/>Le coordinate della Guida vengono visualizzate nella barra di stato nella parte inferiore della finestra e sul righello. Spostare il puntatore del mouse sulla freccia nel righello per visualizzare la posizione esatta della Guida.|
|Per eliminare una guida|Trascinare la Guida per la finestra di dialogo.<br/><br/>\- oppure -<br/><br/>Trascinare la freccia corrispondente disattivare il righello.|
|Per spostare i margini|Trascinare il margine per la nuova posizione.<br/><br/>Per nascondere un margine, spostare il margine in una posizione zero. Per riportare il margine, posizionare il puntatore sopra il margine posizione zero e spostare il margine in posizione.|

### <a name="align-controls-on-a-guide"></a>Allineare i controlli su una Guida

Quadratini di ridimensionamento di controlli Blocca sulle guide quando vengono spostati i controlli e le guide di allineamento ai controlli se non sono presenti controlli bloccati in precedenza per la Guida. Quando viene spostata una Guida, i controlli che vengono bloccati a esso spostano anche. I controlli bloccati a più di una Guida vengono ridimensionati quando una delle Guide viene spostata.

I segni di graduazione nei righelli che determinano la spaziatura tra i controlli e le guide sono definiti dalle unità di finestra di dialogo (DLU-Dialog Unit). Una DLU si basa sulle dimensioni del tipo di carattere della finestra di dialogo, normalmente 8 punte MS Shell Dlg. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro. Una DLU verticale è l'altezza di average del tipo di carattere diviso per 8.

#### <a name="to-size-a-group-of-controls-with-guides"></a>Per impostare le dimensioni di un gruppo di controlli con guide

1. Per una Guida di allineamento un lato del controllo (o controlli).

1. Trascinare una Guida a altro lato del controllo (o controlli).

   Se necessario con più controlli, le dimensioni ognuna per la seconda Guida allineare.

1. Spostare due guide per ridimensionare il controllo (o i controlli).

#### <a name="to-change-the-intervals-of-the-tick-marks"></a>Modificare gli intervalli di segni di graduazione

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** nella finestra di dialogo il **spaziatura della griglia** , specificare una nuova larghezza e altezza in DLU.

### <a name="disable-guides"></a>Disabilita le guide

È possibile usare i tasti speciali in combinazione con il mouse per disabilitare l'effetto di blocco delle Guide. Usando il **Alt** chiave disabilita gli effetti di blocco della Guida selezionata. Lo spostamento di una Guida con i **MAIUSC** chiave che impedisce lo spostamento con la Guida di controlli bloccati.

#### <a name="to-disable-the-snapping-effect-of-the-guides"></a>Per disabilitare l'effetto di blocco delle Guide

Trascinare il controllo e tenendo premuto il **Alt** chiave.

#### <a name="to-move-guides-without-moving-the-snapped-controls"></a>Per spostare le guide senza spostare i controlli bloccati

Trascinare la Guida e tenendo premuto il **MAIUSC** chiave.

#### <a name="to-turn-off-the-guides"></a>Per disattivare le guide

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** nella finestra di dialogo **Guide**, selezionare **None**.

   > [!NOTE]
   > È anche possibile fare doppio clic sulla barra del righello per accedere la **impostazioni della Guida** nella finestra di dialogo.

\- oppure -

Nel **formato** dal menu **Attiva/Disattiva guide**.

### <a name="modify-the-layout-grid"></a>Modificare la griglia del layout

Quando si esegue l'inserimento o la disposizione dei controlli in una finestra di dialogo, è possibile usare la griglia del layout per il posizionamento più preciso. Quando la griglia è attivata, i controlli vengono visualizzati per "Blocca" le linee punteggiate della griglia come se magnetizzato. È possibile attivare e disattivare questa funzionalità "Blocca sulla griglia" e modificare le dimensioni delle celle della griglia di layout.

#### <a name="to-turn-the-layout-grid-on-or-off"></a>Per attivare o disattivare la griglia di layout

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** finestra di dialogo, seleziona o deselezionare le **griglia** pulsante.

   È comunque possibile controllare la griglia in singoli **finestra di dialogo** finestre dell'editor tramite il **Attiva/Disattiva griglia** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

#### <a name="to-change-the-size-of-the-layout-grid"></a>Per modificare le dimensioni della griglia di layout

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** finestra di dialogo digitare l'altezza e larghezza DLU per le celle della griglia. Larghezza o all'altezza minima è di 4 DLU.

## <a name="group-radio-buttons-on-a-dialog-box"></a>Gruppo di pulsanti di opzione in una finestra di dialogo

Quando si aggiungono pulsanti di opzione per una finestra di dialogo, è possibile gestirli come un gruppo impostando una **gruppo** proprietà nel **proprietà** finestra per il primo pulsante del gruppo. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)viene quindi visualizzato un ID di controllo per tale pulsante di opzione, consentendo di aggiungere una variabile membro per il gruppo di pulsanti di opzione.

Una finestra di dialogo può contenere più gruppi di pulsanti di opzione. Per aggiungere ciascun gruppo seguire la procedura riportata di seguito.

### <a name="to-add-a-group-of-radio-buttons-to-a-dialog-box"></a>Per aggiungere un gruppo di pulsanti di opzione a una finestra di dialogo

1. Selezionare il controllo pulsante di opzione nella [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox) e scegliere il percorso nella finestra di dialogo in cui si desidera posizionare il controllo.

1. Ripetere il passaggio 1 per aggiungere tutti i pulsanti di opzione necessari. Assicurarsi che i pulsanti di opzione nel gruppo siano consecutivi nell'ordine di tabulazione.

1. Nella finestra [Proprietà](/visualstudio/ide/reference/properties-window)impostare la proprietà **Group** del *primo* pulsante di opzione nell'ordine di tabulazione su **True**.

   Modificando la proprietà **Group** su **True** viene aggiunto lo stile WS_GROUP alla voce del pulsante nell'oggetto finestra di dialogo dello script di risorsa e si assicura che l'utente possa selezionare un solo pulsante di opzione alla volta all'interno del gruppo di pulsanti.

   > [!NOTE]
   > La proprietà **Group** deve essere impostata su **True**solo per il primo pulsante di opzione del gruppo. Se sono disponibili controlli aggiuntivi che non fanno parte del gruppo di pulsanti, impostare su **True** anche la proprietà *Group* del primo controllo **non incluso nel gruppo** . È possibile identificare rapidamente il primo controllo esterno al gruppo premendo **Ctrl**+**1!d** per visualizzare l'ordine di tabulazione.

### <a name="to-add-a-member-variable-for-the-radio-button-group"></a>Per aggiungere una variabile membro per il gruppo di pulsanti di opzione

1. Fare clic con il pulsante destro del mouse sul primo controllo pulsante di opzione nell'ordine di tabulazione, corrispondente al controllo dominante e a quello per cui la proprietà **Group** è stata impostata su True.

1. Scegliere **Aggiungi variabile** dal menu di scelta rapida.

1. Nell' [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md)selezionare la casella di controllo **Variabile controllo** , quindi il pulsante di opzione **Valore** .

1. Nella casella **Nome variabile** digitare il nome della nuova variabile membro.

1. Nel **tipo di variabile** casella di riepilogo, seleziona **int** o un tipo `int`.

1. È quindi possibile modificare il codice per specificare il pulsante di opzione da visualizzare come selezionato. Ad esempio, `m_radioBox1 = 0;` seleziona il primo pulsante di opzione nel gruppo.

## <a name="align-groups-of-controls"></a>Allineare gruppi di controlli

Le procedure seguenti illustrano come allineare i controlli:

### <a name="to-align-groups-of-controls"></a>Per allineare i gruppi di controlli

1. [Selezionare i controlli](../windows/selecting-multiple-controls.md) che si desidera allineare. Assicurarsi di selezionare il controllo che si desidera essere prima di tutto al controllo dominante o impostarlo in modo che sia il controllo dominante prima di eseguire l'allineamento o comando di ridimensionamento.

   L'ultima posizione del gruppo di controlli dipende dalla posizione del controllo dominante. Per altre informazioni sulla selezione del controllo dominante, vedere [impostazione del controllo dominante](../windows/specifying-the-dominant-control.md).

1. Dal **formato** menu, scegliere **Align**e quindi scegliere una delle seguenti allineamenti:

   - `Lefts`: consente di allineare i controlli selezionati lungo il lato sinistro.

   - `Centers`: consente di allineare i controlli selezionati in senso orizzontale lungo il punto centrale.

   - `Rights`: consente di allineare i controlli selezionati lungo il lato destro.

   - `Tops`: consente di allineare i controlli selezionati lungo il bordo superiore.

   - `Middles`: consente di allineare i controlli selezionati verticalmente lungo il punto centrale.

   - `Bottoms`: consente di allineare i controlli selezionati lungo il bordo inferiore.

### <a name="to-even-the-spacing-between-controls"></a>Anche la spaziatura tra i controlli

Il **dialogo** editor consente ai controlli di spazio in modo uniforme tra i controlli esterni selezionati.

1. Selezionare i controlli che si desidera riordinare.

1. Dal **formato** menu, scegliere **Ripartisci uniformemente**e quindi scegliere una delle seguenti allineamenti spaziatura:

   - `Across`: spazio controlli in modo uniforme tra più a sinistra e selezionata il controllo all'estrema destra.

   - `Down`: spazio controlli in modo uniforme tra i più in alto e il controllo di livello più basso selezionato.

### <a name="to-center-controls-in-a-dialog-box"></a>Per allineare al centro di controlli in una finestra di dialogo

1. Selezionare i controlli che si desidera riordinare.

1. Dal **formato** menu, scegliere **Centra nella finestra**, quindi scegliere una delle modalità seguenti:

   - `Vertical`: Centra verticalmente i controlli nella finestra di dialogo.

   - `Horizontal`: allineare al centro orizzontalmente i controlli nella finestra di dialogo.

### <a name="to-arrange-push-buttons-along-the-right-or-bottom-of-a-dialog-box"></a>Per disporre i pulsanti di comando lungo il bordo destro o inferiore di una finestra di dialogo

1. Selezionare uno o più pulsanti di comando.

1. Dal **formato** menu, scegliere **Disponi pulsanti**, quindi scegliere una delle modalità seguenti:

   - `Right`: consente di allineare i pulsanti di comando lungo il bordo destro della finestra di dialogo.

   - `Bottom`: consente di allineare i pulsanti di comando lungo il bordo inferiore della finestra di dialogo.

       Se si seleziona un controllo diverso da un pulsante di comando, la posizione non è interessata.

## <a name="change-the-tab-order-of-controls"></a>Modificare l'ordine di tabulazione dei controlli

L'ordine di tabulazione è l'ordine in cui il **scheda** chiave sposta lo stato attivo di input da un controllo successivo all'interno di una finestra di dialogo. In genere l'ordine di tabulazione procede da sinistra a destra e dall'alto verso il basso in una finestra di dialogo. Ogni controllo ha un **Tabstop** proprietà che determina se un controllo riceve lo stato attivo.

### <a name="to-set-input-focus-for-a-control"></a>Per impostare lo stato attivo di input per un controllo

Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), selezionare **True** oppure **False** nel **Tabstop** proprietà.

Anche i controlli che non hanno le **Tabstop** impostata su **True** devono far parte dell'ordine di tabulazione. Ordine di tabulazione è importante, ad esempio, quando si [definire le chiavi di accesso (tasti di scelta)](../windows/defining-mnemonics-access-keys.md) per i controlli privi di didascalie. Testo statico che contiene una chiave di accesso per un controllo correlato deve precedere il relativo controllo nell'ordine di tabulazione.

> [!NOTE]
> Se la finestra di dialogo contiene la sovrapposizione di controlli, la modifica dell'ordine di tabulazione può cambiare il modo in cui che vengono visualizzati i controlli. Controlli disponibili più avanti nell'ordine di tabulazione vengono sempre visualizzati sopra i controlli sovrapposti che li precedono nell'ordine di tabulazione.

### <a name="to-view-the-current-tab-order-for-all-controls-in-a-dialog-box"></a>Per visualizzare l'ordine di tabulazione corrente per tutti i controlli in una finestra di dialogo

Nel **formato** dal menu **ordine di tabulazione**.

\- oppure -

- Premere **Ctrl** + **1!d**.

### <a name="to-change-the-tab-order-for-all-controls-in-a-dialog-box"></a>Per modificare l'ordine di tabulazione per tutti i controlli in una finestra di dialogo

1. Nel **formato** dal menu **ordine di tabulazione**.

   Un numero nell'angolo superiore sinistro di ogni controllo indica la posizione nell'ordine di tabulazione corrente.

1. Impostare l'ordine di tabulazione facendo clic su ogni controllo nell'ordine desiderato la **scheda** chiave da seguire.

1. Premere **invio** per uscire **ordine di tabulazione** modalità.

   > [!TIP]
   > Dopo aver immesso **ordine di tabulazione** modalità, è possibile premere **Esc** oppure **invio** per disabilitare la possibilità di modificare l'ordine di tabulazione.

### <a name="to-change-the-tab-order-for-two-or-more-controls"></a>Per modificare l'ordine di tabulazione per due o più controlli

1. Dal **formato** menu, scegliere **ordine di tabulazione**.

1. Specificare dove inizierà la modifica nell'ordine. Tenere premuto prima di tutto il **Ctrl** della chiave e selezionare il controllo, quindi selezionare quello in cui si desidera modificare l'ordine per iniziare.

   Ad esempio, se si desidera modificare l'ordine dei controlli `7` attraverso `9`, tenere premuto **Ctrl**, quindi selezionare controllo `6` prima.

   > [!NOTE]
   > Per impostare un controllo specifico al numero `1` (innanzitutto in ordine di tabulazione), fare doppio clic sul controllo.

1. Versione di **Ctrl** chiave, quindi selezionare i controlli nell'ordine desiderato la **scheda** chiave da seguire da quel punto.

1. Premere **invio** per uscire **ordine di tabulazione** modalità.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli](../mfc/controls-mfc.md)