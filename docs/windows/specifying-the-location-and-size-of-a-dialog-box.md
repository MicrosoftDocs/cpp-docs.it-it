---
title: "Specifying the Location and Size of a Dialog Box | Microsoft Docs"
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
  - "dialog boxes, size"
  - "dialog boxes, positioning"
ms.assetid: 2b7c495e-6595-4cfb-9664-80b2826d0851
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Specifying the Location and Size of a Dialog Box
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La posizione e la dimensione di una finestra di dialogo e dei controlli in essa contenuti vengono misurate in unità della finestra di dialogo.  I valori relativi ai singoli controlli e alla finestra di dialogo vengono visualizzati nella parte inferiore destra della barra di stato di Visual Studio quando i controlli vengono selezionati.  
  
 Nella [finestra Proprietà](../Topic/Properties%20Window.md) è possibile impostare tre proprietà per specificare la posizione in cui verrà visualizzata sullo schermo una finestra di dialogo.  La proprietà Center è booleana. Se il valore viene impostato su True, la finestra di dialogo verrà sempre visualizzata al centro dello schermo.  Se viene impostato su False, è possibile definire esplicitamente la posizione in cui la finestra di dialogo verrà visualizzata sullo schermo impostando le proprietà X e Y.  Le proprietà relative alla posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, definito come {X\=0, Y\=0}.  La posizione è inoltre basata sulla proprietà **Absolute Align**. Se il valore è True, le coordinate sono relative allo schermo. Se il valore è False, le coordinate sono relative alla finestra proprietaria della finestra di dialogo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Controls in Dialog Boxes](../mfc/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)