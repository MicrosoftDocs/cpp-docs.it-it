---
title: 2.5.2 costrutto parallel sections | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 94220e27-14f8-465c-bd8d-eb960b4b5dee
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e3a76a950d547effccf0b50fa04799814597bc5e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
  
-   **parallelo** direttiva, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **Nelle sezioni** direttiva, vedere [sezione 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) pagina 14.