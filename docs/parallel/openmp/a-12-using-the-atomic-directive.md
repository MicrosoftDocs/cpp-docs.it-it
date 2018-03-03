---
title: Utilizzo della direttiva atomica A.12 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: d3ba3c87-413d-4efa-8a45-8a7f28ab0164
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9aa619d9bbe635a41d15a39d6c05780a4416520e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="a12---using-the-atomic-directive"></a>A.12   Utilizzo della direttiva atomic
Nell'esempio seguente consente di evitare race condition (aggiornamenti simultanei di un elemento di *x* da più thread) utilizzando il `atomic` (direttiva) ([sezione 2.6.4](../../parallel/openmp/2-6-4-atomic-construct.md) nella pagina 19):  
  
```  
#pragma omp parallel for shared(x, y, index, n)  
    for (i=0; i<n; i++)   
    {  
        #pragma omp atomic  
            x[index[i]] += work1(i);  
        y[i] += work2(i);  
    }  
```  
  
 Il vantaggio dell'utilizzo di `atomic` direttiva in questo esempio è che consente gli aggiornamenti di due diversi elementi di x per l'esecuzione in parallelo. Se un `critical` (direttiva) ([sezione 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) a pagina 18) sono stati utilizzati in alternativa, quindi tutti gli aggiornamenti per gli elementi di *x* vengono eseguite in serie (ma non in qualsiasi ordine garantito).  
  
 Si noti che il `atomic` direttiva si applica solo all'istruzione C o C++ segue immediatamente.  Di conseguenza, gli elementi di *y* non vengono aggiornate in modo atomico in questo esempio.