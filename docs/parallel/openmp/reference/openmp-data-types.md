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
ms.openlocfilehash: 97cf6ccad0a3b30c0abfa0076ea9c6a30b205d67
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50065200"
---
# <a name="openmp-data-types"></a>Tipi di dati OpenMP

Vengono forniti collegamenti ai tipi di dati usati nell'API OpenMP.

L'implementazione di Visual C++ di OpenMP standard include i seguenti tipi di dati.

|Tipo di dati|Descrizione|
|---------|-----------|
|[omp_lock_t](#omp-lock-t)|Un tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread è proprietario di un blocco.|
|[omp_nest_lock_t](#omp-nest-lock-t)|Un tipo che contiene una delle seguenti parti di informazioni su un blocco: se il blocco è disponibile, e l'identità del thread che possiede il blocco e un conteggio di annidamento.|

## <a name="omp-lock-t"></a>omp_lock_t

Un tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread è proprietario di un blocco.

Le seguenti funzioni utilizzano `omp_lock_t`:

- [omp_init_lock](openmp-functions.md#omp-init-lock)
- [omp_destroy_lock](openmp-functions.md#omp-destroy-lock)
- [omp_set_lock](openmp-functions.md#omp-set-lock)
- [omp_unset_lock](openmp-functions.md#omp-unset-lock)
- [omp_test_lock](openmp-functions.md#omp-test-lock)

Per altre informazioni, vedere [3.2 funzioni Lock](../../../parallel/openmp/3-2-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [funzioni omp_init_lock](openmp-functions.md#omp-init-lock) per un esempio d'uso `omp_lock_t`.

## <a name="omp-nest-lock-t"></a>omp_nest_lock_t

Un tipo che contiene le parti seguenti di informazioni su un blocco: se il blocco è disponibile, e l'identità del thread che possiede il blocco e un conteggio di annidamento.

Le seguenti funzioni utilizzano `omp_nest_lock_t`:

- [omp_init_nest_lock](openmp-functions.md#omp-init-nest-lock)
- [omp_destroy_nest_lock](openmp-functions.md#omp-destroy-nest-lock)
- [omp_set_nest_lock](openmp-functions.md#omp-set-nest-lock)
- [omp_unset_nest_lock](openmp-functions.md#omp-unset-nest-lock)
- [omp_test_nest_lock](openmp-functions.md#omp-test-nest-lock)

Per altre informazioni, vedere [3.2 funzioni Lock](../../../parallel/openmp/3-2-lock-functions.md).

### <a name="example"></a>Esempio

Visualizzare [omp_init_nest_lock](openmp-functions.md#omp-init-nest-lock) per un esempio d'uso `omp_nest_lock_t`.
