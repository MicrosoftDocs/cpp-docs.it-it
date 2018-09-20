---
title: Classe auto_partitioner | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: reference
f1_keywords:
- auto_partitioner
- PPL/concurrency::auto_partitioner
- PPL/concurrency::auto_partitioner::auto_partitioner
dev_langs:
- C++
helpviewer_keywords:
- auto_partitioner class
ms.assetid: 7cc08e5d-20b4-47a4-b4b5-c214a78f5a9e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a2bb62d76733e77c2528a80dfc4e9ef358878895
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46425411"
---
# <a name="autopartitioner-class"></a>Classe auto_partitioner

La classe `auto_partitioner` rappresenta il metodo predefinito `parallel_for`, `parallel_for_each` e `parallel_transform` usato per partizionare l'intervallo su cui eseguono l'iterazione. Questo metodo di partizionamento dell'intervallo usa l'acquisizione dell'intervallo per il bilanciamento del carico nonché l'annullamento per iterazione.

## <a name="syntax"></a>Sintassi

```
class auto_partitioner;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[auto_partitioner](#ctor)|Costruisce un oggetto `auto_partitioner`.|
|[~ auto_partitioner distruttore](#dtor)|Elimina un oggetto `auto_partitioner`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`auto_partitioner`

## <a name="requirements"></a>Requisiti

**Intestazione:** PPL

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> ~ auto_partitioner

Elimina un oggetto `auto_partitioner`.

```
~auto_partitioner();
```

##  <a name="ctor"></a> auto_partitioner

Costruisce un oggetto `auto_partitioner`.

```
auto_partitioner();
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
