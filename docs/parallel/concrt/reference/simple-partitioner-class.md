---
title: Classe simple_partitioner | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- simple_partitioner
- PPL/concurrency::simple_partitioner
- PPL/concurrency::simple_partitioner::simple_partitioner
dev_langs:
- C++
helpviewer_keywords:
- simple_partitioner class
ms.assetid: d7e997af-54d1-43f5-abe0-def72df6edb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 89114c96beb49c8f843ec8a04b08802632c61ca1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401511"
---
# <a name="simplepartitioner-class"></a>Classe simple_partitioner

La classe `simple_partitioner` rappresenta il partizionamento statico dell'intervallo iterato da `parallel_for`. Il partitioner divide l'intervallo in blocchi in modo che ogni blocco abbia almeno il numero di iterazioni specificate dalle dimensioni del blocco.

## <a name="syntax"></a>Sintassi

```
class simple_partitioner;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[simple_partitioner](#ctor)|Costruisce un oggetto `simple_partitioner`.|
|[~ simple_partitioner distruttore](#dtor)|Elimina un oggetto `simple_partitioner`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`simple_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** PPL

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~ simple_partitioner

Elimina un oggetto `simple_partitioner`.

```
~simple_partitioner();
```

##  <a name="ctor"></a> simple_partitioner

Costruisce un oggetto `simple_partitioner`.

```
explicit simple_partitioner(_Size_type _Chunk_size);
```

### <a name="parameters"></a>Parametri

*_Chunk_size*<br/>
Le dimensioni minime partizione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
