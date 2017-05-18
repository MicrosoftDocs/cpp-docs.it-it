---
title: Classe CComPolyObject | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: ee44fcec146ef8a8c68b917020ae52e2300eed5e
ms.contentlocale: it-it
ms.lasthandoff: 03/31/2017

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
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
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
|[CComPolyObject::CreateInstance](#createinstance)|(Statico) Consente di creare un nuovo **CComPolyObject** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).|  
|[CComPolyObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione finale di `m_contained`.|  
|[CComPolyObject::FinalRelease](#finalrelease)|Esegue la distruzione finale di `m_contained`.|  
|[CComPolyObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComPolyObject::Release](#release)|Decrementa conteggio dei riferimenti dell'oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComPolyObject::m_contained](#m_contained)|Delegati **IUnknown** le chiamate a unknown esterno se l'oggetto è aggregato o per il **IUnknown** dell'oggetto se l'oggetto non è aggregato.|  
  
## <a name="remarks"></a>Note  
 `CComPolyObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato o aggregato.  
  
 Quando un'istanza di `CComPolyObject` viene creato, il valore di esterna sconosciuto è selezionata. Se è **NULL**, **IUnknown** è implementata per un oggetto non aggregato. Se non è unknown esterno **NULL**, **IUnknown** è implementata per un oggetto aggregato.  
  
 Il vantaggio dell'utilizzo `CComPolyObject` è che si evita che entrambi [CComAggObject](../../atl/reference/ccomaggobject-class.md) e [CComObject](../../atl/reference/ccomobject-class.md) nel modulo per gestire i casi aggregati e non aggregati. Un singolo `CComPolyObject` oggetto gestisce entrambi i casi. Ciò significa che nel modulo è presente solo una copia dell'oggetto vtable e una copia delle funzioni. Se la vtable è elevata, questo può ridurre notevolmente le dimensioni del modulo. Tuttavia, se la vtable è piccola, utilizzando `CComPolyObject` può comportare una dimensione leggermente maggiore di modulo perché non è ottimizzato per un oggetto aggregato o aggregato, come `CComAggObject` e `CComObject`.  
  
 Se il `DECLARE_POLY_AGGREGATABLE` (macro) viene specificato nella definizione di classe dell'oggetto, `CComPolyObject` verrà utilizzato per creare l'oggetto. `DECLARE_POLY_AGGREGATABLE`verrà automaticamente dichiarato se utilizzare la creazione guidata progetto ATL per creare un controllo completo o un controllo di Internet Explorer.  
  
 Se aggregato, il `CComPolyObject` oggetto dispone di una propria **IUnknown**separata dall'esterno dell'oggetto **IUnknown**e mantiene il proprio conteggio dei riferimenti. `CComPolyObject`Usa [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) di delegare unknown esterno.  
  
 Per ulteriori informazioni sulle aggregazioni, vedere l'articolo [nozioni fondamentali su oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComPolyObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComPolyObject::AddRef  
 Incrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="ccompolyobject"></a>CComPolyObject::CComPolyObject  
 Costruttore.  
  
```
CComPolyObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Un puntatore a unknown esterno se l'oggetto deve essere aggregato, o **NULL** se l'oggetto se l'oggetto non è aggregato.  
  
### <a name="remarks"></a>Note  
 Inizializza il `CComContainedObject` (membro dati), [m_contained](#m_contained)e incrementa il conteggio dei blocchi del modulo.  
  
 Decrementa il distruttore il modulo conteggio dei blocchi.  
  
##  <a name="dtor"></a>CComPolyObject:: ~ CComPolyObject  
 Distruttore.  
  
```
~CComPolyObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, chiamate [FinalRelease](#finalrelease), e decrementa il modulo conteggio dei blocchi.  
  
##  <a name="createinstance"></a>CComPolyObject::CreateInstance  
 Consente di creare un nuovo **CComPolyObject** `contained` **>** oggetto senza l'overhead di [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
```
static HRESULT WINAPI CreateInstance(  
    LPUNKNOWN pUnkOuter, 
    CComPolyObject<contained>** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 [out] Un puntatore a un **CComPolyObject** `contained` **>** puntatore. Se `CreateInstance` ha esito negativo, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito ha un conteggio di riferimenti pari a zero, pertanto chiamare `AddRef` immediatamente, quindi utilizzare **versione** per liberare il riferimento sul puntatore a oggetto una volta terminato.  
  
 Se si non necessario accesso diretto all'oggetto, ma ancora si desidera creare un nuovo oggetto senza l'overhead di `CoCreateInstance`, utilizzare [CComCoClass](../../atl/reference/ccomcoclass-class.md#createinstance) invece.  
  
##  <a name="finalconstruct"></a>CComPolyObject::FinalConstruct  
 Chiamato durante le fasi finali della creazione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale per il [m_contained](#m_contained) (membro dati).  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="finalrelease"></a>CComPolyObject::FinalRelease  
 Chiamato durante l'eliminazione degli oggetti, questo metodo libera il [m_contained](#m_contained) (membro dati).  
  
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
 [in] La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
### <a name="remarks"></a>Note  
 **IUnknown** chiama tramite `m_contained` sono delegate a unknown esterno se l'oggetto è aggregato, o per il **IUnknown** di questo oggetto se l'oggetto non è aggregato.  
  
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
 [in] Identificatore dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
 `pp`  
 [out] Un puntatore a interfaccia identificato dal **__uuidof(Q)**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Per un oggetto aggregato, se l'interfaccia richiesta **IUnknown**, `QueryInterface` restituisce un puntatore all'oggetto aggregato proprio **IUnknown** e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per l'interfaccia mediante la `CComContainedObject` (membro dati), [m_contained](#m_contained).  
  
##  <a name="release"></a>CComPolyObject::Release  
 Decrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o di testing. Nelle build di nondebug **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [DECLARE_POLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_poly_aggregatable)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

