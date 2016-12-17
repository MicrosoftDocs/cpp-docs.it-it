---
title: "Selecting an Area of an Image (Image Editor for Icons) | Microsoft Docs"
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
  - "vc.editors.image.editing"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "Image editor [C++], image selection"
  - "Image editor [C++], selecting images"
  - "images [C++], selecting"
  - "cursors [C++], selecting areas of"
ms.assetid: 8b6ce4ad-eba1-4ece-86ba-cea92c3edff2
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Selecting an Area of an Image (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli strumenti di selezione consentono di definire un'area dell'immagine che si desidera tagliare, copiare, rimuovere, ridimensionare, invertire o spostare.  Lo strumento **Selezione rettangolare** consente di definire e selezionare un'area rettangolare dell'immagine.  Lo strumento **Selezione irregolare** consente di disegnare a mano libera il contorno dell'area da selezionare per eseguire operazioni di taglio, copia o altro tipo.  
  
> [!NOTE]
>  Vedere l'illustrazione degli strumenti **Selezione rettangolare** e **Selezione irregolare** riportata nella sezione [Barra degli strumenti dell'editor di immagini](../mfc/toolbar-image-editor-for-icons.md) oppure visualizzare le descrizioni comandi associate a ciascun pulsante della barra degli strumenti dell'**editor di immagini**.  
  
 È inoltre possibile creare un pennello personalizzato da una selezione.  Per ulteriori informazioni, vedere [Creazione di un pennello personalizzato](../mfc/creating-a-custom-brush-image-editor-for-icons.md).  
  
### Per selezionare un'area dell'immagine  
  
1.  Selezionare lo strumento desiderato sulla barra degli strumenti dell'editor di immagini o mediante l'opzione **Strumenti** del menu **Immagine**.  
  
2.  Spostare il punto di inserimento in corrispondenza di un angolo dell'area dell'immagine che si desidera selezionare.  Quando il punto di inserimento si trova sopra l'immagine, verrà visualizzato un mirino.  
  
3.  Trascinare il punto di inserimento fino all'angolo opposto dell'area che si desidera selezionare.  Un rettangolo indica i pixel selezionati.  Tutti i pixel all'interno del rettangolo, compresi quelli sottostanti il rettangolo, sono inclusi nella selezione.  
  
4.  Rilasciare il pulsante del mouse.  L'area selezionata apparirà racchiusa dal bordo di selezione.  
  
### Per selezionare un'intera immagine  
  
1.  Fare clic sull'immagine all'esterno della selezione corrente.  Lo stato attivo del bordo di selezione verrà modificato in modo da comprendere nuovamente l'intera immagine.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)