---
title: CGlobalHeap (classe)
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
ms.openlocfilehash: d596fd51c1bf33f606c1f14c9e8dbd2f1926c7f8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326935"
---
# <a name="cglobalheap-class"></a>CGlobalHeap (classe)

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni heap globali Win32.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CGlobalHeap : public IAtlMemMgr
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CGlobalHeap::Allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CGlobalHeap::Gratuito](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore di memoria.|
|[CGlobalHeap::GetSizeCGlobalHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore di memoria.|
|[CGlobalHeap::Riallocare](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Osservazioni

`CGlobalHeap`implementa le funzioni di allocazione di memoria utilizzando le funzioni di heap globale Win32.

> [!NOTE]
> Le funzioni heap globali sono più lente rispetto ad altre funzioni di gestione della memoria e non forniscono il maggior numero di funzionalità. Di conseguenza, le nuove applicazioni devono utilizzare le [funzioni heap](/windows/win32/Memory/heap-functions). Questi sono disponibili nella [classe CWin32Heap.](../../atl/reference/cwin32heap-class.md) Le funzioni globali sono ancora utilizzate da DDE e dalle funzioni degli Appunti.

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CGlobalHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem.h

## <a name="cglobalheapallocate"></a><a name="allocate"></a>CGlobalHeap::Allocate

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

Chiamare [CGlobalHeap::Free](#free) o [CGlobalHeap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) con un parametro flag di GMEM_FIXED.

## <a name="cglobalheapfree"></a><a name="free"></a>CGlobalHeap::Gratuito

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore di memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Osservazioni

Implementato utilizzando [GlobalFree](/windows/win32/api/winbase/nf-winbase-globalfree).

## <a name="cglobalheapgetsize"></a><a name="getsize"></a>CGlobalHeap::GetSizeCGlobalHeap::GetSize

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

Implementato utilizzando [GlobalSize](/windows/win32/api/winbase/nf-winbase-globalsize).

## <a name="cglobalheapreallocate"></a><a name="reallocate"></a>CGlobalHeap::Riallocare

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

Chiamare [CGlobalHeap::Free](#free) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [GlobalReAlloc](/windows/win32/api/winbase/nf-winbase-globalrealloc).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[CComHeap (classe)](../../atl/reference/ccomheap-class.md)<br/>
[CWin32Heap (classe)](../../atl/reference/cwin32heap-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[CCRTHeap (classe)](../../atl/reference/ccrtheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
