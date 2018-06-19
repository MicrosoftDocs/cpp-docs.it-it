---
title: Classe CComMultiThreadModelNoCS | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComMultiThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModelNoCS::AutoCriticalSection
- ATLBASE/ATL::CComMultiThreadModelNoCS::CriticalSection
- ATLBASE/ATL::CComMultiThreadModelNoCS::ThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModelNoCS::Decrement
- ATLBASE/ATL::CComMultiThreadModelNoCS::Increment
dev_langs:
- C++
helpviewer_keywords:
- ATL, multithreading
- CComMultiThreadModelNoCS class
- threading [ATL]
ms.assetid: 2b3f7a45-fd72-452c-aaf3-ccdaa621c821
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 758811b10757cd7903b4f1d6218a5f34f8a98462
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32364193"
---
# <a name="ccommultithreadmodelnocs-class"></a>Classe CComMultiThreadModelNoCS
`CComMultiThreadModelNoCS` fornisce metodi di thread-safe per incrementare e decrementare il valore di una variabile, senza sezione critica blocco o sblocco funzionalità.  
  
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
 `CComMultiThreadModelNoCS` è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) in quanto fornisce metodi thread-safe per incremento e decremento una variabile. Tuttavia, quando si fa riferimento una classe di sezione critica tramite `CComMultiThreadModelNoCS`, metodi, ad esempio `Lock` e `Unlock` non eseguirà alcuna operazione.  
  
 In genere, si utilizza `CComMultiThreadModelNoCS` tramite il `ThreadModelNoCS` `typedef` nome. Questo `typedef` è definito in `CComMultiThreadModelNoCS`, `CComMultiThreadModel`, e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).  
  
> [!NOTE]
>  Globale `typedef` nomi [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) e [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) non fanno riferimento a `CComMultiThreadModelNoCS`.  
  
 Oltre a `ThreadModelNoCS`, `CComMultiThreadModelNoCS` definisce `AutoCriticalSection` e `CriticalSection`. Questi ultimi `typedef` nomi fanno riferimento [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce i metodi vuoti associati al recupero e il rilascio di una sezione critica.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="autocriticalsection"></a>  CComMultiThreadModelNoCS::AutoCriticalSection  
 Quando si utilizza `CComMultiThreadModelNoCS`, `typedef` nome `AutoCriticalSection` fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection AutoCriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i metodi non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e a cui fa riferimento la classe di sezione critica `AutoCriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComAutoCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
  
 Oltre a `AutoCriticalSection`, è possibile utilizzare il `typedef` nome [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="criticalsection"></a>  CComMultiThreadModelNoCS::CriticalSection  
 Quando si utilizza `CComMultiThreadModelNoCS`, `typedef` nome `CriticalSection` fa riferimento a classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection CriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i metodi non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e a cui fa riferimento la classe di sezione critica `CriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
  
 Oltre a `CriticalSection`, è possibile utilizzare il `typedef` nome `AutoCriticalSection`. Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="decrement"></a>  CComMultiThreadModelNoCS::Decrement  
 Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](http://msdn.microsoft.com/library/windows/desktop/ms683580), quali decrementa il valore della variabile a cui puntava `p`.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile da ridurre.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato del decremento è 0, quindi `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, il valore restituito è diverso da zero, ma il risultato del decremento potrebbe non essere uguali.  
  
### <a name="remarks"></a>Note  
 **InterlockedDecrement** impedisce che più thread contemporaneamente utilizzando questa variabile.  
  
##  <a name="increment"></a>  CComMultiThreadModelNoCS::Increment  
 Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](http://msdn.microsoft.com/library/windows/desktop/ms683614), che incrementa il valore della variabile a cui puntata `p`.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile deve essere incrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato dell'incremento è 0, quindi **incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, il valore restituito è diverso da zero, ma il risultato dell'incremento potrebbe non essere uguali.  
  
### <a name="remarks"></a>Note  
 **InterlockedIncrement** impedisce che più thread contemporaneamente utilizzando questa variabile.  
  
##  <a name="threadmodelnocs"></a>  CComMultiThreadModelNoCS::ThreadModelNoCS  
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
  
 [!code-cpp[NVC_ATL_COM#37](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]  
  
 Indipendentemente dalla classe specificata per `ThreadModel` (ad esempio `CComMultiThreadModelNoCS`), `_ThreadModel` risolve di conseguenza.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)