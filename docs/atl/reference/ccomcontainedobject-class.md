---
title: Classe CComContainedObject | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComContainedObject
- ATLCOM/ATL::CComContainedObject
- ATLCOM/ATL::CComContainedObject::CComContainedObject
- ATLCOM/ATL::CComContainedObject::AddRef
- ATLCOM/ATL::CComContainedObject::GetControllingUnknown
- ATLCOM/ATL::CComContainedObject::QueryInterface
- ATLCOM/ATL::CComContainedObject::Release
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
ms.translationtype: MT
ms.sourcegitcommit: c55726a1728185f699afbac4ba68a6dc0f70c2bf
ms.openlocfilehash: e9d580a8027e37ce2db5e70b72c4f8cf2a99e516
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="ccomcontainedobject-class"></a>Classe CComContainedObject
Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) mediante la delega per l'oggetto proprietario **IUnknown**.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>  
class CComContainedObject : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComContainedObject::CComContainedObject](#ccomcontainedobject)|Costruttore. Inizializza il puntatore membro dell'oggetto proprietario `IUnknown`.|  
|[CComContainedObject:: ~ CComContainedObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComContainedObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti sull'oggetto proprietario.|  
|[CComContainedObject::GetControllingUnknown](#getcontrollingunknown)|Recupera l'oggetto proprietario `IUnknown`.|  
|[CComContainedObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta per l'oggetto proprietario.|  
|[CComContainedObject::Release](#release)|Decrementa il conteggio dei riferimenti sull'oggetto proprietario.|  
  
## <a name="remarks"></a>Note  
 Utilizza ATL `CComContainedObject` nelle classi [CComAggObject](../../atl/reference/ccomaggobject-class.md), [CComPolyObject](../../atl/reference/ccompolyobject-class.md), e [CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md). `CComContainedObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) mediante la delega per l'oggetto proprietario **IUnknown**. (Il proprietario è l'oggetto esterno di un'aggregazione o l'oggetto per cui viene creata un'interfaccia tear-off). `CComContainedObject` chiamate `CComObjectRootEx`del `OuterQueryInterface`, `OuterAddRef`, e `OuterRelease`, ereditato tutti tramite `Base`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComContainedObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComContainedObject::AddRef  
 Incrementa il conteggio dei riferimenti sull'oggetto proprietario.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="ccomcontainedobject"></a>CComContainedObject::CComContainedObject  
 Costruttore.  
  
```
CComContainedObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] L'oggetto proprietario **IUnknown**.  
  
### <a name="remarks"></a>Note  
 Imposta il `m_pOuterUnknown` puntatore a membro (ereditate tramite il `Base` classe) a `pv`.  
  
##  <a name="dtor"></a>CComContainedObject:: ~ CComContainedObject  
 Distruttore.  
  
```
~CComContainedObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="getcontrollingunknown"></a>CComContainedObject::GetControllingUnknown  
 Restituisce il `m_pOuterUnknown` puntatore a membro (ereditate tramite il *Base* classe) che contiene l'oggetto proprietario **IUnknown**.  
  
```
IUnknown* GetControllingUnknown();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto proprietario **IUnknown**.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere virtuale se `Base` ha dichiarato il [DECLARE_GET_CONTROLLING_UNKNOWN](aggregation-and-class-factory-macros.md#declare_get_controlling_unknown) (macro).  
  
##  <a name="queryinterface"></a>CComContainedObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta per l'oggetto proprietario.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
template <class Q>
HRESULT STDMETHODCALLTYPE QueryInterface(Q** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Identificatore dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
 `pp`  
 [out] Un puntatore al puntatore a interfaccia identificato dal tipo `Q`. Se l'oggetto non supporta questa interfaccia, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="release"></a>CComContainedObject::Release  
 Decrementa il conteggio dei riferimenti sull'oggetto proprietario.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o di testing. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

