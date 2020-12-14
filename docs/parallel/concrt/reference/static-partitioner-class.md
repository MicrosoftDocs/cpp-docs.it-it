---
description: 'Altre informazioni su: static_partitioner Class'
title: Classe static_partitioner
ms.date: 11/04/2016
f1_keywords:
- static_partitioner
- PPL/concurrency::static_partitioner
- PPL/concurrency::static_partitioner::static_partitioner
helpviewer_keywords:
- static_partitioner class
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
ms.openlocfilehash: f75d2e620a66e0ed347d39d429f59e3e2715369a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188495"
---
# <a name="static_partitioner-class"></a>Classe static_partitioner

La classe `static_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo in tutti i blocchi quanti sono i thread di lavoro disponibili per l'utilità di pianificazione sottostante.

## <a name="syntax"></a>Sintassi

```cpp
class static_partitioner;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[static_partitioner](#ctor)|Costruisce un oggetto `static_partitioner`.|
|[Distruttore ~ static_partitioner](#dtor)|Elimina un oggetto `static_partitioner` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`static_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="static_partitioner"></a><a name="dtor"></a> ~ static_partitioner

Elimina un oggetto `static_partitioner` .

```cpp
~static_partitioner();
```

## <a name="static_partitioner"></a><a name="ctor"></a> static_partitioner

Costruisce un oggetto `static_partitioner`.

```cpp
static_partitioner();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
