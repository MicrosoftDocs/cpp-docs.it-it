---
title: Classe CComContainedObject | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComContainedObject
dev_langs:
- C++
helpviewer_keywords:
- aggregate objects [C++], in ATL
- aggregation [C++], ATL objects
- CComContainedObject class
ms.assetid: e8616b41-c200-47b8-bf2c-fb9f713ebdad
caps.latest.revision: 20
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
ms.openlocfilehash: 60958f328d78205c3432f35ed4e3e3c4b652ebfe
ms.lasthandoff: 02/24/2017

---
# <a name="ccomcontainedobject-class"></a>Classe CComContainedObject
Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) delega per l'oggetto proprietario **IUnknown**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>  
class CComContainedObject : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComContainedObject::CComContainedObject](#ccomcontainedobject)|Costruttore. Inizializza il puntatore a membro dell'oggetto proprietario `IUnknown`.|  
|[CComContainedObject:: ~ CComContainedObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComContainedObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti sull'oggetto proprietario.|  
|[CComContainedObject::GetControllingUnknown](#getcontrollingunknown)|Recupera l'oggetto proprietario `IUnknown`.|  
|[CComContainedObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta sull'oggetto proprietario.|  
|[CComContainedObject::Release](#release)|Decrementa il conteggio dei riferimenti sull'oggetto proprietario.|  
  
## <a name="remarks"></a>Note  
 ATL utilizza `CComContainedObject` nelle classi [CComAggObject](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md), e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) delega per l'oggetto proprietario **IUnknown**. (Il proprietario è l'oggetto esterno di un'aggregazione o l'oggetto per cui viene creata un'interfaccia tear-off). `CComContainedObject` chiamate `CComObjectRootEx`del `OuterQueryInterface`, `OuterAddRef`, e `OuterRelease`, tutti ereditato tramite `Base`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComContainedObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-nameaddrefa--ccomcontainedobjectaddref"></a><a name="addref"></a>CComContainedObject::AddRef  
 Incrementa il conteggio dei riferimenti sull'oggetto proprietario.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o test.  
  
##  <a name="a-nameccomcontainedobjecta--ccomcontainedobjectccomcontainedobject"></a><a name="ccomcontainedobject"></a>CComContainedObject::CComContainedObject  
 Costruttore.  
  
```
CComContainedObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] L'oggetto proprietario **IUnknown**.  
  
### <a name="remarks"></a>Note  
 Set di `m_pOuterUnknown` puntatore a membro (ereditate tramite il `Base` classe) a `pv`.  
  
##  <a name="a-namedtora--ccomcontainedobjectccomcontainedobject"></a><a name="dtor"></a>CComContainedObject:: ~ CComContainedObject  
 Distruttore.  
  
```
~CComContainedObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="a-namegetcontrollingunknowna--ccomcontainedobjectgetcontrollingunknown"></a><a name="getcontrollingunknown"></a>CComContainedObject::GetControllingUnknown  
 Restituisce il `m_pOuterUnknown` puntatore a membro (ereditate tramite il *Base* classe) che contiene l'oggetto proprietario **IUnknown**.  
  
```
IUnknown* GetControllingUnknown();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto proprietario **IUnknown**.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere virtuale se `Base` ha dichiarato il [DECLARE_GET_CONTROLLING_UNKNOWN](http://msdn.microsoft.com/library/82b0199a-a9d5-4f95-a711-fa1ae18e1f77) (macro).  
  
##  <a name="a-namequeryinterfacea--ccomcontainedobjectqueryinterface"></a><a name="queryinterface"></a>CComContainedObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta sull'oggetto proprietario.  
  
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
  
##  <a name="a-namereleasea--ccomcontainedobjectrelease"></a><a name="release"></a>CComContainedObject::Release  
 Decrementa il conteggio dei riferimenti sull'oggetto proprietario.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o test. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

