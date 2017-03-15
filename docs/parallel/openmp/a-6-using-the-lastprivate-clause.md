---
title: "A.6   Using the lastprivate Clause | Microsoft Docs"
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
ms.assetid: cf3bf0cc-aa46-4e44-9433-e2969e3be2c1
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# A.6   Using the lastprivate Clause
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'esecuzione corretta talvolta dipende dal valore dell'ultima iterazione di un ciclo viene assegnato a una variabile.  Tali programmi da elencare tutte queste variabili come argomenti a `lastprivate` clausola \([parte 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) nella pagina 27\) affinché i valori delle variabili siano gli stessi di quando il ciclo viene eseguito in sequenza.  
  
```  
#pragma omp parallel  
{  
   #pragma omp for lastprivate(i)  
      for (i=0; i<n-1; i++)  
         a[i] = b[i] + b[i+1];  
}  
a[i]=b[i];  
```  
  
 Nell'esempio precedente, il valore di `i` alla fine di parallelo l'area sarà pari a  `n–1`, come nel caso sequenziale.