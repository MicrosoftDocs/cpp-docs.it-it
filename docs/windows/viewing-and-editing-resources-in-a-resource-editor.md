---
title: Visualizzazione e modifica di risorse in un Editor di risorse | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vs.resourceview
dev_langs:
- C++
helpviewer_keywords:
- resources [Visual Studio], viewing
- rc files, viewing resources
- Resource View pane
- layouts, previewing resource
- code, viewing resources
- resource editors, viewing resources
- .rc files, viewing resources
- resources [Visual Studio], editing
ms.assetid: ba8bdc07-3f60-43c7-aa5c-d5dd11f0966e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 742bdd9d869d6a913315229bb6b5c896584a5269
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42593204"
---
# <a name="viewing-and-editing-resources-in-a-resource-editor"></a>Visualizzazione e modifica di risorse in un editor di risorse

Ogni tipo di risorsa è un **risorsa** editor specifici di quel tipo di risorsa. È possibile ridisporre, ridimensionare, aggiungere controlli e funzionalità o in caso contrario, modificare alcuni aspetti di una risorsa tramite l'editor associato. È anche possibile modificare una risorsa in [formato di testo](../windows/how-to-open-a-resource-script-file-in-text-format.md) e [formato binario](../windows/opening-a-resource-for-binary-editing.md).

Alcuni tipi di risorse sono i singoli file che possono essere importati e usati in diversi modi. Queste includono le bitmap, icone, cursori, barre degli strumenti e i file html. Tali risorse hanno nomi di file, nonché [identificatori di risorsa](../windows/symbols-resource-identifiers.md). Altri, ad esempio le finestre di dialogo, menu e le tabelle di stringhe in progetti Win32, esiste solo come parte di un file di risorse (RC) o un file modello (con estensione rct) di risorse.

> [!NOTE]
> Proprietà di una risorsa [può essere modificato utilizzando la finestra proprietà](../windows/changing-the-properties-of-a-resource.md).

## <a name="win32-resources"></a>Risorse Win32

È possibile accedere alle risorse Win32 nel [visualizzazione risorse](../windows/resource-view-window.md) riquadro.

### <a name="to-view-a-win32-resource-in-a-resource-editor"></a>Per visualizzare una risorsa Win32 in un editor di risorse

1. Selezionare **visualizzazione di risorse** dalle **visualizzazione** menu.

2. Se il **visualizzazione risorse** finestra non è la finestra in primo piano, selezionare la **visualizzazione risorse** pressione di tab per attivare la modalità nella parte superiore.

3. Dal **visualizzazione risorse**, espandere la cartella del progetto che contiene le risorse che si desidera visualizzare. Ad esempio, se si desidera visualizzare una risorsa finestra di dialogo, espandere la **dialogo** cartella.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

4. Fare doppio clic sulla risorsa, ad esempio, **IDD_ABOUTBOX**.

   La risorsa viene visualizzata nell'editor appropriato. Ad esempio, per le risorse finestra di dialogo, la risorsa viene aperta la **dialogo** editor.

   È anche possibile [visualizzare le risorse in un file RC (script di risorsa) senza un progetto aperto](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

### <a name="to-delete-an-existing-win-32-resource"></a>Per eliminare una risorsa esistente di Win 32

1. Nelle **visualizzazione risorse**, espandere il nodo per un tipo di risorsa.

2. Pulsante destro del mouse sulla risorsa di cui si desidera eliminare e scegliere **Elimina** dal menu di scelta rapida.

   > [!NOTE]
   > È possibile eliminare una risorsa con lo stesso comando di menu di scelta rapida quando il file RC sono aperti in una finestra del documento all'esterno di un progetto.

## <a name="resources-in-managed-projects"></a>Risorse nei progetti gestiti

Perché i progetti gestiti non usano i file di script di risorsa, è necessario aprire le risorse dal **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

### <a name="to-view-a-managed-resource-in-a-resource-editor"></a>Per visualizzare una risorsa gestita in un editor di risorse

1. Nelle **Esplora soluzioni**, fare doppio clic sulla risorsa, ad esempio **BITMAP1**.

   La risorsa viene visualizzata nell'editor appropriato.

### <a name="to-delete-an-existing-managed-resource"></a>Per eliminare una risorsa gestita esistente

1. Nelle **Esplora soluzioni**, fare doppio clic la risorsa che si desidera eliminare, quindi scegliere **eliminare** dal menu di scelta rapida.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)