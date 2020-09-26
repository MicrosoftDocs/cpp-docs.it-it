---
title: Editor barra degli strumenti (C++)
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
ms.openlocfilehash: ca7f031cbdcfc3378a0917e84b257fd7212563e1
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91353025"
---
# <a name="toolbar-editor-c"></a>Editor barra degli strumenti (C++)

L' **Editor barra degli** strumenti consente di creare risorse della barra degli strumenti e convertire le bitmap in risorse della barra degli strumenti. Nell' **Editor barra degli strumenti** viene utilizzata una visualizzazione grafica per visualizzare una barra degli strumenti e i pulsanti che somigliano molto a quelli che verranno esaminati in un'applicazione completata.

La finestra dell' **Editor della barra degli strumenti** Mostra due visualizzazioni di un'immagine del pulsante, come la finestra dell' **editor di immagini** . Una barra di divisione separa i due riquadri ed è possibile trascinare la barra di divisione da un lato all'altro per modificare le dimensioni relative dei riquadri. Nel riquadro attivo viene visualizzato un bordo di selezione e sopra le due visualizzazioni dell'immagine si trova la barra degli strumenti dell'oggetto.

![Editor barra degli strumenti](../mfc/media/vctoolbareditor.gif "vcToolbarEditor")<br/>
**Editor barra degli strumenti**

L' **Editor barra degli strumenti** è analogo all' **editor di immagini** in funzionalità e le voci di menu, gli strumenti grafici e la griglia bitmap tra i due sono uguali. Nel menu **immagine** è presente un comando di menu che consente di spostarsi tra l' **Editor della barra degli strumenti** e l' **editor di immagini**. Per ulteriori informazioni sull'utilizzo della barra degli strumenti **grafica** , della tavolozza dei **colori** o del menu **immagine** , vedere [editor di immagini](../windows/image-editor-for-icons.md).

È possibile creare una nuova barra degli strumenti in un progetto C++ convertendo una bitmap. Il grafico della bitmap converte le immagini dei pulsanti di una barra degli strumenti. In genere la bitmap contiene diverse immagini dei pulsanti in una singola bitmap, con un'immagine per ogni pulsante. Le immagini possono essere di qualsiasi dimensione, perché il valore predefinito è 16 pixel di larghezza e l'altezza dell'immagine. È possibile specificare la dimensione delle immagini dei pulsanti nella finestra di dialogo **nuova risorsa barra degli strumenti** quando si sceglie **Editor barra degli strumenti** dal menu **immagine** , mentre nell' **editor di immagini**.

La finestra di dialogo **nuova risorsa barra degli strumenti** consente di specificare la larghezza e l'altezza dei pulsanti aggiunti a una risorsa barra degli strumenti in un progetto C++. Il valore predefinito è 16 × 15 pixel.

Una bitmap utilizzata per creare una barra degli strumenti ha una larghezza massima di 2048, pertanto se si imposta la **larghezza del pulsante** su *512*, è possibile avere solo quattro pulsanti. Se si imposta la larghezza su *513*, è possibile avere solo tre pulsanti.

La finestra di dialogo **nuova risorsa barra degli strumenti** presenta le proprietà seguenti:

|Proprietà|Descrizione|
|---|---------------|
|**Larghezza pulsante**|Fornisce uno spazio per immettere la larghezza dei pulsanti della barra degli strumenti che si sta convertendo da una risorsa bitmap a una risorsa della barra degli strumenti.|
|**Altezza pulsante**|Consente di immettere l'altezza per i pulsanti della barra degli strumenti che si sta convertendo da una risorsa bitmap a una risorsa della barra degli strumenti.|

> [!NOTE]
> Le immagini vengono ritagliate in base alla larghezza e all'altezza specificate e i colori vengono adattati per l'utilizzo dei colori della barra degli strumenti standard (16 colori).

Per impostazione predefinita, un pulsante nuovo o vuoto viene visualizzato all'estremità destra della barra degli strumenti. È possibile spostare questo pulsante prima di modificarlo. Quando si crea un nuovo pulsante, viene visualizzato un altro pulsante vuoto a destra del pulsante modificato. Quando si salva una barra degli strumenti, il pulsante vuoto non viene salvato.

Un pulsante della barra degli strumenti presenta le proprietà seguenti:

|Proprietà|Descrizione|
|--------------|-----------------|
|**ID**|Definisce l'ID per il pulsante. L'elenco a discesa fornisce i nomi di **ID** comuni.|
|**Larghezza**|Imposta la larghezza del pulsante. è consigliabile usare 16 pixel.|
|**Altezza**|Imposta l'altezza del pulsante. L'altezza di un pulsante modifica l'altezza di tutti i pulsanti sulla barra degli strumenti. è consigliabile usare 15 pixel.|
|**Messaggio di richiesta**|Definisce il messaggio visualizzato nella barra di stato. L'aggiunta di *\n* e di un nome aggiunge una **Descrizione comando** al pulsante della barra degli strumenti. Per ulteriori informazioni, vedere [per creare una descrizione comando per un pulsante della barra degli strumenti](#to-create-a-tool-tip-for-a-toolbar-button).|

**Larghezza** e **altezza** si applicano a tutti i pulsanti. Una bitmap utilizzata per creare una barra degli strumenti ha una larghezza massima di 2048, pertanto se si imposta la larghezza del pulsante su *512*, è possibile disporre solo di quattro pulsanti e se si imposta la larghezza su *513*, è possibile avere solo tre pulsanti.

## <a name="how-to"></a>Procedure

L' **Editor barra degli strumenti** consente di:

### <a name="to-create-new-toolbars"></a>Per creare nuove barre degli strumenti

1. In **visualizzazione risorse**fare clic con il pulsante destro del mouse sul file *RC* e scegliere **Aggiungi risorsa**. Se si dispone di una barra degli strumenti esistente nel file *RC* , è possibile fare clic con il pulsante destro del mouse sulla cartella della **barra degli strumenti** e scegliere **Inserisci barra degli**strumenti.

1. Nella finestra di dialogo **Aggiungi risorsa** selezionare **barra degli strumenti** nell'elenco **tipo di risorsa** , quindi scegliere **nuovo**.

   Se viene visualizzato un segno più ( **+** ) accanto al tipo di risorsa della **barra degli strumenti** , significa che sono disponibili i modelli della barra degli strumenti. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **nuovo**.

### <a name="to-convert-bitmaps-to-toolbar-resources"></a>Per convertire le bitmap in risorse della barra degli strumenti

1. Aprire una risorsa bitmap esistente nell' [editor di immagini](../windows/image-editor-for-icons.md). Se la bitmap non è già presente nel file *RC* , fare clic con il pulsante destro del mouse sul file *RC* e scegliere **Importa**, quindi passare alla bitmap che si desidera aggiungere al file *RC* e selezionare **Apri**.

1. Passare all' **Image**  >  **Editor della barra degli strumenti**dell'immagine del menu.

   Verrà visualizzata la finestra di dialogo **nuova risorsa barra degli strumenti** . È possibile modificare la larghezza e l'altezza delle immagini dell'icona in modo che corrispondano alla bitmap. L'immagine della barra degli strumenti viene quindi visualizzata nell' **Editor della barra degli strumenti**.

1. Per completare la conversione, modificare l' **ID** comando del pulsante usando il [finestra Proprietà](/visualstudio/ide/reference/properties-window). Digitare il nuovo *ID* o selezionare un **ID** nell'elenco a discesa.

   > [!TIP]
   > La finestra **Proprietà** contiene un pulsante con la puntina da disegno sulla barra del titolo e selezionando questa impostazione Abilita o Disabilita **Nascondi automaticamente** per la finestra. Per scorrere tutte le proprietà dei pulsanti della barra degli strumenti senza dover riaprire le singole finestre delle proprietà, disattivare **Nascondi automaticamente** in modo che la finestra **Proprietà** rimanga stazionario.

   È anche possibile modificare gli ID di comando dei pulsanti sulla nuova barra degli strumenti usando il [finestra Proprietà](/visualstudio/ide/reference/properties-window).

### <a name="to-manage-toolbar-buttons"></a>Per gestire i pulsanti della barra degli strumenti

#### <a name="to-create-a-new-toolbar-button"></a>Per creare un nuovo pulsante della barra degli strumenti

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) espandere la cartella delle risorse (ad esempio, *Project1. RC*).

1. Espandere la cartella della **barra degli strumenti** e selezionare una barra degli strumenti da modificare, quindi eseguire una delle operazioni seguenti:

   - Assegnare un ID al pulsante vuoto all'estremità destra della barra degli strumenti. Questa operazione può essere eseguita modificando la proprietà **ID** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window). Ad esempio, è possibile assegnare a un pulsante della barra degli strumenti lo stesso ID di un'opzione di menu. In questo caso, utilizzare la casella di riepilogo a discesa per selezionare l' **ID** dell'opzione di menu.

   - Selezionare il pulsante vuoto nell'estremità destra della barra degli strumenti nel riquadro di **visualizzazione della barra degli strumenti** e iniziare il disegno. Viene assegnato un ID di comando del pulsante predefinito (ID_BUTTON \<n> ).

#### <a name="to-add-an-image-to-a-toolbar-as-a-button"></a>Per aggiungere un'immagine a una barra degli strumenti come pulsante

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)aprire la barra degli strumenti facendo doppio clic su di essa.

1. Quindi, aprire l'immagine che si vuole aggiungere alla barra degli strumenti.

   > [!NOTE]
   > Se si apre l'immagine in Visual Studio, questa verrà aperta nell' **editor di immagini**. È anche possibile aprire l'immagine in altri programmi grafici.

1. Vai a menu **modifica**  >  **copia**.

1. Passare alla barra degli strumenti selezionando la relativa scheda nella parte superiore della finestra di origine.

1. Vai a menu **modifica**  >  **Incolla**.

   L'immagine verrà visualizzata nella barra degli strumenti come pulsante nuovo.

#### <a name="to-move-a-toolbar-button"></a>Per spostare un pulsante della barra degli strumenti

Nel riquadro **visualizzazione barra degli strumenti** trascinare il pulsante che si desidera spostare nella nuova posizione sulla barra degli strumenti.

- Per copiare i pulsanti da una barra degli strumenti, tenere premuto il tasto **CTRL** e nel riquadro **visualizzazione barra degli** strumenti trascinare il pulsante nella nuova posizione sulla barra degli strumenti o in una posizione su un'altra barra degli strumenti.

- Per eliminare un pulsante della barra degli strumenti, selezionare il pulsante della barra degli strumenti e trascinarlo sulla barra degli strumenti.

- Per inserire o rimuovere spazio tra i pulsanti di una barra degli strumenti, trascinarli da o verso un altro sulla barra degli strumenti.

|Action|Passaggio|
|------|------|
|Per inserire uno spazio prima di un pulsante non seguito da uno spazio|Trascinare il pulsante a destra o a sinistra fino a quando non si sovrappone al pulsante avanti circa la metà.|
|Per inserire uno spazio prima di un pulsante seguito da uno spazio e per il mantenimento dello spazio finale|Trascinare il pulsante finché il bordo destro o inferiore sta semplicemente toccando il pulsante avanti o semplicemente si sovrappone.|
|Per inserire uno spazio prima di un pulsante seguito da uno spazio e chiudere lo spazio seguente|Trascinare il pulsante a destra o a sinistra fino a quando non si sovrappone al pulsante avanti circa la metà.|
|Per rimuovere uno spazio tra i pulsanti di una barra degli strumenti|Trascinare il pulsante su un lato dello spazio verso il pulsante sull'altro lato dello spazio fino a quando non si sovrappone al pulsante avanti circa la metà.|

> [!NOTE]
> Se non è presente alcuno spazio sul lato del pulsante da cui si trascina il mouse e si trascina il pulsante più a metà oltre il pulsante adiacente, l'editor della **barra degli strumenti** inserisce uno spazio sul lato opposto del pulsante che si sta trascinando.

#### <a name="to-change-the-properties-of-a-toolbar-button"></a>Per modificare le proprietà di un pulsante della barra degli strumenti

1. In un progetto C++ selezionare il pulsante della barra degli strumenti.

1. Digitare il nuovo ID nella proprietà **ID** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)oppure utilizzare l'elenco a discesa per selezionare un nuovo **ID**.

#### <a name="to-create-a-tool-tip-for-a-toolbar-button"></a>Per creare una descrizione comando per un pulsante della barra degli strumenti

1. Selezionare il pulsante della barra degli strumenti.

1. Nel campo **prompt** della [finestra Proprietà](/visualstudio/ide/reference/properties-window)aggiungere una descrizione del pulsante per la barra di stato e, dopo il messaggio, aggiungere `\n` e il nome della descrizione comando.

Ad esempio, per visualizzare la descrizione comando per il pulsante **stampa** in **WordPad**:

1. Aprire **WordPad**.

1. Posizionare il puntatore del mouse sul pulsante della barra degli strumenti **stampa** e notare che la parola `Print` ora è mobile sotto il puntatore del mouse.

1. Osservare la barra di stato nella parte inferiore della finestra di **WordPad** e notare che ora viene visualizzato il testo `Prints the active document` .

`Print` è il nome della descrizione comando e `Prints the active document` è la descrizione del pulsante per la barra di stato.

Se si vuole questo effetto usando l' **Editor della barra degli strumenti**, impostare la proprietà **prompt** su `Prints the active document\nPrint` .

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Editor](../windows/resource-editors.md) 
 di risorse [Menu e altre risorse](/windows/win32/menurc/resources)<br/>
[Proprietà dei pulsanti della barra degli strumenti](../windows/toolbar-button-properties.md)<br/>
