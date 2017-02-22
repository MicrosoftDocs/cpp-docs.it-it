---
title: "Informazioni sulle immagini negli elenchi di immagini | Microsoft Docs"
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
  - "CImageList (classe), informazioni su immagini in"
  - "elenchi di immagini [C++], informazioni su immagini in"
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Informazioni sulle immagini negli elenchi di immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[CImageList](../mfc/reference/cimagelist-class.md) include una serie di funzioni per recuperare informazioni da un elenco.  La funzione membro di [GetImageInfo](../Topic/CImageList::GetImageInfo.md) riempie una struttura di `IMAGEINFO` di informazioni su una singola immagine, inclusi gli handle delle bitmap della maschera e di immagine, dal numero dei piani e di bit di colore per pixel e del rettangolo di delimitazione dell'immagine nella bitmap di immagine.  È possibile utilizzare queste informazioni per modificare direttamente le bitmap per l'immagine.  
  
 La funzione membro di [GetImageCount](../Topic/CImageList::GetImageCount.md) recupera il numero di immagini in un elenco.  
  
 È possibile creare un'icona basata su un'immagine e una maschera in un elenco immagini utilizzando la funzione membro di [ExtractIcon](../Topic/CImageList::ExtractIcon.md).  La funzione restituisce l'handle della nuova icona.  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)