---
title: "Attivazione o disattivazione della visualizzazione della barra degli strumenti dell&#39;editor finestre | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli [C++], attivazione o disattivazione della visualizzazione della barra degli strumenti dell'Editor di finestre"
  - "barre degli strumenti [C++], visualizzazione"
  - "barre degli strumenti [C++], disattivazione della visualizzazione"
  - "Editor di finestre, attivazione o disattivazione della visualizzazione della barra degli strumenti"
ms.assetid: 93c255e1-90eb-48b6-8602-450acda75bed
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Attivazione o disattivazione della visualizzazione della barra degli strumenti dell&#39;editor finestre
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si apre l'editor finestre, la barra degli strumenti dell'editor finestre viene automaticamente visualizzata nella parte superiore della soluzione.  
  
### Barra degli strumenti dell'editor finestre  
  
|Icona|Significato|Icona|Significato|  
|-----------|-----------------|-----------|-----------------|  
|![Pulsante Verifica finestra di dialogo](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante Spaziatura orizzontale](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Attraverso|  
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante Spaziatura verticale](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Giù|  
|![Pulsante Allinea a destra](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Allinea a destra|![Pulsante Assegna stessa larghezza](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Imposta la stessa larghezza|  
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Assegna stessa altezza](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Imposta la stessa altezza|  
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante Rendi uguali](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Imposta la stessa dimensione|  
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Verticale|![Pulsante Attiva&#47;Disattiva griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Attiva\/Disattiva griglia|  
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Horizontal|![Pulsante Attiva&#47;Disattiva guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Attiva\/Disattiva guide|  
  
 La barra degli strumenti dell'editor finestre contiene pulsanti per la gestione del layout dei controlli nella finestra di dialogo, ad esempio la dimensione e l'allineamento.  I pulsanti della barra degli strumenti dell'editor finestre corrispondono ai comandi del menu Formato.  Per informazioni dettagliate, vedere [Tasti di scelta rapida per l'editor finestre](../mfc/accelerator-keys-for-the-dialog-editor.md).  
  
 Nell'editor finestre è possibile visualizzare o nascondere la barra degli strumenti dell'editor finestre selezionandola dall'elenco delle barre degli strumenti e delle finestre disponibili.  
  
### Per visualizzare o nascondere la barra degli strumenti dell'editor finestre  
  
1.  Scegliere **Barre degli strumenti** dal menu **Visualizza**, quindi **Editor finestre**.  
  
    > [!NOTE]
    >  Per impostazione predefinita, la barra degli strumenti dell'editor finestre viene visualizzata quando viene aperta una risorsa finestra di dialogo nell'editor finestre. Se tuttavia la barra degli strumenti viene chiusa in modo esplicito, alla successiva apertura di una risorsa finestra di dialogo sarà necessario richiamarla.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Arrangement of Controls on Dialog Boxes](../mfc/arrangement-of-controls-on-dialog-boxes.md)   
 [How to: Create a Resource](../windows/how-to-create-a-resource.md)   
 [Resource Files](../mfc/resource-files-visual-studio.md)   
 [Dialog Editor](../mfc/dialog-editor.md)