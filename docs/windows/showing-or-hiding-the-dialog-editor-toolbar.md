---
title: Mostrare o nascondere la barra degli strumenti finestra di dialogo Editor | Documenti Microsoft
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
- Dialog editor, showing or hiding toolbar
ms.assetid: 93c255e1-90eb-48b6-8602-450acda75bed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ad456d37252b40be72217e6cbc40a2a399bb34ef
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="showing-or-hiding-the-dialog-editor-toolbar"></a>Attivazione o disattivazione della visualizzazione della barra degli strumenti dell'editor finestre
Quando si apre l'editor finestre, finestra di dialogo Editor barra degli strumenti viene visualizzato automaticamente nella parte superiore della soluzione.  
  
### <a name="dialog-editor-toolbar"></a>Barra degli strumenti dell'editor finestre  
  
|Icona|Significato|Icona|Significato|  
|----------|-------------|----------|-------------|  
|![Pulsante test](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante spaziatura orizzontale](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Spaziatura orizzontale|  
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante spaziatura verticale](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Giù|  
|![Pulsante Allinea a destra](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Allinea a destra|![Pulsante Crea stessa larghezza](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Assegna stessa larghezza|  
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Crea un'altezza uguale](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Assegna stessa altezza|  
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante di dimensione stessa marca](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Rendi uguali|  
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Pulsante Mostra/Nascondi griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Attiva/Disattiva griglia|  
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Orizzontale|![Pulsante Attiva/Disattiva guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Attiva/Disattiva guide|  
  
 Finestra di dialogo Editor barra degli strumenti contiene pulsanti per la disposizione del layout dei controlli nella finestra di dialogo, ad esempio dimensioni e allineamento. Pulsanti della barra degli strumenti dell'Editor finestre corrispondono ai comandi del menu Formato. Per informazioni dettagliate, vedere [tasti di scelta rapida per l'Editor finestre](../windows/accelerator-keys-for-the-dialog-editor.md).  
  
 Una volta nell'editor finestre, è possibile attivare o disattivare la visualizzazione della barra degli strumenti finestra di dialogo Editor selezionandolo dall'elenco di finestre e barre degli strumenti disponibili.  
  
### <a name="to-show-or-hide-the-dialog-editor-toolbar"></a>Per visualizzare o nascondere la barra degli strumenti editor finestre  
  
1.  Nel **vista** dal menu **barre degli strumenti** scegliere **finestra di dialogo Editor** dal sottomenu.  
  
    > [!NOTE]
    >  Barra degli strumenti finestra di dialogo Editor viene visualizzato per impostazione predefinita, quando si apre una risorsa finestra di dialogo nell'editor di finestra di dialogo. Tuttavia, se si chiude in modo esplicito la barra degli strumenti, è necessario richiamarlo alla successiva apertura di una risorsa finestra di dialogo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Disposizione dei controlli nelle finestre di dialogo](../windows/arrangement-of-controls-on-dialog-boxes.md)   
 [Procedura: creare una risorsa](../windows/how-to-create-a-resource.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Editor finestre](../windows/dialog-editor.md)

