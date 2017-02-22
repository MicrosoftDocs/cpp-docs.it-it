---
title: "Sovrapposizioni immagini negli elenchi di immagini | Microsoft Docs"
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
  - "CImageList (classe), sovrapposizioni immagini in"
  - "elenchi di immagini [C++], sovrapposizioni immagini in"
  - "sovrapposizioni"
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Sovrapposizioni immagini negli elenchi di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni elenco immagini \([CImageList](../mfc/reference/cimagelist-class.md)\) include un elenco di immagini da utilizzare come maschere di sovrapposizione.  "Una maschera di sovrapposizione" viene disegnata un'immagine trasparente su un'altra immagine.  Le immagini possono essere utilizzate come maschera di sovrapposizione.  È possibile specificare fino a quattro maschere di sovrapposizione di elenco.  
  
 Aggiunta dell'indice di un'immagine all'elenco delle maschere di sovrapposizione utilizzando la funzione membro di [SetOverlayImage](../Topic/CImageList::SetOverlayImage.md), l'indice di un'immagine e l'indice di una maschera di sovrapposizione.  Si noti che gli indici per le maschere di sovrapposizione sono a base uno anziché in base zero.  
  
 Per disegnare una maschera di sovrapposizione su un'immagine utilizzando un'unica chiamata a **Disegna**.  I parametri includono l'indice dell'immagine per disegnare e l'indice di una maschera di sovrapposizione.  È necessario utilizzare la macro di [INDEXTOOVERLAYMASK](http://msdn.microsoft.com/library/windows/desktop/bb761408) per specificare l'indice della maschera di sovrapposizione.  È inoltre possibile specificare un'immagine sovrapposta quando chiama la funzione membro di [DrawIndirect](../Topic/CImageList::DrawIndirect.md).  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)