---
title: 3.3.1 funzione omp_get_wtime | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 90188bd2-c53e-4398-8946-d3ecc92fa0f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d71296d23df72464ed730713566c95e2403760a1
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="331-ompgetwtime-function"></a>3.3.1 Funzione omp_get_wtime
Il `omp_get_wtime` funzione restituisce un valore a virgola mobile e precisione doppia corrisponde al tempo trascorso in secondi, dal "tempo nel passato".  Il "tempo effettivo in precedenza" è arbitrario, ma è sicuramente non per modificare durante l'esecuzione dell'applicazione. Il formato è il seguente:  
  
```  
#include <omp.h>  
double omp_get_wtime(void);  
```  
  
 Si prevede verrà utilizzata per misurare i tempi trascorsi come illustrato nell'esempio seguente la funzione:  
  
```  
double start;  
double end;  
start = omp_get_wtime();  
... work to be timed ...  
end = omp_get_wtime();  
printf_s("Work took %f sec. time.\n", end-start);  
```  
  
 Gli orari restituiti sono "tempi di singoli thread" da cui si intende che non è necessario essere a livello globale coerente in tutti i thread che fanno parte di un'applicazione.