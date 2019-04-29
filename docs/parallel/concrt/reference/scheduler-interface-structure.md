---
title: Struttura scheduler_interface
ms.date: 11/04/2016
f1_keywords:
- scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface
- PPLINTERFACE/concurrency::scheduler_interface::scheduler_interface::schedule
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
ms.openlocfilehash: 99a3ea8b6ad1f23b4f3d54b7f2f406a3d115b374
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392440"
---
# <a name="schedulerinterface-structure"></a>Struttura scheduler_interface

Interfaccia dell'utilità di pianificazione

## <a name="syntax"></a>Sintassi

```
struct __declspec(novtable) scheduler_interface;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[scheduler_interface::schedule](#schedule)||

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`scheduler_interface`

## <a name="requirements"></a>Requisiti

**Intestazione:** pplinterface. h

**Spazio dei nomi:** Concurrency

##  <a name="schedule"></a>  Metodo scheduler_interface:: Schedule

```
virtual void schedule(
    TaskProc_t,
void*) = 0;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)
