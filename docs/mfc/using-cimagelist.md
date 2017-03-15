---
title: "Utilizzo di CImageList | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CImageList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImageList (classe), utilizzo"
  - "elenco immagini (controllo)"
ms.assetid: 3d2a909e-d641-46b7-aada-81cab1a29b41
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo di CImageList
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un elenco immagini, rappresentato dalla classe [CImageList](../mfc/reference/cimagelist-class.md), è una raccolta di immagini lo stesso ridimensionare, ognuno dei quali può fare riferimento al relativo indice.  Gli elenchi di immagini vengono utilizzati per gestire efficientemente grandi quantità di icone o di bitmap.  Gli elenchi di immagini non corrispondono a controlli poiché non sono finestre; tuttavia, vengono utilizzati con vari tipi di controlli, inclusi i controlli elenco \([CListCtrl](../mfc/reference/clistctrl-class.md)\), i controlli struttura ad albero \([Problemi](../mfc/reference/ctreectrl-class.md)\) e i controlli scheda \([CTabCtrl](../mfc/reference/ctabctrl-class.md)\).  
  
 Tutte le immagini in un elenco immagini sono contenute in una singola, una bitmap in formato del dispositivo.  Un elenco immagini nonché una bitmap monocromatica contenente le maschere utilizzate per disegnare immagini trasparente \(stile dell'icona\).  `CImageList` fornisce funzioni membro che consentono di disegnare immagini, creare ed eliminare gli elenchi di immagini, aggiungere e rimuovere immagini, le immagini di sostituzione, le immagini di unione e le immagini di trascinamento.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Tipi di elenchi di immagini](../mfc/types-of-image-lists.md)  
  
-   [Utilizzo di un elenco immagini](../mfc/using-an-image-list.md)  
  
-   [Modificare gli elenchi di immagini](../mfc/manipulating-image-lists.md)  
  
-   [Immagini di disegno da un elenco immagini](../mfc/drawing-images-from-an-image-list.md)  
  
-   [Sovrapposizioni immagine negli elenchi di immagini](../mfc/image-overlays-in-image-lists.md)  
  
-   [Trascinare le immagini da un elenco immagini](../mfc/dragging-images-from-an-image-list.md)  
  
-   [Informazioni di immagine negli elenchi di immagini](../mfc/image-information-in-image-lists.md)  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)