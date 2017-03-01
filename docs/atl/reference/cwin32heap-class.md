---
title: Classe CWin32Heap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CWin32Heap
- ATL.CWin32Heap
- CWin32Heap
dev_langs:
- C++
helpviewer_keywords:
- CWin32Heap class
ms.assetid: 69176022-ed98-4e3b-96d8-116b0c58ac95
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 407f777b52529a333251c7d00481fdbfb14db619
ms.lasthandoff: 02/24/2017

---
# <a name="cwin32heap-class"></a>Classe CWin32Heap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione heap Win32.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
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
|[CWin32Heap:: Attach](#attach)|Associa l'oggetto dell'heap per un heap esistente.|  
|[CWin32Heap::Detach](#detach)|Disconnette l'oggetto dell'heap da un heap esistente.|  
|[CWin32Heap::Free](#free)|Libera la memoria precedentemente allocato dall'heap.|  
|[CWin32Heap::GetSize](#getsize)|Restituisce la dimensione di un blocco di memoria allocata dall'oggetto dell'heap.|  
|[CWin32Heap::Reallocate](#reallocate)|Rialloca un blocco di memoria dall'oggetto heap.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWin32Heap::m_bOwnHeap](#m_bownheap)|Flag utilizzato per determinare la proprietà corrente dell'handle heap.|  
|[CWin32Heap::m_hHeap](#m_hheap)|Handle per l'oggetto dell'heap.|  
  
## <a name="remarks"></a>Note  
 `CWin32Heap`implementa metodi di allocazione di memoria utilizzando le funzioni di allocazione heap Win32, tra cui [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597) e [HeapFree](http://msdn.microsoft.com/library/windows/desktop/aa366701). A differenza di altre classi di Heap, `CWin32Heap` richiede un handle heap valido per prima la memoria viene allocata: le altre classi per impostazione predefinita utilizzano l'heap processo. L'handle può essere fornito al costruttore o al [CWin32Heap:: Attach](#attach) metodo. Vedere il [CWin32Heap::CWin32Heap](#cwin32heap) metodo per ulteriori dettagli.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CWin32Heap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlmem. h  
  
##  <a name="a-nameallocatea--cwin32heapallocate"></a><a name="allocate"></a>CWin32Heap::Allocate  
 Alloca un blocco di memoria dall'oggetto heap.  
  
```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria appena allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [CWin32Heap::Free](#free) o [CWin32Heap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementata utilizzando [HeapAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366597).  
  
##  <a name="a-nameattacha--cwin32heapattach"></a><a name="attach"></a>CWin32Heap:: Attach  
 Associa l'oggetto dell'heap per un heap esistente.  
  
```
void Attach(HANDLE hHeap, bool bTakeOwnership) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `hHeap`  
 Un handle heap esistente.  
  
 `bTakeOwnership`  
 Che indica se un flag di `CWin32Heap` oggetto è di assumere la proprietà sulle risorse dell'heap.  
  
### <a name="remarks"></a>Note  
 Se `bTakeOwnership` è TRUE, il `CWin32Heap` oggetto è responsabile dell'eliminazione l'handle heap.  
  
##  <a name="a-namecwin32heapa--cwin32heapcwin32heap"></a><a name="cwin32heap"></a>CWin32Heap::CWin32Heap  
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
 `hHeap`  
 Oggetto heap esistente.  
  
 `dwFlags`  
 Flag utilizzati nella creazione dell'heap.  
  
 *nInitialSize*  
 Dimensione iniziale dell'heap.  
  
 `nMaxSize`  
 Dimensione massima dell'heap.  
  
### <a name="remarks"></a>Note  
 Prima di allocare memoria, è necessario fornire all'oggetto `CWin32Heap` un handle heap valido. Il modo più semplice per ottenere questo risultato consiste nell'utilizzare l'heap processo:  
  
 [!code-cpp[NVC_ATL_Utilities&#92;](../../atl/codesnippet/cpp/cwin32heap-class_1.cpp)]  
  
 È anche possibile fornire al costruttore un handle heap esistente, nel qual caso al nuovo oggetto non passa la proprietà dell'heap. L'handle heap originale sarà comunque valido quando l'oggetto. `CWin32Heap` viene eliminato.  
  
 Un heap esistente può anche essere associato al nuovo oggetto, utilizzando [CWin32Heap:: Attach](#attach).  
  
 Se viene richiesto un heap in un contesto in cui le operazioni vengono tutte eseguite da un singolo thread, il miglior modo consiste nel creare l'oggetto come segue:  
  
 [!code-cpp[&#93; NVC_ATL_Utilities](../../atl/codesnippet/cpp/cwin32heap-class_2.cpp)]  
  
 Il parametro **HEAP_NO_SERIALIZE** specifica che l'esclusione reciproca non essere utilizzato quando le funzioni degli heap allocano e liberano memoria, con un conseguente aumento delle prestazioni.  
  
 Il terzo parametro viene impostato sul valore predefinito 0 che consente all'heap di crescere come necessario. Vedere [HeapCreate](http://msdn.microsoft.com/library/windows/desktop/aa366599\(v=vs.85\).aspx) per una spiegazione dei flag e le dimensioni di memoria.  
  
##  <a name="a-namedtora--cwin32heapcwin32heap"></a><a name="dtor"></a>CWin32Heap:: ~ CWin32Heap  
 Distruttore.  
  
```
~CWin32Heap() throw();
```  
  
### <a name="remarks"></a>Note  
 Elimina l'handle heap se la `CWin32Heap` oggetto dispone di proprietà dell'heap.  
  
##  <a name="a-namedetacha--cwin32heapdetach"></a><a name="detach"></a>CWin32Heap::Detach  
 Disconnette l'oggetto dell'heap da un heap esistente.  
  
```
HANDLE Detach() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'handle per l'heap in cui l'oggetto è stato collegato in precedenza.  
  
##  <a name="a-namefreea--cwin32heapfree"></a><a name="free"></a>CWin32Heap::Free  
 Libera la memoria precedentemente allocato dall'heap da [CWin32Heap::Allocate](#allocate) o [CWin32Heap::Reallocate](#reallocate).  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore al blocco di memoria da liberare. NULL è un valore valido e non esegue alcuna operazione.  
  
##  <a name="a-namegetsizea--cwin32heapgetsize"></a><a name="getsize"></a>CWin32Heap::GetSize  
 Restituisce la dimensione di un blocco di memoria allocata dall'oggetto dell'heap.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore al blocco di memoria, la cui dimensione otterrà il metodo. Questo è un puntatore restituito da [CWin32Heap::Allocate](#allocate) o [CWin32Heap::Reallocate](#reallocate).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la dimensione, in byte, del blocco di memoria allocata.  
  
##  <a name="a-namembownheapa--cwin32heapmbownheap"></a><a name="m_bownheap"></a>CWin32Heap::m_bOwnHeap  
 Flag utilizzato per determinare la proprietà corrente dell'handle heap archiviato in [m_hHeap](#m_hheap).  
  
```
bool m_bOwnHeap;
```  
  
##  <a name="a-namemhheapa--cwin32heapmhheap"></a><a name="m_hheap"></a>CWin32Heap::m_hHeap  
 Handle per l'oggetto dell'heap.  
  
```
HANDLE m_hHeap;
```  
  
### <a name="remarks"></a>Note  
 Una variabile utilizzata per archiviare un handle per l'oggetto dell'heap.  
  
##  <a name="a-namereallocatea--cwin32heapreallocate"></a><a name="reallocate"></a>CWin32Heap::Reallocate  
 Rialloca un blocco di memoria dall'oggetto heap.  
  
```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore al blocco di memoria da riallocare.  
  
 `nBytes`  
 Nuova dimensione in byte del blocco allocato. Il blocco può essere reso più grande o più piccolo.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria appena allocata.  
  
### <a name="remarks"></a>Note  
 Se `p` è NULL, si presuppone che il blocco di memoria non è ancora stato allocato e [CWin32Heap::Allocate](#allocate) viene chiamato con un argomento di `nBytes`.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)   
 [Classe CComHeap](../../atl/reference/ccomheap-class.md)

