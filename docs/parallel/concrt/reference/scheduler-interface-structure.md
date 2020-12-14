---
description: 'Altre informazioni su: struttura scheduler_interface'
title: Struttura scheduler_interface
ms.date: 11/04/2016
f1_keywords:
- scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface::scheduler_interface::schedule
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
ms.openlocfilehash: ba56ef809cf398a192810eb96a8b4e4ca50ec1cc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97188872"
---
# <a name="scheduler_interface-structure"></a>Struttura scheduler_interface

Interfaccia dell'utilità di pianificazione

## <a name="syntax"></a>Sintassi

```cpp
struct __declspec(novtable) scheduler_interface;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[scheduler_interface:: Schedule](#schedule)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`scheduler_interface`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplinterface. h

**Spazio dei nomi:** Concurrency

## <a name="scheduler_interfaceschedule-method"></a><a name="schedule"></a> Metodo scheduler_interface:: Schedule

```cpp
virtual void schedule(
    TaskProc_t,
void*) = 0;
```

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)
