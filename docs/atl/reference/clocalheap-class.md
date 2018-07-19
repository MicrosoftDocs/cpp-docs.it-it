---
title: Classe CLocalHeap | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CLocalHeap
- ATLMEM/ATL::CLocalHeap
- ATLMEM/ATL::CLocalHeap::Allocate
- ATLMEM/ATL::CLocalHeap::Free
- ATLMEM/ATL::CLocalHeap::GetSize
- ATLMEM/ATL::CLocalHeap::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CLocalHeap class
ms.assetid: 1ffa87a5-5fc8-4f8d-8809-58e87e963bd2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8e0489d46ada0e68456f6ae16e7cd702c892a7b9
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37880115"
---
# <a name="clocalheap-class"></a>Classe CLocalHeap
Questa classe implementa [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md) usando le funzioni di heap locale Win32.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CLocalHeap : public IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Clocalheap:: allocate](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[Clocalheap:: Free](#free)|Chiamare questo metodo per liberare un blocco di memoria allocata da questo gestore della memoria.|  
|[CLocalHeap::GetSize](#getsize)|Chiamare questo metodo per ottenere le dimensioni allocate di un blocco di memoria allocata da questo gestore della memoria.|  
|[Clocalheap:: ReAllocate](#reallocate)|Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.|  
  
## <a name="remarks"></a>Note  
 `CLocalHeap` implementa funzioni di allocazione della memoria utilizzo delle funzioni Win32 nell'heap locale.  
  
> [!NOTE]
>  Le funzioni degli heap locali sono più lente rispetto alle altre funzioni di gestione della memoria e non offrono tutte le funzionalità. Di conseguenza, le nuove applicazioni devono usare la [funzioni heap](http://msdn.microsoft.com/library/windows/desktop/aa366711). Questi sono disponibili nel [CWin32Heap](../../atl/reference/cwin32heap-class.md) classe.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio relativo [IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlMemMgr`  
  
 `CLocalHeap`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlmem. h  
  
##  <a name="allocate"></a>  Clocalheap:: allocate  
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
 Chiamare [clocalheap:: Free](#free) oppure [clocalheap:: ReAllocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [LocalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366723) con un parametro di LMEM_FIXED flag.  
  
##  <a name="free"></a>  Clocalheap:: Free  
 Chiamare questo metodo per liberare un blocco di memoria allocata da questo gestore della memoria.  
  
```
virtual void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria. NULL è un valore valido e non esegue alcuna operazione.  
  
### <a name="remarks"></a>Note  
 Implementato mediante [LocalFree](http://msdn.microsoft.com/library/windows/desktop/aa366730).  
  
##  <a name="getsize"></a>  CLocalHeap::GetSize  
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
 Implementato mediante [LocalSize](http://msdn.microsoft.com/library/windows/desktop/aa366745).  
  
##  <a name="reallocate"></a>  Clocalheap:: ReAllocate  
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
 Chiamare [clocalheap:: Free](#free) per liberare la memoria allocata da questo metodo.  
  
 Implementato mediante [LocalReAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366742).  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe CComHeap](../../atl/reference/ccomheap-class.md)   
 [Classe CWin32Heap](../../atl/reference/cwin32heap-class.md)   
 [Classe CGlobalHeap](../../atl/reference/cglobalheap-class.md)   
 [Classe CCRTHeap](../../atl/reference/ccrtheap-class.md)   
 [Classe IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md)
