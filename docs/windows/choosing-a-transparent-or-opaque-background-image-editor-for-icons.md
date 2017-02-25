---
title: "Choosing a Transparent or Opaque Background (Image Editor for Icons) | Microsoft Docs"
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
  - "opaque backgrounds"
  - "background colors, images"
  - "colors [C++], image"
  - "Image editor [C++], transparent or opague backgrounds"
  - "background images"
  - "images [C++], transparency"
  - "images [C++], opaque background"
  - "transparent backgrounds"
  - "transparency, background"
  - "transparent backgrounds, images"
ms.assetid: 61b743d9-c86b-405d-9a81-0806431b4363
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Choosing a Transparent or Opaque Background (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si sposta o si copia una selezione da un'immagine, per impostazione predefinita i pixel della selezione corrispondenti al colore di sfondo corrente risultano trasparenti e in quanto tali non coprono i pixel nella posizione di destinazione.  
  
 È possibile passare da uno sfondo trasparente, ovvero l'impostazione predefinita, a uno sfondo opaco e viceversa.  Quando si utilizza uno strumento di selezione, le opzioni **Sfondo trasparente** e **Sfondo opaco** vengono visualizzate nel selettore di opzioni sulla barra degli strumenti dell'editor di immagini, come riportato di seguito.  
  
 ![Opzioni sfondo: opaco o trasparente](../windows/media/vcimageeditoropaqtranspback.gif "vcImageEditorOpaqTranspBack")  
Opzioni Sfondo trasparente e Sfondo opaco sulla barra degli strumenti dell'editor di immagini  
  
### Per passare da uno sfondo trasparente a uno sfondo opaco e viceversa  
  
1.  Fare clic sul selettore **di opzioni** nella barra strumenti dell'**Editor di immagini**, quindi fare clic sull'icona appropriata:  
  
    -   **Sfondo opaco \(O\)**: l'immagine esistente viene coperta da tutte le parti della selezione.  
  
    -   **Sfondo trasparente \(T\)**: nelle parti della selezione corrispondenti al colore di sfondo corrente viene visualizzata l'immagine esistente.  
  
 \- oppure \-  
  
-   Selezionare o deselezionare l'opzione **Opaco** del menu **Immagine**.  
  
 Il colore di sfondo può essere modificato mentre una selezione è già attiva, in modo da modificare le parti dell'immagine che risultano trasparenti.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Working with Color](../mfc/working-with-color-image-editor-for-icons.md)