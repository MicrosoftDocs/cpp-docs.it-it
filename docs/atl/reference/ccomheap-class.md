---
title: Classe CComHeap | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComHeap
- ATLCOMMEM/ATL::CComHeap
- ATLCOMMEM/ATL::CComHeap::Allocate
- ATLCOMMEM/ATL::CComHeap::Free
- ATLCOMMEM/ATL::CComHeap::GetSize
- ATLCOMMEM/ATL::CComHeap::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CComHeap class
ms.assetid: c74183ce-98ae-46fb-b186-93ea4cf0222b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c456aaa6f3448cf4386e0556773f2a9839702ccd
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202422"
---
# <a name="ccomheap-class"></a>Classe CComHeap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di allocazione della memoria COM.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComHeap : public IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComHeap::Allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[Ccomheap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata da questo gestore della memoria.|  
|[CComHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere le dimensioni allocate di un blocco di memoria allocata da questo gestore della memoria.|  
|[Ccomheap:: ReAllocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CComHeap` implementa funzioni di allocazione di memoria usando le funzioni di allocazione di COM, incluso [CoTaskMemAlloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemalloc), [CoTaskMemFree](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemfree), [IMalloc::GetSize](/windows/desktop/api/objidlbase/nf-objidlbase-imalloc-getsize)e [CoTaskMemRealloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemrealloc). La quantità massima di memoria che può essere allocata è uguale a byte INT_MAX (2147483647).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CComHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcommem. H  
  
##  <a name="allocate"></a>  CComHeap::Allocate  
 Chiamare questo metodo per allocare un blocco di memoria.  
  
```
virtual __declspec(allocator) void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *nBytes*  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [ccomheap:: Free](#free) oppure [ccomheap:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [CoTaskMemAlloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemalloc).  
  
##  <a name="free"></a>  Ccomheap:: Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata da questo gestore della memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementato mediante [CoTaskMemFree](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemfree).  
  
##  <a name="getsize"></a>  CComHeap::GetSize  
 Chiamare questo metodo per ottenere le dimensioni allocate di un blocco di memoria allocata da questo gestore della memoria.  
  
```
virtual size_t GetSize(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la dimensione del blocco di memoria allocata in byte.  
  
### <a name="remarks"></a>Note  
 Implementato mediante [IMalloc::GetSize](/windows/desktop/api/objidlbase/nf-objidlbase-imalloc-getsize).  
  
##  <a name="reallocate"></a>  Ccomheap:: ReAllocate  
 Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.  
  
```
virtual __declspec(allocator) void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
 *nBytes*  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [ccomheap:: Free](#free) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [CoTaskMemRealloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemrealloc).  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio DynamicConsumer](../../visual-cpp-samples.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
