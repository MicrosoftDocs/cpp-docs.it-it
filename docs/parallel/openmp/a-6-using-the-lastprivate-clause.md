---
title: 6 utilizzando la clausola lastprivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: cf3bf0cc-aa46-4e44-9433-e2969e3be2c1
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e35ad34ce3bd1f97a58273522520d6ab67710505
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="a6---using-the-lastprivate-clause"></a>A.6   Utilizzo della clausola lastprivate
Talvolta corretta esecuzione dipende dal valore assegnato a una variabile l'ultima iterazione di un ciclo. Tali programmi necessario elencare tutte le variabili come argomenti un `lastprivate` clausola ([sezione 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) nella pagina 27) in modo che i valori delle variabili sono identico quando il ciclo viene eseguito in modo sequenziale.  
  
```  
#pragma omp parallel  
{  
   #pragma omp for lastprivate(i)  
      for (i=0; i<n-1; i++)  
         a[i] = b[i] + b[i+1];  
}  
a[i]=b[i];  
```  
  
 Nell'esempio precedente, il valore di `i` sarà uguale alla fine dell'area parallela `n-1`, come nel caso sequenza.