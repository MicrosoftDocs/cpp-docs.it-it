---
title: Classe CCRTHeap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCRTHeap
- ATLMEM/ATL::CCRTHeap
- ATLMEM/ATL::CCRTHeap::Allocate
- ATLMEM/ATL::CCRTHeap::Free
- ATLMEM/ATL::CCRTHeap::GetSize
- ATLMEM/ATL::CCRTHeap::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CCRTHeap class
ms.assetid: 321bd6c5-1856-4ff7-8590-95044a1209f7
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
ms.openlocfilehash: 1b4df6949794981867051437835d043196613afa
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccrtheap-class"></a>Classe CCRTHeap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di heap CRT.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CCRTHeap : public IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCRTHeap::Allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CCRTHeap::Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.|  
|[CCRTHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione di un blocco di memoria allocata dal gestore di memoria allocata.|  
|[CCRTHeap::Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CCRTHeap`implementa l'uso della libreria CRT di funzioni di allocazione heap funzioni, tra cui memoria [malloc](../../c-runtime-library/reference/malloc.md), [gratuita](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md), e [msize](../../c-runtime-library/reference/msize.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CCRTHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlmem. h  
  
##  <a name="allocate"></a>CCRTHeap::Allocate  
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
 Chiamare [CCRTHeap::Free](#free) o [CCRTHeap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementata utilizzando [malloc](../../c-runtime-library/reference/malloc.md).  
  
##  <a name="free"></a>CCRTHeap::Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementata utilizzando [gratuita](../../c-runtime-library/reference/free.md).  
  
##  <a name="getsize"></a>CCRTHeap::GetSize  
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
 Implementata utilizzando [msize](../../c-runtime-library/reference/msize.md).  
  
##  <a name="reallocate"></a>CCRTHeap::Reallocate  
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
 Chiamare [CCRTHeap::Free](#free) per liberare la memoria allocata da questo metodo. Implementata utilizzando [realloc](../../c-runtime-library/reference/realloc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComHeap](../../atl/reference/ccomheap-class.md)   
 [Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)

