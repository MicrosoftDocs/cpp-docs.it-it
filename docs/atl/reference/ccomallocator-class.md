---
title: Classe CComAllocator
ms.date: 11/04/2016
f1_keywords:
- CComAllocator
- ATLBASE/ATL::CComAllocator
- ATLBASE/ATL::CComAllocator::Allocate
- ATLBASE/ATL::CComAllocator::Free
- ATLBASE/ATL::CComAllocator::Reallocate
helpviewer_keywords:
- CComAllocator class
ms.assetid: 0cd706fd-0c7b-42d3-9054-febe2966fc8e
ms.openlocfilehash: 83ea5cdbc2460d308edf89647dafba65cb327f03
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658874"
---
# <a name="ccomallocator-class"></a>Classe CComAllocator

Questa classe fornisce metodi per la gestione della memoria con le routine di memoria COM.

## <a name="syntax"></a>Sintassi

```
class CComAllocator
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAllocator::Allocate](#allocate)|Chiamare questo metodo statico per allocare memoria.|
|[CComAllocator::Free](#free)|Chiamare questo metodo statico per liberare memoria allocata.|
|[CComAllocator::Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria statico.|

## <a name="remarks"></a>Note

Questa classe viene utilizzata da [CComHeapPtr](../../atl/reference/ccomheapptr-class.md) fornire routine di allocazione della memoria COM. La classe controparte [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), fornisce gli stessi metodi usando le routine CRT.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="allocate"></a>  CComAllocator::Allocate

Chiamare questa funzione statica per allocare la memoria.

```
static void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.

### <a name="remarks"></a>Note

Alloca memoria. Visualizzare [CoTaskMemAlloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemalloc) per altri dettagli.

##  <a name="free"></a>  CComAllocator::Free

Chiamare questa funzione statica per liberare la memoria allocata.

```
static void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria allocata.

### <a name="remarks"></a>Note

Libera la memoria allocata. Visualizzare [CoTaskMemFree](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemfree) per altri dettagli.

##  <a name="reallocate"></a>  CComAllocator::Reallocate

Chiamare questa funzione statica per riallocare la memoria.

```
static void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria allocata.

*nBytes*<br/>
Numero di byte da riallocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato, o NULL se la memoria è insufficiente

### <a name="remarks"></a>Note

Ridimensiona la quantità di memoria allocata. Visualizzare [CoTaskMemRealloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemrealloc) per altri dettagli.

## <a name="see-also"></a>Vedere anche

[Classe CComHeapPtr](../../atl/reference/ccomheapptr-class.md)<br/>
[Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
