---
title: Classe CCRTHeap | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 68c99d1ef7b28a9325d59db2144be11fa63cc99f
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37883047"
---
# <a name="ccrtheap-class"></a>Classe CCRTHeap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di heap CRT.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CCRTHeap : public IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Ccrtheap:: allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[Ccrtheap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata da questo gestore della memoria.|  
|[CCRTHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere le dimensioni allocate di un blocco di memoria allocata da questo gestore della memoria.|  
|[Ccrtheap:: ReAllocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CCRTHeap` implementa l'uso della libreria CRT di funzioni di allocazione dell'heap funzioni, inclusa la memoria [malloc](../../c-runtime-library/reference/malloc.md), [gratuita](../../c-runtime-library/reference/free.md), [realloc](../../c-runtime-library/reference/realloc.md), e [msize](../../c-runtime-library/reference/msize.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CCRTHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlmem. h  
  
##  <a name="allocate"></a>  Ccrtheap:: allocate  
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
 Chiamare [ccrtheap:: Free](#free) oppure [ccrtheap:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [malloc](../../c-runtime-library/reference/malloc.md).  
  
##  <a name="free"></a>  Ccrtheap:: Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata da questo gestore della memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementato mediante [gratuita](../../c-runtime-library/reference/free.md).  
  
##  <a name="getsize"></a>  CCRTHeap::GetSize  
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
 Implementato mediante [msize](../../c-runtime-library/reference/msize.md).  
  
##  <a name="reallocate"></a>  Ccrtheap:: ReAllocate  
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
 Chiamare [ccrtheap:: Free](#free) per liberare la memoria allocata da questo metodo. Implementato mediante [realloc](../../c-runtime-library/reference/realloc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe CComHeap](../../atl/reference/ccomheap-class.md)   
 [Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CLocalHeap](../../atl/reference/clocalheap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
