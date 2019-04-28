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
ms.openlocfilehash: c08d594e1c0f4d532f46961e266bf6ced98c51b2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62259079"
---
# <a name="ccrtallocator-class"></a>Classe CCRTAllocator

Questa classe fornisce metodi per la gestione della memoria mediante routine di memoria CRT.

## <a name="syntax"></a>Sintassi

```
class ATL::CCRTAllocator
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCRTAllocator::Allocate](#allocate)|(Statico) Chiamare questo metodo per allocare memoria.|
|[CCRTAllocator::Free](#free)|(Statico) Chiamare questo metodo per liberare memoria.|
|[CCRTAllocator::Reallocate](#reallocate)|(Statico) Chiamare questo metodo per riallocare la memoria.|

## <a name="remarks"></a>Note

Questa classe viene utilizzata da [CHeapPtr](../../atl/reference/cheapptr-class.md) fornire routine di allocazione della memoria di CRT. La classe controparte [CComAllocator](../../atl/reference/ccomallocator-class.md), fornisce gli stessi metodi usando le routine di COM.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

##  <a name="allocate"></a>  Ccrtallocator:: allocate

Chiamare questa funzione statica per allocare la memoria.

```
static __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte da allocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria disponibile è insufficiente.

### <a name="remarks"></a>Note

Alloca memoria. Visualizzare [malloc](../../c-runtime-library/reference/malloc.md) per altri dettagli.

##  <a name="free"></a>  Ccrtallocator:: Free

Chiamare questa funzione statica per liberare memoria.

```
static void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria allocata.

### <a name="remarks"></a>Note

Libera la memoria allocata. Visualizzare [gratuita](../../c-runtime-library/reference/free.md) per altri dettagli.

##  <a name="reallocate"></a>  CCRTAllocator::Reallocate

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

### <a name="remarks"></a>Note

Ridimensiona la quantità di memoria allocata. Visualizzare [realloc](../../c-runtime-library/reference/realloc.md) per altri dettagli.

## <a name="see-also"></a>Vedere anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)<br/>
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
