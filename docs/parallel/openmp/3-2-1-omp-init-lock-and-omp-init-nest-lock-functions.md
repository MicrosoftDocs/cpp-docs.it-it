---
title: 3.2.1 funzioni omp_init_lock e omp_init_nest_lock funzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 098a2721-b16a-484f-bc83-4b8e281e382c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4303eb3ccfcb1c449022a4be32f94b9f91e6e80c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46387003"
---
# <a name="321-ompinitlock-and-ompinitnestlock-functions"></a>3.2.1 Funzioni omp_init_lock e omp_init_nest_lock

Queste funzioni consentono solo di inizializzazione di un blocco. Ogni funzione inizializza il blocco associato al parametro *blocco* per l'utilizzo nelle chiamate successive. Il formato è il seguente:

```
#include <omp.h>
void omp_init_lock(omp_lock_t *lock);
void omp_init_nest_lock(omp_nest_lock_t *lock);
```

Lo stato iniziale viene sbloccato (vale a dire, nessun thread è proprietario del blocco). Per un blocco annidabile, il conteggio di annidamento iniziale è zero. Non è conforme a chiamare una di queste routine con una variabile di blocco che è già stato inizializzato.