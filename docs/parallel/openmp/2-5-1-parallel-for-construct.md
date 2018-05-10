---
title: 2.5.1 parallelo costrutto for | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a233e7ed-2462-4f7a-9a5d-556ab9f363d8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef2732c4f8713466d282346ea240bd3c41886ce0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="251-parallel-for-construct"></a>2.5.1 Costrutto parallel for
Il **parallela per** direttiva è una scelta rapida per un **parallela** area che contiene una sola **per** direttiva. La sintassi del **parallela per** direttiva è come segue:  
  
```  
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop  
```  
  
 Questa direttiva consente tutte le clausole del **parallelo** direttiva e il **per** direttiva, ad eccezione di `nowait` clausola, con significati identici e restrizioni. La semantica è identica a specificare in modo esplicito un **parallela** direttiva immediatamente seguita da un **per** direttiva.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **Parallel** direttiva, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **per** direttiva, vedere [sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.  
  
-   Clausole di attributi di dati, vedere [2.7.2 clausole di attributi per la condivisione dei dati](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.