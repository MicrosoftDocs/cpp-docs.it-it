---
title: "Impostazioni per il controllo Progress | Microsoft Docs"
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
  - "CProgressCtrl (classe), impostazioni"
  - "controlli di stato [C++], impostazioni"
ms.assetid: f4616e91-74fa-4000-ba0d-d3ddc0ee075b
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Impostazioni per il controllo Progress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le impostazioni di base per il controllo di stato \([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)\) sono intervallo e la posizione corrente.  L'intervallo rappresenta l'intera durata dell'operazione.  La posizione corrente rappresenta lo stato di avanzamento che l'applicazione ha eseguito verso il completamento dell'operazione.  Qualsiasi modifica all'intervallo o al percorso del controllo di stato per ridisegnare.  
  
 Per impostazione predefinita, l'intervallo viene impostato su 0 \- 100 e la posizione iniziale vengono impostati su 0.  Per recuperare le impostazioni correnti dell'intervallo per il controllo di stato, utilizzare la funzione membro di [GetRange](../Topic/CProgressCtrl::GetRange.md).  Per modificare l'intervallo, utilizzare la funzione membro di [SetRange](../Topic/CProgressCtrl::SetRange.md).  
  
 Per impostare la posizione, utilizzare [SetPos](../Topic/CProgressCtrl::SetPos.md).  Per recuperare la posizione corrente senza specificare un nuovo valore, utilizzare [GetPos](../Topic/CProgressCtrl::GetPos.md).  Ad esempio, potrebbe essere necessario eseguire semplicemente una query sullo stato dell'operazione in corso.  
  
 Per eseguire la posizione corrente del controllo di stato, utilizzare [StepIt](../Topic/CProgressCtrl::StepIt.md).  Per impostare la quantità di ogni passaggio, utilizzare [SetStep](../Topic/CProgressCtrl::SetStep.md)  
  
## Vedere anche  
 [Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controlli](../mfc/controls-mfc.md)