---
title: 3.2.1 Funzioni omp_init_lock e omp_init_nest_lock
ms.date: 11/04/2016
ms.assetid: 098a2721-b16a-484f-bc83-4b8e281e382c
ms.openlocfilehash: 2d15aacb5e6743d18150fb45bea85b7ca22a401f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50472776"
---
# <a name="321-ompinitlock-and-ompinitnestlock-functions"></a>3.2.1 Funzioni omp_init_lock e omp_init_nest_lock

Queste funzioni consentono solo di inizializzazione di un blocco. Ogni funzione inizializza il blocco associato al parametro *blocco* per l'utilizzo nelle chiamate successive. Il formato è il seguente:

```
#include <omp.h>
void omp_init_lock(omp_lock_t *lock);
void omp_init_nest_lock(omp_nest_lock_t *lock);
```

Lo stato iniziale viene sbloccato (vale a dire, nessun thread è proprietario del blocco). Per un blocco annidabile, il conteggio di annidamento iniziale è zero. Non è conforme a chiamare una di queste routine con una variabile di blocco che è già stato inizializzato.