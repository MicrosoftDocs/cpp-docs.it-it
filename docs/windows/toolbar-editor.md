---
title: Toolbar Editor (C++)
ms.date: 02/14/2019
f1_keywords:
- vc.editors.toolbar.F1
- vc.editors.toolbar
- vc.editors.newtoolbarresource
helpviewer_keywords:
- resource editors [C++], Toolbar editor
- editors, toolbars
- toolbars [C++], editing
- Toolbar editor
- toolbars [C++], creating
- Toolbar editor [C++], creating new toolbars
- Insert Resource
- bitmaps [C++], converting to toolbars
- Toolbar editor [C++], converting bitmaps
- toolbars [C++], converting bitmaps
- New Toolbar Resource dialog box [C++]
- buttons [C++], custom toolbars
- toolbar buttons [C++], editing
- buttons
- toolbar buttons [C++], creating
- Toolbar editor [C++], creating buttons
- toolbar buttons [C++], button image
- toolbar buttons [C++], creating
- toolbar buttons (in Toolbar editor)
- toolbar buttons [C++], moving
- Toolbar editor [C++], moving buttons
- Toolbar editor [C++], copying buttons
- toolbars [C++], copying buttons
- toolbar buttons [C++], copying
- toolbar buttons [C++], deleting
- Toolbar editor [C++], deleting buttons
- Toolbar editor [C++], spacing toolbar buttons
- toolbar buttons [C++], space between buttons
- toolbar controls [MFC], command ID
- toolbar buttons [C++], setting properties
- Toolbar editor [C++], toolbar button properties
- command IDs, toolbar buttons
- size, toolbar buttons
- toolbar buttons [C++], setting properties
- Toolbar editor [C++], toolbar button properties
- status bars [C++], active toolbar button text
- command IDs, toolbar buttons
- width, toolbar buttons
- tool tips [C++], adding to toolbar buttons
- "\n in tool tip"
- toolbar buttons [C++], tool tips
- buttons [C++], tool tips
- Toolbar editor [C++], creating tool tips
ms.assetid: aa9f0adf-60f6-4f79-ab05-bc330f15ec43
ms.openlocfilehash: 83402159d19f07cf94a0d00ccd79d68549b124e9
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328857"
---
# <a name="toolbar-editor-c"></a>Toolbar Editor (C++)

Il **sulla barra degli strumenti Editor** consente di creare le risorse della barra degli strumenti e convertire le bitmap in risorse della barra degli strumenti. Il **sulla barra degli strumenti Editor** utilizza un'interfaccia grafica per visualizzare una barra degli strumenti e pulsanti che somigliano molto al modo in cui si otterranno in un'applicazione finita.

Il **Editor barra degli strumenti** finestra Mostra due visualizzazioni di un'immagine del pulsante, lo stesso come il **Editor di immagini** finestra. Una barra di divisione separa i due riquadri ed è possibile trascinare la barra di divisione dal lato a altro per modificare le dimensioni relative dei riquadri. Il riquadro attivo viene visualizzato un bordo di selezione e sopra le due visualizzazioni dell'immagine si trova la barra degli strumenti dell'oggetto.

![Toolbar Editor](../mfc/media/vctoolbareditor.gif "vcToolbarEditor")<br/>
**Editor barra degli strumenti**

Il **Editor barra degli strumenti** è simile al **Editor di immagini** in funzionalità e le voci di menu, gli strumenti grafici e griglia di mappa di bit tra i due oggetti sono uguali. C'è un comando di menu **immagine** menu per alternare le **Editor barra degli strumenti** e il **Editor di immagini**. Per altre informazioni sull'uso di **grafica** sulla barra degli strumenti, **colori** tavolozza, o **immagine** menu, vedere [Editor di immagini](../windows/image-editor-for-icons.md).

È possibile creare una nuova barra degli strumenti in un progetto C++ mediante la conversione di una bitmap. L'immagine di bitmap converte le immagini del pulsante per una barra degli strumenti. La mappa di bit contiene in genere numerose immagini pulsante su una singola bitmap, con una sola immagine per ogni pulsante. Le immagini possono essere di qualsiasi dimensione come il valore predefinito è 16 pixel di larghezza e l'altezza dell'immagine. È possibile specificare le dimensioni delle immagini pulsante nel **nuova risorsa barra degli strumenti** finestra di dialogo quando si sceglie **Editor barra degli strumenti** dal **immagine** menu mentre nel  **Editor di immagini**.

Il **nuova risorsa barra degli strumenti** nella finestra di dialogo consente di specificare la larghezza e altezza dei pulsanti che si aggiunge a una risorsa barra degli strumenti in un progetto C++. Il valore predefinito è 16 x 15 pixel.

Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048, pertanto se si imposta la **larghezza del pulsante** al *512*, è possibile avere solo quattro pulsanti. Se si imposta la larghezza su *513*, è possibile avere solo tre pulsanti.

Il **nuova risorsa barra degli strumenti** nella finestra di dialogo presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---------------|
|**Larghezza del pulsante**|Fornisce uno spazio per l'utente a immettere la larghezza dei pulsanti della barra degli strumenti che si esegue la conversione da una risorsa della bitmap a una risorsa barra degli strumenti.|
|**Altezza del pulsante**|Fornisce uno spazio per poter immettere l'altezza dei pulsanti della barra degli strumenti che si esegue la conversione da una risorsa della bitmap a una risorsa barra degli strumenti.|

> [!NOTE]
> Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).

Per impostazione predefinita, all'estremità destra della barra degli strumenti viene visualizzato un pulsante nuovo o vuoto. È possibile spostare questo pulsante prima di modificarlo. Quando si crea un nuovo pulsante, viene visualizzato un altro pulsante vuoto a destra del pulsante modificato. Quando si salva una barra degli strumenti, non viene salvato il pulsante vuoto.

Un pulsante della barra degli strumenti presenta le proprietà seguenti:

|Proprietà|Descrizione|
|--------------|-----------------|
|**ID**|Definisce l'ID del pulsante. L'elenco di elenco a discesa include common **ID** nomi.|
|**Width**|Imposta la larghezza del pulsante. è consigliabile 16 pixel.|
|**Height**|Imposta l'altezza del pulsante. L'altezza di un pulsante Modifica l'altezza di tutti i pulsanti sulla barra degli strumenti. impostazione consigliata è 15 pixel.|
|**Prompt**|Definisce il messaggio visualizzato nella barra di stato. Aggiunta *\n* e aggiunge un nome di un **ToolTip** al pulsante sulla barra degli strumenti. Per altre informazioni, vedere [creazione di una descrizione comando](../windows/creating-a-tool-tip-for-a-toolbar-button.md).|

**Larghezza** e **altezza** si applicano a tutti i pulsanti. Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048, pertanto se si imposta la larghezza del pulsante su *512*, è possibile avere solo quattro pulsanti e se la larghezza viene impostata su *513*, è possibile avere solo tre pulsanti.

## <a name="how-to"></a>Procedure

Il **sulla barra degli strumenti Editor** consente di:

### <a name="to-create-new-toolbars"></a>Per creare nuove barre degli strumenti

1. In **visualizzazione di risorse**, fare doppio clic sui *RC* del file e scegliere **Aggiungi risorsa**. Se si dispone di una barra degli strumenti esistente nel *RC* file, è possibile fare doppio clic il **sulla barra degli strumenti** cartella e selezionare **Inserisci sulla barra degli strumenti**.

1. Nel **Aggiungi risorsa** finestra di dialogo **sulla barra degli strumenti** nel **tipo di risorsa** elenco e quindi scegliere **New**.

   Se un segno più (**+**) visualizzato accanto al **sulla barra degli strumenti** tipo di risorsa, significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

### <a name="to-convert-bitmaps-to-toolbar-resources"></a>Per convertire le bitmap in risorse della barra degli strumenti

1. Aprire una risorsa bitmap esistente nel [Editor di immagini](../windows/image-editor-for-icons.md). Se la bitmap non è già nel *RC* file, fare doppio clic sul *RC* file e scegliere **Import**, quindi passare alla bitmap da aggiungere ai *RC*  file e selezionare **Open**.

1. Passare al menu di scelta **immagine** > **Editor barra degli strumenti**.

   Il **nuova risorsa barra degli strumenti** verrà visualizzata la finestra di dialogo. È possibile modificare la larghezza e l'altezza delle immagini icona in modo che corrisponda il bitmap. L'immagine della barra degli strumenti viene quindi visualizzato nei **sulla barra degli strumenti Editor**.

1. Per completare la conversione, modificare il comando **ID** del pulsante tramite il [finestra proprietà](/visualstudio/ide/reference/properties-window). Digitare il nuovo *ID* oppure selezionare un' **ID** nell'elenco a discesa.

   > [!TIP]
   > Il **delle proprietà** finestra contiene un pulsante di puntina da disegno nella barra del titolo e la selezione di questa Abilita o disabilita **Nascondi automaticamente** per la finestra. Per scorrere tutte le proprietà del pulsante della barra degli strumenti senza la necessità di riaprire le finestre delle proprietà singole, attivare **Nascondi automaticamente** disattivare in modo che il **proprietà** finestra rimanga fermo.

   È inoltre possibile modificare l'ID di comando dei pulsanti sulla barra degli strumenti di nuovo usando il [finestra proprietà](/visualstudio/ide/reference/properties-window).

### <a name="to-manage-toolbar-buttons"></a>Per gestire i pulsanti della barra degli strumenti

#### <a name="to-create-a-new-toolbar-button"></a>Per creare un nuovo pulsante della barra degli strumenti

1. In [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources) espandere la cartella delle risorse (ad esempio *Progetto1.rc*).

1. Espandere la **sulla barra degli strumenti** cartella e selezionare una barra degli strumenti per modificare, quindi eseguire una delle operazioni seguenti:

   - Assegnare un ID per il pulsante vuota all'estremità destra della barra degli strumenti. È possibile farlo modificando il **ID** proprietà di [finestra proprietà](/visualstudio/ide/reference/properties-window). Ad esempio, è possibile concedere lo stesso ID di un'opzione di menu di un pulsante della barra degli strumenti. In questo caso, utilizzare la casella di riepilogo a discesa per selezionare i **ID** dell'opzione di menu.

   - Selezionare il pulsante vuota all'estremità destra della barra degli strumenti nel **sulla barra degli strumenti visualizzazione** riquadro e iniziare a disegnare. Viene assegnato un ID di comando del pulsante predefinito (ID_BUTTON\<n >).

#### <a name="to-add-an-image-to-a-toolbar-as-a-button"></a>Per aggiungere un'immagine da una barra degli strumenti come un pulsante

1. Nelle [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources), aprire la barra degli strumenti facendovi doppio clic.

1. Successivamente, aprire l'immagine da aggiungere alla barra degli strumenti.

   > [!NOTE]
   > Se si apre l'immagine in Visual Studio, si aprirà nel **Editor di immagini**. È anche possibile aprire l'immagine in altri programmi di grafica.

1. Passare al menu di scelta **Edit** > **copia**.

1. Passare alla barra degli strumenti selezionando la scheda nella parte superiore della finestra di origine.

1. Passare al menu di scelta **Edit** > **Incolla**.

   L'immagine verrà visualizzato sulla barra degli strumenti come un nuovo pulsante.

#### <a name="to-move-a-toolbar-button"></a>Per spostare un pulsante della barra degli strumenti

Nel **sulla barra degli strumenti visualizzazione** riquadro, trascinare il pulsante che si desidera spostare nella nuova posizione sulla barra degli strumenti.

- Per copiare i pulsanti da una barra degli strumenti, tenere premuto il **Ctrl** chiave e il **Visualizza sulla barra degli strumenti** riquadro trascinare il pulsante a una nuova posizione sulla barra degli strumenti o in una posizione sulla barra degli strumenti un altro.

- Per eliminare un pulsante della barra degli strumenti, selezionare il pulsante della barra degli strumenti e trascinarla sulla barra degli strumenti.

- Per inserire o rimuovere lo spazio tra i pulsanti di una barra degli strumenti, ovvero trascinarli da o verso di loro sulla barra degli strumenti.

|Operazione|Passaggio|
|------|------|
|Per inserire uno spazio prima di un pulsante che non è seguito da uno spazio|Trascinare il pulsante a destra o verso il basso fino a quando non si sovrappone il pulsante Avanti a metà.|
|Inserisci uno spazio prima di un pulsante che è seguito da uno spazio e mantenere lo spazio finale|Trascinare il pulsante fino a quando il bordo destro o inferiore tocca il pulsante Avanti o semplicemente si sovrappone a.|
|Per inserire uno spazio prima di un pulsante che è seguito da uno spazio e chiudere lo spazio seguente|Trascinare il pulsante a destra o verso il basso fino a quando non si sovrappone il pulsante Avanti a metà.|
|Per rimuovere uno spazio tra i pulsanti di una barra degli strumenti|Trascinare il pulsante sul uno lato della spazio verso il pulsante su altro lato dello spazio fino a quando non si sovrappone a metà circa sul pulsante Avanti.|

> [!NOTE]
> Se non è disponibile spazio sul lato di pulsante che si sta trascinando lontani e si trascina il pulsante metà oltre il pulsante adiacente, il **sulla barra degli strumenti Editor** separandoli con uno spazio sul lato opposto del pulsante su cui si sta trascinando.

#### <a name="to-change-the-properties-of-a-toolbar-button"></a>Per modificare le proprietà di un pulsante della barra degli strumenti

1. In un progetto C++, selezionare il pulsante della barra degli strumenti.

1. Digitare il nuovo ID nel **ID** proprietà nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), o utilizzare l'elenco di riepilogo a discesa per selezionare un nuovo **ID**.

#### <a name="to-create-a-tool-tip-for-a-toolbar-button"></a>Per creare una descrizione comando per un pulsante della barra degli strumenti

1. Selezionare il pulsante della barra degli strumenti.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), nel **Chiedi conferma** campo, aggiungere una descrizione del pulsante della barra di stato e dopo che il messaggio, aggiungere `\n` e il nome della descrizione comandi.

Ad esempio, per visualizzare la descrizione comando per il **Print** sul pulsante **WordPad**:

1. Aprire **WordPad**.

1. Posizionare il puntatore del mouse sulle **Print** pulsante della barra degli strumenti e si noti che la parola `Print` ora è mobile sotto il puntatore del mouse.

1. Nella barra di stato in fondo il **WordPad** finestra e notare che viene ora visualizzato il testo `Prints the active document`.

`Print` è il nome della descrizione comandi e `Prints the active document` che rappresenta la descrizione del pulsante della barra di stato.

Se si desidera che questo effetto usando il **Editor barra degli strumenti**, impostare il **Chiedi conferma** proprietà `Prints the active document\nPrint`.

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)
<!--
[Menus and Other Resources](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)<br/>
[Toolbar Button Properties](../windows/toolbar-button-properties.md)<br/>-->
