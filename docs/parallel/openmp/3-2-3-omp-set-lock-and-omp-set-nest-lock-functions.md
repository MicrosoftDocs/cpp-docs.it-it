---
title: 3.2.3 omp_set_lock e omp_set_nest_lock funzioni | Microsoft Docs
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
ms.openlocfilehash: 792b95baef2821bb693d9a90fc228d2b0c508e1f
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46420361"
---
# <a name="323-ompsetlock-and-ompsetnestlock-functions"></a>3.2.3 Funzioni omp_set_lock e omp_set_nest_lock

Ognuna di queste funzioni consente di bloccare il thread che esegue la funzione fino a quando il blocco specificato è disponibile e quindi imposta il blocco. Un semplice blocco è disponibile se è sbloccato. Un blocco annidabile è disponibile se non sia bloccato o se è già di proprietà dal thread di esecuzione della funzione. Il formato è il seguente:

```
#include <omp.h>
void omp_set_lock(omp_lock_t *lock);
void omp_set_nest_lock(omp_nest_lock_t *lock);
```

Per un semplice blocco, l'argomento di `omp_set_lock` funzione deve puntare a una variabile inizializzata blocco. La proprietà del blocco viene concesso al thread di esecuzione della funzione.

Per un blocco annidabile, l'argomento di `omp_set_nest_lock` funzione deve puntare a una variabile inizializzata blocco. Il numero di nidificazione viene incrementato e il thread viene concesso o mantiene, la proprietà del blocco.