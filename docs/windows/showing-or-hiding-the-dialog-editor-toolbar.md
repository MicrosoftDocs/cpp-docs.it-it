---
title: Mostrare o nascondere la barra degli strumenti dell'Editor finestre (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], showing or hiding Dialog editor toolbar
- toolbars [C++], showing
- toolbars [C++], hiding
- Dialog Editor [C++], showing or hiding toolbar
ms.assetid: 93c255e1-90eb-48b6-8602-450acda75bed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 02deeeed3eecf717cff380e43317e5a75c1fddf7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381244"
---
# <a name="showing-or-hiding-the-dialog-editor-toolbar-c"></a>Mostrare o nascondere la barra degli strumenti dell'Editor finestre (C++)

Quando si apre la **finestra di dialogo** editor in un progetto C++, il **Editor finestre** sulla barra degli strumenti viene visualizzato automaticamente nella parte superiore della soluzione.

### <a name="dialog-editor-toolbar"></a>Barra degli strumenti dell'editor finestre

|Icona|Significato|Icona|Significato|
|----------|-------------|----------|-------------|
|![Pulsante Verifica finestra di dialogo](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante spaziatura orizzontale](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Spaziatura orizzontale|
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante spaziatura verticale](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Giù|
|![Pulsante Allinea a destra](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Allinea a destra|![Marca stessa larghezza pulsante](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Assegna stessa larghezza|
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Crea stessa altezza](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Assegna stessa altezza|
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante di dimensione stessa marca](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Rendi uguali|
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Pulsante Mostra/Nascondi griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Attiva/Disattiva griglia|
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Orizzontale|![Pulsante Attiva/Disattiva guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Attiva/Disattiva guide|

Il **finestra di dialogo Editor** sulla barra degli strumenti contiene pulsanti per la disposizione del layout dei controlli nella finestra di dialogo, ad esempio dimensione e allineamento. **Editor finestre** pulsanti della barra degli strumenti corrispondono ai comandi nella **formato** menu. Per informazioni dettagliate, vedere [tasti di scelta rapida per l'Editor finestre](../windows/accelerator-keys-for-the-dialog-editor.md).

Quando si utilizza il **finestra di dialogo** editor, è possibile attivare o disattivare la visualizzazione del **Editor finestre** sulla barra degli strumenti, selezionarlo dall'elenco di barre degli strumenti disponibili e windows.

### <a name="to-show-or-hide-the-dialog-editor-toolbar"></a>Per visualizzare o nascondere la barra degli strumenti editor finestre

1. Nel **View** menu fare clic su **barre degli strumenti** quindi scegliere **Editor finestre** dal sottomenu.

   > [!NOTE]
   > Il **finestra di dialogo Editor** sulla barra degli strumenti viene visualizzato per impostazione predefinita quando si apre una risorsa finestra di dialogo nell'editor finestre; tuttavia, se si chiude in modo esplicito la barra degli strumenti, è necessario richiamare questo comando, alla successiva apertura di una risorsa finestra di dialogo.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)<br/>
[Procedura: Creare una risorsa](../windows/how-to-create-a-resource.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor finestre](../windows/dialog-editor.md)