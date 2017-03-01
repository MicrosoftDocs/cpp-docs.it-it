---
title: Classe CComMultiThreadModelNoCS | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL::CComMultiThreadModelNoCS
- CComMultiThreadModelNoCS
- ATL.CComMultiThreadModelNoCS
dev_langs:
- C++
helpviewer_keywords:
- ATL, multithreading
- CComMultiThreadModelNoCS class
- threading [ATL]
ms.assetid: 2b3f7a45-fd72-452c-aaf3-ccdaa621c821
caps.latest.revision: 18
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
ms.openlocfilehash: 718aac826916b977eec4fb8400da81b5e32d4afa
ms.lasthandoff: 02/24/2017

---
# <a name="ccommultithreadmodelnocs-class"></a>Classe CComMultiThreadModelNoCS
`CComMultiThreadModelNoCS`fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza sezione critica blocco o sblocco di funzionalità.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComMultiThreadModelNoCS
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModelNoCS::AutoCriticalSection](#autocriticalsection)|Fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|  
|[CComMultiThreadModelNoCS::CriticalSection](#criticalsection)|Fa riferimento a classe `CComFakeCriticalSection`.|  
|[CComMultiThreadModelNoCS::ThreadModelNoCS](#threadmodelnocs)|Fa riferimento a classe `CComMultiThreadModelNoCS`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModelNoCS::Decrement](#decrement)|(Statico) Decrementa il valore della variabile specificata in modo thread-safe.|  
|[CComMultiThreadModelNoCS::Increment](#increment)|(Statico) Incrementa il valore della variabile specificata in modo thread-safe.|  
  
## <a name="remarks"></a>Note  
 `CComMultiThreadModelNoCS`è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in quanto fornisce metodi thread-safe per l'incremento e decremento una variabile. Tuttavia, quando si fa riferimento una classe di sezione critica tramite `CComMultiThreadModelNoCS`, metodi, ad esempio `Lock` e `Unlock` non eseguirà alcuna operazione.  
  
 In genere, si utilizza `CComMultiThreadModelNoCS` tramite il `ThreadModelNoCS``typedef` nome. Questo `typedef` è definito in `CComMultiThreadModelNoCS`, `CComMultiThreadModel`, e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).  
  
> [!NOTE]
>  Globale `typedef` nomi [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) e [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) non fanno riferimento a `CComMultiThreadModelNoCS`.  
  
 Oltre a `ThreadModelNoCS`, `CComMultiThreadModelNoCS` definisce `AutoCriticalSection` e `CriticalSection`. Queste ultime due `typedef` nomi fanno riferimento [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati all'acquisizione e il rilascio di una sezione critica.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="a-nameautocriticalsectiona--ccommultithreadmodelnocsautocriticalsection"></a><a name="autocriticalsection"></a>CComMultiThreadModelNoCS::AutoCriticalSection  
 Quando si utilizza `CComMultiThreadModelNoCS`, `typedef` nome `AutoCriticalSection` fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection AutoCriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i metodi di non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica a cui fa riferimento `AutoCriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComAutoCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
  
 Oltre a `AutoCriticalSection`, è possibile utilizzare il `typedef` nome [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classe statica se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="a-namecriticalsectiona--ccommultithreadmodelnocscriticalsection"></a><a name="criticalsection"></a>CComMultiThreadModelNoCS::CriticalSection  
 Quando si utilizza `CComMultiThreadModelNoCS`, `typedef` nome `CriticalSection` fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection CriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i metodi di non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica a cui fa riferimento `CriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
  
 Oltre a `CriticalSection`, è possibile utilizzare il `typedef` nome `AutoCriticalSection`. Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classe statica se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="a-namedecrementa--ccommultithreadmodelnocsdecrement"></a><a name="decrement"></a>CComMultiThreadModelNoCS::Decrement  
 Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](http://msdn.microsoft.com/library/windows/desktop/ms683580), che consente di diminuire il valore della variabile a cui puntava `p`.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile da ridurre.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato dell'operatore di decremento è 0, quindi `Decrement` restituisce 0. Se il risultato dell'operatore di decremento è diverso da zero, il valore restituito è diverso da zero, ma il risultato dell'operatore di decremento potrebbe non essere uguali.  
  
### <a name="remarks"></a>Note  
 **InterlockedDecrement** impedisce che più thread contemporaneamente utilizzando questa variabile.  
  
##  <a name="a-nameincrementa--ccommultithreadmodelnocsincrement"></a><a name="increment"></a>CComMultiThreadModelNoCS::Increment  
 Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](http://msdn.microsoft.com/library/windows/desktop/ms683614), che incrementa il valore della variabile a cui puntata `p`.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile da incrementare.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato dell'incremento è 0, quindi **incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, il valore restituito è diverso da zero, ma il risultato dell'incremento potrebbe non essere uguali.  
  
### <a name="remarks"></a>Note  
 **InterlockedIncrement** impedisce che più thread contemporaneamente utilizzando questa variabile.  
  
##  <a name="a-namethreadmodelnocsa--ccommultithreadmodelnocsthreadmodelnocs"></a><a name="threadmodelnocs"></a>CComMultiThreadModelNoCS::ThreadModelNoCS  
 Quando si utilizza `CComMultiThreadModelNoCS`, `typedef` nome `ThreadModelNoCS` fa semplicemente riferimento `CComMultiThreadModelNoCS`.  
  
```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```  
  
### <a name="remarks"></a>Note  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe a cui fa riferimento `ThreadModelNoCS`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|  
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|  
|`CComSingleThreadModel`|`CComSingleThreadModel`|  
  
 Si noti che la definizione di `ThreadModelNoCS` in `CComMultiThreadModelNoCS` offre simmetria con `CComMultiThreadModel` e `CComSingleThreadModel`. Ad esempio, si supponga che il codice di esempio `CComMultiThreadModel::AutoCriticalSection` dichiarato seguenti `typedef`:  
  
 [!code-cpp[NVC_ATL_COM&#37;](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]  
  
 Indipendentemente dalla classe specificata per `ThreadModel` (ad esempio `CComMultiThreadModelNoCS`), `_ThreadModel` risolve conseguenza.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
