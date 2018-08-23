---
title: Classe CComAggObject | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComAggObject
- ATLCOM/ATL::CComAggObject
- ATLCOM/ATL::CComAggObject::CComAggObject
- ATLCOM/ATL::CComAggObject::AddRef
- ATLCOM/ATL::CComAggObject::CreateInstance
- ATLCOM/ATL::CComAggObject::FinalConstruct
- ATLCOM/ATL::CComAggObject::FinalRelease
- ATLCOM/ATL::CComAggObject::QueryInterface
- ATLCOM/ATL::CComAggObject::Release
- ATLCOM/ATL::CComAggObject::m_contained
dev_langs:
- C++
helpviewer_keywords:
- aggregate objects [C++], in ATL
- aggregation [C++], ATL objects
- CComAggObject class
ms.assetid: 7aa90d69-d399-477b-880d-e2cdf0ef7881
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9ea5da8b98c528eb6832c850e41b0a42c386f901
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42572655"
---
# <a name="ccomaggobject-class"></a>Classe CComAggObject
Questa classe implementa il [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) interfaccia per un oggetto aggregato. Per definizione, un oggetto aggregato è contenuto all'interno di un oggetto esterno. Il `CComAggObject` classe è simile al [classe CComObject](../../atl/reference/ccomobject-class.md), ad eccezione del fatto che espone un'interfaccia che è direttamente accessibile ai client esterni.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class contained>  
class CComAggObject : public IUnknown, 
   public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```  
  
#### <a name="parameters"></a>Parametri  
 *contenuti*  
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::CComAggObject](#ccomaggobject)|Costruttore.|  
|[Ccomaggobjec:: ~ CComAggObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto aggregato.|  
|[CComAggObject::CreateInstance](#createinstance)|Questa funzione statica consente di creare una nuova **Ccomaggobjec <** `contained` **>** oggetto senza l'overhead della [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).|  
|[CComAggObject::FinalConstruct](#finalconstruct)|Esegue l'inizializzazione finale del `m_contained`.|  
|[CComAggObject::FinalRelease](#finalrelease)|Esegue la distruzione finale di `m_contained`.|  
|[CComAggObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComAggObject::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto aggregato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::m_contained](#m_contained)|I delegati `IUnknown` chiamate a unknown esterno.|  
  
## <a name="remarks"></a>Note  
 `CComAggObject` implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato. `CComAggObject` dispone di propri `IUnknown` interfaccia, distinto dall'esterno dell'oggetto `IUnknown` interfaccia e mantiene il proprio conteggio dei riferimenti.  
  
 Per altre informazioni sull'aggregazione, vedere l'articolo [nozioni di base di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComAggObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>  CComAggObject::AddRef  
 Incrementa il conteggio dei riferimenti nell'oggetto aggregato.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="ccomaggobject"></a>  CComAggObject::CComAggObject  
 Costruttore.  
  
```
CComAggObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 [in] Unknown esterno.  
  
### <a name="remarks"></a>Note  
 Inizializza la `CComContainedObject` membro [m_contained](#m_contained)e incrementa il conteggio dei blocchi del modulo.  
  
 Il distruttore riduce il modulo conteggio dei blocchi.  
  
##  <a name="dtor"></a>  Ccomaggobjec:: ~ CComAggObject  
 Distruttore.  
  
```
~CComAggObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, le chiamate [FinalRelease](#finalrelease), e riduce il modulo conteggio dei blocchi.  
  
##  <a name="createinstance"></a>  CComAggObject::CreateInstance  
 Questa funzione statica consente di creare una nuova **Ccomaggobjec <** `contained` **>** oggetto senza l'overhead della [CoCreateInstance](/windows/desktop/api/combaseapi/nf-combaseapi-cocreateinstance).  
  
```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComAggObject<contained>** pp);
```  
  
### <a name="parameters"></a>Parametri  
 *profilo di porta*  
 [out] Un puntatore a un **CComAggObject\<* * * contenuti* **>** puntatore. Se `CreateInstance` ha esito negativo *pp* è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito è un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, usare `Release` per liberare il riferimento sul puntatore a oggetto al termine.  
  
 Se non necessario accesso diretto all'oggetto, ma si vuole comunque creare un nuovo oggetto senza l'overhead dei `CoCreateInstance`, usare [CComCoClass](../../atl/reference/ccomcoclass-class.md#createinstance) invece.  
  
##  <a name="finalconstruct"></a>  CComAggObject::FinalConstruct  
 Chiamato durante le fasi finali della creazione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale per il [m_contained](#m_contained) membro.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="finalrelease"></a>  CComAggObject::FinalRelease  
 Chiamato durante l'eliminazione degli oggetti, questo metodo libera il [m_contained](#m_contained) membro.  
  
```
void FinalRelease();
```  
  
##  <a name="m_contained"></a>  CComAggObject::m_contained  
 Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe.  
  
```
CComContainedObject<contained> m_contained;
```  
  
### <a name="parameters"></a>Parametri  
 *contenuti*  
 [in] La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce si desidera supportare nell'oggetto.  
  
### <a name="remarks"></a>Note  
 Tutti i `IUnknown` chiamate tramite `m_contained` sono delegate a unknown esterno.  
  
##  <a name="queryinterface"></a>  CComAggObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```  
  
### <a name="parameters"></a>Parametri  
 *IID*  
 [in] L'identificatore dell'interfaccia richiesto.  
  
 *ppvObject*  
 [out] Un puntatore al puntatore a interfaccia identificato dal *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.  
  
 *profilo di porta*  
 [out] Un puntatore al puntatore a interfaccia identificato dal tipo `Q`. Se l'oggetto non supporta questa interfaccia, *pp* è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se l'interfaccia richiesta è `IUnknown`, `QueryInterface` restituisce un puntatore all'oggetto aggregato proprio `IUnknown` e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per l'interfaccia tramite il `CComContainedObject` membro [m_contained](#m_contained).  
  
##  <a name="release"></a>  CComAggObject::Release  
 Decrementa il conteggio dei riferimenti nell'oggetto aggregato.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o di testing. Nelle compilazioni non di debug, `Release` restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComObject](../../atl/reference/ccomobject-class.md)   
 [Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)   
 [DECLARE_ONLY_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_only_aggregatable)   
 [DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
