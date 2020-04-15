---
title: Classe CLocalHeap
ms.date: 11/04/2016
f1_keywords:
- CLocalHeap
- ATLMEM/ATL::CLocalHeap
- ATLMEM/ATL::CLocalHeap::Allocate
- ATLMEM/ATL::CLocalHeap::Free
- ATLMEM/ATL::CLocalHeap::GetSize
- ATLMEM/ATL::CLocalHeap::Reallocate
helpviewer_keywords:
- CLocalHeap class
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
ms.openlocfilehash: 303e3b85ad11c309f862f59d6ec610701c4ef6db
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326754"
---
# <a name="clocalheap-class"></a>Classe CLocalHeap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni heap locale Win32.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CLocalHeap : public IAtlMemMgr
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CLocalHeap::Allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CLocalHeap::Gratuito](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore di memoria.|
|[CLocalHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore di memoria.|
|[CLocalHeap::Riallocare](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Osservazioni

`CLocalHeap`implementa le funzioni di allocazione di memoria utilizzando le funzioni heap locale Win32.

> [!NOTE]
> Le funzioni heap locale sono più lente rispetto ad altre funzioni di gestione della memoria e non forniscono il maggior numero di funzionalità. Di conseguenza, le nuove applicazioni devono utilizzare le [funzioni heap](/windows/win32/Memory/heap-functions). Questi sono disponibili nella [classe CWin32Heap.](../../atl/reference/cwin32heap-class.md)

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CLocalHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem.h

## <a name="clocalheapallocate"></a><a name="allocate"></a>CLocalHeap::Allocate

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

Chiamare [CLocalHeap::Free](#free) o [CLocalHeap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [LocalAlloc](/windows/win32/api/winbase/nf-winbase-localalloc) con un parametro flag di LMEM_FIXED.

## <a name="clocalheapfree"></a><a name="free"></a>CLocalHeap::Gratuito

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore di memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Osservazioni

Implementato utilizzando [LocalFree](/windows/win32/api/winbase/nf-winbase-localfree).

## <a name="clocalheapgetsize"></a><a name="getsize"></a>CLocalHeap::GetSize

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

Implementato utilizzando [LocalSize](/windows/win32/api/winbase/nf-winbase-localsize).

## <a name="clocalheapreallocate"></a><a name="reallocate"></a>CLocalHeap::Riallocare

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

Chiamare [CLocalHeap::Free](#free) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [LocalReAlloc](/windows/win32/api/winbase/nf-winbase-localrealloc).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[CComHeap (classe)](../../atl/reference/ccomheap-class.md)<br/>
[CWin32Heap (classe)](../../atl/reference/cwin32heap-class.md)<br/>
[CGlobalHeap (classe)](../../atl/reference/cglobalheap-class.md)<br/>
[CCRTHeap (classe)](../../atl/reference/ccrtheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
