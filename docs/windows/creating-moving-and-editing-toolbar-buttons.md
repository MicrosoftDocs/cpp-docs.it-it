---
title: Creazione, lo spostamento e modifica dei pulsanti della barra degli strumenti (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.toolbar
helpviewer_keywords:
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
ms.assetid: d0f0c6c6-9d7e-42b5-a86a-7558127386e7
ms.openlocfilehash: 2a67123e444ad208eaae74a24b72288f2dbb3bdb
ms.sourcegitcommit: 52c05e10b503e834c443ef11e7ca1987e332f876
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2019
ms.locfileid: "55742700"
---
# <a name="creating-moving-and-editing-toolbar-buttons-c"></a>Creazione, lo spostamento e modifica dei pulsanti della barra degli strumenti (C++)

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

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

Vedere le azioni seguenti:

## <a name="to-create-a-new-toolbar-button"></a>Per creare un nuovo pulsante della barra degli strumenti

1. Nel [visualizzazione di risorse](../windows/resource-view-window.md) espandere la cartella delle risorse (ad esempio *Progetto1.rc*).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Espandere la **sulla barra degli strumenti** cartella e selezionare una barra degli strumenti di modifica.

1. Assegnare un ID per il pulsante vuota all'estremità destra della barra degli strumenti. È possibile farlo modificando il **ID** proprietà di [finestra proprietà](/visualstudio/ide/reference/properties-window). Ad esempio, è possibile concedere lo stesso ID di un'opzione di menu di un pulsante della barra degli strumenti. In questo caso, utilizzare la casella di riepilogo a discesa per selezionare i **ID** dell'opzione di menu.

   -oppure-

   Selezionare il pulsante vuota all'estremità destra della barra degli strumenti (nelle **sulla barra degli strumenti visualizzazione** riquadro) e iniziare a disegnare. Viene assegnato un ID di comando del pulsante predefinito (ID_BUTTON\<n >).

È anche possibile copiare e incollare un'immagine a una barra degli strumenti come un nuovo pulsante.

## <a name="to-add-an-image-to-a-toolbar-as-a-button"></a>Per aggiungere un'immagine da una barra degli strumenti come un pulsante

1. Nelle [visualizzazione risorse](../windows/resource-view-window.md), aprire la barra degli strumenti facendovi doppio clic.

1. Successivamente, aprire l'immagine da aggiungere alla barra degli strumenti.

   > [!NOTE]
   > Se si apre l'immagine in Visual Studio, si aprirà nel **immagine** editor. È anche possibile aprire l'immagine in altri programmi di grafica.

1. Dal **Edit** menu, scegliere **copia**.

1. Passare alla barra degli strumenti selezionando la scheda nella parte superiore della finestra di origine.

1. Dal **Edit** menu, scegliere **Incolla**.

   L'immagine verrà visualizzato sulla barra degli strumenti come un nuovo pulsante.

## <a name="to-move-a-toolbar-button"></a>Per spostare un pulsante della barra degli strumenti

Nel **sulla barra degli strumenti visualizzazione** riquadro, trascinare il pulsante che si desidera spostare nella nuova posizione sulla barra degli strumenti.

## <a name="to-copy-buttons-from-a-toolbar"></a>Per copiare i pulsanti da una barra degli strumenti

1. Tenere premuto il **Ctrl** chiave.

1. Nel **sulla barra degli strumenti visualizzazione** riquadro, trascinare il pulsante a una nuova posizione sulla barra degli strumenti o in una posizione sulla barra degli strumenti un altro.

## <a name="to-delete-a-toolbar-button"></a>Per eliminare un pulsante della barra degli strumenti

Selezionare il pulsante della barra degli strumenti e trascinarla sulla barra degli strumenti.

## <a name="to-insert-or-remove-space-between-buttons-on-a-toolbar"></a>Per inserire o rimuovere lo spazio tra i pulsanti di una barra degli strumenti

In generale, per inserire uno spazio tra i pulsanti, trascinarli uno da altro sulla barra degli strumenti. Per rimuovere gli spazi, trascinarli nei confronti tra loro.

### <a name="to-insert-a-space-before-a-button-that-isnt-followed-by-a-space"></a>Per inserire uno spazio prima di un pulsante che non è seguito da uno spazio

Trascinare il pulsante a destra o verso il basso fino a quando non si sovrappone il pulsante Avanti a metà.

### <a name="to-insert-a-space-before-a-button-that-is-followed-by-a-space-and-to-keep-the-trailing-space"></a>Inserisci uno spazio prima di un pulsante che è seguito da uno spazio e mantenere lo spazio finale

Trascinare il pulsante fino a quando il bordo destro o inferiore tocca il pulsante Avanti o semplicemente si sovrappone a.

### <a name="to-insert-a-space-before-a-button-that-is-followed-by-a-space-and-close-up-that-following-space"></a>Per inserire uno spazio prima di un pulsante che è seguito da uno spazio e chiudere lo spazio seguente

Trascinare il pulsante a destra o verso il basso fino a quando non si sovrappone il pulsante Avanti a metà.

### <a name="to-remove-a-space-between-buttons-on-a-toolbar"></a>Per rimuovere uno spazio tra i pulsanti di una barra degli strumenti

Trascinare il pulsante sul uno lato della spazio verso il pulsante su altro lato dello spazio fino a quando non si sovrappone a metà circa sul pulsante Avanti.

   Se non è disponibile spazio sul lato di pulsante che si sta trascinando lontani e si trascina il pulsante metà oltre il pulsante adiacente, il **sulla barra degli strumenti** editor inserisce anche uno spazio sul lato opposto del pulsante su cui si è il trascinamento.

## <a name="to-change-the-properties-of-a-toolbar-button"></a>Per modificare le proprietà di un pulsante della barra degli strumenti

1. In un progetto C++, selezionare il pulsante della barra degli strumenti.

1. Digitare il nuovo ID nel **ID** proprietà nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), o utilizzare l'elenco di riepilogo a discesa per selezionare un nuovo **ID**.

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Editor barra degli strumenti](../windows/toolbar-editor.md)
