---
title: 3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 5357e43e-a7c0-41d7-b529-3f7d15da8b11
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 426ac0a5ff974e486f70eed2965fdc27d5acc941
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46419113"
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