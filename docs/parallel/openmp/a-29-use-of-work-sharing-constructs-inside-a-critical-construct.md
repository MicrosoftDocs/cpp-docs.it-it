---
title: A.29   Utilizzo di costrutti per la condivisione del lavoro in un costrutto critical
ms.date: 11/04/2016
ms.assetid: d5c8a83f-2f51-4f23-8ddf-d267e347507f
ms.openlocfilehash: fac5576f859f63298d658b51c4307bb238e301c8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643586"
---
# <a name="a29---use-of-work-sharing-constructs-inside-a-critical-construct"></a>A.29   Utilizzo di costrutti per la condivisione del lavoro in un costrutto critical

Nell'esempio seguente viene illustrato come utilizzare un costrutto di condivisione del lavoro all'interno di un `critical` costruire. In questo esempio è conforme perché la condivisione del lavoro costruire e `critical` costrutto non deve essere associato alla stessa area parallela.

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