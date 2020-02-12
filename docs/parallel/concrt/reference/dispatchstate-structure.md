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
ms.openlocfilehash: 69e00893373ccca6e2ed676fbb7f5a109c49efdf
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77143049"
---
# <a name="dispatchstate-structure"></a>Struttura DispatchState

La struttura `DispatchState` è usata per trasferire lo stato al metodo `IExecutionContext::Dispatch`. Descrive le circostanze in cui il metodo `Dispatch` viene richiamato su un'interfaccia `IExecutionContext`.

## <a name="syntax"></a>Sintassi

```cpp
struct DispatchState;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[DispatchState::D ispatchState](#ctor)|Costruisce un oggetto `DispatchState` nuovo.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[DispatchState:: m_dispatchStateSize](#m_dispatchstatesize)|Dimensioni della struttura, utilizzate per il controllo delle versioni.|
|[DispatchState:: m_fIsPreviousContextAsynchronouslyBlocked](#m_fispreviouscontextasynchronouslyblocked)|Indica se questo contesto è entrato nel metodo `Dispatch` perché il contesto precedente è stato bloccato in modo asincrono. Viene usato solo nel contesto di pianificazione UMS e viene impostato sul valore `0` per tutti gli altri contesti di esecuzione.|
|[DispatchState:: m_reserved](#m_reserved)|BITS riservati per il passaggio di informazioni future.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DispatchState`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>DispatchState::D Costruttore ispatchState

Costruisce un oggetto `DispatchState` nuovo.

```cpp
DispatchState();
```

## <a name="m_dispatchstatesize"></a>Membro dati DispatchState:: m_dispatchStateSize

Dimensioni della struttura, utilizzate per il controllo delle versioni.

```cpp
unsigned long m_dispatchStateSize;
```

## <a name="m_fispreviouscontextasynchronouslyblocked"></a>Membro dati DispatchState:: m_fIsPreviousContextAsynchronouslyBlocked

Indica se questo contesto è entrato nel metodo `Dispatch` perché il contesto precedente è stato bloccato in modo asincrono. Viene usato solo nel contesto di pianificazione UMS e viene impostato sul valore `0` per tutti gli altri contesti di esecuzione.

```cpp
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```

## <a name="m_reserved"></a>Membro dati DispatchState:: m_reserved

BITS riservati per il passaggio di informazioni future.

```cpp
unsigned int m_reserved : 31;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
