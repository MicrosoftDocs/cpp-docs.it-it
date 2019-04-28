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
ms.openlocfilehash: c755675a69ce86bc03a3fdb59fa7d43a20676495
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295916"
---
# <a name="dispatchstate-structure"></a>Struttura DispatchState

La struttura `DispatchState` è usata per trasferire lo stato al metodo `IExecutionContext::Dispatch`. Descrive le circostanze in cui il metodo `Dispatch` viene richiamato su un'interfaccia `IExecutionContext`.

## <a name="syntax"></a>Sintassi

```
struct DispatchState;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[DispatchState::DispatchState](#ctor)|Costruisce un nuovo oggetto `DispatchState`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[DispatchState::m_dispatchStateSize](#m_dispatchstatesize)|Dimensione della struttura, che viene usata per il controllo delle versioni.|
|[DispatchState::m_fIsPreviousContextAsynchronouslyBlocked](#m_fispreviouscontextasynchronouslyblocked)|Indica se questo contesto è stato attivato il `Dispatch` metodo perché il contesto precedente bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS e viene impostato sul valore `0` per tutti gli altri contesti di esecuzione.|
|[DispatchState::m_reserved](#m_reserved)|Bit riservati per il passaggio di informazioni future.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DispatchState`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="ctor"></a>  Costruttore DispatchState:: DispatchState

Costruisce un nuovo oggetto `DispatchState`.

```
DispatchState();
```

##  <a name="m_dispatchstatesize"></a>  Membro dati DispatchState:: M_dispatchstatesize

Dimensione della struttura, che viene usata per il controllo delle versioni.

```
unsigned long m_dispatchStateSize;
```

##  <a name="m_fispreviouscontextasynchronouslyblocked"></a>  Membro dati DispatchState:: M_fispreviouscontextasynchronouslyblocked

Indica se questo contesto è stato attivato il `Dispatch` metodo perché il contesto precedente bloccato in modo asincrono. Viene utilizzato solo nel contesto di pianificazione UMS e viene impostato sul valore `0` per tutti gli altri contesti di esecuzione.

```
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```

##  <a name="m_reserved"></a>  Membro dati DispatchState:: M_reserved

Bit riservati per il passaggio di informazioni future.

```
unsigned int m_reserved : 31;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
