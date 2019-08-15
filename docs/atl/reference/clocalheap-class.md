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
ms.openlocfilehash: a302ba4ea55c42ce214c8de4a24be843d6cb1b9f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496753"
---
# <a name="clocalheap-class"></a>Classe CLocalHeap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni dell'heap locale di Win32.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CLocalHeap : public IAtlMemMgr
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CLocalHeap:: allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CLocalHeap::Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.|
|[CLocalHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore della memoria.|
|[CLocalHeap:: Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Note

`CLocalHeap`implementa funzioni di allocazione della memoria utilizzando le funzioni dell'heap locale Win32.

> [!NOTE]
>  Le funzioni dell'heap locale sono più lente rispetto ad altre funzioni di gestione della memoria e non forniscono il maggior numero di funzionalità. Pertanto, le nuove applicazioni devono utilizzare le [funzioni dell'heap](/windows/win32/Memory/heap-functions). Sono disponibili nella classe [CWin32Heap](../../atl/reference/cwin32heap-class.md) .

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CLocalHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem. h

##  <a name="allocate"></a>CLocalHeap:: allocate

Chiamare questo metodo per allocare un blocco di memoria.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Note

Chiamare [CLocalHeap:: Free](#free) o [CLocalHeap::](#reallocate) Reallocate per liberare la memoria allocata da questo metodo.

Implementato utilizzando [LocalAlloc](/windows/win32/api/winbase/nf-winbase-localalloc) con un parametro di flag di LMEM_FIXED.

##  <a name="free"></a>CLocalHeap:: Free

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Note

Implementato utilizzando [LocalFree](/windows/win32/api/winbase/nf-winbase-localfree).

##  <a name="getsize"></a>CLocalHeap:: GetSize

Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore della memoria.

```
virtual size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione del blocco di memoria allocato in byte.

### <a name="remarks"></a>Note

Implementato utilizzando [LocalSize](/windows/win32/api/winbase/nf-winbase-localsize).

##  <a name="reallocate"></a>CLocalHeap:: Reallocate

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

### <a name="remarks"></a>Note

Chiamare [CLocalHeap:: Free](#free) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [LocalReAlloc](/windows/win32/api/winbase/nf-winbase-localrealloc).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CComHeap](../../atl/reference/ccomheap-class.md)<br/>
[Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)<br/>
[Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)<br/>
[Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
