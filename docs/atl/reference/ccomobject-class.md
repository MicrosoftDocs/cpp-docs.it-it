---
title: Classe CComObject | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComObject
- ATLCOM/ATL::CComObject
- ATLCOM/ATL::CComObject::CComObject
- ATLCOM/ATL::CComObject::AddRef
- ATLCOM/ATL::CComObject::CreateInstance
- ATLCOM/ATL::CComObject::QueryInterface
- ATLCOM/ATL::CComObject::Release
dev_langs:
- C++
helpviewer_keywords:
- CComObject class
ms.assetid: e2b6433b-6349-4749-b4bc-acbd7a22c8b0
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
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 1fbf6a09b4085df4ac6918d261e2b9d625c98c08
ms.lasthandoff: 03/31/2017

---
# <a name="ccomobject-class"></a>CComObject (classe)
Questa classe implementa **IUnknown** per un oggetto non aggregato.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>  
class CComObject : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObject::CComObject](#ccomobject)|Costruttore.|  
|[CComObject:: ~ CComObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto.|  
|[CComObject::CreateInstance](#createinstance)|(Statico) Crea un nuovo `CComObject` oggetto.|  
|[CComObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComObject::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto non aggregato. Tuttavia, le chiamate a `QueryInterface`, `AddRef`, e **versione** sono delegate a `CComObjectRootEx`.  
  
 Per ulteriori informazioni sull'utilizzo `CComObject`, vedere l'articolo [nozioni fondamentali su oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComObject::AddRef  
 Incrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questa funzione restituisce il nuovo conteggio dei riferimenti incrementato sull'oggetto. Questo valore può essere utile per la diagnostica o di test.  
  
##  <a name="ccomobject"></a>CComObject::CComObject  
 Il costruttore incrementa il conteggio dei blocchi del modulo.  
  
```
CComObject(void* = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 **void\***  
 [in] Questo parametro senza nome non viene usato. È presente per simmetria con altri **CCom***XXX*`Object`*XXX* costruttori.  
  
### <a name="remarks"></a>Note  
 Decrementa il distruttore è.  
  
 Se un `CComObject`-oggetto derivato correttamente viene costruita utilizzando il **nuova** (operatore), il conteggio dei riferimenti iniziale è 0. Per impostare il conteggio dei riferimenti sul valore appropriato (1), effettuare una chiamata al [AddRef](#addref) (funzione).  
  
##  <a name="dtor"></a>CComObject:: ~ CComObject  
 Distruttore.  
  
```
CComObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, chiamate [FinalRelease](ccomobjectrootex-class.md#finalrelease), e decrementa il modulo conteggio dei blocchi.  

  
##  <a name="createinstance"></a>CComObject::CreateInstance  
 Questa funzione statica consente di creare un nuovo **CComObject** `Base` **>** oggetto, senza l'overhead di [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 [out] Un puntatore a un **CComObject** `Base` **>** puntatore. Se `CreateInstance` ha esito negativo, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito ha un conteggio di riferimenti pari a zero, pertanto chiamare `AddRef` immediatamente, quindi utilizzare **versione** per liberare il riferimento sul puntatore a oggetto una volta terminato.  
  
 Se si non è necessario l'accesso diretto all'oggetto, ma ancora si desidera creare un nuovo oggetto senza l'overhead di `CoCreateInstance`, utilizzare [CComCoClass](../../atl/reference/ccomcoclass-class.md#createinstance) invece.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM #38](../../atl/codesnippet/cpp/ccomobject-class_1.h)]  
  
 [!code-cpp[NVC_ATL_COM #39](../../atl/codesnippet/cpp/ccomobject-class_2.cpp)]  
  
##  <a name="queryinterface"></a>CComObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
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
  
##  <a name="release"></a>CComObject::Release  
 Decrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questa funzione restituisce il nuovo conteggio dei riferimenti decrementato sull'oggetto. Nelle build di debug, il valore restituito può essere utile per la diagnostica o di testing. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_aggregatable)   
 [DECLARE_NOT_AGGREGATABLE](aggregation-and-class-factory-macros.md#declare_not_aggregatable)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

