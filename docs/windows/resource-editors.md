---
description: 'Altre informazioni su: editor di risorse (C++)'
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
ms.openlocfilehash: b867f34c5195864a22212ec079bf0de8ace20407
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247241"
---
# <a name="resource-editors-c"></a>Editor di risorse (C++)

Un editor di risorse è un ambiente specializzato per la creazione o la modifica di risorse incluse in un progetto di Visual Studio. Gli editor di risorse di Visual Studio condividono tecniche e interfacce in modo da semplificare e velocizzare la creazione e la modifica delle risorse delle applicazioni. Gli editor di risorse consentono di visualizzare e modificare risorse nell'editor appropriato e di visualizzare in anteprima le risorse.

Quando si crea o si apre una risorsa, si apre automaticamente l'editor appropriato.

> [!NOTE]
> Poiché i progetti gestiti non usano file di script di risorse, è necessario aprire le risorse da **Esplora soluzioni**. È possibile usare l' [editor di immagini](../windows/image-editor-for-icons.md) e l' [editor binario](binary-editor.md) per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

|Usare|Per modificare|
|----------------|----------------|
|[Editor tasti di scelta rapida](../windows/accelerator-editor.md)|Tabelle dei tasti di scelta rapida nei progetti Visual Studio C++.|
|[Editor binario](binary-editor.md)|Informazioni sui dati binari e risorse personalizzate in progetti Visual C++, Visual Basic o Visual C#.|
|[Editor finestre](../windows/dialog-editor.md)|Finestre di dialogo nei progetti Visual Studio C++.|
|[Editor di immagini](../windows/image-editor-for-icons.md)|Bitmap, icone, cursori e altri file di immagine in progetti Visual C++, Visual Basic o Visual C#.|
|[Editor menu](../windows/menu-editor.md)|Risorse di menu in progetti Visual Studio C++.|
|[Editor barra multifunzione](../mfc/ribbon-designer-mfc.md)|Risorse della barra multifunzione in progetti MFC.|
|[Editor stringhe](../windows/string-editor.md)|Tabelle di stringhe in progetti Visual Studio C++.|
|[Editor barra degli strumenti](../windows/toolbar-editor.md)|Risorse della barra degli strumenti in progetti Visual Studio C++. L' **Editor barra degli strumenti** fa parte dell' **editor di immagini**.|
|[Editor delle informazioni sulla versione](../windows/version-information-editor.md)|Informazioni sulla versione nei progetti Visual Studio C++.|

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere [procedura: creare risorse](../windows/how-to-create-a-resource-script-file.md).

## <a name="view-and-edit-resources"></a>Visualizzare e modificare le risorse

Ogni tipo di risorsa ha un editor di risorse specifico per quel tipo di risorsa. È possibile ridisporre, ridimensionare, aggiungere controlli e funzionalità oppure modificare gli aspetti di una risorsa usando l'editor associato. È anche possibile modificare una risorsa in formato testo e formato binario. Per altre informazioni, vedere [procedura: creare risorse](../windows/how-to-create-a-resource-script-file.md).

Alcuni tipi di risorse sono singoli file che possono essere importati e usati in vari modi. sono incluse bitmap, icone, cursori, barre degli strumenti e file HTML. Tali risorse hanno nomi file e [identificatori di risorsa](../windows/symbols-resource-identifiers.md). Altri, ad esempio finestre di dialogo, menu e tabelle di stringhe nei progetti Win32, esistono solo come parte di un file di script di risorsa (RC) o di un file di modello di risorse (con estensione RCT).

Le risorse possono anche essere modificate all'esterno del progetto senza aprire il progetto. Per altre informazioni, vedere [procedura: creare risorse](./how-to-create-a-resource-script-file.md).

> [!NOTE]
> È possibile modificare le proprietà di una risorsa utilizzando la finestra **Proprietà** .

- Per modificare le proprietà di una risorsa, in [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources), fare clic con il pulsante destro del mouse sulla risorsa che si desidera modificare e scegliere **Proprietà**.  Quindi, nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)modificare le proprietà della risorsa.

- Per annullare una modifica apportata alle proprietà di una risorsa, verificare che la risorsa abbia lo stato attivo nel **visualizzazione risorse** e scegliere **Annulla** dal menu **modifica** .

### <a name="win32-resources"></a>Risorse Win32

È possibile accedere alle risorse Win32 nel riquadro [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) .

#### <a name="to-view-a-win32-resource-in-a-resource-editor"></a>Per visualizzare una risorsa Win32 in un editor di risorse

1. Vai a menu **Visualizza**  >  **altre**  >  **visualizzazione risorse** di Windows.

1. Se la finestra **visualizzazione risorse** non è la finestra in primo piano, selezionare la scheda **visualizzazione risorse** per portarla nella parte superiore.

1. Da **visualizzazione risorse**, espandere la cartella per il progetto che contiene le risorse che si desidera visualizzare. Se, ad esempio, si desidera visualizzare una risorsa finestra di dialogo, espandere la cartella **finestra di dialogo** .

1. Fare doppio clic sulla risorsa, ad esempio **IDD_ABOUTBOX**.

   La risorsa viene visualizzata nell'editor appropriato. Per le risorse della finestra di dialogo, ad esempio, la risorsa viene aperta nell' **editor finestre**.

#### <a name="to-delete-an-existing-win32-resource"></a>Per eliminare una risorsa Win32 esistente

1. In **visualizzazione risorse** espandere il nodo per un tipo di risorsa.

1. Fare clic con il pulsante destro del mouse sulla risorsa che si desidera eliminare e scegliere **Elimina**.

> [!TIP]
> È anche possibile usare questo metodo quando il file RC è aperto in una finestra del documento all'esterno di un progetto.

### <a name="managed-project-resources"></a>Risorse di progetto gestite

Poiché i progetti gestiti non usano file di script di risorse, è necessario aprire le risorse da **Esplora soluzioni**. Utilizzare l' [editor di immagini](../windows/image-editor-for-icons.md) e l' [editor binario](binary-editor.md) per utilizzare i file di risorse nei progetti gestiti. Tutte le risorse gestite che si desidera modificare devono essere risorse collegate e gli editor di risorse di Visual Studio non supportano la modifica delle risorse incorporate.

- Per visualizzare una risorsa gestita in un editor di risorse, in **Esplora soluzioni** fare doppio clic sulla risorsa, ad esempio *Bitmap1.bmp*, e la risorsa viene aperta nell'editor appropriato.

- Per eliminare una risorsa gestita esistente, in **Esplora soluzioni** fare clic con il pulsante destro del mouse sulla risorsa che si desidera eliminare e scegliere **Elimina**.

## <a name="preview-resources"></a>Anteprima risorse

Visualizzare in anteprima le risorse per consentire di visualizzare le risorse grafiche senza aprirle. L'anteprima è utile anche per gli eseguibili dopo averli compilati, in quanto gli identificatori di risorsa cambiano in numeri. Poiché questi identificatori numerici spesso non forniscono informazioni sufficienti, la visualizzazione in anteprima delle risorse consente di identificarli rapidamente.

I tipi di risorse seguenti forniscono un'anteprima del layout visivo: bitmap, finestra di dialogo, icona, menu, cursore, barra degli strumenti

Le risorse seguenti non forniscono un'anteprima visiva: acceleratore, manifesto, stringa tabella, informazioni sulla versione

> [!NOTE]
> Per visualizzare in anteprima le risorse è necessario Win32.

### <a name="to-preview-resources"></a>Per visualizzare in anteprima le risorse

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources) o in una finestra del documento selezionare la risorsa, ad esempio **IDD_ABOUTBOX**.

1. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)selezionare il pulsante **pagine delle proprietà** .

   > [!TIP]
   > Utilizzare un collegamento, passare a **visualizzazione** menu  >  **pagine delle proprietà**.

   Viene visualizzata la pagina delle **Proprietà** per la risorsa che visualizza un'anteprima di tale risorsa. È possibile utilizzare i tasti freccia **su** e **giù** per spostarsi nel controllo albero **visualizzazione risorse** o nella finestra del documento. La pagina delle **Proprietà** rimarrà aperta e mostrerà tutte le risorse che hanno lo stato attivo e che possono essere visualizzate in anteprima.

## <a name="requirements"></a>Requisiti

Nessuno

## <a name="see-also"></a>Vedi anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Identificatori di risorsa (simboli)](../windows/symbols-resource-identifiers.md)<br/>
