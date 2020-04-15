---
title: Struttura DispatchState
ms.date: 11/04/2016
f1_keywords:
- DispatchState
- CONCRTRM/concurrency::DispatchState
- CONCRTRM/concurrency::DispatchState::DispatchState::DispatchState
- CONCRTRM/concurrency::DispatchState::DispatchState::m_dispatchStateSize
- CONCRTRM/concurrency::DispatchState::DispatchState::m_fIsPreviousContextAsynchronouslyBlocked
- CONCRTRM/concurrency::DispatchState::DispatchState::m_reserved
helpviewer_keywords:
- DispatchState structure
ms.assetid: 8c52546e-1650-48a0-985f-7e4a0fc26a90
ms.openlocfilehash: 2c4103f89f7fc74c5368bafac3c82685ff9b6e03
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372689"
---
# <a name="dispatchstate-structure"></a>Struttura DispatchState

La struttura `DispatchState` è usata per trasferire lo stato al metodo `IExecutionContext::Dispatch`. Descrive le circostanze in cui il metodo `Dispatch` viene richiamato su un'interfaccia `IExecutionContext`.

## <a name="syntax"></a>Sintassi

```cpp
struct DispatchState;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[DispatchState::DispatchState](#ctor)|Costruisce un oggetto `DispatchState` nuovo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[DispatchState::m_dispatchStateSize](#m_dispatchstatesize)|Dimensione di questa struttura, utilizzata per il controllo delle versioni.|
|[DispatchState::m_fIsPreviousContextAsynchronouslyBlocked](#m_fispreviouscontextasynchronouslyblocked)|Indica se questo contesto è stato immesso nel `Dispatch` metodo perché il contesto precedente è stato bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS `0` ed è impostato sul valore di tutti gli altri contesti di esecuzione.|
|[DispatchState::m_reserved](#m_reserved)|Bit riservati per il passaggio di informazioni future.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DispatchState`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="dispatchstatedispatchstate-constructor"></a><a name="ctor"></a>Costruttore DispatchState::DispatchState

Costruisce un oggetto `DispatchState` nuovo.

```cpp
DispatchState();
```

## <a name="dispatchstatem_dispatchstatesize-data-member"></a><a name="m_dispatchstatesize"></a>Membro dati DispatchState::m_dispatchStateSize

Dimensione di questa struttura, utilizzata per il controllo delle versioni.

```cpp
unsigned long m_dispatchStateSize;
```

## <a name="dispatchstatem_fispreviouscontextasynchronouslyblocked-data-member"></a><a name="m_fispreviouscontextasynchronouslyblocked"></a>Membro dati DispatchState::m_fIsPreviousContextAsynchronouslyBlocked

Indica se questo contesto è stato immesso nel `Dispatch` metodo perché il contesto precedente è stato bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS `0` ed è impostato sul valore di tutti gli altri contesti di esecuzione.

```cpp
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```

## <a name="dispatchstatem_reserved-data-member"></a><a name="m_reserved"></a>Membro dati DispatchState::m_reserved

Bit riservati per il passaggio di informazioni future.

```cpp
unsigned int m_reserved : 31;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
