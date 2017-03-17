---
title: Classe CComAggObject | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 29
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
ms.openlocfilehash: 386ab09418c879c0de0d82d729a3de1b2e270016
ms.lasthandoff: 02/24/2017

---
# <a name="ccomaggobject-class"></a>Classe CComAggObject
Questa classe implementa il [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) interfaccia per un oggetto aggregato. Per definizione, un oggetto aggregato è contenuto all'interno di un oggetto esterno. Il `CComAggObject` è simile alla classe il [CComObject classe](../../atl/reference/ccomobject-class.md), ad eccezione del fatto che espone un'interfaccia che è direttamente accessibile ai client esterni.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class contained>  
class CComAggObject : public IUnknown, 
   public CComObjectRootEx<contained::_ThreadModel::ThreadModelNoCS>
```  
  
#### <a name="parameters"></a>Parametri  
 `contained`  
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::CComAggObject](#ccomaggobject)|Costruttore.|  
|[CComAggObject:: ~ CComAggObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto aggregato.|  
|[CComAggObject::CreateInstance](#createinstance)|Questa funzione statica consente di creare un nuovo **CComAggObject** `contained` ** > ** oggetto senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).|  
|[CComAggObject::FinalConstruct](#finalconstruct)|Esegue un'inizializzazione finale di `m_contained`.|  
|[CComAggObject::FinalRelease](#finalrelease)|Esegue la distruzione finale di `m_contained`.|  
|[CComAggObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComAggObject::Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto aggregato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComAggObject::m_contained](#m_contained)|Delegati `IUnknown` chiamate a unknown esterno.|  
  
## <a name="remarks"></a>Note  
 `CComAggObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto aggregato. `CComAggObject`dispone di propri **IUnknown** interfaccia, distinto dell'oggetto esterno **IUnknown** interfaccia e mantiene il proprio conteggio dei riferimenti.  
  
 Per ulteriori informazioni sull'aggregazione, vedere l'articolo [nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComAggObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComAggObject::AddRef  
 Incrementa il conteggio dei riferimenti dell'oggetto aggregato.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o test.  
  
##  <a name="ccomaggobject"></a>CComAggObject::CComAggObject  
 Costruttore.  
  
```
CComAggObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Unknown esterno.  
  
### <a name="remarks"></a>Note  
 Inizializza il `CComContainedObject` membro, [m_contained](#m_contained)e incrementa il conteggio dei blocchi di modulo.  
  
 Decrementa il distruttore il modulo conteggio dei blocchi.  
  
##  <a name="dtor"></a>CComAggObject:: ~ CComAggObject  
 Distruttore.  
  
```
~CComAggObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, chiamate [FinalRelease](#finalrelease), e decrementa il modulo conteggio dei blocchi.  
  
##  <a name="createinstance"></a>CComAggObject::CreateInstance  
 Questa funzione statica consente di creare un nuovo **CComAggObject** `contained` ** > ** oggetto senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
```
static HRESULT WINAPI CreateInstance(
    LPUNKNOWN pUnkOuter,
    CComAggObject<contained>** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 [out] Un puntatore a un **CComAggObject\<***contenuto* ** > ** puntatore. Se `CreateInstance` ha esito negativo, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito ha un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, quindi utilizzare **versione** per liberare il riferimento sul puntatore a oggetto al termine dell'operazione.  
  
 Se non è necessario accedere direttamente all'oggetto, ma continuare a creare un nuovo oggetto senza il sovraccarico di `CoCreateInstance`, utilizzare [CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) invece.  
  
##  <a name="finalconstruct"></a>CComAggObject::FinalConstruct  
 Chiamato durante le fasi finali della costruzione dell'oggetto, questo metodo esegue qualsiasi inizializzazione finale per il [m_contained](#m_contained) membro.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="finalrelease"></a>CComAggObject::FinalRelease  
 Chiamato durante l'eliminazione degli oggetti, questo metodo consente di liberare la [m_contained](#m_contained) membro.  
  
```
void FinalRelease();
```  
  
##  <a name="m_contained"></a>CComAggObject::m_contained  
 Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe.  
  
```
CComContainedObject<contained> m_contained;
```  
  
### <a name="parameters"></a>Parametri  
 `contained`  
 [in] La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
### <a name="remarks"></a>Note  
 Tutti **IUnknown** chiama tramite `m_contained` vengono delegate unknown esterno.  
  
##  <a name="queryinterface"></a>CComAggObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] L'identificatore di interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato da `iid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
 `pp`  
 [out] Un puntatore al puntatore a interfaccia identificato dal tipo `Q`. Se l'oggetto non supporta questa interfaccia, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Se l'interfaccia richiesta **IUnknown**, `QueryInterface` restituisce un puntatore a oggetto aggregato proprio **IUnknown** e incrementa il conteggio dei riferimenti. In caso contrario, questo metodo esegue una query per l'interfaccia mediante la `CComContainedObject` membro, [m_contained](#m_contained).  
  
##  <a name="release"></a>CComAggObject::Release  
 Decrementa il conteggio dei riferimenti dell'oggetto aggregato.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o test. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE_AGGREGATABLE](http://msdn.microsoft.com/library/e7e568d7-04e0-4226-b5dc-224deed229ab)   
 [DECLARE_ONLY_AGGREGATABLE](http://msdn.microsoft.com/library/a54220df-4330-4e4d-b7fb-8b63dd62d337)   
 [DECLARE_NOT_AGGREGATABLE](http://msdn.microsoft.com/library/2a116c7c-bab8-4f2a-a9ad-03d7aba0f762)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

