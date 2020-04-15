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
ms.openlocfilehash: 165cdb8b0b16a4872214f4556c26ee141e6a4d89
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321149"
---
# <a name="ccomallocator-class"></a>Classe CComAllocator

Questa classe fornisce metodi per la gestione della memoria utilizzando routine di memoria COM.

## <a name="syntax"></a>Sintassi

```
class CComAllocator
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAllocator::Allocare](#allocate)|Chiamare questo metodo statico per allocare memoria.|
|[CComAllocator::Gratuito](#free)|Chiamare questo metodo statico per liberare memoria allocata.|
|[CComAllocator::Riallocare](#reallocate)|Chiamare questo metodo statico per riallocare la memoria.|

## <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata da [CComHeapPtr](../../atl/reference/ccomheapptr-class.md) per fornire le routine di allocazione di memoria COM. La classe counterpart, [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), fornisce gli stessi metodi utilizzando le routine CRT.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomallocatorallocate"></a><a name="allocate"></a>CComAllocator::Allocare

Chiamare questa funzione statica per allocare la memoria.

```
static void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.

### <a name="remarks"></a>Osservazioni

Alloca memoria. Per ulteriori dettagli, vedere [CoTaskMemAlloc.See CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc) for more details.

## <a name="ccomallocatorfree"></a><a name="free"></a>CComAllocator::Gratuito

Chiamare questa funzione statica per liberare memoria allocata.

```
static void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria allocata.

### <a name="remarks"></a>Osservazioni

Libera la memoria allocata. Vedere [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree) per ulteriori dettagli.

## <a name="ccomallocatorreallocate"></a><a name="reallocate"></a>CComAllocator::Riallocare

Chiamare questa funzione statica per riallocare la memoria.

```
static void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria allocata.

*nByte*<br/>
Numero di byte da riallocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria è insufficiente

### <a name="remarks"></a>Osservazioni

Ridimensiona la quantità di memoria allocata. Vedere [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc) per ulteriori dettagli.

## <a name="see-also"></a>Vedere anche

[CComHeapPtr (classe)](../../atl/reference/ccomheapptr-class.md)<br/>
[Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
