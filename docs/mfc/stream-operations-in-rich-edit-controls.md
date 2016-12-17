---
title: "Operazioni di flusso nei controlli Rich Edit | Microsoft Docs"
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
  - "CRichEditCtrl (classe), operazioni di flusso"
  - "CRichEditCtrl (classe), archiviazione di flussi"
  - "Rich Edit (controlli), operazioni di flusso"
  - "archiviazione, flusso in CRichEditCtrl"
  - "operazioni di flusso in CRichEditCtrl"
  - "archiviazione di flussi e CRichEditCtrl"
ms.assetid: 110b4684-1e76-4ca6-9ef0-5bc8b2d93c78
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operazioni di flusso nei controlli Rich Edit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare i flussi per trasferire i dati dentro o fuori da un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\).  Un flusso è definito da una struttura [EDITSTREAM](http://msdn.microsoft.com/library/windows/desktop/bb787891), che specifica un buffer e una funzione di callback definita dall'applicazione.  
  
 Per leggere i dati in un controllo Rich Edit \(ovvero uno stream dei dati in ingresso\), utilizzare la funzione membro [StreamIn](../Topic/CRichEditCtrl::StreamIn.md).  Il controllo chiama ripetutamente la funzione di callback definita dall'applicazione, che trasferisce ogni volta una parte dei dati nel buffer.  
  
 Per salvare il contenuto di un controllo Rich Edit \(ovvero uno stream dei dati in uscita\), è possibile utilizzare la funzione membro [StreamOut](../Topic/CRichEditCtrl::StreamOut.md).  Il controllo scrive ripetutamente al buffer e quindi chiama la funzione di callback definita dall'applicazione.  Per ogni chiamata, la funzione di callback salva il contenuto del buffer.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)