---
title: Classe CCRTAllocator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CCRTAllocator
- ATLCORE/ATL::CCRTAllocator
- ATLCORE/ATL::CCRTAllocator::Allocate
- ATLCORE/ATL::CCRTAllocator::Free
- ATLCORE/ATL::CCRTAllocator::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CCRTAllocator class
ms.assetid: 3e1b8cb0-859a-41ab-8e93-6f0b5ceca49d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0f89df62f35e37e1ab74fc177167cbd82f92f7d9
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43752885"
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
|[Ccrtallocator:: allocate](#allocate)|(Statico) Chiamare questo metodo per allocare memoria.|
|[Ccrtallocator:: Free](#free)|(Statico) Chiamare questo metodo per liberare memoria.|
|[Ccrtallocator:: ReAllocate](#reallocate)|(Statico) Chiamare questo metodo per riallocare la memoria.|

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

*nBytes*  
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

*p*  
Puntatore alla memoria allocata.

### <a name="remarks"></a>Note

Libera la memoria allocata. Visualizzare [gratuita](../../c-runtime-library/reference/free.md) per altri dettagli.

##  <a name="reallocate"></a>  Ccrtallocator:: ReAllocate

Chiamare questa funzione statica per riallocare la memoria.

```
static __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*p*  
Puntatore alla memoria allocata.

*nBytes*  
Numero di byte da riallocare.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore void allo spazio allocato o NULL se la memoria è insufficiente.

### <a name="remarks"></a>Note

Ridimensiona la quantità di memoria allocata. Visualizzare [realloc](../../c-runtime-library/reference/realloc.md) per altri dettagli.

## <a name="see-also"></a>Vedere anche

[Classe CHeapPtr](../../atl/reference/cheapptr-class.md)   
[Classe CComAllocator](../../atl/reference/ccomallocator-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
