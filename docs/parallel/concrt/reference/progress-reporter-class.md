---
description: 'Altre informazioni su: progress_reporter Class'
title: Classe progress_reporter
ms.date: 11/04/2016
f1_keywords:
- progress_reporter
- PPLTASKS/concurrency::progress_reporter
- PPLTASKS/concurrency::progress_reporter::progress_reporter
- PPLTASKS/concurrency::progress_reporter::report
helpviewer_keywords:
- progress_reporter class
ms.assetid: b836efab-2d05-4649-b6fa-d15236f1f813
ms.openlocfilehash: 40ae3dba0c804381478d8c32da4425b20a9825d9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169359"
---
# <a name="progress_reporter-class"></a>Classe progress_reporter

La classe del reporter dello stato di avanzamento consente la segnalazione di notifiche di stato di un tipo specifico. Ogni oggetto progress_reporter è associato a una particolare operazione o azione asincrona.

## <a name="syntax"></a>Sintassi

```cpp
template<typename _ProgressType>
class progress_reporter;
```

### <a name="parameters"></a>Parametri

*_ProgressType*<br/>
Il tipo di payload di ogni notifica dello stato di avanzamento segnalato tramite il reporter dello stato di avanzamento.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[progress_reporter](#ctor)||

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[report](#report)|Invia un rapporto di stato all'operazione asincrona o all'operazione a cui è associato questo reporter dello stato di avanzamento.|

## <a name="remarks"></a>Commenti

Questo tipo è disponibile solo per le app Windows Runtime.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`progress_reporter`

## <a name="requirements"></a>Requisiti

**Intestazione:** ppltasks. h

**Spazio dei nomi:** Concurrency

## <a name="progress_reporter"></a><a name="ctor"></a> progress_reporter

```cpp
progress_reporter();
```

## <a name="report"></a><a name="report"></a> relazione

Invia un rapporto di stato all'operazione asincrona o all'operazione a cui è associato questo reporter dello stato di avanzamento.

```cpp
void report(const _ProgressType& val) const;
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Payload da segnalare tramite una notifica di stato.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
