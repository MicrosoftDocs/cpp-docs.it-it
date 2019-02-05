---
title: Visualizzazione e modifica di risorse in un Editor di risorse (C++)
ms.date: 11/04/2016
f1_keywords:
- vs.resourceview
- vc.resvw.resource.previewing
- vs.resvw.resource.previewing
helpviewer_keywords:
- resources [C++], viewing
- layouts, previewing resource
- resource editors [C++], viewing resources
- .rc files [C++], viewing resources
- resources [C++], editing
- properties [C++], resources
- resources [C++], properties
ms.assetid: ba8bdc07-3f60-43c7-aa5c-d5dd11f0966e
ms.openlocfilehash: 02ab58d37f3f188c3d65740b218cb9b2ac799714
ms.sourcegitcommit: 52c05e10b503e834c443ef11e7ca1987e332f876
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/05/2019
ms.locfileid: "55742661"
---
# <a name="viewing-and-editing-resources-in-a-resource-editor-c"></a>Visualizzazione e modifica di risorse in un Editor di risorse (C++)

Ogni tipo di risorsa è un **risorsa** editor specifici di quel tipo di risorsa. È possibile ridisporre, ridimensionare, aggiungere controlli e funzionalità o in caso contrario, modificare alcuni aspetti di una risorsa tramite l'editor associato. È anche possibile modificare una risorsa in [formato di testo](../windows/how-to-open-a-resource-script-file-in-text-format.md) e [formato binario](../windows/opening-a-resource-for-binary-editing.md).

Alcuni tipi di risorse sono i singoli file che possono essere importati e usati in diversi modi. Queste includono le bitmap, icone, cursori, barre degli strumenti e i file html. Tali risorse hanno nomi di file e [identificatori di risorsa](../windows/symbols-resource-identifiers.md). Altri, ad esempio le finestre di dialogo, menu e le tabelle di stringhe in progetti Win32, esiste solo come parte di un file di risorse (RC) o un file modello (con estensione rct) di risorse.

> [!NOTE]
> Proprietà di una risorsa [può essere modificato utilizzando la finestra proprietà](../windows/changing-the-properties-of-a-resource.md).

## <a name="win32-resources"></a>Risorse Win32

È possibile accedere alle risorse Win32 nel [visualizzazione risorse](../windows/resource-view-window.md) riquadro.

### <a name="to-view-a-win32-resource-in-a-resource-editor"></a>Per visualizzare una risorsa Win32 in un editor di risorse

1. Selezionare **visualizzazione di risorse** dalle **visualizzazione** menu.

1. Se il **visualizzazione di risorse** finestra non è la finestra in primo piano, seleziona la **visualizzazione risorse** pressione di tab per attivare la modalità nella parte superiore.

1. Dal **visualizzazione risorse**, espandere la cartella del progetto che contiene le risorse che si desidera visualizzare. Ad esempio, se si desidera visualizzare una risorsa finestra di dialogo, espandere la **dialogo** cartella.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Fare doppio clic sulla risorsa, ad esempio, **IDD_ABOUTBOX**.

   La risorsa viene visualizzata nell'editor appropriato. Ad esempio, per le risorse finestra di dialogo, la risorsa viene aperta la **dialogo** editor.

   È anche possibile [visualizzare le risorse in un file RC (script di risorsa) senza un progetto aperto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

### <a name="to-delete-an-existing-win-32-resource"></a>Per eliminare una risorsa esistente di Win 32

1. Nelle **visualizzazione risorse**, espandere il nodo per un tipo di risorsa.

2. Pulsante destro del mouse sulla risorsa di cui si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.

   > [!NOTE]
   > È possibile eliminare una risorsa con lo stesso comando di menu di scelta rapida quando il file RC sono aperti in una finestra del documento all'esterno di un progetto.

## <a name="resources-in-managed-projects"></a>Risorse nei progetti gestiti

Poiché i progetti gestiti non usano i file di script di risorsa, è necessario aprire le risorse dal **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. L'editor di risorse di Visual Studio non supporta la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

### <a name="to-view-a-managed-resource-in-a-resource-editor"></a>Per visualizzare una risorsa gestita in un editor di risorse

Nelle **Esplora soluzioni**, fare doppio clic sulla risorsa, ad esempio **BITMAP1**.

   La risorsa viene visualizzata nell'editor appropriato.

### <a name="to-delete-an-existing-managed-resource"></a>Per eliminare una risorsa gestita esistente

Nelle **Esplora soluzioni**, fare doppio clic la risorsa che si desidera eliminare, quindi scegliere **eliminare** dal menu di scelta rapida.

## <a name="changing-the-properties-of-resources"></a>Modifica delle proprietà delle risorse

### <a name="to-edit-the-properties-of-a-resource"></a>Per modificare le proprietà di una risorsa

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic la risorsa che si desidera modificare e scegliere **proprietà** dal menu di scelta rapida.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), modificare le proprietà della risorsa.

### <a name="to-undo-a-change-made-to-the-properties-of-a-resource"></a>Per annullare una modifica apportata alle proprietà di una risorsa

1. Assicurarsi che la risorsa abbia lo stato attivo **visualizzazione risorse**.

1. Scegli **annullare** dal **modificare** menu.

## <a name="previewing-resources"></a>Anteprima delle risorse

Visualizzare in anteprima le risorse per consentire di visualizzare le risorse grafiche senza aprirle. La visualizzazione in anteprima è utile per gli eseguibili anche dopo aver compilato li perché gli identificatori di risorsa cambia in numeri. Poiché questi identificatori numerici spesso non forniscono informazioni sufficienti, la visualizzazione in anteprima le risorse consente di identificare rapidamente li.

È possibile visualizzare in anteprima il layout visivo dei seguenti tipi di risorse:

- Bitmap

- Finestra di dialogo

- Icona

- Menu

- Cursore

- ToolBar

La funzione di anteprima non è applicabile alle risorse tasto di scelta rapida, manifesto, tabella di stringhe e le informazioni sulla versione.

### <a name="to-preview-resources"></a>Per visualizzare in anteprima le risorse

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md) o una finestra del documento, selezionare la risorsa, ad esempio **IDD_ABOUTBOX**.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), selezionare la **pagine delle proprietà** pulsante.

   \- oppure -

   Nel **View** dal menu **pagine delle proprietà**.

   Il **pagina delle proprietà** per la risorsa viene visualizzata un'anteprima di tale risorsa. È quindi possibile usare la **iscrizione** e **verso il basso** tasti di direzione per esplorare l'albero controllano **visualizzazione risorse** o finestra del documento. Il **pagina delle proprietà** verrà rimangono aperti e visualizzare qualsiasi risorsa che ha lo stato attivo e può essere visualizzato in anteprima.

> [!NOTE]
> Per visualizzare in anteprima le risorse richiede Win32.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Procedura: Aprire un file script di risorsa all'esterno di un progetto (file autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)<br/>
[Editor di risorse](../windows/resource-editors.md)