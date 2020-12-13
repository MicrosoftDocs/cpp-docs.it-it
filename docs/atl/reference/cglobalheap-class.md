---
description: 'Altre informazioni su: classe CGlobalHeap'
title: Classe CGlobalHeap
ms.date: 11/04/2016
f1_keywords:
- CGlobalHeap
- ATLMEM/ATL::CGlobalHeap
- ATLMEM/ATL::CGlobalHeap::Allocate
- ATLMEM/ATL::CGlobalHeap::Free
- ATLMEM/ATL::CGlobalHeap::GetSize
- ATLMEM/ATL::CGlobalHeap::Reallocate
helpviewer_keywords:
- CGlobalHeap class
ms.assetid: e348d838-3aa7-4bee-a1b3-cd000c99f834
ms.openlocfilehash: 349dd2155bdc68024171c07e48c648bae2b6aa7e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141687"
---
# <a name="cglobalheap-class"></a>Classe CGlobalHeap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni dell'heap globale Win32.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CGlobalHeap : public IAtlMemMgr
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CGlobalHeap:: allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CGlobalHeap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.|
|[CGlobalHeap:: GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore della memoria.|
|[CGlobalHeap:: Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Commenti

`CGlobalHeap` implementa funzioni di allocazione della memoria utilizzando le funzioni dell'heap globale Win32.

> [!NOTE]
> Le funzioni heap globali sono più lente rispetto ad altre funzioni di gestione della memoria e non forniscono il maggior numero di funzionalità. Pertanto, le nuove applicazioni devono utilizzare le [funzioni dell'heap](/windows/win32/Memory/heap-functions). Sono disponibili nella classe [CWin32Heap](../../atl/reference/cwin32heap-class.md) . Le funzioni globali vengono ancora utilizzate da DDE e dalle funzioni degli Appunti.

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CGlobalHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem. h

## <a name="cglobalheapallocate"></a><a name="allocate"></a> CGlobalHeap:: allocate

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

Chiamare [CGlobalHeap:: Free](#free) o [CGlobalHeap:: Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) con un parametro flag di GMEM_FIXED.

## <a name="cglobalheapfree"></a><a name="free"></a> CGlobalHeap:: Free

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Commenti

Implementato utilizzando [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree).

## <a name="cglobalheapgetsize"></a><a name="getsize"></a> CGlobalHeap:: GetSize

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

Implementato utilizzando [GlobalSize](/windows/win32/api/winbase/nf-winbase-globalsize).

## <a name="cglobalheapreallocate"></a><a name="reallocate"></a> CGlobalHeap:: Reallocate

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

Chiamare [CGlobalHeap:: Free](#free) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [GlobalReAlloc](/windows/win32/api/winbase/nf-winbase-globalrealloc).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComHeap](../../atl/reference/ccomheap-class.md)<br/>
[Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
