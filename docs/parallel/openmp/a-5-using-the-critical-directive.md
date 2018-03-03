---
title: Utilizzando la direttiva critica 5 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 14423018-25b9-4f98-92f2-34c9b0ac0ce0
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7cf4170fae6792906db29c90f61f067886b00f1d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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