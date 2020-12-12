---
description: 'Altre informazioni su: affinity_partitioner Class'
title: Classe affinity_partitioner
ms.date: 11/04/2016
f1_keywords:
- affinity_partitioner
- PPL/concurrency::affinity_partitioner
- PPL/concurrency::affinity_partitioner::affinity_partitioner
helpviewer_keywords:
- affinity_partitioner class
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
ms.openlocfilehash: 44aa693d5007507e33f062a673713d1ddbda3172
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172323"
---
# <a name="affinity_partitioner-class"></a>Classe affinity_partitioner

La classe `affinity_partitioner` è simile alla classe `static_partitioner`, ma migliora l'affinità della cache offrendo la scelta di mappare sottointervalli ai thread di lavoro. Può migliorare notevolmente le prestazioni quando un ciclo viene eseguito di nuovo sullo stesso insieme di dati e i dati si adattano nella cache. Si noti che lo stesso oggetto `affinity_partitioner` deve essere usato con le iterazioni successive di un ciclo parallelo che viene eseguito su un particolare set di dati, per trarre vantaggio dalla località dei dati.

## <a name="syntax"></a>Sintassi

```cpp
class affinity_partitioner;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[affinity_partitioner](#ctor)|Costruisce un oggetto `affinity_partitioner`.|
|[Distruttore ~ affinity_partitioner](#dtor)|Elimina definitivamente un `affinity_partitioner` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`affinity_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="affinity_partitioner"></a><a name="dtor"></a> ~ affinity_partitioner

Elimina definitivamente un `affinity_partitioner` oggetto.

```cpp
~affinity_partitioner();
```

## <a name="affinity_partitioner"></a><a name="ctor"></a> affinity_partitioner

Costruisce un oggetto `affinity_partitioner`.

```cpp
affinity_partitioner();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
