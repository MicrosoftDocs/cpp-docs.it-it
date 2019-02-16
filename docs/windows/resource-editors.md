---
title: Editor di risorse (C++)
ms.date: 02/14/2019
f1_keywords:
- vs.editors.resource
- vc.resvw.resource.editors
- vs.resvw.resource.editors
- vs.resourceview
- vc.resvw.resource.previewing
- vs.resvw.resource.previewing
helpviewer_keywords:
- editors [C++], resource
- editors [C++]
- resource editors
- Windows [C++], application resource editing
- resources [C++], viewing
- layouts, previewing resource
- resource editors [C++], viewing resources
- .rc files [C++], viewing resources
- resources [C++], editing
- properties [C++], resources
- resources [C++], properties
ms.assetid: e20a29ec-d6fb-4ead-98f3-431a0e23aaaf
ms.openlocfilehash: aeeca87ceb5b2c5e54da7087b5020ccbc1c39039
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320809"
---
# <a name="resource-editors-c"></a>Editor di risorse (C++)

Oggetto **risorsa** editor è un ambiente specializzato per la creazione o modifica le risorse incluse in un progetto di Visual Studio. Gli editor di risorse di Visual Studio condividono tecniche e interfacce in modo da semplificare e velocizzare la creazione e la modifica delle risorse delle applicazioni. Editor di risorse consentono di visualizzare e modificare risorse nell'editor e anteprima risorse appropriate.

Quando si crea o si apre una risorsa, si apre automaticamente l'editor appropriato.

> [!NOTE]
> Perché i progetti gestiti non usano i file di script di risorsa, è necessario aprire le risorse dal **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

|Usare|Per modificare|
|----------------|----------------|
|[Editor tasti di scelta rapida](../windows/accelerator-editor.md)|Tabelle dei tasti di scelta rapida in progetti Visual C++.|
|[Binary Editor](binary-editor.md)|Informazioni sui dati binari e risorse personalizzate in progetti Visual C++, Visual Basic o Visual C#.|
|[Editor finestre](../windows/dialog-editor.md)|Finestre di dialogo nei progetti di Visual C++.|
|[Image Editor](../windows/image-editor-for-icons.md)|Bitmap, icone, cursori e altri file di immagine in progetti Visual C++, Visual Basic o Visual C#.|
|[Editor dei menu](../windows/menu-editor.md)|Risorse menu in progetti Visual C++.|
|[Editor barra multifunzione](../mfc/ribbon-designer-mfc.md)|Risorse della barra multifunzione in progetti MFC.|
|[Editor stringhe](../windows/string-editor.md)|Tabelle di stringhe in progetti Visual C++.|
|[Editor barra degli strumenti](../windows/toolbar-editor.md)|Risorse della barra degli strumenti in progetti Visual C++. L'editor barra degli strumenti fa parte dell'Editor immagini.|
|[Editor di informazioni sulla versione](../windows/version-information-editor.md)|Informazioni sulla versione in progetti Visual C++.|

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

## <a name="view-and-edit-resources"></a>Visualizzazione e modifica risorse

Ogni tipo di risorsa è un **risorsa** editor specifici di quel tipo di risorsa. È possibile ridisporre, ridimensionare, aggiungere controlli e funzionalità o in caso contrario, modificare alcuni aspetti di una risorsa tramite l'editor associato. È anche possibile modificare una risorsa in [formato di testo](../windows/how-to-open-a-resource-script-file-in-text-format.md) e [formato binario](../windows/opening-a-resource-for-binary-editing.md).

Alcuni tipi di risorse sono i singoli file che possono essere importati e usati in diversi modi. Queste includono le bitmap, icone, cursori, barre degli strumenti e i file html. Tali risorse hanno nomi di file e [identificatori di risorsa](../windows/symbols-resource-identifiers.md). Altri, ad esempio le finestre di dialogo, menu e le tabelle di stringhe in progetti Win32, esiste solo come parte di un file di risorse (RC) o un file modello (con estensione rct) di risorse.

Le risorse possono anche essere modificate all'esterno del progetto, vedere [come: Aprire un File di Script di risorsa all'esterno di un progetto (autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

> [!NOTE]
> Proprietà di una risorsa [può essere modificato utilizzando la finestra proprietà](../windows/changing-the-properties-of-a-resource.md).

### <a name="to-edit-the-properties-of-a-resource"></a>Per modificare le proprietà di una risorsa

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md), fare doppio clic la risorsa che si desidera modificare e scegliere **proprietà** dal menu di scelta rapida.

1. Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), modificare le proprietà della risorsa.

### <a name="to-undo-a-change-made-to-the-properties-of-a-resource"></a>Per annullare una modifica apportata alle proprietà di una risorsa

1. Assicurarsi che la risorsa abbia lo stato attivo **visualizzazione risorse**.

1. Scegli **annullare** dal **modificare** menu.

### <a name="win32-resources"></a>Risorse Win32

È possibile accedere alle risorse Win32 nel [visualizzazione risorse](../windows/resource-view-window.md) riquadro.

#### <a name="to-view-a-win32-resource-in-a-resource-editor"></a>Per visualizzare una risorsa Win32 in un editor di risorse

1. Selezionare **visualizzazione di risorse** dalle **visualizzazione** menu.

1. Se il **visualizzazione di risorse** finestra non è la finestra in primo piano, seleziona la **visualizzazione risorse** pressione di tab per attivare la modalità nella parte superiore.

1. Dal **visualizzazione risorse**, espandere la cartella del progetto che contiene le risorse che si desidera visualizzare. Ad esempio, se si desidera visualizzare una risorsa finestra di dialogo, espandere la **dialogo** cartella.

1. Fare doppio clic sulla risorsa, ad esempio, **IDD_ABOUTBOX**.

   La risorsa viene visualizzata nell'editor appropriato. Ad esempio, per le risorse finestra di dialogo, la risorsa viene aperta la **dialogo** editor.

   È anche possibile [visualizzare le risorse in un file RC (script di risorsa) senza un progetto aperto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

#### <a name="to-delete-an-existing-win-32-resource"></a>Per eliminare una risorsa esistente di Win 32

1. Nelle **visualizzazione risorse**, espandere il nodo per un tipo di risorsa.

1. Pulsante destro del mouse sulla risorsa di cui si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.

   > [!NOTE]
   > È possibile eliminare una risorsa con lo stesso comando di menu di scelta rapida quando il file RC sono aperti in una finestra del documento all'esterno di un progetto.

### <a name="managed-project-resources"></a>Risorse di progetto gestito

Poiché i progetti gestiti non usano i file di script di risorsa, è necessario aprire le risorse dal **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. L'editor di risorse di Visual Studio non supporta la modifica di risorse incorporate.

- Per visualizzare una risorsa gestita in un editor di risorse, in **Esplora soluzioni**, fare doppio clic sulla risorsa, ad esempio *BITMAP1*.

   La risorsa viene visualizzata nell'editor appropriato.

- Per eliminare una risorsa gestita esistente, in **Esplora soluzioni**, fare doppio clic la risorsa che si desidera eliminare, quindi scegliere **eliminare** dal menu di scelta rapida.

## <a name="preview-resources"></a>Risorse di anteprima

Visualizzare in anteprima le risorse per consentire di visualizzare le risorse grafiche senza aprirle. La visualizzazione in anteprima è utile per gli eseguibili anche dopo aver compilato li perché gli identificatori di risorsa cambia in numeri. Poiché questi identificatori numerici spesso non forniscono informazioni sufficienti, la visualizzazione in anteprima le risorse consente di identificare rapidamente li.

È possibile visualizzare in anteprima il layout visivo dei seguenti tipi di risorse: Bitmap, finestra di dialogo, icone, Menu, cursore, sulla barra degli strumenti

La funzione di anteprima non è applicabile alle risorse: Tasti di scelta rapida, manifesto, tabella di stringhe e le informazioni sulla versione

> [!NOTE]
> Per visualizzare in anteprima le risorse richiede Win32.

### <a name="to-preview-resources"></a>Per visualizzare in anteprima le risorse

1. Nelle [visualizzazione di risorse](../windows/resource-view-window.md) o una finestra del documento, selezionare la risorsa, ad esempio, `IDD_ABOUTBOX`.

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), selezionare la **pagine delle proprietà** pulsante.

   > [!TIP]
   > Per creare un collegamento, nelle **View** dal menu **pagine delle proprietà**.

   Il **pagina delle proprietà** per la risorsa viene visualizzata un'anteprima di tale risorsa. È quindi possibile usare la **iscrizione** e **verso il basso** tasti di direzione per esplorare l'albero controllano **visualizzazione risorse** o finestra del documento. Il **pagina delle proprietà** verrà rimangono aperti e visualizzare qualsiasi risorsa che ha lo stato attivo e può essere visualizzato in anteprima.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>