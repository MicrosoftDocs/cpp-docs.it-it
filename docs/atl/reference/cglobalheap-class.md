---
title: Classe CGlobalHeap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CGlobalHeap
- ATLMEM/ATL::CGlobalHeap
- ATLMEM/ATL::CGlobalHeap::Allocate
- ATLMEM/ATL::CGlobalHeap::Free
- ATLMEM/ATL::CGlobalHeap::GetSize
- ATLMEM/ATL::CGlobalHeap::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CGlobalHeap class
ms.assetid: e348d838-3aa7-4bee-a1b3-cd000c99f834
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: f8b4276202a507e2afeb05d10a37fa16565870e8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cglobalheap-class"></a>Classe CGlobalHeap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap globale Win32.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CGlobalHeap : public IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGlobalHeap::Allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CGlobalHeap::Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.|  
|[CGlobalHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione di un blocco di memoria allocata dal gestore di memoria allocata.|  
|[CGlobalHeap::Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CGlobalHeap`implementa funzioni di allocazione della memoria tramite le funzioni di heap globale Win32.  
  
> [!NOTE]
>  Le funzioni degli heap globale sono lente rispetto alle altre funzioni di gestione memoria e non forniscono funzionalità di un numero. Pertanto, è necessario utilizzare le nuove applicazioni di [funzioni heap](http://msdn.microsoft.com/library/windows/desktop/aa366711). Sono disponibili nel [CWin32Heap](../../atl/reference/cwin32heap-class.md) (classe). Funzioni globali sono ancora utilizzate da DDE e le funzioni negli Appunti.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CGlobalHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlmem. h  
  
##  <a name="allocate"></a>CGlobalHeap::Allocate  
 Chiamare questo metodo per allocare un blocco di memoria.  
  
```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [CGlobalHeap::Free](#free) o [CGlobalHeap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementata utilizzando [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) con un parametro di flag di **GMEM_FIXED**.  
  
##  <a name="free"></a>CGlobalHeap::Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementata utilizzando [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579).  
  
##  <a name="getsize"></a>CGlobalHeap::GetSize  
 Chiamare questo metodo per ottenere la dimensione di un blocco di memoria allocata dal gestore di memoria allocata.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la dimensione del blocco di memoria allocata in byte.  
  
### <a name="remarks"></a>Note  
 Implementata utilizzando [GlobalSize](http://msdn.microsoft.com/library/windows/desktop/aa366593).  
  
##  <a name="reallocate"></a>CGlobalHeap::Reallocate  
 Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.  
  
```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
 `nBytes`  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [CGlobalHeap::Free](#free) per liberare la memoria allocata da questo metodo.  
  
 Implementata utilizzando [GlobalReAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366590).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComHeap](../../atl/reference/ccomheap-class.md)   
 [Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)

