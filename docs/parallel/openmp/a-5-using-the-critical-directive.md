---
title: "A.5   Using the critical Directive | Microsoft Docs"
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
ms.assetid: 14423018-25b9-4f98-92f2-34c9b0ac0ce0
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.5   Using the critical Directive
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'esempio include diversi `critical` direttive \([parte 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) nella pagina 18\).  Nell'esempio viene illustrato un modello di accodamento in cui un'attività dequeued e elaborata.  Per di più thread che dequeuing la stessa attività, l'operazione dequeuing deve essere in una classe `critical` sezione.  Poiché le due code in questo esempio sono indipendenti, sono protette da `critical` direttive con nomi diversi, ascissa e asse y.  
  
```  
#pragma omp parallel shared(x, y) private(x_next, y_next)  
{  
    #pragma omp critical ( xaxis )  
        x_next = dequeue(x);  
    work(x_next);  
    #pragma omp critical ( yaxis )  
        y_next = dequeue(y);  
    work(y_next);  
}  
```