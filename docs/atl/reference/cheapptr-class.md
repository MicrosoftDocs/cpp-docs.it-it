---
title: Classe CHeapPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHeapPtr
- ATLCORE/ATL::CHeapPtr
- ATLCORE/ATL::CHeapPtr::CHeapPtr
- ATLCORE/ATL::CHeapPtr::Allocate
- ATLCORE/ATL::CHeapPtr::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- CHeapPtr class
ms.assetid: e5c5bfd4-9bf1-4164-8a83-8155fe253454
caps.latest.revision: 20
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 41334cd7497c9e21d1cf047d7ab304864f663758
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cheapptr-class"></a>Classe CHeapPtr
Una classe di puntatore intelligente per la gestione dei puntatori di heap.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<typename T, class Allocator=CCRTAllocator>  
class CHeapPtr : public CHeapPtrBase<T, Allocator>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di oggetto da archiviare nell'heap.  
  
 `Allocator`  
 La classe di allocazione di memoria da utilizzare.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtr::CHeapPtr](#cheapptr)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtr::Allocate](#allocate)|Chiamare questo metodo per allocare memoria per archiviare gli oggetti nell'heap.|  
|[CHeapPtr::Reallocate](#reallocate)|Chiamare questo metodo per riallocare la memoria nell'heap.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHeapPtr::operator =](#operator_eq)|L'operatore di assegnazione.|  
  
## <a name="remarks"></a>Note  
 `CHeapPtr`deriva da [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) e per impostazione predefinita utilizza le routine CRT (in [CCRTAllocator](../../atl/reference/ccrtallocator-class.md)) per allocare e liberare memoria. La classe [CHeapPtrList](../../atl/reference/cheapptrlist-class.md) può essere usato per costruire un elenco di puntatori di heap. Vedere anche [template CComHeapPtr](../../atl/reference/ccomheapptr-class.md), che utilizza la routine di allocazione della memoria COM.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)  
  
 `CHeapPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
##  <a name="allocate"></a>CHeapPtr::Allocate  
 Chiamare questo metodo per allocare memoria per archiviare gli oggetti nell'heap.  
  
```
bool Allocate(size_t nElements = 1) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nElements`  
 Il numero di elementi utilizzati per calcolare la quantità di memoria da allocare. Il valore predefinito è 1.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la memoria è stato allocato, false in caso di errore.  
  
### <a name="remarks"></a>Note  
 Le routine allocatore vengono utilizzate per riservare memoria sufficiente per l'archiviazione nell'heap *nElement* oggetti di un tipo definito nel costruttore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#77; NVC_ATL_Utilities](../../atl/codesnippet/cpp/cheapptr-class_1.cpp)]  
  
##  <a name="cheapptr"></a>CHeapPtr::CHeapPtr  
 Costruttore.  
  
```
CHeapPtr() throw();
explicit CHeapPtr(T* p) throw();
CHeapPtr(CHeapPtr<T, Allocator>& p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Un puntatore di heap esistente o `CHeapPtr`.  
  
### <a name="remarks"></a>Note  
 Facoltativamente è possibile creare il puntatore di heap utilizzando un puntatore esistente o un `CHeapPtr` oggetto. In questo caso, il nuovo `CHeapPtr` oggetto si assume la responsabilità per gestire le risorse e il nuovo puntatore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#78;](../../atl/codesnippet/cpp/cheapptr-class_2.cpp)]  
  
##  <a name="operator_eq"></a>CHeapPtr::operator =  
 Operatore di assegnazione.  
  
```
CHeapPtr<T, Allocator>& operator=(
    CHeapPtr<T, Allocator>& p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Oggetto `CHeapPtr` esistente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento aggiornato `CHeapPtr`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#80;](../../atl/codesnippet/cpp/cheapptr-class_3.cpp)]  
  
##  <a name="reallocate"></a>CHeapPtr::Reallocate  
 Chiamare questo metodo per riallocare la memoria nell'heap.  
  
```
bool Reallocate(size_t nElements) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nElements`  
 Il nuovo numero di elementi utilizzati per calcolare la quantità di memoria da allocare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce true se la memoria è stato allocato, false in caso di errore.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#79;](../../atl/codesnippet/cpp/cheapptr-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)   
 [Classe CCRTAllocator](../../atl/reference/ccrtallocator-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

