---
title: Classe CComObjectNoLock | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComObjectNoLock
- ATL::CComObjectNoLock
- ATL.CComObjectNoLock<Base>
- CComObjectNoLock
- ATL::CComObjectNoLock<Base>
dev_langs:
- C++
helpviewer_keywords:
- CComObjectNoLock class
ms.assetid: 288c6506-7da8-4127-8d58-7f4bd779539a
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 4cf4cad1a3b1a4ac0a21ef76a0eaca35732abf3a
ms.lasthandoff: 02/24/2017

---
# <a name="ccomobjectnolock-class"></a>Classe CComObjectNoLock
Questa classe implementa **IUnknown** per un oggetto non aggregato, ma non non incremento il modulo conteggio dei blocchi nel costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>  
class CComObjectNoLock : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da qualsiasi altra interfaccia si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectNoLock::CComObjectNoLock](#ccomobjectnolock)|Costruttore.|  
|[CComObjectNoLock:: ~ CComObjectNoLock](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectNoLock::AddRef](#addref)|Incrementa il conteggio dei riferimenti dell'oggetto.|  
|[CComObjectNoLock::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta.|  
|[CComObjectNoLock::Release](#release)|Decrementa il conteggio dei riferimenti dell'oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObjectNoLock`è simile a [CComObject](../../atl/reference/ccomobject-class.md) in quanto implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto non aggregato; tuttavia, `CComObjectNoLock` esegue il conteggio non incremento del blocco del modulo nel costruttore.  
  
 ATL utilizza `CComObjectNoLock` internamente per la class factory. In generale, non utilizzare questa classe direttamente.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectNoLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-nameaddrefa--ccomobjectnolockaddref"></a><a name="addref"></a>CComObjectNoLock::AddRef  
 Incrementa il conteggio dei riferimenti dell'oggetto.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o test.  
  
##  <a name="a-nameccomobjectnolocka--ccomobjectnolockccomobjectnolock"></a><a name="ccomobjectnolock"></a>CComObjectNoLock::CComObjectNoLock  
 Costruttore. A differenza di [CComObject](../../atl/reference/ccomobject-class.md), non incrementa il conteggio dei blocchi di modulo.  
  
```
CComObjectNoLock(void* = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 **void\***  
 [in] Questo parametro senza nome non viene utilizzato. Esiste per simmetria con altri **CCom***XXX*`Object`*XXX* costruttori.  
  
##  <a name="a-namedtora--ccomobjectnolockccomobjectnolock"></a><a name="dtor"></a>CComObjectNoLock:: ~ CComObjectNoLock  
 Distruttore.  
  
```
~CComObjectNoLock();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).  

  
##  <a name="a-namequeryinterfacea--ccomobjectnolockqueryinterface"></a><a name="queryinterface"></a>CComObjectNoLock::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] L'identificatore di interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato da `iid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namereleasea--ccomobjectnolockrelease"></a><a name="release"></a>CComObjectNoLock::Release  
 Decrementa il conteggio dei riferimenti dell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o test. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

