---
title: Classe auto_partitioner
ms.date: 11/04/2016
f1_keywords:
- auto_partitioner
- PPL/concurrency::auto_partitioner
- PPL/concurrency::auto_partitioner::auto_partitioner
helpviewer_keywords:
- auto_partitioner class
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
ms.openlocfilehash: 4d1d8f19069412240de8e9d69cdcfb34618f2796
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142870"
---
# <a name="auto_partitioner-class"></a>Classe auto_partitioner

La classe `auto_partitioner` rappresenta il metodo predefinito `parallel_for`, `parallel_for_each` e `parallel_transform` usato per partizionare l'intervallo su cui eseguono l'iterazione. Questo metodo di partizionamento usa il furto di un intervallo per il bilanciamento del carico e l'annullamento per iterazione.

## <a name="syntax"></a>Sintassi

```cpp
class auto_partitioner;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[auto_partitioner](#ctor)|Costruisce un oggetto `auto_partitioner`.|
|[Distruttore ~ auto_partitioner](#dtor)|Elimina un oggetto `auto_partitioner`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`auto_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="dtor"></a>~ auto_partitioner

Elimina un oggetto `auto_partitioner`.

```cpp
~auto_partitioner();
```

## <a name="ctor"></a>auto_partitioner

Costruisce un oggetto `auto_partitioner`.

```cpp
auto_partitioner();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
