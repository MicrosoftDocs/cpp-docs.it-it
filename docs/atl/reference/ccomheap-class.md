---
title: Classe CComHeap | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComHeap
- ATLCOMMEM/ATL::CComHeap
- ATLCOMMEM/ATL::CComHeap::Allocate
- ATLCOMMEM/ATL::CComHeap::Free
- ATLCOMMEM/ATL::CComHeap::GetSize
- ATLCOMMEM/ATL::CComHeap::Reallocate
dev_langs: C++
helpviewer_keywords: CComHeap class
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3cf86ebe45cdb0a70af6eebaaed90690e83e8db7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[Ccomheap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.|  
|[CComHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere la dimensione di un blocco di memoria allocata dal gestore di memoria allocata.|  
|[Ccomheap:: ReAllocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CComHeap`implementa funzioni di allocazione di memoria tramite le funzioni di allocazione di COM, tra cui [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727), [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722), [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226)e [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280). La quantità massima di memoria che può essere allocata è uguale a **INT_MAX** (2.147.483.647) byte.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CComHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcommem. H  
  
##  <a name="allocate"></a>CComHeap::Allocate  
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
 Chiamare [ccomheap:: Free](#free) o [ccomheap:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [CoTaskMemAlloc](http://msdn.microsoft.com/library/windows/desktop/ms692727).  
  
##  <a name="free"></a>Ccomheap:: Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata dal gestore di memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementato mediante [CoTaskMemFree](http://msdn.microsoft.com/library/windows/desktop/ms680722).  
  
##  <a name="getsize"></a>CComHeap::GetSize  
 Chiamare questo metodo per ottenere la dimensione di un blocco di memoria allocata dal gestore di memoria allocata.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce le dimensioni del blocco di memoria allocato in byte.  
  
### <a name="remarks"></a>Note  
 Implementato mediante [IMalloc::GetSize](http://msdn.microsoft.com/library/windows/desktop/ms691226).  
  
##  <a name="reallocate"></a>Ccomheap:: ReAllocate  
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
 Chiamare [ccomheap:: Free](#free) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [CoTaskMemRealloc](http://msdn.microsoft.com/library/windows/desktop/ms687280).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio DynamicConsumer](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe di CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe su CCRTHeap](../../atl/reference/ccrtheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
