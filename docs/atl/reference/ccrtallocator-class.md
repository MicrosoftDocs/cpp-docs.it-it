---
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
ms.openlocfilehash: 2f6bae3818fa0f1639e0e3cee4e09121580da768
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327174"
---
# <a name="ccrtallocator-class"></a>Classe CCRTAllocator

Questa classe fornisce metodi per la gestione della memoria utilizzando routine di memoria CRT.

## <a name="syntax"></a>Sintassi

```
class ATL::CCRTAllocator
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCRTAllocator::Allocare](#allocate)|(Statico) Chiamare questo metodo per allocare memoria.|
|[CCRTAllocator::Gratuito](#free)|(Statico) Chiamare questo metodo per liberare memoria.|
|[CCRTAllocator::Riallocare](#reallocate)|(Statico) Chiamare questo metodo per riallocare la memoria.|

## <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata da [CHeapPtr](../../atl/reference/cheapptr-class.md) per fornire le routine di allocazione di memoria CRT. La classe counterpart, [CComAllocator](../../atl/reference/ccomallocator-class.md), fornisce gli stessi metodi utilizzando routine COM.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="ccrtallocatorallocate"></a><a name="allocate"></a>CCRTAllocator::Allocare

Chiamare questa funzione statica per allocare la memoria.

```
static __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.

### <a name="remarks"></a>Osservazioni

Alloca memoria. Vedi [malloc](../../c-runtime-library/reference/malloc.md) per maggiori dettagli.

## <a name="ccrtallocatorfree"></a><a name="free"></a>CCRTAllocator::Gratuito

Chiamare questa funzione statica per liberare memoria.

```
static void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria allocata.

### <a name="remarks"></a>Osservazioni

Libera la memoria allocata. Vedi [gratis](../../c-runtime-library/reference/free.md) per maggiori dettagli.

## <a name="ccrtallocatorreallocate"></a><a name="reallocate"></a>CCRTAllocator::Riallocare

Chiamare questa funzione statica per riallocare la memoria.

```
static __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria allocata.

*nByte*<br/>
Numero di byte da riallocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria è insufficiente.

### <a name="remarks"></a>Osservazioni

Ridimensiona la quantità di memoria allocata. Vedi [realloc](../../c-runtime-library/reference/realloc.md) per maggiori dettagli.

## <a name="see-also"></a>Vedere anche

[CHeapPtr (classe)](../../atl/reference/cheapptr-class.md)<br/>
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
