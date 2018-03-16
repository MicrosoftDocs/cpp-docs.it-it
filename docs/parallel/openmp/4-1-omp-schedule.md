---
title: 4.1 OMP_SCHEDULE | Documenti Microsoft
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
ms.assetid: d0dce411-2351-4ee9-a1cc-c0322a58b65c
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 330e5ea576e3cd779a7c17c21d00b6459f5e7043
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="41-ompschedule"></a>4.1 OMP_SCHEDULE
**OMP_SCHEDULE** si applica solo al **per** e **parallele per** direttive con il tipo di pianificazione **runtime**. Le dimensioni di tipo e il blocco di pianificazione per tutti i cicli di questo tipo possono impostare in fase di esecuzione impostando la variabile di ambiente per uno dei tipi di pianificazione riconosciuto e facoltativa *chunk_size*.  
  
 Per **per** e **parallela per** direttive che dispongono di un tipo di pianificazione diverso da **runtime**, **OMP_SCHEDULE** viene ignorato. Il valore predefinito per questa variabile di ambiente è definito dall'implementazione. Se l'opzione facoltativa *chunk_size* è impostata, il valore deve essere positivo. Se *chunk_size* non è impostato, si presuppone un valore pari a 1, tranne nel caso di un **statico** pianificazione. Per un **statico** pianificazione, le dimensioni del blocco predefinito sono impostata per lo spazio di iterazione ciclo diviso per il numero di thread applicato al ciclo.  
  
 Esempio:  
  
```  
setenv OMP_SCHEDULE "guided,4"  
setenv OMP_SCHEDULE "dynamic"  
```  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **per** direttiva, vedere [sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.  
  
-   **parallelo per** direttiva, vedere [sezione 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) nella pagina 16.