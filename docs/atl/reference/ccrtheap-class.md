---
description: 'Altre informazioni su: classe CCRTHeap'
title: Classe CCRTHeap
ms.date: 11/04/2016
f1_keywords:
- CCRTHeap
- ATLMEM/ATL::CCRTHeap
- ATLMEM/ATL::CCRTHeap::Allocate
- ATLMEM/ATL::CCRTHeap::Free
- ATLMEM/ATL::CCRTHeap::GetSize
- ATLMEM/ATL::CCRTHeap::Reallocate
helpviewer_keywords:
- CCRTHeap class
ms.assetid: 321bd6c5-1856-4ff7-8590-95044a1209f7
ms.openlocfilehash: c256139f37a4b0caa0a60f1a87fd71b6a3a8de3b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142012"
---
# <a name="ccrtheap-class"></a>Classe CCRTHeap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni dell'heap CRT.

## <a name="syntax"></a>Sintassi

```
class CCRTHeap : public IAtlMemMgr
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCRTHeap:: allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CCRTHeap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.|
|[CCRTHeap:: GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore della memoria.|
|[CCRTHeap:: Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Commenti

`CCRTHeap` implementa funzioni di allocazione della memoria usando le funzioni dell'heap CRT, tra cui [malloc](../../c-runtime-library/reference/malloc.md), [Free](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md)e [_msize](../../c-runtime-library/reference/msize.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CCRTHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem. h

## <a name="ccrtheapallocate"></a><a name="allocate"></a> CCRTHeap:: allocate

Chiamare questo metodo per allocare un blocco di memoria.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Commenti

Chiamare [CCRTHeap:: Free](#free) o [CCRTHeap:: Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato usando [malloc](../../c-runtime-library/reference/malloc.md).

## <a name="ccrtheapfree"></a><a name="free"></a> CCRTHeap:: Free

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Commenti

Implementato usando [Free](../../c-runtime-library/reference/free.md).

## <a name="ccrtheapgetsize"></a><a name="getsize"></a> CCRTHeap:: GetSize

Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore della memoria.

```
virtual size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione del blocco di memoria allocato in byte.

### <a name="remarks"></a>Commenti

Implementato utilizzando [_msize](../../c-runtime-library/reference/msize.md).

## <a name="ccrtheapreallocate"></a><a name="reallocate"></a> CCRTHeap:: Reallocate

Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.

```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

*nBytes*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Commenti

Chiamare [CCRTHeap:: Free](#free) per liberare la memoria allocata da questo metodo. Implementato utilizzando [realloc](../../c-runtime-library/reference/realloc.md).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComHeap](../../atl/reference/ccomheap-class.md)<br/>
[Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
