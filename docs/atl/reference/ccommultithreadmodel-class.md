---
title: Classe CComMultiThreadModel | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComMultiThreadModel
- ATLBASE/ATL::CComMultiThreadModel
- ATLBASE/ATL::CComMultiThreadModel::AutoCriticalSection
- ATLBASE/ATL::CComMultiThreadModel::CriticalSection
- ATLBASE/ATL::CComMultiThreadModel::ThreadModelNoCS
- ATLBASE/ATL::CComMultiThreadModel::Decrement
- ATLBASE/ATL::CComMultiThreadModel::Increment
dev_langs:
- C++
helpviewer_keywords:
- ATL, multithreading
- CComMultiThreadModel class
- threading [ATL]
ms.assetid: db8f1662-2f7a-44b3-b341-ffbfb6e422a3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 96f8c24736309ef1030664ee0fd466537d739496
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccommultithreadmodel-class"></a>Classe CComMultiThreadModel
`CComMultiThreadModel`fornisce metodi di thread-safe per incrementare e decrementare il valore di una variabile.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComMultiThreadModel
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModel::AutoCriticalSection](#autocriticalsection)|Fa riferimento a classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).|  
|[CComMultiThreadModel::CriticalSection](#criticalsection)|Fa riferimento a classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).|  
|[CComMultiThreadModel::ThreadModelNoCS](#threadmodelnocs)|Fa riferimento a classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModel::Decrement](#decrement)|(Statico) Decrementa il valore della variabile specificata in modo thread-safe.|  
|[CComMultiThreadModel::Increment](#increment)|(Statico) Incrementa il valore della variabile specificata in modo thread-safe.|  
  
## <a name="remarks"></a>Note  
 In genere, si utilizza `CComMultiThreadModel` tramite uno dei due `typedef` nomi, entrambi [CComObjectThreadModel] (atl-typedefs.md #ccomobjectthreadmodel o [CComGlobalsThreadModel] (atl-typedefs.md #ccomglobalsthreadmodel. La classe a cui fa riferimento ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:  
  
|typedef|Threading singolo|Modello di threading apartment|Modello di threading Free|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S = `CComSingleThreadModel`; M =`CComMultiThreadModel`  
  
 `CComMultiThreadModel`stesso definisce tre `typedef` nomi. `AutoCriticalSection`e `CriticalSection` fare riferimento alle classi che forniscono metodi per ottenere e rilasciare la proprietà di una sezione critica. `ThreadModelNoCS`classe di riferimenti [CComMultiThreadModelNoCS(ccommultithreadmodelnocs-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="autocriticalsection"></a>CComMultiThreadModel::AutoCriticalSection  
 Quando si utilizza `CComMultiThreadModel`, `typedef` nome `AutoCriticalSection` fa riferimento a classe [CComAutoCriticalSection](ccomautocriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
```
typedef CComAutoCriticalSection AutoCriticalSection;
```  
  
### <a name="remarks"></a>Note  
 [CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e a cui fa riferimento la classe di sezione critica `AutoCriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 Oltre a `AutoCriticalSection`, è possibile utilizzare il `typedef` nome [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Il codice seguente viene modellato [CComObjectRootEx](ccomobjectrootex-class.md)e viene illustrato `AutoCriticalSection` utilizzato in un ambiente di threading.  
  

```cpp  
template<class ThreadModel>
class CMyAutoCritClass
{
public:
   typedef ThreadModel _ThreadModel;
   typedef typename _ThreadModel::AutoCriticalSection _CritSec;

   CMyAutoCritClass() : m_dwRef(0) {}

   ULONG InternalAddRef()
   {
      return _ThreadModel::Increment(&m_dwRef);
   }
   ULONG InternalRelease()
   {
      return _ThreadModel::Decrement(&m_dwRef);   
   }
   void Lock() { m_critsec.Lock( ); }
   void Unlock() { m_critsec.Unlock(); }

private:
   _CritSec m_critsec;
   LONG m_dwRef;
```  
  
 Le tabelle seguenti illustrano i risultati del `InternalAddRef` e `Lock` metodi, a seconda di **ThreadModel** parametro di modello e il modello di threading utilizzato dall'applicazione:  
  
### <a name="threadmodel--ccomobjectthreadmodel"></a>ThreadModel = CComObjectThreadModel  
  
|Metodo|Singolo o modello di Threading Apartment|Modello di Threading Free|  
|------------|-----------------------------------|--------------------|  
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|  
|`Lock`|Non esegue alcuna operazione; non sussiste alcuna sezione critica da bloccare.|La sezione critica è bloccata.|  
  
### <a name="threadmodel--ccomobjectthreadmodelthreadmodelnocs"></a>ThreadModel = CComObjectThreadModel::ThreadModelNoCS  
  
|Metodo|Singolo o modello di Threading Apartment|Modello di Threading Free|  
|------------|-----------------------------------|--------------------|  
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|  
|`Lock`|Non esegue alcuna operazione; non sussiste alcuna sezione critica da bloccare.|Non esegue alcuna operazione; non sussiste alcuna sezione critica da bloccare.|  
  
##  <a name="criticalsection"></a>CComMultiThreadModel::CriticalSection  
 Quando si utilizza `CComMultiThreadModel`, `typedef` nome `CriticalSection` fa riferimento a classe [CComCriticalSection](ccomcriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
```
typedef CComCriticalSection CriticalSection;
```  
  
### <a name="remarks"></a>Note  
 [CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e a cui fa riferimento la classe di sezione critica `CriticalSection`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 Oltre a `CriticalSection`, è possibile utilizzare il `typedef` nome [AutoCriticalSection](#autocriticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio CRT.  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).  
  
##  <a name="decrement"></a>CComMultiThreadModel::Decrement  
 Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](http://msdn.microsoft.com/library/windows/desktop/ms683580), quali decrementa il valore della variabile a cui puntava `p`.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw ();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile da ridurre.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato del decremento è 0, quindi `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, il valore restituito è diverso da zero, ma il risultato del decremento potrebbe non essere uguali.  
  
### <a name="remarks"></a>Note  
 **InterlockedDecrement** impedisce che più thread contemporaneamente utilizzando questa variabile.  
  
##  <a name="increment"></a>CComMultiThreadModel::Increment  
 Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](http://msdn.microsoft.com/library/windows/desktop/ms683614), che incrementa il valore della variabile a cui puntata `p`.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw ();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 [in] Puntatore alla variabile deve essere incrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato dell'incremento è 0, quindi **incremento** restituisce 0. Se il risultato dell'incremento è diverso da zero, il valore restituito è diverso da zero, ma il risultato dell'incremento potrebbe non essere uguali.  
  
### <a name="remarks"></a>Note  
 **InterlockedIncrement** impedisce che più thread contemporaneamente utilizzando questa variabile.  
  
##  <a name="threadmodelnocs"></a>CComMultiThreadModel::ThreadModelNoCS  
 Quando si utilizza `CComMultiThreadModel`, `typedef` nome `ThreadModelNoCS` fa riferimento a classe [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md).  
  
```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```  
  
### <a name="remarks"></a>Note  
 `CComMultiThreadModelNoCS`fornisce metodi di thread-safe per l'incremento e decremento una variabile. Tuttavia, non fornisce una sezione critica.  
  
 [CComSingleThreadModel](ccomsinglethreadmodel-class.md) e `CComMultiThreadModelNoCS` contengono anche le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe a cui fa riferimento `ThreadModelNoCS`:  
  
|Classe definita in|Classe a cui fa riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|  
|`CComSingleThreadModel`|`CComSingleThreadModel`|  
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|  
  
### <a name="example"></a>Esempio  
 Vedere [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComSingleThreadModel](ccomsinglethreadmodel-class.md)   
 [Classe CComAutoCriticalSection](ccomautocriticalsection-class.md)   
 [Classe CComCriticalSection](ccomcriticalsection-class.md)   
 [Cenni preliminari sulla classe](../atl-class-overview.md)
