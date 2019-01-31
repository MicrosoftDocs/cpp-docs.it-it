---
title: Stati dell'Editor finestre (guide e griglie) (C++)
ms.date: 11/04/2016
helpviewer_keywords:
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
ms.assetid: dbacf9ef-e8b0-4125-a7ce-84911c482e98
ms.openlocfilehash: 52fc19d8a39680c16692177e2758fba78afc7d3a
ms.sourcegitcommit: 5270117dbecc4c49bca0cf10b927bae3c9930038
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/31/2019
ms.locfileid: "55484994"
---
# <a name="dialog-editor-states-guides-and-grids-c"></a>Stati dell'Editor finestre (guide e griglie) (C++)

È possibile disporre i controlli nelle finestre di dialogo con il **dialogo** editor in uno dei tre stati:

- Con le guide e margini in (impostazione predefinita)

- Con la griglia del layout di

- Senza alcuna funzionalità di blocco o allineamento

Il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md) contiene pulsanti che consentono di controllare lo stato. Per modificare lo stato, fare clic sull'icona appropriata. È inoltre possibile modificare gli stati tramite le **impostazioni della Guida** comando le **formato** menu.

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

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="create-and-set-guides-and-margins"></a>Creare e impostare le guide e margini

Se si spostano i controlli, aggiunta di controlli o ridisporre un layout corrente, guide consentono allineare i controlli in modo accurato all'interno di una finestra di dialogo. Le guide sono visualizzate come blu punteggiata tra la finestra di dialogo visualizzata nell'editor e le frecce corrispondente nei righelli nella parte superiore e il lato sinistro della **dialogo** editor.

Quando si crea una finestra di dialogo, vengono forniti e quattro i margini. I margini sono guide modificate, visualizzati come linee tratteggiate blue.

### <a name="to-create-a-guide"></a>Per creare una Guida

All'interno del righello, fare clic su una sola volta per creare una Guida. (Un solo clic consente di creare una nuova Guida; facendo doppio clic su Avvia il **impostazioni della Guida** finestra di dialogo in cui è possibile specificare impostazioni della Guida.)

### <a name="to-set-a-guide"></a>Per impostare una Guida

Nella finestra di dialogo, fare clic su Guida e trascinarlo in una nuova posizione. (È possibile anche fare clic sulla freccia nel righello per trascinare la Guida associata.)

Le coordinate della Guida vengono visualizzate nella barra di stato nella parte inferiore della finestra e sul righello. Spostare il puntatore del mouse sulla freccia nel righello per visualizzare la posizione esatta della Guida.

### <a name="to-delete-a-guide"></a>Per eliminare una guida

Trascinare la Guida per la finestra di dialogo.

\- oppure -

Trascinare la freccia corrispondente disattivare il righello.

### <a name="to-move-margins"></a>Per spostare i margini

Trascinare il margine per la nuova posizione.

Per nascondere un margine, spostare il margine in una posizione zero. Per riportare il margine, posizionare il puntatore sopra il margine posizione zero e spostare il margine in posizione.

## <a name="align-controls-on-a-guide"></a>Allineare i controlli su una Guida

Quadratini di ridimensionamento di controlli Blocca sulle guide quando vengono spostati i controlli e le guide di allineamento ai controlli se non sono presenti controlli bloccati in precedenza per la Guida. Quando viene spostata una Guida, i controlli che vengono bloccati a esso spostano anche. I controlli bloccati a più di una Guida vengono ridimensionati quando una delle Guide viene spostata.

I segni di graduazione nei righelli che determinano la spaziatura tra i controlli e le guide sono definiti dalle unità di finestra di dialogo (DLU-Dialog Unit). Una DLU si basa sulle dimensioni del tipo di carattere della finestra di dialogo, normalmente 8 punte MS Shell Dlg. Una DLU orizzontale sia la larghezza media del tipo di carattere finestra dialogo diviso per quattro. Una DLU verticale è l'altezza di average del tipo di carattere diviso per 8.

### <a name="to-size-a-group-of-controls-with-guides"></a>Per impostare le dimensioni di un gruppo di controlli con guide

1. Per una Guida di allineamento un lato del controllo (o controlli).

1. Trascinare una Guida a altro lato del controllo (o controlli).

   Se necessario con più controlli, le dimensioni ognuna per la seconda Guida allineare.

1. Spostare due guide per ridimensionare il controllo (o i controlli).

### <a name="to-change-the-intervals-of-the-tick-marks"></a>Modificare gli intervalli di segni di graduazione

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** nella finestra di dialogo il **spaziatura della griglia** , specificare una nuova larghezza e altezza in DLU.

## <a name="disable-guides"></a>Disabilita le guide

È possibile usare i tasti speciali in combinazione con il mouse per disabilitare l'effetto di blocco delle Guide. Usando il **Alt** chiave disabilita gli effetti di blocco della Guida selezionata. Lo spostamento di una Guida con i **MAIUSC** chiave che impedisce lo spostamento con la Guida di controlli bloccati.

### <a name="to-disable-the-snapping-effect-of-the-guides"></a>Per disabilitare l'effetto di blocco delle Guide

Trascinare il controllo e tenendo premuto il **Alt** chiave.

### <a name="to-move-guides-without-moving-the-snapped-controls"></a>Per spostare le guide senza spostare i controlli bloccati

Trascinare la Guida e tenendo premuto il **MAIUSC** chiave.

### <a name="to-turn-off-the-guides"></a>Per disattivare le guide

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** nella finestra di dialogo **Guide**, selezionare **None**.

   > [!NOTE]
   > È anche possibile fare doppio clic sulla barra del righello per accedere la **impostazioni della Guida** nella finestra di dialogo.

\- oppure -

Nel **formato** dal menu **Attiva/Disattiva guide**.

## <a name="modify-the-layout-grid"></a>Modificare la griglia del layout

Quando si esegue l'inserimento o la disposizione dei controlli in una finestra di dialogo, è possibile usare la griglia del layout per il posizionamento più preciso. Quando la griglia è attivata, i controlli vengono visualizzati per "Blocca" le linee punteggiate della griglia come se magnetizzato. È possibile attivare e disattivare questa funzionalità "Blocca sulla griglia" e modificare le dimensioni delle celle della griglia di layout.

### <a name="to-turn-the-layout-grid-on-or-off"></a>Per attivare o disattivare la griglia di layout

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** finestra di dialogo, seleziona o deselezionare le **griglia** pulsante.

   È comunque possibile controllare la griglia in singoli **finestra di dialogo** finestre dell'editor tramite il **Attiva/Disattiva griglia** pulsante il [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).

### <a name="to-change-the-size-of-the-layout-grid"></a>Per modificare le dimensioni della griglia di layout

1. Dal **formato** menu, scegliere **impostazioni Guide**.

1. Nel **impostazioni della Guida** finestra di dialogo digitare l'altezza e larghezza DLU per le celle della griglia. Larghezza o all'altezza minima è di 4 DLU. Per altre informazioni su DLU-Dialog Unit, vedere [disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
[Controlli (MFC)](../mfc/controls-mfc.md)<br/>
