---
description: 'Altre informazioni su: auto_partitioner Class'
title: Classe auto_partitioner
ms.date: 11/04/2016
f1_keywords:
- auto_partitioner
- PPL/concurrency::auto_partitioner
- PPL/concurrency::auto_partitioner::auto_partitioner
helpviewer_keywords:
- auto_partitioner class
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
ms.openlocfilehash: d8e099c7a3132ce89f81df65d7e18a5c6c673697
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172258"
---
# <a name="auto_partitioner-class"></a>Classe auto_partitioner

La classe `auto_partitioner` rappresenta il metodo predefinito `parallel_for`, `parallel_for_each` e `parallel_transform` usato per partizionare l'intervallo su cui eseguono l'iterazione. Questo metodo di partizionamento usa il furto di un intervallo per il bilanciamento del carico e l'annullamento per iterazione.

## <a name="syntax"></a>Sintassi

```cpp
class auto_partitioner;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[auto_partitioner](#ctor)|Costruisce un oggetto `auto_partitioner`.|
|[Distruttore ~ auto_partitioner](#dtor)|Elimina un oggetto `auto_partitioner` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`auto_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="auto_partitioner"></a><a name="dtor"></a> ~ auto_partitioner

Elimina un oggetto `auto_partitioner` .

```cpp
~auto_partitioner();
```

## <a name="auto_partitioner"></a><a name="ctor"></a> auto_partitioner

Costruisce un oggetto `auto_partitioner`.

```cpp
auto_partitioner();
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
