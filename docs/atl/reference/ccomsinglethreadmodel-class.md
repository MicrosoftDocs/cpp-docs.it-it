---
title: Classe CComSingleThreadModel | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComSingleThreadModel
- ATLBASE/ATL::CComSingleThreadModel
- ATLBASE/ATL::CComSingleThreadModel::AutoCriticalSection
- ATLBASE/ATL::CComSingleThreadModel::CriticalSection
- ATLBASE/ATL::CComSingleThreadModel::ThreadModelNoCS
- ATLBASE/ATL::CComSingleThreadModel::Decrement
- ATLBASE/ATL::CComSingleThreadModel::Increment
dev_langs:
- C++
helpviewer_keywords:
- single-threaded applications
- CComSingleThreadModel class
- single-threaded applications, ATL
ms.assetid: e5dc30c7-405a-4ba4-8ae9-51937243fce8
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
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: ff5d8d2ced1d6fe0196888d8c746844ace8307f8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomsinglethreadmodel-class"></a>Classe CComSingleThreadModel
Questa classe fornisce metodi per incrementare e decrementare il valore di una variabile.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComSingleThreadModel
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSingleThreadModel::AutoCriticalSection](#autocriticalsection)|Fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|  
|[CComSingleThreadModel::CriticalSection](#criticalsection)|Fa riferimento a classe `CComFakeCriticalSection`.|  
|[CComSingleThreadModel::ThreadModelNoCS](#threadmodelnocs)|Riferimenti `CComSingleThreadModel`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSingleThreadModel::Decrement](#decrement)|Decrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|  
|[CComSingleThreadModel::Increment](#increment)|Incrementa il valore della variabile specificata. Questa implementazione non è thread-safe.|  
  
## <a name="remarks"></a>Note  
 `CComSingleThreadModel`fornisce metodi per incrementare e decrementare il valore di una variabile. A differenza di [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md), questi metodi non sono thread-safe.  

 In genere, si utilizza `CComSingleThreadModel` tramite uno dei due `typedef` nomi, [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) o [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella riportata di seguito:  

  
|typedef|Modello di threading singolo|Modello di threading apartment|Modello di threading Free modello|  
|-------------|----------------------------|-------------------------------|--------------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S= `CComSingleThreadModel`; M =`CComMultiThreadModel`  
  
 `CComSingleThreadModel`stesso definisce tre `typedef` nomi. `ThreadModelNoCS`riferimenti `CComSingleThreadModel`. `AutoCriticalSection`e `CriticalSection` riferimento classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati a ottenere e rilasciare la proprietà di una sezione critica.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="autocriticalsection"></a>CComSingleThreadModel::AutoCriticalSection  
 Quando si utilizza `CComSingleThreadModel`, `typedef` nome `AutoCriticalSection` fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection AutoCriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i metodi di non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica a cui fa riferimento `AutoCriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComAutoCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 Oltre a `AutoCriticalSection`, è possibile utilizzare il `typedef` nome [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classe statica se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="criticalsection"></a>CComSingleThreadModel::CriticalSection  
 Quando si utilizza `CComSingleThreadModel`, `typedef` nome `CriticalSection` fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection CriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i metodi di non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica a cui fa riferimento `CriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 Oltre a `CriticalSection`, è possibile utilizzare il `typedef` nome [AutoCriticalSection](#autocriticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classe statica se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="decrement"></a>CComSingleThreadModel::Decrement  
 Questa funzione statica riducendo il valore della variabile a cui puntava `p`.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile da ridurre.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'operatore di decremento.  
  
##  <a name="increment"></a>CComSingleThreadModel::Increment  
 Questa funzione statica riducendo il valore della variabile a cui puntava `p`.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile da incrementare.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato dell'incremento.  
  
##  <a name="threadmodelnocs"></a>CComSingleThreadModel::ThreadModelNoCS  
 Quando si utilizza `CComSingleThreadModel`, `typedef` nome `ThreadModelNoCS` fa semplicemente riferimento `CComSingleThreadModel`.  
  
```
typedef CComSingleThreadModel ThreadModelNoCS;
```  
  
### <a name="remarks"></a>Note  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md) contengono le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe a cui fa riferimento `ThreadModelNoCS`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComSingleThreadModel`|`CComSingleThreadModel`|  
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|  
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

