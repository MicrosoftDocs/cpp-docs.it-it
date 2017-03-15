---
title: "Comunicazione con un controllo Tree | Microsoft Docs"
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
  - "comunicazioni, struttura ad albero (controlli)"
  - "CTreeCtrl (classe), chiamata di funzioni membro"
  - "struttura ad albero (controlli)"
  - "struttura ad albero (controlli), comunicazione con"
ms.assetid: 680ad9ee-b11f-452d-93fa-501ca7d7e069
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Comunicazione con un controllo Tree
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare i metodi diversi per chiamare le funzioni membro di un oggetto di [Problemi](../mfc/reference/ctreectrl-class.md) a seconda di come è stato creato l'oggetto:  
  
-   Se il controllo struttura ad albero è in una finestra di dialogo, utilizzare una variabile membro di tipo `CTreeCtrl` create nella classe della finestra di dialogo.  
  
-   Se il controllo struttura ad albero è una finestra figlio, utilizzare l'oggetto di `CTreeCtrl` \(o puntatore\) utilizzato per costruire l'oggetto.  
  
-   Se si utilizza un oggetto di `CTreeView`, utilizzare la funzione [CTreeView::GetTreeCtrl](../Topic/CTreeView::GetTreeCtrl.md) per ottenere un riferimento al controllo di struttura ad albero.  È possibile inizializzare un altro riferimento al valore o assegnare l'indirizzo di un riferimento a un puntatore di `CTreeCtrl`.  
  
## Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)