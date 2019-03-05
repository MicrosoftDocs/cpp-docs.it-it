---
title: Classe static_partitioner
ms.date: 11/04/2016
f1_keywords:
- static_partitioner
- PPL/concurrency::static_partitioner
- PPL/concurrency::static_partitioner::static_partitioner
helpviewer_keywords:
- static_partitioner class
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
ms.openlocfilehash: 5120e3c53dc00ba9d5c3a4218efe1dcfb8f92e28
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57287642"
---
# <a name="staticpartitioner-class"></a>Classe static_partitioner

La classe `static_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo nello stesso numero di blocchi delle unità di lavoro disponibili all'utilità di pianificazione sottostante.

## <a name="syntax"></a>Sintassi

```
class static_partitioner;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[static_partitioner](#ctor)|Costruisce un oggetto `static_partitioner`.|
|[~ static_partitioner distruttore](#dtor)|Elimina un oggetto `static_partitioner`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`static_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** PPL

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~static_partitioner

Elimina un oggetto `static_partitioner`.

```
~static_partitioner();
```

##  <a name="ctor"></a> static_partitioner

Costruisce un oggetto `static_partitioner`.

```
static_partitioner();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
