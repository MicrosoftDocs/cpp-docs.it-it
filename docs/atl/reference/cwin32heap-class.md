---
title: Classe CWin32Heap
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
ms.openlocfilehash: 8ab0d7b8a0eda44adc900884ef5337b22e621806
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50508316"
---
# <a name="cwin32heap-class"></a>Classe CWin32Heap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione dell'heap Win32.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class CWin32Heap : public IAtlMemMgr
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap::CWin32Heap](#cwin32heap)|Costruttore.|
|[CWin32Heap:: ~ CWin32Heap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap::Allocate](#allocate)|Alloca un blocco di memoria dall'oggetto heap.|
|[CWin32Heap::Attach](#attach)|Collega l'oggetto heap a un heap esistente.|
|[CWin32Heap::Detach](#detach)|Scollega l'oggetto heap da un heap esistente.|
|[CWin32Heap::Free](#free)|Libera la memoria precedentemente allocata dall'heap.|
|[CWin32Heap::GetSize](#getsize)|Restituisce le dimensioni di un blocco di memoria allocata dall'oggetto heap.|
|[CWin32Heap::Reallocate](#reallocate)|Rialloca un blocco di memoria dall'oggetto heap.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap::m_bOwnHeap](#m_bownheap)|Flag utilizzato per determinare la proprietà corrente dell'handle heap.|
|[CWin32Heap::m_hHeap](#m_hheap)|Handle per l'oggetto heap.|

## <a name="remarks"></a>Note

`CWin32Heap` implementa metodi di allocazione di memoria usando le funzioni di allocazione dell'heap Win32, inclusi [HeapAlloc](/windows/desktop/api/heapapi/nf-heapapi-heapalloc) e [HeapFree](/windows/desktop/api/heapapi/nf-heapapi-heapfree). A differenza di altre classi di Heap, `CWin32Heap` richiede un handle heap valido per essere forniti prima della memoria viene allocata: le altre classi usano per impostazione predefinita l'heap del processo. L'handle può essere fornito al costruttore o al [CWin32Heap::Attach](#attach) (metodo). Vedere le [CWin32Heap::CWin32Heap](#cwin32heap) metodo per altri dettagli.

## <a name="example"></a>Esempio

Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CWin32Heap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem. h

##  <a name="allocate"></a>  CWin32Heap::Allocate

Alloca un blocco di memoria dall'oggetto heap.

```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

### <a name="remarks"></a>Note

Chiamare [CWin32Heap::Free](#free) oppure [CWin32Heap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.

Implementato mediante [HeapAlloc](/windows/desktop/api/heapapi/nf-heapapi-heapalloc).

##  <a name="attach"></a>  CWin32Heap::Attach

Collega l'oggetto heap a un heap esistente.

```
void Attach(HANDLE hHeap, bool bTakeOwnership) throw();
```

### <a name="parameters"></a>Parametri

*hHeap*<br/>
Un handle heap esistente.

*bTakeOwnership*<br/>
Un flag che indica se il `CWin32Heap` obiettivo consiste nell'acquisire la proprietà sulle risorse dell'heap.

### <a name="remarks"></a>Note

Se *bTakeOwnership* è TRUE, il `CWin32Heap` oggetto è responsabile dell'eliminazione l'handle dell'heap.

##  <a name="cwin32heap"></a>  CWin32Heap::CWin32Heap

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

*nMaxSize*<br/>
Dimensione massima dell'heap.

### <a name="remarks"></a>Note

Prima di allocare memoria, è necessario fornire all'oggetto `CWin32Heap` un handle heap valido. Il modo più semplice per ottenere questo risultato consiste nell'utilizzare l'heap processo:

[!code-cpp[NVC_ATL_Utilities#92](../../atl/codesnippet/cpp/cwin32heap-class_1.cpp)]

È anche possibile fornire al costruttore un handle heap esistente, nel qual caso al nuovo oggetto non passa la proprietà dell'heap. L'handle heap originale sarà comunque valido quando l'oggetto. `CWin32Heap` viene eliminato.

Un heap esistente può anche essere collegato al nuovo oggetto, utilizzando [CWin32Heap::Attach](#attach).

Se viene richiesto un heap in un contesto in cui le operazioni vengono tutte eseguite da un singolo thread, il miglior modo consiste nel creare l'oggetto come segue:

[!code-cpp[NVC_ATL_Utilities#93](../../atl/codesnippet/cpp/cwin32heap-class_2.cpp)]

Il parametro HEAP_NO_SERIALIZE specifica che l'esclusione reciproca non userà per le funzioni degli heap allocano e liberano memoria, con un aumento delle prestazioni.

Il terzo parametro viene impostato sul valore predefinito 0 che consente all'heap di crescere come necessario. Visualizzare [HeapCreate](/windows/desktop/api/heapapi/nf-heapapi-heapcreate) per una spiegazione dei flag e le dimensioni della memoria.

##  <a name="dtor"></a>  CWin32Heap:: ~ CWin32Heap

Distruttore.

```
~CWin32Heap() throw();
```

### <a name="remarks"></a>Note

Elimina l'handle dell'heap se la `CWin32Heap` oggetto dispone di proprietà dell'heap.

##  <a name="detach"></a>  CWin32Heap::Detach

Scollega l'oggetto heap da un heap esistente.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle all'heap in cui l'oggetto è stato collegato in precedenza.

##  <a name="free"></a>  CWin32Heap::Free

Libera la memoria precedentemente allocata dall'heap dal [CWin32Heap::Allocate](#allocate) oppure [CWin32Heap::Reallocate](#reallocate).

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore al blocco di memoria da liberare. NULL è un valore valido e non esegue alcuna operazione.

##  <a name="getsize"></a>  CWin32Heap::GetSize

Restituisce le dimensioni di un blocco di memoria allocata dall'oggetto heap.

```
virtual size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore al blocco di memoria, le cui dimensioni otterrà il metodo. Questo è un puntatore restituito da [CWin32Heap::Allocate](#allocate) oppure [CWin32Heap::Reallocate](#reallocate).

### <a name="return-value"></a>Valore restituito

Restituisce le dimensioni, in byte, del blocco di memoria allocata.

##  <a name="m_bownheap"></a>  CWin32Heap::m_bOwnHeap

Flag utilizzato per determinare la proprietà corrente dell'handle heap archiviato in [m_hHeap](#m_hheap).

```
bool m_bOwnHeap;
```

##  <a name="m_hheap"></a>  CWin32Heap::m_hHeap

Handle per l'oggetto heap.

```
HANDLE m_hHeap;
```

### <a name="remarks"></a>Note

Una variabile usata per archiviare un handle per l'oggetto heap.

##  <a name="reallocate"></a>  CWin32Heap::Reallocate

Rialloca un blocco di memoria dall'oggetto heap.

```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore al blocco di memoria da riallocare.

*nBytes*<br/>
Nuova dimensione in byte del blocco allocato. Il blocco può essere reso più grande o più piccolo.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria appena allocata.

### <a name="remarks"></a>Note

Se *p* è NULL, si presuppone che il blocco di memoria non è ancora stato allocato e [CWin32Heap::Allocate](#allocate) viene chiamato con un argomento di *nBytes*.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)<br/>
[Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)<br/>
[Classe CComHeap](../../atl/reference/ccomheap-class.md)
