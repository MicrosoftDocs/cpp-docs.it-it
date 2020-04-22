---
title: CWin32Heap (classe)
ms.date: 11/04/2016
f1_keywords:
- CWin32Heap
- ATLMEM/ATL::CWin32Heap
- ATLMEM/ATL::CWin32Heap::CWin32Heap
- ATLMEM/ATL::CWin32Heap::Allocate
- ATLMEM/ATL::CWin32Heap::Attach
- ATLMEM/ATL::CWin32Heap::Detach
- ATLMEM/ATL::CWin32Heap::Free
- ATLMEM/ATL::CWin32Heap::GetSize
- ATLMEM/ATL::CWin32Heap::Reallocate
- ATLMEM/ATL::CWin32Heap::m_bOwnHeap
- ATLMEM/ATL::CWin32Heap::m_hHeap
helpviewer_keywords:
- CWin32Heap class
ms.assetid: 69176022-ed98-4e3b-96d8-116b0c58ac95
ms.openlocfilehash: 2d79de308b1afb3059cf04ad40b63b6e603073c8
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81746037"
---
# <a name="cwin32heap-class"></a>CWin32Heap (classe)

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione heap Win32.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CWin32Heap : public IAtlMemMgr
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap::CWin32HeapCWin32Heap::CWin32Heap](#cwin32heap)|Costruttore.|
|[CWin32Heap:: CWin32Heap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap::Allocate](#allocate)|Alloca un blocco di memoria dall'oggetto heap.|
|[CWin32Heap::Attach](#attach)|Associa l'oggetto heap a un heap esistente.|
|[CWin32Heap::Detach](#detach)|Scollega l'oggetto heap da un heap esistente.|
|[CWin32Heap::Gratuito](#free)|Libera la memoria precedentemente allocata dall'heap.|
|[CWin32Heap::GetSize](#getsize)|Restituisce la dimensione di un blocco di memoria allocato dall'oggetto heap.|
|[CWin32Heap::Riallocare](#reallocate)|Rialloca un blocco di memoria dall'oggetto heap.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap::m_bOwnHeap](#m_bownheap)|Flag utilizzato per determinare la proprietà corrente dell'handle dell'heap.|
|[CWin32Heap::m_hHeap](#m_hheap)|Handle per l'oggetto heap.|

## <a name="remarks"></a>Osservazioni

`CWin32Heap`implementa i metodi di allocazione di memoria utilizzando le funzioni di allocazione heap Win32, tra cui [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc) e [HeapFree](/windows/win32/api/heapapi/nf-heapapi-heapfree). A differenza di `CWin32Heap` altre classi Heap, richiede un handle di heap valido da fornire prima dell'allocazione della memoria: per impostazione predefinita, le altre classi utilizzano l'heap del processo. L'handle può essere fornito al costruttore o al [CWin32Heap::Attach](#attach) metodo. Vedere il [CWin32Heap::CWin32Heap](#cwin32heap) metodo per ulteriori dettagli.

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CWin32Heap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem.h

## <a name="cwin32heapallocate"></a><a name="allocate"></a>CWin32Heap::Allocate

Alloca un blocco di memoria dall'oggetto heap.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nByte*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

### <a name="remarks"></a>Osservazioni

Chiamare [CWin32Heap::Free](#free) o [CWin32Heap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato utilizzando [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc).

## <a name="cwin32heapattach"></a><a name="attach"></a>CWin32Heap::Attach

Associa l'oggetto heap a un heap esistente.

```cpp
void Attach(HANDLE hHeap, bool bTakeOwnership) throw();
```

### <a name="parameters"></a>Parametri

*hHeap*<br/>
Handle dell'heap esistente.

*bTakeProprietà*<br/>
Flag che indica `CWin32Heap` se l'oggetto deve assumere la proprietà delle risorse dell'heap.

### <a name="remarks"></a>Osservazioni

Se *bTakeOwnership* è `CWin32Heap` TRUE, l'oggetto è responsabile dell'eliminazione dell'handle dell'heap.

## <a name="cwin32heapcwin32heap"></a><a name="cwin32heap"></a>CWin32Heap::CWin32HeapCWin32Heap::CWin32Heap

Costruttore.

```
CWin32Heap() throw();
CWin32Heap( HANDLE  hHeap) throw();
CWin32Heap(
    DWORD  dwFlags,
    size_t nInitialSize,
    size_t nMaxSize = 0);
```

### <a name="parameters"></a>Parametri

*hHeap*<br/>
Oggetto heap esistente.

*dwFlags*<br/>
Flag utilizzati nella creazione dell'heap.

*nInitialSize*<br/>
Dimensione iniziale dell'heap.

*nMaxSize (dimensioni in cui è max)*<br/>
Dimensione massima dell'heap.

### <a name="remarks"></a>Osservazioni

Prima di allocare memoria, è necessario fornire all'oggetto `CWin32Heap` un handle heap valido. Il modo più semplice per ottenere questo risultato consiste nell'utilizzare l'heap processo:

[!code-cpp[NVC_ATL_Utilities#92](../../atl/codesnippet/cpp/cwin32heap-class_1.cpp)]

È anche possibile fornire al costruttore un handle heap esistente, nel qual caso al nuovo oggetto non passa la proprietà dell'heap. L'handle heap originale sarà comunque valido quando l'oggetto. `CWin32Heap` viene eliminato.

Un heap esistente può anche essere collegato al nuovo oggetto, utilizzando [CWin32Heap::Attach](#attach).

Se viene richiesto un heap in un contesto in cui le operazioni vengono tutte eseguite da un singolo thread, il miglior modo consiste nel creare l'oggetto come segue:

[!code-cpp[NVC_ATL_Utilities#93](../../atl/codesnippet/cpp/cwin32heap-class_2.cpp)]

Il parametro HEAP_NO_SERIALIZE specifica che l'esclusione reciproca non verrà utilizzata quando le funzioni degli heap allocano e liberano memoria, con un conseguente aumento delle prestazioni.

Il terzo parametro viene impostato sul valore predefinito 0 che consente all'heap di crescere come necessario. Vedere [HeapCreate](/windows/win32/api/heapapi/nf-heapapi-heapcreate) per una spiegazione delle dimensioni e dei flag di memoria.

## <a name="cwin32heapcwin32heap"></a><a name="dtor"></a>CWin32Heap:: CWin32Heap

Distruttore.

```
~CWin32Heap() throw();
```

### <a name="remarks"></a>Osservazioni

Elimina l'handle dell'heap se l'oggetto `CWin32Heap` è proprietario dell'heap.

## <a name="cwin32heapdetach"></a><a name="detach"></a>CWin32Heap::Detach

Scollega l'oggetto heap da un heap esistente.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per l'heap a cui l'oggetto è stato collegato in precedenza.

## <a name="cwin32heapfree"></a><a name="free"></a>CWin32Heap::Gratuito

Libera la memoria precedentemente allocata dall'heap da [CWin32Heap::Allocate](#allocate) o [CWin32Heap::Reallocate](#reallocate).

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore al blocco di memoria da liberare. NULL è un valore valido e non esegue alcuna operazione.

## <a name="cwin32heapgetsize"></a><a name="getsize"></a>CWin32Heap::GetSize

Restituisce la dimensione di un blocco di memoria allocato dall'oggetto heap.

```
virtual size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore al blocco di memoria di cui verrà ottenuto il metodo. Si tratta di un puntatore restituito da [CWin32Heap::Allocate](#allocate) o [CWin32Heap::Reallocate](#reallocate).

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione, in byte, del blocco di memoria allocato.

## <a name="cwin32heapm_bownheap"></a><a name="m_bownheap"></a>CWin32Heap::m_bOwnHeap

Flag utilizzato per determinare la proprietà corrente dell'handle heap archiviato in [m_hHeap](#m_hheap).

```
bool m_bOwnHeap;
```

## <a name="cwin32heapm_hheap"></a><a name="m_hheap"></a>CWin32Heap::m_hHeap

Handle per l'oggetto heap.

```
HANDLE m_hHeap;
```

### <a name="remarks"></a>Osservazioni

Variabile utilizzata per archiviare un handle per l'oggetto heap.

## <a name="cwin32heapreallocate"></a><a name="reallocate"></a>CWin32Heap::Riallocare

Rialloca un blocco di memoria dall'oggetto heap.

```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*P*<br/>
Puntatore al blocco di memoria da riallocare.

*nByte*<br/>
Nuova dimensione in byte del blocco allocato. Il blocco può essere reso più grande o più piccolo.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

### <a name="remarks"></a>Osservazioni

Se *p* è NULL, si presuppone che il blocco di memoria non sia ancora stato allocato e che venga chiamato [CWin32Heap::Allocate,](#allocate) con un argomento *di nBytes*.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[CGlobalHeap (classe)](../../atl/reference/cglobalheap-class.md)<br/>
[CCRTHeap (classe)](../../atl/reference/ccrtheap-class.md)<br/>
[CComHeap (classe)](../../atl/reference/ccomheap-class.md)
