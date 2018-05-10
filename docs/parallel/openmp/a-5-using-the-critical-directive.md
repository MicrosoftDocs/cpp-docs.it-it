---
title: Utilizzando la direttiva critica 5 | Documenti Microsoft
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
ms.openlocfilehash: c1a41e9664faaca24b6708c737a044828eb460bd
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="a5---using-the-critical-directive"></a>A.5   Utilizzo della direttiva critical
Nell'esempio seguente sono inclusi diversi `critical` direttive ([sezione 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) a pagina 18). Nell'esempio viene illustrato un modello di Accodamento messaggi in cui un'attività viene rimosso dalla coda e di elaborazione. Per proteggersi da più thread di rimozione dalla coda la stessa attività, l'operazione di annullamento deve essere un `critical` sezione. Due code in questo esempio sono indipendenti, sono protetti da `critical` direttive con nomi diversi, *xaxis* e *AsseY*.  
  
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