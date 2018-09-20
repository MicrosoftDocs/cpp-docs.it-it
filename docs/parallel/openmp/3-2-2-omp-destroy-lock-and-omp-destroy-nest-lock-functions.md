---
title: 3.2.2 funzioni omp_destroy_lock e omp_destroy_nest_lock funzioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: d334907d-94f7-4bbf-b20e-41d53484cbff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2b7b762614e406e5fb4497ec901ad8f65dae15a5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433876"
---
# <a name="322-ompdestroylock-and-ompdestroynestlock-functions"></a>3.2.2 Funzioni omp_destroy_lock e omp_destroy_nest_lock

Queste funzioni assicurarsi che la punta alla variabile lock *blocco* è inizializzata. Il formato è il seguente:

```
#include <omp.h>
void omp_destroy_lock(omp_lock_t *lock);
void omp_destroy_nest_lock(omp_nest_lock_t *lock);
```

Non è conforme a chiamare una di queste routine con una variabile di blocco che è non inizializzato o lo sblocco.