---
title: Classe affinity_partitioner
ms.date: 11/04/2016
f1_keywords:
- affinity_partitioner
- PPL/concurrency::affinity_partitioner
- PPL/concurrency::affinity_partitioner::affinity_partitioner
helpviewer_keywords:
- affinity_partitioner class
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
ms.openlocfilehash: dac25755c388e5297ce671da09b7938f09f1ef03
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57262792"
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
