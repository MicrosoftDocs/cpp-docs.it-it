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
ms.openlocfilehash: 9e4701c39512613bd7525c2cc0e3d24a57e7689d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644925"
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
