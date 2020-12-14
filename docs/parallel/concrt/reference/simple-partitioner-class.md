---
description: 'Altre informazioni su: simple_partitioner Class'
title: Classe simple_partitioner
ms.date: 11/04/2016
f1_keywords:
- simple_partitioner
- PPL/concurrency::simple_partitioner
- PPL/concurrency::simple_partitioner::simple_partitioner
helpviewer_keywords:
- simple_partitioner class
ms.assetid: d7e997af-54d1-43f5-abe0-def72df6edb3
ms.openlocfilehash: 76dcac6d7fc2dce5b69d0a9dbefaf01420f8bcde
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188690"
---
# <a name="simple_partitioner-class"></a>Classe simple_partitioner

La classe `simple_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo in blocchi in modo che ogni blocco abbia almeno il numero di iterazioni specificate dalle dimensioni del blocco.

## <a name="syntax"></a>Sintassi

```cpp
class simple_partitioner;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[simple_partitioner](#ctor)|Costruisce un oggetto `simple_partitioner`.|
|[distruttore ~ simple_partitioner](#dtor)|Elimina un oggetto `simple_partitioner` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`simple_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppl. h

**Spazio dei nomi:** Concurrency

## <a name="simple_partitioner"></a><a name="dtor"></a> ~ simple_partitioner

Elimina un oggetto `simple_partitioner` .

```cpp
~simple_partitioner();
```

## <a name="simple_partitioner"></a><a name="ctor"></a> simple_partitioner

Costruisce un oggetto `simple_partitioner`.

```cpp
explicit simple_partitioner(_Size_type _Chunk_size);
```

### <a name="parameters"></a>Parametri

*_Chunk_size*<br/>
Dimensioni minime della partizione.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
