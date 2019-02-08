---
title: Toolbar Editor (C++)
ms.date: 11/04/2016
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
ms.openlocfilehash: 61b4d3ba6fc70e78c6f794528822eb66fb94de7e
ms.sourcegitcommit: 5a7dbd640376e13379f5d5b2cf66c4842e5e737b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/08/2019
ms.locfileid: "55905784"
---
# <a name="toolbar-editor-c"></a>Toolbar Editor (C++)

Il **sulla barra degli strumenti** editor consente di creare le risorse della barra degli strumenti di C++ e convertire le bitmap in risorse della barra degli strumenti. Il **sulla barra degli strumenti** editor utilizza un'interfaccia grafica per visualizzare una barra degli strumenti e pulsanti che somigliano molto al modo in cui si otterranno in un'applicazione finita.

Il **sulla barra degli strumenti** finestra dell'editor Mostra due visualizzazioni di un'immagine del pulsante, quello utilizzato per la finestra editor di immagini. Una barra di divisione separa i due riquadri. che è possibile trascinare da un lato all'altro per modificare le dimensioni relative dei riquadri. Nel riquadro attivo viene visualizzato un bordo di selezione. Sopra le due visualizzazioni dell'immagine si trova la barra degli strumenti dell'oggetto.

![Toolbar Editor](../mfc/media/vctoolbareditor.gif "vcToolbarEditor") Toolbar Editor

Il **sulla barra degli strumenti** editor è simile al **immagine** editor delle funzionalità. Le voci di menu, gli strumenti grafici e griglia delle bitmap sono identici a quelli nel **immagine** editor. Un comando di menu non è il **immagine** menu consente di passare tra il **sulla barra degli strumenti** editor e la **immagine** editor. Per altre informazioni sull'uso di **grafica** sulla barra degli strumenti, **colori** tavolozza, o **immagine** menu, vedere [Editor di immagini](../windows/image-editor-for-icons.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

Con il **sulla barra degli strumenti** editor, è possibile:

## <a name="create-new-toolbars"></a>Creare nuove barre degli strumenti

1. Nelle **Resource** consente di visualizzare, fare doppio clic sul file RC, quindi scegliere **Aggiungi risorsa** dal menu di scelta rapida. (Se si dispone di una barra degli strumenti esistente nel file RC, è possibile semplicemente fare doppio clic il **sulla barra degli strumenti** cartella e selezionare **Inserisci sulla barra degli strumenti** dal menu di scelta rapida.)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel **Aggiungi risorsa** finestra di dialogo **sulla barra degli strumenti** nel **tipo di risorsa** elenco e quindi scegliere **New**.

   Se un segno più (**+**) visualizzato accanto al **sulla barra degli strumenti** tipo di risorsa, significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

## <a name="convert-bitmaps-to-toolbar-resources"></a>Convertire le bitmap in risorse della barra degli strumenti

È possibile creare una nuova barra degli strumenti in un progetto C++ mediante la conversione di una bitmap. L'immagine di bitmap converte le immagini del pulsante per una barra degli strumenti. La mappa di bit contiene in genere numerose immagini pulsante su una singola bitmap, con una sola immagine per ogni pulsante. Le immagini possono essere di qualsiasi dimensione come il valore predefinito è 16 pixel di larghezza e l'altezza dell'immagine. È possibile specificare le dimensioni delle immagini pulsante nel **nuova risorsa barra degli strumenti** finestra di dialogo quando si sceglie **sulla barra degli strumenti Editor** dal **immagine** menu mentre nell'editor di immagini.

Il **nuova risorsa barra degli strumenti** nella finestra di dialogo consente di specificare la larghezza e altezza dei pulsanti che si aggiunge a una risorsa barra degli strumenti in un progetto C++. Il valore predefinito è 16 x 15 pixel.

Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048. Pertanto, se si imposta la **larghezza del pulsante** a 512, è possibile avere solo quattro pulsanti. Se si imposta la larghezza su 513, si possono avere solo tre pulsanti.

La finestra di dialogo presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Larghezza del pulsante**|Fornisce uno spazio per l'utente a immettere la larghezza dei pulsanti della barra degli strumenti che si esegue la conversione da una risorsa della bitmap a una risorsa barra degli strumenti. Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).|
|**Altezza del pulsante**|Fornisce uno spazio per poter immettere l'altezza dei pulsanti della barra degli strumenti che si esegue la conversione da una risorsa della bitmap a una risorsa barra degli strumenti. Le immagini vengono ritagliate alla larghezza e altezza specificata e i colori vengono regolati per usare i colori della barra degli strumenti standard (16 colori).|

### <a name="to-convert-bitmaps-to-a-toolbar"></a>Per convertire le bitmap in una barra degli strumenti

1. Aprire una risorsa bitmap esistente nel [editor di immagini](../windows/image-editor-for-icons.md). (Se la bitmap non è già inclusa nel file RC, fare clic sul file RC, scegliere **importazione** dal menu di scelta rapida, passare alla bitmap da aggiungere al file RC e quindi selezionare **Open**.)

1. Dal **immagine** menu, scegliere **sulla barra degli strumenti Editor**.

   Il **nuova risorsa barra degli strumenti** verrà visualizzata la finestra di dialogo. È possibile modificare la larghezza e l'altezza delle immagini icona in modo che corrisponda il bitmap. L'immagine della barra degli strumenti viene quindi visualizzato nell'editor barra degli strumenti.

1. Per completare la conversione, modificare il comando **ID** del pulsante tramite il [finestra proprietà](/visualstudio/ide/reference/properties-window). Digitare il nuovo **ID** oppure selezionare un' **ID** nell'elenco a discesa.

   > [!TIP]
   > Il **proprietà** finestra contiene un pulsante di puntina da disegno nella barra del titolo. Selezionando questo pulsante Abilita o disabilita **Nascondi automaticamente** per la finestra. Per scorrere rapidamente tutte le proprietà del pulsante della barra degli strumenti senza la necessità di riaprire le finestre delle proprietà singole, attivare **Nascondi automaticamente** disattivare in modo che il **proprietà** finestra rimanga fermo.

È inoltre possibile modificare l'ID di comando dei pulsanti sulla barra degli strumenti di nuovo usando il [finestra proprietà](/visualstudio/ide/reference/properties-window).

## <a name="create-move-and-edit-toolbar-buttons"></a>Creare, spostare e modificare i pulsanti della barra degli strumenti

È facilmente possibile creare, spostare, copiare e modificare i pulsanti della barra degli strumenti.

Per impostazione predefinita, all'estremità destra della barra degli strumenti viene visualizzato un pulsante nuovo o vuoto. È possibile spostare questo pulsante prima di modificarlo. Quando si crea un nuovo pulsante, viene visualizzato un altro pulsante vuoto a destra del pulsante modificato. Quando si salva una barra degli strumenti, non viene salvato il pulsante vuoto.

Le proprietà di un pulsante della barra degli strumenti sono:

|Proprietà|Descrizione|
|--------------|-----------------|
|**ID**|Definisce l'ID del pulsante. L'elenco di elenco a discesa include common **ID** nomi.|
|**Width**|Imposta la larghezza del pulsante. è consigliabile 16 pixel.|
|**Height**|Imposta l'altezza del pulsante. L'altezza di un pulsante Modifica l'altezza di tutti i pulsanti sulla barra degli strumenti. impostazione consigliata è 15 pixel.|
|**Prompt**|Definisce il messaggio visualizzato nella barra di stato. Aggiunta di un nome e \n aggiunge una descrizione comandi al pulsante sulla barra degli strumenti. Per altre informazioni, vedere [creazione di una descrizione comando](../windows/creating-a-tool-tip-for-a-toolbar-button.md).|

**Larghezza** e **altezza** si applicano a tutti i pulsanti. Una mappa di bit viene usata per creare una barra degli strumenti ha una larghezza massima di 2048. Pertanto, se si imposta la larghezza del pulsante su 512, è possibile avere solo quattro pulsanti e se si imposta la larghezza su 513, si possono avere solo tre pulsanti.

Vedere le azioni seguenti:

### <a name="to-create-a-new-toolbar-button"></a>Per creare un nuovo pulsante della barra degli strumenti

1. Nel [visualizzazione di risorse](../windows/resource-view-window.md) espandere la cartella delle risorse (ad esempio *Progetto1.rc*).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Espandere la **sulla barra degli strumenti** cartella e selezionare una barra degli strumenti di modifica.

1. Assegnare un ID per il pulsante vuota all'estremità destra della barra degli strumenti. È possibile farlo modificando il **ID** proprietà di [finestra proprietà](/visualstudio/ide/reference/properties-window). Ad esempio, è possibile concedere lo stesso ID di un'opzione di menu di un pulsante della barra degli strumenti. In questo caso, utilizzare la casella di riepilogo a discesa per selezionare i **ID** dell'opzione di menu.

   -oppure-

   Selezionare il pulsante vuota all'estremità destra della barra degli strumenti (nelle **sulla barra degli strumenti visualizzazione** riquadro) e iniziare a disegnare. Viene assegnato un ID di comando del pulsante predefinito (ID_BUTTON\<n >).

È anche possibile copiare e incollare un'immagine a una barra degli strumenti come un nuovo pulsante.

### <a name="to-add-an-image-to-a-toolbar-as-a-button"></a>Per aggiungere un'immagine da una barra degli strumenti come un pulsante

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), aprire la barra degli strumenti facendovi doppio clic.

1. Successivamente, aprire l'immagine da aggiungere alla barra degli strumenti.

   > [!NOTE]
   > Se si apre l'immagine in Visual Studio, si aprirà nel **immagine** editor. È anche possibile aprire l'immagine in altri programmi di grafica.

1. Dal **Edit** menu, scegliere **copia**.

1. Passare alla barra degli strumenti selezionando la scheda nella parte superiore della finestra di origine.

1. Dal **Edit** menu, scegliere **Incolla**.

   L'immagine verrà visualizzato sulla barra degli strumenti come un nuovo pulsante.

### <a name="to-move-a-toolbar-button"></a>Per spostare un pulsante della barra degli strumenti

Nel **sulla barra degli strumenti visualizzazione** riquadro, trascinare il pulsante che si desidera spostare nella nuova posizione sulla barra degli strumenti.

### <a name="to-copy-buttons-from-a-toolbar"></a>Per copiare i pulsanti da una barra degli strumenti

1. Tenere premuto il **Ctrl** chiave.

1. Nel **sulla barra degli strumenti visualizzazione** riquadro, trascinare il pulsante a una nuova posizione sulla barra degli strumenti o in una posizione sulla barra degli strumenti un altro.

### <a name="to-delete-a-toolbar-button"></a>Per eliminare un pulsante della barra degli strumenti

Selezionare il pulsante della barra degli strumenti e trascinarla sulla barra degli strumenti.

### <a name="to-insert-or-remove-space-between-buttons-on-a-toolbar"></a>Per inserire o rimuovere lo spazio tra i pulsanti di una barra degli strumenti

In generale, per inserire uno spazio tra i pulsanti, trascinarli uno da altro sulla barra degli strumenti. Per rimuovere gli spazi, trascinarli nei confronti tra loro.

|Operazione|Passaggio|
|------|------|
|Per inserire uno spazio prima di un pulsante che non è seguito da uno spazio|Trascinare il pulsante a destra o verso il basso fino a quando non si sovrappone il pulsante Avanti a metà.|
|Inserisci uno spazio prima di un pulsante che è seguito da uno spazio e mantenere lo spazio finale|Trascinare il pulsante fino a quando il bordo destro o inferiore tocca il pulsante Avanti o semplicemente si sovrappone a.|
|Per inserire uno spazio prima di un pulsante che è seguito da uno spazio e chiudere lo spazio seguente|Trascinare il pulsante a destra o verso il basso fino a quando non si sovrappone il pulsante Avanti a metà.|
|Per rimuovere uno spazio tra i pulsanti di una barra degli strumenti|Trascinare il pulsante sul uno lato della spazio verso il pulsante su altro lato dello spazio fino a quando non si sovrappone a metà circa sul pulsante Avanti.|

> [!NOTE]
> Se non è disponibile spazio sul lato di pulsante che si sta trascinando lontani e si trascina il pulsante metà oltre il pulsante adiacente, il **sulla barra degli strumenti** editor inserisce anche uno spazio sul lato opposto del pulsante su cui si è il trascinamento.

### <a name="to-change-the-properties-of-a-toolbar-button"></a>Per modificare le proprietà di un pulsante della barra degli strumenti

1. In un progetto C++, selezionare il pulsante della barra degli strumenti.

1. Digitare il nuovo ID nel **ID** proprietà nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), o utilizzare l'elenco di riepilogo a discesa per selezionare un nuovo **ID**.

### <a name="to-create-a-tool-tip-for-a-toolbar-button"></a>Per creare una descrizione comando per un pulsante della barra degli strumenti

1. Selezionare il pulsante della barra degli strumenti.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), nella **dei messaggi di richiesta** campo della proprietà, aggiungere una descrizione del pulsante per la barra di stato; dopo il messaggio, aggiungere `\n` e il nome della descrizione comandi.

Un esempio comune di una descrizione comando è il **Print** sul pulsante **WordPad**:

1. Aprire **WordPad**.

1. Posizionare il puntatore del mouse sulle **stampa** pulsante della barra degli strumenti.

1. Si noti che la parola `Print` ora è mobile sotto il puntatore del mouse.

1. Nella barra di stato (nella parte inferiore della **WordPad** finestra)-si noti che viene ora visualizzato il testo `Prints the active document`.

Il `Print` nel **passaggio 3** è il "nome della descrizione comandi," e il `Prints the active document` dalla **passaggio 4** "descrizione del pulsante della barra di stato".

Se si desidera che questo effetto usando il **sulla barra degli strumenti** editor, si imposta la **dei messaggi di richiesta** proprietà `Prints the active document\nPrint`.

> [!NOTE]
> È possibile modificare il testo del messaggio utilizzando la [finestra proprietà](/visualstudio/ide/reference/properties-window).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Menu e altre risorse](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)<br/>
[Proprietà dei pulsanti della barra degli strumenti](../windows/toolbar-button-properties.md)<br/>
