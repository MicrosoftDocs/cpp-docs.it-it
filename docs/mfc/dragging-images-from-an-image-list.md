---
title: "Trascinamento di immagini da un elenco di immagini | Microsoft Docs"
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
  - "CImageList (classe), trascinamento di immagini da"
  - "trascinamento di immagini da elenchi di immagini"
  - "elenchi di immagini [C++], trascinamento di immagini da"
  - "immagini [C++], trascinamento da elenchi di immagini"
ms.assetid: af691db8-e4f0-4046-b7b9-9acc68d3713d
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Trascinamento di immagini da un elenco di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CImageList](../mfc/reference/cimagelist-class.md) include le funzioni per trascinare un'immagine sullo schermo.  Le funzioni trascinare spostano un'immagine in modo uniforme, a colori e senza lampeggiamento del cursore.  Sia le immagini mascherate che smascherate possono essere trascinate.  
  
 Gli elementi iniziali di funzione membro di [BeginDrag](../Topic/CImageList::BeginDrag.md) un'operazione di trascinamento.  I parametri includono l'indice dell'immagine per trascinare e la posizione dell'area sensibile nell'immagine.  L'area sensibile è un singolo pixel che le funzioni trascinare riconoscono come posizione esatta dello schermo dell'immagine.  In genere, un'applicazione imposta l'area sensibile affinché coincida con l'area sensibile di un cursore del mouse.  La funzione membro di [DragMove](../Topic/CImageList::DragMove.md) dell'immagine in una nuova posizione.  
  
 La funzione membro di [DragEnter](../Topic/CImageList::DragEnter.md) imposta la posizione iniziale dell'immagine di trascinamento all'interno di una finestra e l'immagine viene disegnata nella posizione.  I parametri vengono un puntatore alla finestra in cui disegnare l'immagine e un punto che specifica le coordinate della posizione iniziale nella finestra.  Le coordinate sono relativi all'angolo superiore sinistro della finestra, non dell'area client.  Lo stesso vale per le immagini trascinare una funzione che coordinate take come parametri.  Ciò significa che è necessario compensare la larghezza degli elementi della finestra, ad esempio il bordo, la barra del titolo e la barra dei menu quando specifica le coordinate.  Se si specifica un handle di finestra di **NULL** quando chiama `DragEnter`, disegnare di trascinamento di funzioni nel contesto di dispositivo associato alla finestra del desktop e le coordinate sono relativi all'angolo superiore sinistro dello schermo.  
  
 `DragEnter` blocca tutti gli altri aggiornamenti nella finestra specificata durante un'operazione di trascinamento.  Se è necessario apportare eventuali disegno durante un'operazione di trascinamento, ad esempio evidenziazione della destinazione di un'operazione di trascinamento della selezione, è possibile nascondere temporaneamente l'immagine trascinata utilizzando la funzione membro di [DragLeave](../Topic/CImageList::DragLeave.md).  È inoltre possibile utilizzare la funzione membro di [DragShowNoLock](../Topic/CImageList::DragShowNolock.md).  
  
 Chiamare [EndDrag](../Topic/CImageList::EndDrag.md) al fatto che si trascina l'immagine.  
  
 La funzione membro di [SetDragCursorImage](../Topic/CImageList::SetDragCursorImage.md) crea una nuova immagine di trascinamento combinando l'immagine specificata \(in genere un'immagine del cursore del mouse\) con l'immagine di trascinamento corrente.  Poiché le funzioni trascinare utilizzano la nuova immagine durante l'operazione di trascinamento, è necessario utilizzare la funzione di [ShowCursor](http://msdn.microsoft.com/library/windows/desktop/ms648396) di windows per nascondere che il cursore del mouse dopo aver chiamato `SetDragCursorImage`.  In caso contrario, il sistema può sembrare che due cursori del mouse per la durata dell'operazione di trascinamento.  
  
 Quando un'applicazione chiama `BeginDrag`, il sistema crea un elenco immagini temporaneo e internal e copia l'immagine di trascinamento specificata all'elenco interno.  È possibile recuperare un puntatore all'elenco temporaneo immagine di trascinamento tramite la funzione membro di [GetDragImage](../Topic/CImageList::GetDragImage.md).  La funzione recupera anche la posizione corrente del trascinamento e l'offset dell'immagine di trascinamento relativo al percorso del trascinamento.  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)