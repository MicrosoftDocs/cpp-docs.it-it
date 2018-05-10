---
title: 3.2.3 funzioni omp_set_lock e omp_set_nest_lock funzioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b5323879-f72e-418e-953f-3979fdda17a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ba24e923051eb887db2a81c1d9765d31a4ef7b24
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="323-ompsetlock-and-ompsetnestlock-functions"></a>3.2.3 Funzioni omp_set_lock e omp_set_nest_lock
Ognuna di queste funzioni Blocca il thread di esecuzione della funzione fino a quando non è disponibile e quindi imposta il blocco di blocco specificato. Un semplice blocco è disponibile se è sbloccato. Un blocco annidabile è disponibile se è sbloccato o se si è già di proprietà dal thread di esecuzione della funzione. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_lock(omp_lock_t *lock);  
void omp_set_nest_lock(omp_nest_lock_t *lock);  
```  
  
 Per un semplice blocco, l'argomento di `omp_set_lock` funzione deve puntare a una variabile del blocco inizializzato. Proprietà del blocco viene concesso al thread di esecuzione della funzione.  
  
 Per un blocco annidabile, l'argomento di `omp_set_nest_lock` funzione deve puntare a una variabile del blocco inizializzato. Il numero di nidificazione viene incrementato e il thread viene concesso o mantiene, la proprietà del blocco.