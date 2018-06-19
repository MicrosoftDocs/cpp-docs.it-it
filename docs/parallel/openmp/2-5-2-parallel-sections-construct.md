---
title: 2.5.2 costrutto parallel sections | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 94220e27-14f8-465c-bd8d-eb960b4b5dee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b6f7a84e322cb273733c6a724ee2563928df8362
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33689480"
---
# <a name="252-parallel-sections-construct"></a>2.5.2 Costrutto parallel sections
Il **parallela sezioni** direttiva fornisce un modulo di scelta rapida per la specifica un **parallela** contenente una sola area **sezioni** direttiva. La semantica è identica a specificare in modo esplicito un **parallela** direttiva immediatamente seguita da un **sezioni** direttiva. La sintassi del **parallela sezioni** direttiva è come segue:  
  
```  
#pragma omp parallel sections  [clause[[,] clause] ...] new-line  
   {  
   [#pragma omp section new-line]  
      structured-block  
   [#pragma omp section new-linestructured-block  ]  
   ...  
}  
```  
  
 Il *clausola* può essere una delle clausole di accettato dal **parallela** e **sezioni** direttive, ad eccezione di **nowait** clausola.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **Parallel** direttiva, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **Nelle sezioni** direttiva, vedere [sezione 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) pagina 14.