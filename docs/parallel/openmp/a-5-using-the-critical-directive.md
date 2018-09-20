---
title: A.5 uso della direttiva critical | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 14423018-25b9-4f98-92f2-34c9b0ac0ce0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 99f9ab513ae1df5a7e1e62cfefcefe404637c063
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444567"
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