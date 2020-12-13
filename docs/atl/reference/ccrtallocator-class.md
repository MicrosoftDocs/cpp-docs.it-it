---
description: 'Altre informazioni su: classe CCRTAllocator'
title: Classe CCRTAllocator
ms.date: 11/04/2016
f1_keywords:
- CCRTAllocator
- ATLCORE/ATL::CCRTAllocator
- ATLCORE/ATL::CCRTAllocator::Allocate
- ATLCORE/ATL::CCRTAllocator::Free
- ATLCORE/ATL::CCRTAllocator::Reallocate
helpviewer_keywords:
- CCRTAllocator class
ms.assetid: 3e1b8cb0-859a-41ab-8e93-6f0b5ceca49d
ms.openlocfilehash: 378a1c27a6c2dde9fbcb24eb9b51b64c3af7e8aa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142064"
---
# <a name="ccrtallocator-class"></a>Classe CCRTAllocator

Questa classe fornisce metodi per la gestione della memoria tramite le routine di memoria CRT.

## <a name="syntax"></a>Sintassi

```
class ATL::CCRTAllocator
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCRTAllocator:: allocate](#allocate)|Statico Chiamare questo metodo per allocare memoria.|
|[CCRTAllocator:: Free](#free)|Statico Chiamare questo metodo per liberare memoria.|
|[CCRTAllocator:: Reallocate](#reallocate)|Statico Chiamare questo metodo per riallocare la memoria.|

## <a name="remarks"></a>Commenti

Questa classe viene utilizzata da [CHeapPtr](../../atl/reference/cheapptr-class.md) per fornire le routine di allocazione della memoria CRT. La classe controparte, [CComAllocator](../../atl/reference/ccomallocator-class.md), fornisce gli stessi metodi usando le routine com.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="ccrtallocatorallocate"></a><a name="allocate"></a> CCRTAllocator:: allocate

Chiamare questa funzione statica per allocare la memoria.

```
static __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.

### <a name="remarks"></a>Commenti

Alloca memoria. Per ulteriori informazioni, vedere [malloc](../../c-runtime-library/reference/malloc.md) .

## <a name="ccrtallocatorfree"></a><a name="free"></a> CCRTAllocator:: Free

Chiamare questa funzione statica per liberare memoria.

```
static void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria allocata.

### <a name="remarks"></a>Commenti

Libera la memoria allocata. Per ulteriori informazioni, vedere [gratuitamente](../../c-runtime-library/reference/free.md) .

## <a name="ccrtallocatorreallocate"></a><a name="reallocate"></a> CCRTAllocator:: Reallocate

Chiamare questa funzione statica per riallocare la memoria.

```
static __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria allocata.

*nBytes*<br/>
Numero di byte da riallocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria è insufficiente.

### <a name="remarks"></a>Commenti

Ridimensiona la quantità di memoria allocata. Per ulteriori informazioni, vedere [realloc](../../c-runtime-library/reference/realloc.md) .

## <a name="see-also"></a>Vedi anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
