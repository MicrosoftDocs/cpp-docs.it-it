---
title: CCRTHeap (classe)
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
ms.openlocfilehash: caf5508079332689c2fff42f130951375dc35512
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327158"
---
# <a name="ccrtheap-class"></a>CCRTHeap (classe)

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap CRT.

## <a name="syntax"></a>Sintassi

```
class CCRTHeap : public IAtlMemMgr
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCRTHeap::Allocare](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CCRTHeap::Gratuito](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore di memoria.|
|[CCRTHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore di memoria.|
|[CCRTHeap::Riallocare](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Osservazioni

`CCRTHeap`implementa le funzioni di allocazione della memoria utilizzando le funzioni dell'heap CRT, incluse [malloc](../../c-runtime-library/reference/malloc.md), [free](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md)e [_msize .](../../c-runtime-library/reference/msize.md)

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CCRTHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem.h

## <a name="ccrtheapallocate"></a><a name="allocate"></a>CCRTHeap::Allocare

Chiamare questo metodo per allocare un blocco di memoria.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Osservazioni

Chiamare [CCRTHeap::Free](#free) o [CCRTHeap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [malloc](../../c-runtime-library/reference/malloc.md).

## <a name="ccrtheapfree"></a><a name="free"></a>CCRTHeap::Gratuito

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore di memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Osservazioni

Implementato utilizzando [free](../../c-runtime-library/reference/free.md).

## <a name="ccrtheapgetsize"></a><a name="getsize"></a>CCRTHeap::GetSize

Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore di memoria.

```
virtual size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione del blocco di memoria allocato in byte.

### <a name="remarks"></a>Osservazioni

Implementato utilizzando [_msize](../../c-runtime-library/reference/msize.md).

## <a name="ccrtheapreallocate"></a><a name="reallocate"></a>CCRTHeap::Riallocare

Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.

```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

*nByte*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Osservazioni

Chiamare [CCRTHeap::Free](#free) per liberare la memoria allocata da questo metodo. Implementato utilizzando [realloc](../../c-runtime-library/reference/realloc.md).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[CComHeap (classe)](../../atl/reference/ccomheap-class.md)<br/>
[CWin32Heap (classe)](../../atl/reference/cwin32heap-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[CGlobalHeap (classe)](../../atl/reference/cglobalheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
