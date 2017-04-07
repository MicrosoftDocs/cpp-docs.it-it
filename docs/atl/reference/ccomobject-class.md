---
title: Classe CComObject | Documenti di Microsoft
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 5f752b96d4a722fbddfcc9e5be3a82b8b12a86a1
ms.lasthandoff: 02/24/2017

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
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da tutte le altre interfacce che si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObject::CComObject](#ccomobject)|Costruttore.|  
|[CComObject:: ~ CComObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto.|  
|[CComObject::CreateInstance](#createinstance)|(Statico) Crea un nuovo `CComObject` oggetto.|  
|[CComObject::QueryInterface](#queryinterface)|Recupera un puntatore all'interfaccia richiesta.|  
|[CComObject::Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto non aggregato. Tuttavia, le chiamate a `QueryInterface`, `AddRef`, e **versione** vengono delegate al `CComObjectRootEx`.  
  
 Per ulteriori informazioni sull'utilizzo di `CComObject`, vedere l'articolo [nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComObject::AddRef  
 Incrementa il conteggio dei riferimenti dell'oggetto.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questa funzione restituisce il nuovo conteggio dei riferimenti incrementato sull'oggetto. Questo valore può essere utile per la diagnostica o di test.  
  
##  <a name="ccomobject"></a>CComObject::CComObject  
 Il costruttore incrementa il conteggio dei blocchi di modulo.  
  
```
CComObject(void* = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 **void\***  
 [in] Questo parametro senza nome non viene utilizzato. Esiste per simmetria con altri **CCom***XXX*`Object`*XXX* costruttori.  
  
### <a name="remarks"></a>Note  
 Decrementa il distruttore è.  
  
 Se un `CComObject`-oggetto derivato viene costruita correttamente utilizzando il **nuova** operatore, il numero di riferimento iniziale è 0. Per impostare il conteggio dei riferimenti sul valore appropriato (1), effettuare una chiamata al [AddRef](#addref) (funzione).  
  
##  <a name="dtor"></a>CComObject:: ~ CComObject  
 Distruttore.  
  
```
CComObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, chiamate [FinalRelease](ccomobjectrootex-class.md#finalrelease), e decrementa il modulo conteggio dei blocchi.  

  
##  <a name="createinstance"></a>CComObject::CreateInstance  
 Questa funzione statica consente di creare un nuovo **CComObject** `Base` ** > ** oggetto, senza il sovraccarico [CoCreateInstance](http://msdn.microsoft.com/library/windows/desktop/ms686615).  
  
```
static HRESULT WINAPI CreateInstance(CComObject<Base>** pp);
```  
  
### <a name="parameters"></a>Parametri  
 `pp`  
 [out] Un puntatore a un **CComObject** `Base` ** > ** puntatore. Se `CreateInstance` ha esito negativo, `pp` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'oggetto restituito ha un conteggio dei riferimenti pari a zero, quindi chiamare `AddRef` immediatamente, quindi utilizzare **versione** per liberare il riferimento sul puntatore a oggetto al termine dell'operazione.  
  
 Se non è necessario accedere direttamente all'oggetto, ma continuare a creare un nuovo oggetto senza il sovraccarico di `CoCreateInstance`, utilizzare [CreateInstance](../../atl/reference/ccomcoclass-class.md#createinstance) invece.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_COM&#38;](../../atl/codesnippet/cpp/ccomobject-class_1.h)]  
  
 [!code-cpp[NVC_ATL_COM&#39;](../../atl/codesnippet/cpp/ccomobject-class_2.cpp)]  
  
##  <a name="queryinterface"></a>CComObject::QueryInterface  
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
  
##  <a name="release"></a>CComObject::Release  
 Decrementa il conteggio dei riferimenti dell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questa funzione restituisce il nuovo conteggio dei riferimenti decrementato sull'oggetto. Nelle build di debug, il valore restituito può essere utile per la diagnostica o di testing. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [DECLARE_AGGREGATABLE](http://msdn.microsoft.com/library/e7e568d7-04e0-4226-b5dc-224deed229ab)   
 [DECLARE_NOT_AGGREGATABLE](http://msdn.microsoft.com/library/2a116c7c-bab8-4f2a-a9ad-03d7aba0f762)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

