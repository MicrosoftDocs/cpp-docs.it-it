---
title: A.1   Esecuzione di un ciclo semplice in parallelo
ms.date: 11/04/2016
ms.assetid: b8aaacae-b20d-4b16-a540-54ccbf09582b
ms.openlocfilehash: 5bd9a9c8b1d226c67f7e9031a547e551fae3407b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558938"
---
# <a name="a1---executing-a-simple-loop-in-parallel"></a>A.1   Esecuzione di un ciclo semplice in parallelo

Nell'esempio seguente viene illustrato come parallelizzare un ciclo semplice usando il `parallel for` (direttiva) ([sezione 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) nella pagina 16). La variabile di iterazione del ciclo è privata per impostazione predefinita, pertanto non è necessario specificarlo in modo esplicito in una clausola private.

```
#pragma omp parallel for
    for (i=1; i<n; i++)
        b[i] = (a[i] + a[i-1]) / 2.0;
```