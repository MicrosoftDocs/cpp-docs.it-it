---
title: A.29 condivisione utilizzo di lavoro costruisce all'interno di un costrutto critical | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: d5c8a83f-2f51-4f23-8ddf-d267e347507f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ccbb39a9067adf545339d02fe0c05e24fbcdb0a4
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a29---use-of-work-sharing-constructs-inside-a-critical-construct"></a>A.29   Utilizzo di costrutti per la condivisione del lavoro in un costrutto critical
Nell'esempio seguente viene illustrato come utilizzare un costrutto di condivisione del lavoro all'interno di un `critical` costruire. In questo esempio è conforme perché la condivisione del lavoro costruire e `critical` costrutto non è possibile associare alla stessa area parallela.  
  
```  
void f()  
{  
  int i = 1;  
  #pragma omp parallel sections  
  {  
    #pragma omp section  
    {  
      #pragma omp critical (name)  
      {  
        #pragma omp parallel  
        {  
          #pragma omp single  
          {  
            i++;  
          }  
        }  
      }  
    }  
  }  
}  
```