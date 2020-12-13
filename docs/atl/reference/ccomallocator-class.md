---
description: 'Altre informazioni su: classe CComAllocator'
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
ms.openlocfilehash: 886692f6a55ac096e51fd6888f941d63bf089263
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146952"
---
# <a name="ccomallocator-class"></a>Classe CComAllocator

Questa classe fornisce metodi per la gestione della memoria utilizzando le routine di memoria COM.

## <a name="syntax"></a>Sintassi

```
class CComAllocator
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComAllocator:: allocate](#allocate)|Chiamare questo metodo statico per allocare memoria.|
|[CComAllocator:: Free](#free)|Chiamare questo metodo statico per liberare la memoria allocata.|
|[CComAllocator:: Reallocate](#reallocate)|Chiamare questo metodo statico per riallocare la memoria.|

## <a name="remarks"></a>Commenti

Questa classe viene utilizzata da [CComHeapPtr](../../atl/reference/ccomheapptr-class.md) per fornire le routine di allocazione della memoria com. La classe controparte, [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), fornisce gli stessi metodi usando le routine CRT.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomallocatorallocate"></a><a name="allocate"></a> CComAllocator:: allocate

Chiamare questa funzione statica per allocare la memoria.

```
static void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.

### <a name="remarks"></a>Commenti

Alloca memoria. Per ulteriori informazioni, vedere [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc) .

## <a name="ccomallocatorfree"></a><a name="free"></a> CComAllocator:: Free

Chiamare questa funzione statica per liberare la memoria allocata.

```
static void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria allocata.

### <a name="remarks"></a>Commenti

Libera la memoria allocata. Per ulteriori informazioni, vedere [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree) .

## <a name="ccomallocatorreallocate"></a><a name="reallocate"></a> CComAllocator:: Reallocate

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

Restituisce un puntatore void allo spazio allocato o NULL se la memoria è insufficiente.

### <a name="remarks"></a>Commenti

Ridimensiona la quantità di memoria allocata. Per ulteriori informazioni, vedere [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc) .

## <a name="see-also"></a>Vedi anche

[Classe CComHeapPtr](../../atl/reference/ccomheapptr-class.md)<br/>
[Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
