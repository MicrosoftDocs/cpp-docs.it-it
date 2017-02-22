---
title: "Aligning Controls on a Guide | Microsoft Docs"
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
  - "DLUs (dialog units)"
  - "controls [C++], aligning"
  - "Dialog editor, snap to guides"
  - "guides, tick mark interval"
  - "dialog box controls, placement"
  - "guides, aligning controls"
  - "dialog units (DLUs)"
  - "snap to guides (Dialog editor)"
  - "controls [C++], sizing"
  - "tick mark interval in Dialog editor"
  - "controls [C++], snap to guides/grid"
ms.assetid: 17db84ba-5288-4478-be57-afa748aa6447
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Aligning Controls on a Guide
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando i controlli vengono spostati, i relativi quadratini di ridimensionamento vengono bloccati sulle guide e queste vengono bloccate sui controlli, se non sono presenti controlli precedentemente bloccati sulla guida.  Quando una guida viene spostata, vengono spostati anche i controlli bloccati su tale guida.  I controlli bloccati su più guide vengono ridimensionati quando una delle guide viene spostata.  
  
 I segni di graduazione dei righelli che determinano la spaziatura di guide e controlli vengono definiti dalle unità della finestra di dialogo \(DLU, Dialog Unit\).  Una DLU è basata sulla dimensione del carattere della finestra di dialogo, in genere MS Shell Dlg da 8 punti.  Una DLU orizzontale corrisponde alla larghezza media del carattere nella finestra di dialogo divisa per quattro.  Una DLU verticale corrisponde all'altezza media del carattere divisa per otto.  
  
### Per ridimensionare un gruppo di controlli con le guide  
  
1.  Bloccare un lato del controllo o dei controlli su una guida.  
  
2.  Trascinare una guida sull'altro lato del controllo o dei controlli.  
  
     Se necessario, in caso di più controlli, ridimensionare ciascun controllo in modo da bloccarlo sulla seconda guida.  
  
3.  Spostare una delle due guide per ridimensionare il controllo o i controlli.  
  
### Per modificare gli intervalli dei segni di graduazione  
  
1.  Scegliere **Impostazioni guide** dal menu **Formato**.  
  
2.  Nella [finestra di dialogo Impostazioni guide](../mfc/guide-settings-dialog-box.md) specificare una nuova altezza e larghezza in DLU nella casella **Spaziatura griglia**.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Requisiti  
  
 Win32  
  
## Vedere anche  
 [Dialog Editor States \(Guides and Grids\)](../mfc/dialog-editor-states-guides-and-grids.md)   
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)