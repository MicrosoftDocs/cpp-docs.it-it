---
title: Classe CComMultiThreadModel | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 25c9e21aa4b0f09db83632973d3a5046e3e2aa4a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206120"
---
# <a name="ccommultithreadmodel-class"></a>Classe CComMultiThreadModel
`CComMultiThreadModel` fornisce metodi thread-safe per incrementare e decrementare il valore di una variabile.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComMultiThreadModel
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModel::AutoCriticalSection](#autocriticalsection)|Fa riferimento alla classe [CComAutoCriticalSection](../../atl/reference/ccomautocriticalsection-class.md).|  
|[CComMultiThreadModel::CriticalSection](#criticalsection)|Fa riferimento alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md).|  
|[CComMultiThreadModel::ThreadModelNoCS](#threadmodelnocs)|Fa riferimento alla classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComMultiThreadModel::Decrement](#decrement)|(Statico) Decrementa il valore della variabile specificata in modo thread-safe.|  
|[CComMultiThreadModel::Increment](#increment)|(Statico) Incrementa il valore della variabile specificata in modo thread-safe.|  
  
## <a name="remarks"></a>Note  
 In genere, si usa `CComMultiThreadModel` tramite uno dei due **typedef** nomi, entrambi [CComObjectThreadModel] (atl-typedefs.md #ccomobjectthreadmodel o [CComGlobalsThreadModel] (atl-typedefs.md #ccomglobalsthreadmodel. La classe fa riferimento ognuno **typedef** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:  
  
|typedef|Single threading|Threading apartment|Modello di threading Free|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S = `CComSingleThreadModel`; M = `CComMultiThreadModel`  
  
 `CComMultiThreadModel` stesso definisce tre **typedef** nomi. `AutoCriticalSection` e `CriticalSection` fare riferimento alle classi che forniscono metodi per ottenere e rilasciare la proprietà di una sezione critica. `ThreadModelNoCS` classe di riferimenti [CComMultiThreadModelNoCS(ccommultithreadmodelnocs-class.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
##  <a name="autocriticalsection"></a>  CComMultiThreadModel::AutoCriticalSection  
 Quando si usa `CComMultiThreadModel`, il **typedef** name `AutoCriticalSection` fa riferimento alla classe [CComAutoCriticalSection](ccomautocriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di una sezione critica oggetto.  
  
```
typedef CComAutoCriticalSection AutoCriticalSection;
```  
  
### <a name="remarks"></a>Note  
 [CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni per `AutoCriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica fa `AutoCriticalSection`:  
  
|Classe definita in|Classe di riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 Oltre a `AutoCriticalSection`, è possibile usare il **typedef** name [CriticalSection](#criticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio di CRT.  
  
### <a name="example"></a>Esempio  
 Il codice seguente è modellato [CComObjectRootEx](ccomobjectrootex-class.md)e illustra `AutoCriticalSection` utilizzato in un ambiente di threading.  
  

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
  
 Nelle tabelle seguenti mostrano i risultati del `InternalAddRef` e `Lock` metodi, a seconda di `ThreadModel` parametro di modello e il modello di threading utilizzato dall'applicazione:  
  
### <a name="threadmodel--ccomobjectthreadmodel"></a>ThreadModel = CComObjectThreadModel  
  
|Metodo|Singolo o il Threading Apartment|Modello di Threading Free|  
|------------|-----------------------------------|--------------------|  
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|  
|`Lock`|Non esegue alcuna operazione; non vi è alcuna sezione critica da bloccare.|La sezione critica è bloccata.|  
  
### <a name="threadmodel--ccomobjectthreadmodelthreadmodelnocs"></a>ThreadModel = CComObjectThreadModel::ThreadModelNoCS  
  
|Metodo|Singolo o il Threading Apartment|Modello di Threading Free|  
|------------|-----------------------------------|--------------------|  
|`InternalAddRef`|L'incremento non è thread-safe.|L'incremento è thread-safe.|  
|`Lock`|Non esegue alcuna operazione; non vi è alcuna sezione critica da bloccare.|Non esegue alcuna operazione; non vi è alcuna sezione critica da bloccare.|  
  
##  <a name="criticalsection"></a>  CComMultiThreadModel::CriticalSection  
 Quando si usa `CComMultiThreadModel`, il **typedef** name `CriticalSection` fa riferimento alla classe [CComCriticalSection](ccomcriticalsection-class.md), che fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.  
  
```
typedef CComCriticalSection CriticalSection;
```  
  
### <a name="remarks"></a>Note  
 [CComSingleThreadModel](ccomsinglethreadmodel-class.md) e [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md) contengono anche le definizioni per `CriticalSection`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe di sezione critica fa `CriticalSection`:  
  
|Classe definita in|Classe di riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModel`|`CComCriticalSection`|  
|`CComSingleThreadModel`|`CComFakeCriticalSection`|  
|`CComMultiThreadModelNoCS`|`CComFakeCriticalSection`|  
  
 Oltre a `CriticalSection`, è possibile usare il **typedef** name [AutoCriticalSection](#autocriticalsection). Non è necessario specificare `AutoCriticalSection` in oggetti globali o membri di classi statiche, se si desidera eliminare il codice di avvio di CRT.  
  
### <a name="example"></a>Esempio  
 Visualizzare [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).  
  
##  <a name="decrement"></a>  CComMultiThreadModel::Decrement  
 Questa funzione statica chiama la funzione Win32 [InterlockedDecrement](/windows/desktop/api/winbase/nf-winbase-interlockeddecrement), che decrementa il valore della variabile a cui punta *p*.  
  
```
static ULONG WINAPI Decrement(LPLONG p) throw ();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 [in] Puntatore alla variabile deve essere diminuito.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato del decremento è 0, quindi `Decrement` restituisce 0. Se il risultato del decremento è diverso da zero, il valore restituito è inoltre diverso da zero, ma potrebbe non corrispondere il risultato del decremento.  
  
### <a name="remarks"></a>Note  
 `InterlockedDecrement` impedisce che più thread contemporaneamente usando questa variabile.  
  
##  <a name="increment"></a>  CComMultiThreadModel::Increment  
 Questa funzione statica chiama la funzione Win32 [InterlockedIncrement](/windows/desktop/api/winbase/nf-winbase-interlockedincrement), il quale viene incrementato il valore della variabile a cui punta *p*.  
  
```
static ULONG WINAPI Increment(LPLONG p) throw ();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 [in] Puntatore alla variabile da incrementare.  
  
### <a name="return-value"></a>Valore restituito  
 Se il risultato dell'incremento è 0, quindi `Increment` restituisce 0. Se il risultato dell'incremento è diverso da zero, il valore restituito è inoltre diverso da zero, ma potrebbe non corrispondere il risultato dell'incremento.  
  
### <a name="remarks"></a>Note  
 `InterlockedIncrement` impedisce che più thread contemporaneamente usando questa variabile.  
  
##  <a name="threadmodelnocs"></a>  CComMultiThreadModel::ThreadModelNoCS  
 Quando si usa `CComMultiThreadModel`, il **typedef** name `ThreadModelNoCS` fa riferimento alla classe [CComMultiThreadModelNoCS](ccommultithreadmodelnocs-class.md).  
  
```
typedef CComMultiThreadModelNoCS ThreadModelNoCS;
```  
  
### <a name="remarks"></a>Note  
 `CComMultiThreadModelNoCS` fornisce metodi thread-safe per incremento e decremento una variabile; Tuttavia, non fornisce una sezione critica.  
  
 [CComSingleThreadModel](ccomsinglethreadmodel-class.md) e `CComMultiThreadModelNoCS` contengono anche le definizioni per `ThreadModelNoCS`. Nella tabella seguente viene illustrata la relazione tra la classe di modello di threading e la classe a cui fanno riferimento `ThreadModelNoCS`:  
  
|Classe definita in|Classe di riferimento|  
|----------------------|----------------------|  
|`CComMultiThreadModel`|`CComMultiThreadModelNoCS`|  
|`CComSingleThreadModel`|`CComSingleThreadModel`|  
|`CComMultiThreadModelNoCS`|`CComMultiThreadModelNoCS`|  
  
### <a name="example"></a>Esempio  
 Visualizzare [CComMultiThreadModel::AutoCriticalSection](#autocriticalsection).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComSingleThreadModel](ccomsinglethreadmodel-class.md)   
 [Classe CComAutoCriticalSection](ccomautocriticalsection-class.md)   
 [Classe CComCriticalSection](ccomcriticalsection-class.md)   
 [Panoramica della classe](../atl-class-overview.md)
