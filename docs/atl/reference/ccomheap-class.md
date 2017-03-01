---
title: Classe CComHeap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComHeap
- ATL.CComHeap
- ATL::CComHeap
dev_langs:
- C++
helpviewer_keywords:
- CComHeap class
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
caps.latest.revision: 22
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 323ad1aed4bae706ecbf66de769e33873f20c149
ms.lasthandoff: 02/24/2017

---
# <a name="ccomheap-class"></a>Classe CComHeap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) utilizzando le funzioni di allocazione della memoria COM.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComHeap : public IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComHeap::Allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[CComHeap::Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.|  
|[CComHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione di un blocco di memoria allocata dal gestore di memoria allocata.|  
|[CComHeap::Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CComHeap`implementa funzioni di allocazione di memoria utilizzando le funzioni di allocazione di COM, ad esempio [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722), [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226), e [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280). La quantità massima di memoria che può essere allocata è uguale a **INT_MAX** (2.147.483.647) byte.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CComHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** ATLComMem.h  
  
##  <a name="a-nameallocatea--ccomheapallocate"></a><a name="allocate"></a>CComHeap::Allocate  
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
 Chiamare [CComHeap::Free](#free) o [CComHeap::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementata utilizzando [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727).  
  
##  <a name="a-namefreea--ccomheapfree"></a><a name="free"></a>CComHeap::Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementata utilizzando [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722).  
  
##  <a name="a-namegetsizea--ccomheapgetsize"></a><a name="getsize"></a>CComHeap::GetSize  
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
 Implementata utilizzando [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226).  
  
##  <a name="a-namereallocatea--ccomheapreallocate"></a><a name="reallocate"></a>CComHeap::Reallocate  
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
 Chiamare [CComHeap::Free](#free) per liberare la memoria allocata da questo metodo.  
  
 Implementata utilizzando [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio DynamicConsumer](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)

