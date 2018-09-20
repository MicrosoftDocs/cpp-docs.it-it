---
title: Classe affinity_partitioner | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- affinity_partitioner
- PPL/concurrency::affinity_partitioner
- PPL/concurrency::affinity_partitioner::affinity_partitioner
dev_langs:
- C++
helpviewer_keywords:
- affinity_partitioner class
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9b1254b316a52bd3e61b3cafd81ba2e89ee88b62
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444645"
---
# <a name="affinitypartitioner-class"></a>Classe affinity_partitioner

La classe `affinity_partitioner` è simile alla classe `static_partitioner`, ma migliora l'affinità della cache offrendo la scelta di mappare sottointervalli ai thread di lavoro. Può migliorare notevolmente le prestazioni quando un ciclo viene eseguito di nuovo sullo stesso insieme di dati e i dati si adattano nella cache. Si noti che lo stesso oggetto `affinity_partitioner` deve essere usato con le iterazioni successive di un ciclo parallelo che viene eseguito su un particolare set di dati, per trarre vantaggio dalla località dei dati.

## <a name="syntax"></a>Sintassi

```
class affinity_partitioner;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[affinity_partitioner](#ctor)|Costruisce un oggetto `affinity_partitioner`.|
|[~ affinity_partitioner distruttore](#dtor)|Elimina definitivamente un `affinity_partitioner` oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`affinity_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** PPL

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~affinity_partitioner

Elimina definitivamente un `affinity_partitioner` oggetto.

```
~affinity_partitioner();
```

##  <a name="ctor"></a> affinity_partitioner

Costruisce un oggetto `affinity_partitioner`.

```
affinity_partitioner();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
