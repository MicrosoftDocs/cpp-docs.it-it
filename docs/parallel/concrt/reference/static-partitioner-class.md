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
ms.openlocfilehash: 7a58daa27bc7a2f51f78a3068a2f152979ffdd72
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142686"
---
# <a name="static_partitioner-class"></a>Classe static_partitioner

La classe `static_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo in tutti i blocchi quanti sono i thread di lavoro disponibili per l'utilità di pianificazione sottostante.

## <a name="syntax"></a>Sintassi

```cpp
class static_partitioner;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[static_partitioner](#ctor)|Costruisce un oggetto `static_partitioner`.|
|[Distruttore ~ static_partitioner](#dtor)|Elimina un oggetto `static_partitioner`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`static_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="dtor"></a>~ static_partitioner

Elimina un oggetto `static_partitioner`.

```cpp
~static_partitioner();
```

## <a name="ctor"></a>static_partitioner

Costruisce un oggetto `static_partitioner`.

```cpp
static_partitioner();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
