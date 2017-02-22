---
title: "Resizing an Image (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.editors.image.editing"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Image editor [C++], resizing images"
  - "graphics [C++], resizing"
  - "images [C++], resizing"
  - "resizing images"
ms.assetid: d83a02c4-4dfe-4586-a0df-51a50c2ba71d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Resizing an Image (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il comportamento dell'editor di immagini in caso di ridimensionamento varia a seconda che la [selezione](../mfc/selecting-an-area-of-an-image-image-editor-for-icons.md) comprenda l'intera immagine o soltanto una parte.  
  
 Quando la selezione include solo una parte dell'immagine, l'editor di immagini la riduce eliminando righe o colonne di pixel e riempiendo le aree rimaste vuote con il colore di sfondo corrente oppure la ingrandisce duplicando righe o colonne di pixel.  
  
 Quando la selezione comprende l'intera immagine, l'editor di immagini riduce e ingrandisce oppure ritaglia ed estende l'immagine.  
  
 Per ridimensionare un'immagine sono disponibili due meccanismi: i quadratini di ridimensionamento e la [finestra Proprietà](../Topic/Properties%20Window.md).  I quadratini di ridimensionamento possono essere trascinati per modificare le dimensioni di tutta l'immagine o di una parte.  È possibile trascinare i quadratini di ridimensionamento pieni,  ma non quelli vuoti.  La finestra Proprietà consente invece di ridimensionare solo l'intera immagine e non una parte selezionata.  
  
 ![Quadratini di ridimensionamento in una bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")  
Quadratini di ridimensionamento  
  
> [!NOTE]
>  Se nella [finestra di dialogo Impostazioni griglia](../mfc/grid-settings-dialog-box-image-editor-for-icons.md) è stata selezionata l'opzione Affianca griglia, il ridimensionamento verrà bloccato sulla linea successiva della griglia affiancata.  Se è selezionata soltanto l'opzione Griglia in pixel, corrispondente all'impostazione predefinita, il ridimensionamento verrà bloccato sul pixel successivo disponibile.  
  
-   [Ridimensionamento di un'intera immagine](../mfc/resizing-an-entire-image-image-editor-for-icons.md)  
  
-   [Ritaglio o estensione di un'intera immagine](../mfc/cropping-or-extending-an-entire-image-image-editor-for-icons.md)  
  
-   [Riduzione o ingrandimento di un'intera immagine](../mfc/shrinking-or-stretching-an-entire-image-image-editor-for-icons.md)  
  
-   [Riduzione o ingrandimento di parte di un'immagine](../mfc/shrinking-or-stretching-part-of-an-image-image-editor-for-icons.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)