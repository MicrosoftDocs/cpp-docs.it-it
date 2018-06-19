---
title: Le variabili dell'ambito A.21 con la clausola privata | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 7cdb4a7f-af24-44ac-9d33-e43840bc8f3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9ad2258da592bb68c5eae9e52e85e63a161a24b5
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33690507"
---
# <a name="a21---scoping-variables-with-the-private-clause"></a>A.21   Definizione dell'ambito delle variabili con la clausola private
I valori di `i` e `j` nell'esempio seguente non sono definiti in uscita dall'area parallela:  
  
```  
int i, j;  
i = 1;  
j = 2;  
#pragma omp parallel private(i) firstprivate(j)  
{  
  i = 3;  
  j = j + 2;  
}  
printf_s("%d %d\n", i, j);  
```  
  
 Per ulteriori informazioni sul `private` clausola, vedere [sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25.