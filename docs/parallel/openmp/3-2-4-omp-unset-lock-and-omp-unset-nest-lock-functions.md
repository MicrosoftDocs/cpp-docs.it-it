---
title: 3.2.4 Funzioni omp_unset_lock e omp_unset_nest_lock
ms.date: 11/04/2016
ms.assetid: 5357e43e-a7c0-41d7-b529-3f7d15da8b11
ms.openlocfilehash: b0764e3590f8edb3a3e783d9b5493a64be154401
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50607866"
---
# <a name="324-ompunsetlock-and-ompunsetnestlock-functions"></a>3.2.4 Funzioni omp_unset_lock e omp_unset_nest_lock

Queste funzioni forniscono i mezzi di rilasciare la proprietà di un blocco. Il formato è il seguente:

```
#include <omp.h>
void omp_unset_lock(omp_lock_t *lock);
void omp_unset_nest_lock(omp_nest_lock_t *lock);
```

L'argomento per ognuna di queste funzioni deve puntare a una variabile di blocco inizializzato il thread che esegue la funzione di proprietà. Il comportamento è definito se il thread non proprietario del blocco.

Per un semplice blocco, il `omp_unset_lock` funzione rilascia il thread che esegue la funzione di proprietà del blocco.

Per un blocco annidabile, il `omp_unset_nest_lock` funzione decrementa la nidificazione count e rilascia il thread che esegue la funzione di proprietà del blocco se il numero risultante è zero.