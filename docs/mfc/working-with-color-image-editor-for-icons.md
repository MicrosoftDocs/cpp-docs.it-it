---
title: "Working with Color (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.image.color"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "images [C++], background colors"
  - "Image editor [C++], Colors Palette"
  - "colors [C++], image"
  - "Colors Palette, Image editor"
  - "palettes, Image editor colors"
  - "foreground colors, Image editor"
  - "colors [C++]"
ms.assetid: d34ff96f-241d-494f-abdd-13811ada8cd3
caps.latest.revision: 11
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Working with Color (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'editor di immagini offre una serie di funzionalità specificamente progettate per la gestione e la personalizzazione dei colori.  È infatti possibile impostare un colore di primo piano o di sfondo, riempire aree delimitate con dei colori o selezionare un colore da un'immagine per utilizzarlo come colore di primo piano o di sfondo corrente.  Si possono creare immagini utilizzando gli strumenti della [barra degli strumenti dell'editor di immagini](../mfc/toolbar-image-editor-for-icons.md) e la tavolozza di colori della [finestra Colori](../windows/colors-window-image-editor-for-icons.md).  
  
 Tutti i colori per le immagini monocromatiche e a 16 colori sono riportati nella tavolozza Colori della finestra Colori.  Oltre ai 16 colori standard, è possibile creare colori personalizzati.  La modifica di uno dei colori della tavolozza determina l'immediata modifica del colore corrispondente nell'immagine.  
  
 Quando si utilizzano immagini cursore e icona a 256 colori, viene utilizzata la proprietà Colors riportata nella [finestra Proprietà](../Topic/Properties%20Window.md).  Per ulteriori informazioni, vedere [Creazione di un cursore o di un'icona a 256 colori](../mfc/creating-a-256-color-icon-or-cursor-image-editor-for-icons.md).  
  
> [!NOTE]
>  Utilizzando l'editor di immagini, è possibile visualizzare, ma non modificare, immagini a 32 bit.  
  
 È anche possibile creare immagini a 16,8 milioni di colori.  I campioni dei 16,8 milioni di colori, tuttavia, non vengono visualizzati nella tavolozza completa della finestra Colori, ma solo nell'area dell'indicatore del colore di primo piano o di sfondo.  I 16,8 milioni di colori vengono creati mediante la [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md).  Per ulteriori informazioni, vedere [Personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md).  
  
 È possibile salvare le tavolozze di colori personalizzate su disco in modo da poterle ricaricare quando necessario.  L'ultima tavolozza di colori utilizzata viene salvata nel Registro di sistema e caricata automaticamente al successivo avvio di Visual Studio.  
  
-   [Selezione dei colori di primo piano e di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md)  
  
-   [Riempimento di un'area delimitata di un'immagine con un colore](../windows/filling-a-bounded-area-of-an-image-with-a-color-image-editor-for-icons.md)  
  
-   [Selezione di un colore dell'immagine da utilizzare altrove](../windows/picking-up-a-color-from-an-image-to-use-elsewhere-image-editor-for-icons.md)  
  
-   [Selezione di uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md)  
  
-   [Inversione dei colori in una selezione](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md)  
  
-   [Personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md)  
  
-   [Salvataggio e caricamento di tavolozze di colori diverse](../windows/saving-and-loading-different-color-palettes-image-editor-for-icons.md)  
  
-   [Finestra Colori](../windows/colors-window-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Risorse](_win32_Resources)