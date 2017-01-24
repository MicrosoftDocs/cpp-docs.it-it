---
title: "Tipi di elenchi immagini | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CImageList (classe), tipi"
  - "elenchi di immagini [C++], tipi"
  - "elenchi [C++], immagine"
ms.assetid: bee5e7c3-78f5-4037-a136-9c50d67cdee5
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Tipi di elenchi immagini
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono due tipi di elenchi di immagini \([CImageList](../mfc/reference/cimagelist-class.md)\): nonmasked e mascherato.  "Un elenco immagini nonmasked" è costituito da una bitmap di colore che contiene uno o più immagini.  "Un elenco immagini mascherato" è costituito da due bitmap di dimensioni uguali.  Il primo è una bitmap di colore che contiene le immagini e il secondo è una bitmap monocromatica che contiene una serie di maschere \- una per ogni immagine nella prima bitmap.  
  
 Uno degli overload della funzione membro di **Crea** accetta un flag per indicare se un elenco immagini viene mascherato. \(Gli altri overload creano gli elenchi di immagini mascherati\).  
  
 Quando un'immagine nonmasked viene disegnata, viene copiata semplicemente nel contesto del dispositivo di destinazione; ovvero viene disegnata sul colore di sfondo esistente del contesto di dispositivo.  Quando un'immagine mascherata viene disegnata, i bit dell'immagine vengono combinati con i bit della maschera, in genere producenti aree trasparenti della bitmap in cui il colore di sfondo di contesto del dispositivo di destinazione a parte.  È possibile specificare diversi stili di disegno quando si disegna un'immagine mascherata.  Ad esempio, è possibile specificare che l'immagine è retinata per indicare un oggetto selezionato.  
  
## Vedere anche  
 [Utilizzo di CImageList](../mfc/using-cimagelist.md)   
 [Controlli](../mfc/controls-mfc.md)