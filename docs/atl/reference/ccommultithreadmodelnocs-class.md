---
title: Classe CComMultiThreadModelNoCS | Microsoft Docs
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
ms.openlocfilehash: 65f8021bdc16dcfb2c4d1aa69936f27cfe7ac1df
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884818"
---
# <a name="ccommultithreadmodelnocs-class"></a>Classe CComMultiThreadModelNoCS
`CComMultiThreadModelNoCS` fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile, senza causare blocchi sezione critica o funzionalità di sblocco.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComMultiThreadModelNoCS
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModelNoCS::AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).|  
|[CComMultiThreadModelNoCS::CriticalSection](#criticalsection)|Fa riferimento alla classe `CComFakeCriticalSection`.|  
|[CComMultiThreadModelNoCS::ThreadModelNoCS](#threadmodelnocs)|Fa riferimento alla classe `CComMultiThreadModelNoCS`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModelNoCS::Decrement](#decrement)|(Statico) Decrementa il valore della variabile specificata in modo thread-safe.|  
|[CComMultiThreadModelNoCS::Increment](#increment)|(Statico) Incrementa il valore della variabile specificata in modo thread-safe.|  
  
## <a name="remarks"></a>Note  
 `CComMultiThreadModelNoCS` è simile a [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) nel senso che offre metodi thread-safe per il decremento e incremento di una variabile. Tuttavia, quando si fa riferimento a una classe di sezione critica tramite `CComMultiThreadModelNoCS`, metodi, ad esempio `Lock` e `Unlock` non eseguirà alcuna operazione.  
  
 In genere, si usa `CComMultiThreadModelNoCS` tramite il `ThreadModelNoCS` **typedef** nome. Ciò **typedef** definito nella `CComMultiThreadModelNoCS`, `CComMultiThreadModel`, e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md).  
  
> [!NOTE]
>  Globale **typedef** nomi [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) e [CComGlobalsThreadModel](atl-typedefs.md#ccomglobalsthreadmodel) non viene fatto riferimento `CComMultiThreadModelNoCS`.  
  
 Oltre a `ThreadModelNoCS`, `CComMultiThreadModelNoCS` definisce `AutoCriticalSection` e `CriticalSection`. Questi ultimi due **typedef** nomi fanno riferimento [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md), che fornisce metodi vuoti associati al recupero e il rilascio di una sezione critica.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="autocriticalsection"></a>  CComMultiThreadModelNoCS::AutoCriticalSection  
 Quando si usa `CComMultiThreadModelNoCS`, il **typedef** name `AutoCriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection AutoCriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica fa `AutoCriticalSection`:  
  
|Classe definita in|Classe di riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComAutoCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
  
 Oltre a `AutoCriticalSection`, è possibile usare il **typedef** name [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio di CRT.  
  
### <a name="example"></a>Esempio  
 Visualizzare [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="criticalsection"></a>  CComMultiThreadModelNoCS::CriticalSection  
 Quando si usa `CComMultiThreadModelNoCS`, il **typedef** name `CriticalSection` fa riferimento alla classe [CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md).  
  
```
typedef CComFakeCriticalSection CriticalSection;
```  
  
### <a name="remarks"></a>Note  
 Poiché `CComFakeCriticalSection` non fornisce una sezione critica, i relativi metodi non eseguono alcuna operazione.  
  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica fa `CriticalSection`:  
  
|Classe definita in|Classe di riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
  
 Oltre a `CriticalSection`, è possibile usare il **typedef** nome `AutoCriticalSection`. Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio di CRT.  
  
### <a name="example"></a>Esempio  
 Visualizzare [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
##  <a name="decrement"></a>  CComMultiThreadModelNoCS::Decrement  
 Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](http://msdn.microsoft.com/library/windows/desktop/ms683580), che decrementa il valore della variabile a cui punta *p*.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 [in] Puntatore alla variabile deve essere diminuito.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato del decremento è 0, quindi `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, il valore restituito è inoltre diverso da zero, ma potrebbe non corrispondere il risultato del decremento.  
  
### <a name="remarks"></a>Note  
 **InterlockedDecrement** impedisce che più thread contemporaneamente usando questa variabile.  
  
##  <a name="increment"></a>  CComMultiThreadModelNoCS::Increment  
 Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](http://msdn.microsoft.com/library/windows/desktop/ms683614), il quale viene incrementato il valore della variabile a cui punta *p*.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 [in] Puntatore alla variabile da incrementare.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato dell'incremento è 0, quindi **incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, il valore restituito è inoltre diverso da zero, ma potrebbe non corrispondere il risultato dell'incremento.  
  
### <a name="remarks"></a>Note  
 **InterlockedIncrement** impedisce che più thread contemporaneamente usando questa variabile.  
  
##  <a name="threadmodelnocs"></a>  CComMultiThreadModelNoCS::ThreadModelNoCS  
 Quando si usa `CComMultiThreadModelNoCS`, il **typedef** name `ThreadModelNoCS` fa semplicemente riferimento `CComMultiThreadModelNoCS`.  
  
```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```  
  
### <a name="remarks"></a>Note  
 [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) e [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) contengono anche le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe a cui fanno riferimento `ThreadModelNoCS`:  
  
|Classe definita in|Classe di riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|  
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|  
|`CComSingleThreadModel`|`CComSingleThreadModel`|  
  
 Si noti che la definizione di `ThreadModelNoCS` nelle `CComMultiThreadModelNoCS` offre simmetria con `CComMultiThreadModel` e `CComSingleThreadModel`. Ad esempio, si supponga che il codice di esempio nella `CComMultiThreadModel::AutoCriticalSection` dichiarato quanto segue **typedef**:  
  
 [!code-cpp[NVC_ATL_COM#37](../../atl/codesnippet/cpp/ccommultithreadmodelnocs-class_1.h)]  
  
 Indipendentemente dalla classe specificata per `ThreadModel` (ad esempio `CComMultiThreadModelNoCS`), `_ThreadModel` risolve di conseguenza.  
  
### <a name="example"></a>Esempio  
 Visualizzare [CComMultiThreadModel::AutoCriticalSection](../../atl/reference/ccommultithreadmodel-class.md#autocriticalsection).  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)