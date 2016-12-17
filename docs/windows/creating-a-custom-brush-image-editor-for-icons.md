---
title: "Creating a Custom Brush (Image Editor for Icons) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C++"
helpviewer_keywords: 
  - "colors [C++], brush"
  - "brushes, colors"
  - "brushes, creating custom"
  - "images [C++], creating custom brushes"
  - "graphics [C++], custom brushes"
  - "custom brushes"
ms.assetid: 750881aa-6f47-4de9-8ca6-a7a12afc6383
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creating a Custom Brush (Image Editor for Icons)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un pennello personalizzato rappresenta un'area rettangolare di un'immagine che viene selezionata e utilizzata come uno dei pennelli già disponibili dell'editor di immagini.  Su un pennello personalizzato possono essere eseguite tutte le operazioni eseguibili su una selezione.  
  
### Per creare un pennello personalizzato da un'area di un'immagine  
  
1.  [Selezionare la parte dell'immagine](../mfc/selecting-an-area-of-an-image-image-editor-for-icons.md) che si desidera utilizzare come pennello.  
  
2.  Tenendo premuto **MAIUSC**, fare clic all'interno della selezione e trascinarla sull'immagine.  
  
     \- oppure \-  
  
3.  Scegliere **Usa selezione come pennello** dal menu **Immagine**.  
  
     La selezione viene trasformata in un pennello personalizzato che distribuisce i colori della selezione in tutta l'immagine.  Lungo il percorso di trascinamento vengono infatti inserite copie della selezione,  il cui numero è inversamente proporzionale alla velocità del trascinamento.  
  
     **Nota** Se si sceglie **Usa selezione come pennello** senza avere prima selezionato un'area dell'immagine, verrà utilizzata come pennello l'intera immagine.  I risultati ottenuti utilizzando un pennello personalizzato variano a seconda che sia stato selezionato uno [sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
 I pixel del pennello personalizzato corrispondenti al colore di sfondo corrente sono in genere trasparenti e non coprono l'immagine esistente.  È tuttavia possibile modificare tale comportamento in modo che i pixel del colore di sfondo coprano l'immagine esistente.  
  
 Il pennello personalizzato può essere utilizzato come un timbro o uno stampino per creare una vasta gamma di effetti speciali.  
  
#### Per disegnare forme di pennelli personalizzati con il colore di sfondo  
  
1.  [Selezionare uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).  
  
2.  [Impostare il colore di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) sul colore che si desidera utilizzare per il disegno.  
  
3.  Posizionare il pennello personalizzato nel punto in cui si desidera tracciare il disegno.  
  
4.  Fare clic con il pulsante destro del mouse.  Tutte le aree opache del pennello personalizzato verranno disegnate con il colore di sfondo.  
  
#### Per raddoppiare o dimezzare le dimensioni del pennello personalizzato  
  
1.  Premere il tasto con il **SEGNO PIÙ** \(**\+**\) per raddoppiare le dimensioni del pennello oppure il tasto con il **SEGNO MENO** \(**–**\) per dimezzarle.  
  
#### Per disattivare il pennello personalizzato  
  
1.  Premere **ESC** oppure scegliere un altro strumento di disegno.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
### Requisiti  
 Nessuno  
  
## Vedere anche  
 [Accelerator Keys](../mfc/accelerator-keys-image-editor-for-icons.md)   
 [Editing Graphical Resources](../mfc/editing-graphical-resources-image-editor-for-icons.md)   
 [Image Editor for Icons](../mfc/image-editor-for-icons.md)