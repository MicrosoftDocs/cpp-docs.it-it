---
title: Classe CComHeap
ms.date: 11/04/2016
f1_keywords:
- CComHeap
- ATLCOMMEM/ATL::CComHeap
- ATLCOMMEM/ATL::CComHeap::Allocate
- ATLCOMMEM/ATL::CComHeap::Free
- ATLCOMMEM/ATL::CComHeap::GetSize
- ATLCOMMEM/ATL::CComHeap::Reallocate
helpviewer_keywords:
- CComHeap class
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
ms.openlocfilehash: 1ded73047b895a44a22bdd5730886f7fc088c77a
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497341"
---
# <a name="ccomheap-class"></a>Classe CComHeap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione della memoria com.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CComHeap : public IAtlMemMgr
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComHeap:: allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[CComHeap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.|
|[CComHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione allocata di un blocco di memoria allocato da questo gestore della memoria.|
|[CComHeap:: Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|

## <a name="remarks"></a>Note

`CComHeap`implementa funzioni di allocazione della memoria utilizzando le funzioni di allocazione COM, tra cui [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc), [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree), [IMalloc:: GetSize](/windows/win32/api/objidlbase/nf-objidlbase-imalloc-getsize)e [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc). La quantità massima di memoria che può essere allocata è uguale a INT_MAX (2147483647) byte.

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CComHeap`

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLComMem.h

##  <a name="allocate"></a>CComHeap:: allocate

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

Chiamare [CComHeap:: Free](#free) o [CComHeap::](#reallocate) Reallocate per liberare la memoria allocata da questo metodo.

Implementato utilizzando [CoTaskMemAlloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemalloc).

##  <a name="free"></a>CComHeap:: Free

Chiamare questo metodo per liberare un blocco di memoria allocato da questo gestore della memoria.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.

### <a name="remarks"></a>Note

Implementato utilizzando [CoTaskMemFree](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemfree).

##  <a name="getsize"></a>CComHeap:: GetSize

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

Implementato con [IMalloc:: GetSize](/windows/win32/api/objidlbase/nf-objidlbase-imalloc-getsize).

##  <a name="reallocate"></a>CComHeap:: Reallocate

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

Chiamare [CComHeap:: Free](#free) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [CoTaskMemRealloc](/windows/win32/api/combaseapi/nf-combaseapi-cotaskmemrealloc).

## <a name="see-also"></a>Vedere anche

[Esempio DynamicConsumer](../../overview/visual-cpp-samples.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)<br/>
[Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
