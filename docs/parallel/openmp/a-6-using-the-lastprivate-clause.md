---
title: A.6   Utilizzo della clausola lastprivate
ms.date: 11/04/2016
ms.assetid: cf3bf0cc-aa46-4e44-9433-e2969e3be2c1
ms.openlocfilehash: 7d5ba1413827590b7fb3afa0847b9aa1da3c41e1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50579804"
---
# <a name="a6---using-the-lastprivate-clause"></a>A.6   Utilizzo della clausola lastprivate

In alcuni casi l'esecuzione corretta dipende dal valore che assegna l'ultima iterazione di un ciclo a una variabile. Tali programmi necessario elencare tutte le variabili come argomenti per un `lastprivate` clausola ([sezione 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) nella pagina 27) in modo che i valori delle variabili sono quello utilizzato quando il ciclo viene eseguito in modo sequenziale.

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