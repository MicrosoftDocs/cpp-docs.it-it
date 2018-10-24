---
title: I tipi di dati OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 10/23/2018
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OpenMP data types
- omp_lock_t
- omp_nest_lock_t
dev_langs:
- C++
helpviewer_keywords:
- OpenMP data types
- omp_lock_t OpenMP data type
- omp_nest_lock_t OpenMP data type
ms.assetid: cf1e1045-4d12-4d03-80b7-d5843b80ef85
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 254dffebc258867088f738b10a11bf48d31bd0a4
ms.sourcegitcommit: c045c3a7e9f2c7e3e0de5b7f9513e41d8b6d19b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2018
ms.locfileid: "49990069"
---
# <a name="openmp-data-types"></a>Tipi di dati OpenMP

Vengono forniti collegamenti ai tipi di dati usati nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include i seguenti tipi di dati.

Tipo di dati                           | Descrizione
----------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[omp_lock_t](#omp-lock-t)           | Un tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread è proprietario di un blocco.
[omp_nest_lock_t](#omp-nest-lock-t) | Un tipo che contiene una delle seguenti parti di informazioni su un blocco: se il blocco è disponibile, e l'identità del thread che possiede il blocco e un conteggio di annidamento.

## <a name="omp-lock-t"></a>omp_lock_t

Un tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread è proprietario di un blocco.

Le seguenti funzioni utilizzano `omp_lock_t`:

- [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md)
- [omp_destroy_lock](../../../parallel/openmp/reference/omp-destroy-lock.md)
- [omp_set_lock](../../../parallel/openmp/reference/omp-set-lock.md)
- [omp_unset_lock](../../../parallel/openmp/reference/omp-unset-lock.md)
- [omp_test_lock](../../../parallel/openmp/reference/omp-test-lock.md)

Per altre informazioni, vedere [3.2 funzioni Lock](../../../parallel/openmp/3-2-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio d'uso `omp_lock_t`.

## <a name="omp-nest-lock-t"></a>omp_nest_lock_t

Un tipo che contiene le parti seguenti di informazioni su un blocco: se il blocco è disponibile, e l'identità del thread che possiede il blocco e un conteggio di annidamento.

Le seguenti funzioni utilizzano `omp_nest_lock_t`:

- [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md)
- [omp_destroy_nest_lock](../../../parallel/openmp/reference/omp-destroy-nest-lock.md)
- [omp_set_nest_lock](../../../parallel/openmp/reference/omp-set-nest-lock.md)
- [omp_unset_nest_lock](../../../parallel/openmp/reference/omp-unset-nest-lock.md)
- [omp_test_nest_lock](../../../parallel/openmp/reference/omp-test-nest-lock.md)

Per altre informazioni, vedere [3.2 funzioni Lock](../../../parallel/openmp/3-2-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) per un esempio d'uso `omp_nest_lock_t`.
