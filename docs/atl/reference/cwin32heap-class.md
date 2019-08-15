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
ms.openlocfilehash: ce3585310198ee3e2d7b2b8b829f4202b1021284
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496197"
---
# <a name="cwin32heap-class"></a>Classe CWin32Heap

Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione heap Win32.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CWin32Heap : public IAtlMemMgr
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap:: CWin32Heap](#cwin32heap)|Costruttore.|
|[CWin32Heap:: ~ CWin32Heap](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWin32Heap:: allocate](#allocate)|Alloca un blocco di memoria dall'oggetto heap.|
|[CWin32Heap:: Connetti](#attach)|Connette l'oggetto heap a un heap esistente.|
|[CWin32Heap::D etach](#detach)|Scollega l'oggetto heap da un heap esistente.|
|[CWin32Heap:: Free](#free)|Libera la memoria precedentemente allocata dall'heap.|
|[CWin32Heap::GetSize](#getsize)|Restituisce la dimensione di un blocco di memoria allocato dall'oggetto heap.|
|[CWin32Heap:: Reallocate](#reallocate)|Rialloca un blocco di memoria dall'oggetto heap.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CWin32Heap::m_bOwnHeap](#m_bownheap)|Flag utilizzato per determinare la proprietà corrente dell'handle dell'heap.|
|[CWin32Heap::m_hHeap](#m_hheap)|Handle per l'oggetto heap.|

## <a name="remarks"></a>Note

`CWin32Heap`implementa i metodi di allocazione della memoria utilizzando le funzioni di allocazione heap Win32, inclusi [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc) e [HeapFree](/windows/win32/api/heapapi/nf-heapapi-heapfree). A differenza di altre classi heap `CWin32Heap` , richiede che venga fornito un handle di heap valido prima dell'allocazione della memoria: le altre classi usano l'heap del processo per impostazione predefinita. L'handle può essere fornito al costruttore o al metodo [CWin32Heap::](#attach) allegate. Per ulteriori informazioni, vedere il metodo [CWin32Heap:: CWin32Heap](#cwin32heap) .

## <a name="example"></a>Esempio

Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IAtlMemMgr`

`CWin32Heap`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem. h

##  <a name="allocate"></a>CWin32Heap:: allocate

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

Chiamare [CWin32Heap:: Free](#free) o [CWin32Heap::](#reallocate) Reallocate per liberare la memoria allocata da questo metodo.

Implementato utilizzando [HeapAlloc](/windows/win32/api/heapapi/nf-heapapi-heapalloc).

##  <a name="attach"></a>CWin32Heap:: Connetti

Connette l'oggetto heap a un heap esistente.

```
void Attach(HANDLE hHeap, bool bTakeOwnership) throw();
```

### <a name="parameters"></a>Parametri

*hHeap*<br/>
Handle dell'heap esistente.

*bTakeOwnership*<br/>
Flag che indica se l' `CWin32Heap` oggetto deve assumere la proprietà delle risorse dell'heap.

### <a name="remarks"></a>Note

Se *bTakeOwnership* è true, l' `CWin32Heap` oggetto è responsabile dell'eliminazione dell'handle dell'heap.

##  <a name="cwin32heap"></a>CWin32Heap:: CWin32Heap

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

Un heap esistente può anche essere collegato al nuovo oggetto, usando [CWin32Heap:: Attach](#attach).

Se viene richiesto un heap in un contesto in cui le operazioni vengono tutte eseguite da un singolo thread, il miglior modo consiste nel creare l'oggetto come segue:

[!code-cpp[NVC_ATL_Utilities#93](../../atl/codesnippet/cpp/cwin32heap-class_2.cpp)]

Il parametro HEAP_NO_SERIALIZE specifica che l'esclusione reciproca non verrà usata quando le funzioni heap allocano e liberano memoria, con un aumento delle prestazioni in base alle prestazioni.

Il terzo parametro viene impostato sul valore predefinito 0 che consente all'heap di crescere come necessario. Vedere [HeapCreate](/windows/win32/api/heapapi/nf-heapapi-heapcreate) per una spiegazione dei flag e delle dimensioni della memoria.

##  <a name="dtor"></a>CWin32Heap:: ~ CWin32Heap

Distruttore.

```
~CWin32Heap() throw();
```

### <a name="remarks"></a>Note

Elimina definitivamente l'handle dell'heap se `CWin32Heap` l'oggetto è proprietario dell'heap.

##  <a name="detach"></a>CWin32Heap::D etach

Scollega l'oggetto heap da un heap esistente.

```
HANDLE Detach() throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce l'handle dell'heap a cui è stato precedentemente collegato l'oggetto.

##  <a name="free"></a>CWin32Heap:: Free

Libera la memoria precedentemente allocata dall'heap da [CWin32Heap:: allocate](#allocate) o [CWin32Heap::](#reallocate)Reallocate.

```
virtual void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore al blocco di memoria da liberare. NULL è un valore valido e non esegue alcuna operazione.

##  <a name="getsize"></a>CWin32Heap:: GetSize

Restituisce la dimensione di un blocco di memoria allocato dall'oggetto heap.

```
virtual size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore al blocco di memoria le cui dimensioni otterranno il metodo. Puntatore restituito da [CWin32Heap:: allocate](#allocate) o [CWin32Heap::](#reallocate)Reallocate.

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione, in byte, del blocco di memoria allocato.

##  <a name="m_bownheap"></a>CWin32Heap:: m_bOwnHeap

Flag utilizzato per determinare la proprietà corrente dell'handle dell'heap archiviato in [m_hHeap](#m_hheap).

```
bool m_bOwnHeap;
```

##  <a name="m_hheap"></a>CWin32Heap:: m_hHeap

Handle per l'oggetto heap.

```
HANDLE m_hHeap;
```

### <a name="remarks"></a>Note

Variabile utilizzata per archiviare un handle per l'oggetto heap.

##  <a name="reallocate"></a>CWin32Heap:: Reallocate

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

Se *p* è null, si presuppone che il blocco di memoria non sia ancora stato allocato e viene chiamato [CWin32Heap:: allocate](#allocate) , con un argomento di *nBytes*.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)<br/>
[Classe CLocalHeap](../../atl/reference/clocalheap-class.md)<br/>
[Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)<br/>
[Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)<br/>
[Classe CComHeap](../../atl/reference/ccomheap-class.md)
