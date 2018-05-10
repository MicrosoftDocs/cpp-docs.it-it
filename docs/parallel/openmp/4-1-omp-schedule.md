---
title: 4.1 OMP_SCHEDULE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: d0dce411-2351-4ee9-a1cc-c0322a58b65c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7e13332077a40e741f56b5602ac5197bbdfef071
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
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