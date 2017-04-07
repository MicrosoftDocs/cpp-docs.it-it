---
title: Classe CComPolyObject | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComPolyObject
- ATLCOM/ATL::CComPolyObject
- ATLCOM/ATL::CComPolyObject::CComPolyObject
- ATLCOM/ATL::CComPolyObject::AddRef
- ATLCOM/ATL::CComPolyObject::CreateInstance
- ATLCOM/ATL::CComPolyObject::FinalConstruct
- ATLCOM/ATL::CComPolyObject::FinalRelease
- ATLCOM/ATL::CComPolyObject::QueryInterface
- ATLCOM/ATL::CComPolyObject::Release
- ATLCOM/ATL::CComPolyObject::m_contained
dev_langs:
- C++
helpviewer_keywords:
- aggregate objects [C++], in ATL
- aggregation [C++], ATL objects
- CComPolyObject class
ms.assetid: eaf67c18-e855-48ca-9b15-f1df3106121b
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 37be4c985983cb760246a4a2450c27d175d1f440
ms.lasthandoff: 02/24/2017

---
# <a name="ccompolyobject-class"></a>CComPolyObject (classe)
Questa classe implementa **IUnknown** per un oggetto aggregato o aggregato.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class contained>  
class CComPolyObject : public IUnknown,
      public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```  
  
#### <a name="parameters"></a>Parametri  
 `contained`  
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::CComPolyObject](#ccompolyobject)|Costruttore.|  
|[CComPolyObject:: ~ CComPolyObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::AddRef](#addref)|Incrementa il conteggio di riferimenti dell'oggetto.|  
|[CComPolyObject::CreateInstance](#createinstance)|(Statico) Consente di creare un nuovo **CComPolyObject** `contained` ** > ** oggetto senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).|  
|[CComPolyObject::FinalConstruct](#finalconstruct)|Esegue un'inizializzazione finale di `m_contained`.|  
|[CComPolyObject::FinalRelease](#finalrelease)|Esegue la distruzione finale di `m_contained`.|  
|[CComPolyObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComPolyObject::Release](#release)|Decrementa conteggio dei riferimenti dell'oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::m_contained](#m_contained)|Delegati **IUnknown** chiama per l'outer unknown se l'oggetto è aggregato o per il **IUnknown** dell'oggetto se l'oggetto non è aggregato.|  
  
## <a name="remarks"></a>Note  
 `CComPolyObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato o aggregato.  
  
 Quando un'istanza di `CComPolyObject` viene creato, il valore di esterna sconosciuta sia selezionata. In questo caso **NULL**, **IUnknown** è implementata per un oggetto non aggregato. Se non è unknown esterno **NULL**, **IUnknown** è implementata per un oggetto aggregato.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` è evitare di avere entrambi [CComAggObject](../../atl/reference/ccomaggobject-class.md) e [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che esiste solo una copia dell'oggetto vtable e una copia delle funzioni nel modulo. Se la vtable è grande, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, utilizzando `CComPolyObject` può comportare una dimensione modulo leggermente maggiore perché non è ottimizzato per un oggetto aggregato o non aggregato, essendo `CComAggObject` e `CComObject`.  
  
 Se il `DECLARE_POLY_AGGREGATABLE` (macro) viene specificato nella definizione di classe dell'oggetto, `CComPolyObject` verrà utilizzato per creare l'oggetto. `DECLARE_POLY_AGGREGATABLE`verrà automaticamente dichiarato se utilizzare la creazione guidata progetto ATL per creare un controllo completo o Internet Explorer.  
  
 Se aggregato, il `CComPolyObject` oggetto dispone di propri **IUnknown**, indipendentemente dall'esterno dell'oggetto **IUnknown**e mantiene il proprio conteggio dei riferimenti. `CComPolyObject`Usa [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) per delegare a unknown esterno.  
  
 Per ulteriori informazioni sull'aggregazione, vedere l'articolo [nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComPolyObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComPolyObject::AddRef  
 Incrementa il conteggio dei riferimenti dell'oggetto.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o test.  
  
##  <a name="ccompolyobject"></a>CComPolyObject::CComPolyObject  
 Costruttore.  
  
```
CComPolyObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Un puntatore a unknown esterno se l'oggetto da aggregare, o **NULL** se l'oggetto se l'oggetto non è aggregato.  
  
### <a name="remarks"></a>Note  
 Inizializza il `CComContainedObject` (membro dati), [m_contained](#m_contained)e incrementa il conteggio dei blocchi di modulo.  
  
 Decrementa il distruttore il modulo conteggio dei blocchi.  
  
##  <a name="dtor"></a>CComPolyObject:: ~ CComPolyObject  
 Distruttore.  
  
```
~CComPolyObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, chiamate [FinalRelease](#finalrelease), e decrementa il modulo conteggio dei blocchi.  
  
##  <a name="createinstance"></a>CComPolyObject::CreateInstance  
 Consente di creare un nuovo **CComPolyObject** `contained` ** > ** oggetto senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
```
static HRESULT WINAPI CreateInstance(  
    LPUNKNOWN pUnkOuter, 
    CComPolyObject<contained>** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 [out] Un puntatore a un **CComPolyObject** `contained` ** > ** puntatore. Se `CreateInstance` ha esito negativo, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito ha un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, quindi utilizzare **versione** per liberare il riferimento sul puntatore a oggetto al termine dell'operazione.  
  
 Se non è necessario accedere all'oggetto direttamente, ma ancora si desidera creare un nuovo oggetto senza il sovraccarico `CoCreateInstance`, utilizzare [CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) invece.  
  
##  <a name="finalconstruct"></a>CComPolyObject::FinalConstruct  
 Chiamato durante le fasi finali della costruzione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale per il [m_contained](#m_contained) (membro dati).  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="finalrelease"></a>CComPolyObject::FinalRelease  
 Chiamato durante l'eliminazione degli oggetti, questo metodo consente di liberare la [m_contained](#m_contained) (membro dati).  
  
```
void FinalRelease();
```  
  
##  <a name="m_contained"></a>CComPolyObject::m_contained  
 Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe.  
  
```
CComContainedObject<contained> m_contained;
```  
  
### <a name="parameters"></a>Parametri  
 `contained`  
 [in] La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
### <a name="remarks"></a>Note  
 **IUnknown** chiama tramite `m_contained` vengono delegate unknown esterno se l'oggetto è aggregato, o per il **IUnknown** di questo oggetto se l'oggetto non è aggregato.  
  
##  <a name="queryinterface"></a>CComPolyObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>  
HRESULT QueryInterface(Q** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `Q`  
 L'interfaccia COM.  
  
 `iid`  
 [in] L'identificatore di interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato da `iid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
 `pp`  
 [out] Un puntatore a interfaccia identificato dal **__uuidof(Q)**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Per un oggetto aggregato, se l'interfaccia richiesta **IUnknown**, `QueryInterface` restituisce un puntatore a oggetto aggregato proprio **IUnknown** e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per l'interfaccia mediante la `CComContainedObject` (membro dati), [m_contained](#m_contained).  
  
##  <a name="release"></a>CComPolyObject::Release  
 Decrementa il conteggio dei riferimenti dell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o test. Nelle build di nondebug **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [DECLARE_POLY_AGGREGATABLE](http://msdn.microsoft.com/library/7569e738-cfbc-4404-ba1d-78dcefa3bdb3)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

