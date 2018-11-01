---
title: A.5   Utilizzo della direttiva critical
ms.date: 11/04/2016
ms.assetid: 14423018-25b9-4f98-92f2-34c9b0ac0ce0
ms.openlocfilehash: 82497d63acc057fbbcf26f585e42fc8611c08ec4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50545098"
---
# <a name="a5---using-the-critical-directive"></a>A.5   Utilizzo della direttiva critical

Nell'esempio seguente include numerose `critical` direttive ([sezione 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) a pagina 18). Nell'esempio viene illustrato un modello di Accodamento messaggi in cui un'attività viene rimosso dalla coda e lavorando. Per proteggersi da più thread di rimozione dalla coda la stessa attività, l'operazione di annullamento deve essere un `critical` sezione. Due code in questo esempio sono indipendenti, vengono protetti tramite `critical` con nomi diversi, direttive *xaxis* e *AsseY*.

```
#pragma omp parallel shared(x, y) private(x_next, y_next)
{
    #pragma omp critical ( xaxis )
        x_next = dequeue(x);
    work(x_next);
    #pragma omp critical ( yaxis )
        y_next = dequeue(y);
    work(y_next);
}
```