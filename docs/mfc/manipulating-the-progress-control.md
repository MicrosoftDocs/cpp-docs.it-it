---
title: "Modifica del controllo Progress | Microsoft Docs"
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
  - "controllo dei controlli di stato"
  - "CProgressCtrl (classe), modifica"
  - "CProgressCtrl (classe), utilizzo"
  - "CProgressCtrl (classe), utilizzo"
  - "controlli di stato [C++], modifica"
ms.assetid: 9af561d1-980b-4003-a6da-ff79be15bf23
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Modifica del controllo Progress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono tre modi per modificare la posizione corrente di un controllo dello stato di avanzamento \([CProgressCtrl](../mfc/reference/cprogressctrl-class.md)\).  
  
-   La posizione può essere modificata da un importo di incremento preimpostati.  
  
-   La posizione può essere modificata in modo arbitrario.  
  
-   Il percorso può essere modificato in un valore specifico.  
  
### Per modificare il percorso da un set corso  
  
1.  Utilizzare la funzione membro di [SetStep](../Topic/CProgressCtrl::SetStep.md) per impostare la quantità di incremento.  Per impostazione predefinita, questo valore è pari a 10.  Questo valore viene in genere impostato come una delle impostazioni iniziali del controllo.  Il valore di incremento può essere negativo.  
  
2.  Utilizzare la funzione membro di [StepIt](../Topic/CProgressCtrl::StepIt.md) per incrementare la posizione.  In questo modo il controllo a ridisegnarsi.  
  
    > [!NOTE]
    >  `StepIt` causerà la posizione di eseguire il wrapping.  Ad esempio, dato un intervallo compreso tra 1 e 100, un passaggio di 20 e un percorso di 90, `StepIt` determinano la posizione su 10.  
  
### Per modificare la posizione in modo arbitrario  
  
1.  Utilizzare la funzione membro di [OffsetPos](../Topic/CProgressCtrl::OffsetPos.md) per modificare il percorso.  `OffsetPos` accetta i valori negativi.  
  
    > [!NOTE]
    >  `OffsetPos`, a differenza di `StepIt`, non verrà eseguito il wrapping della posizione.  La nuova posizione viene modificata per rimanere nell'intervallo.  
  
### Per modificare la posizione su un valore specifico  
  
1.  Utilizzare la funzione membro di [SetPos](../Topic/CProgressCtrl::SetPos.md) per impostare la posizione su un valore specifico.  Se necessario, la nuova posizione viene modificata per essere compreso nell'intervallo.  
  
 In genere, il controllo dello stato di avanzamento viene utilizzato unicamente per l'output.  Per ottenere la posizione corrente senza specificare un nuovo valore, utilizzare [GetPos](../Topic/CProgressCtrl::GetPos.md).  
  
## Vedere anche  
 [Utilizzo di CProgressCtrl](../mfc/using-cprogressctrl.md)   
 [Controlli](../mfc/controls-mfc.md)