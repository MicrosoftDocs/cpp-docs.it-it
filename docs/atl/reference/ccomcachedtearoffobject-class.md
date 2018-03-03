---
title: Classe CComCachedTearOffObject | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComCachedTearOffObject
- ATLCOM/ATL::CComCachedTearOffObject
- ATLCOM/ATL::CComCachedTearOffObject::CComCachedTearOffObject
- ATLCOM/ATL::CComCachedTearOffObject::AddRef
- ATLCOM/ATL::CComCachedTearOffObject::FinalConstruct
- ATLCOM/ATL::CComCachedTearOffObject::FinalRelease
- ATLCOM/ATL::CComCachedTearOffObject::QueryInterface
- ATLCOM/ATL::CComCachedTearOffObject::Release
- ATLCOM/ATL::CComCachedTearOffObject::m_contained
dev_langs:
- C++
helpviewer_keywords:
- cache, ATL cached tear-off objects
- CComCachedTearOffObject class
ms.assetid: ae19507d-a1de-4dbc-a988-da9f75a50c95
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 89240e913f46a3522062317da8089c3ae4bd81ed
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccomcachedtearoffobject-class"></a>Classe CComCachedTearOffObject
Questa classe implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un'interfaccia tear-off.  
  
## <a name="syntax"></a>Sintassi  
  
```
template
 <class contained>
class CComCachedTearOffObject : public
    IUnknown,
public CComObjectRootEx<contained
 ::_ThreadModel::ThreadModelNoCS>
```  
  
#### <a name="parameters"></a>Parametri  
 `contained`  
 La classe tear-off derivata `CComTearOffObjectBase` e le interfacce si intende l'oggetto tear-off per il supporto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::CComCachedTearOffObject](#ccomcachedtearoffobject)|Costruttore.|  
|[CComCachedTearOffObject:: ~ CComCachedTearOffObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` oggetto.|  
|[CComCachedTearOffObject::FinalConstruct](#finalconstruct)|Chiamate di `m_contained::FinalConstruct` (metodo di classe tear-off).|  
|[CComCachedTearOffObject::FinalRelease](#finalrelease)|Chiamate di `m_contained::FinalRelease` (metodo di classe tear-off).|  
|[CComCachedTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore al `IUnknown` del `CComCachedTearOffObject` oggetto, o all'interfaccia richiesta sulla classe tear-off (la classe `contained`).|  
|[CComCachedTearOffObject::Release](#release)|Decrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` oggetto ed elimina, se il conteggio dei riferimenti è 0.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::m_contained](#m_contained)|Oggetto `CComContainedObject` oggetto derivato dalla classe tear-off (la classe `contained`).|  
  
## <a name="remarks"></a>Note  
 `CComCachedTearOffObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un'interfaccia tear-off. Questa classe è diverso da `CComTearOffObject` in `CComCachedTearOffObject` dispone di una propria **IUnknown**separata dall'oggetto proprietario **IUnknown** (il proprietario è l'oggetto per cui viene creata il tear-off). `CComCachedTearOffObject`mantiene il proprio conteggio dei riferimenti nel relativo **IUnknown** e si elimina automaticamente una volta che il conteggio dei riferimenti è zero. Tuttavia, se si esegue una query per uno qualsiasi dei relativi tear-off interfacce, il conteggio dei riferimenti dell'oggetto proprietario **IUnknown** verrà incrementato.  
  
 Se il `CComCachedTearOffObject` dell'oggetto che implementa il tear-off è già creata un'istanza e l'interfaccia tear-off viene eseguita una query per nuovamente lo stesso `CComCachedTearOffObject` oggetto viene riutilizzato. Al contrario, se un'interfaccia tear-off implementato da un `CComTearOffObject` viene nuovamente richiesto tramite l'oggetto proprietario, un altro `CComTearOffObject` verrà creata un'istanza.  
  
 La classe proprietario deve implementare `FinalRelease` e chiamare **versione** su memorizzato nella cache **IUnknown** per il `CComCachedTearOffObject`, che verrà decrementare il conteggio dei riferimenti. In questo modo `CComCachedTearOffObject`del `FinalRelease` chiamato ed eliminare il tear-off.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComCachedTearOffObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComCachedTearOffObject::AddRef  
 Incrementa il conteggio dei riferimenti di `CComCachedTearOffObject` oggetto di 1.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di testing.  
  
##  <a name="ccomcachedtearoffobject"></a>CComCachedTearOffObject::CComCachedTearOffObject  
 Costruttore.  
  
```
CComCachedTearOffObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Puntatore al **IUnknown** del `CComCachedTearOffObject`.  
  
### <a name="remarks"></a>Note  
 Inizializza il `CComContainedObject` membro, [m_contained](#m_contained).  
  
##  <a name="dtor"></a>CComCachedTearOffObject:: ~ CComCachedTearOffObject  
 Distruttore.  
  
```
~CComCachedTearOffObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](#finalrelease).  
  
##  <a name="finalconstruct"></a>CComCachedTearOffObject::FinalConstruct  
 Chiamate **m_contained::FinalConstruct** creare `m_contained`, `CComContainedObject` <  `contained`> oggetto utilizzato per accedere all'interfaccia implementata dalla classe tear-off.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="finalrelease"></a>CComCachedTearOffObject::FinalRelease  
 Chiamate **m_contained::FinalRelease** per liberare `m_contained`, `CComContainedObject` <  `contained`> oggetto.  
  
```
void FinalRelease();
```  
  
##  <a name="m_contained"></a>CComCachedTearOffObject::m_contained  
 Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe tear-off.  
  
```
CcomContainedObject <contained> m_contained;
```     
  
### <a name="parameters"></a>Parametri  
 `contained`  
 [in] La classe tear-off derivata `CComTearOffObjectBase` e le interfacce si intende l'oggetto tear-off per il supporto.  
  
### <a name="remarks"></a>Note  
 I metodi `m_contained` eredita vengono utilizzati per accedere all'interfaccia tear-off nella classe tear-off tramite l'oggetto memorizzato nella cache a comparsa `QueryInterface`, `FinalConstruct`, e `FinalRelease`.  
  
##  <a name="queryinterface"></a>CComCachedTearOffObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Se l'interfaccia richiesta **IUnknown**, restituisce un puntatore al `CComCachedTearOffObject`del proprio **IUnknown** e incrementa il conteggio dei riferimenti. In caso contrario, esegue una query per l'interfaccia di classe tear-off utilizzando il [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) metodo ereditato da `CComObjectRootEx`.  

  
##  <a name="release"></a>CComCachedTearOffObject::Release  
 Decrementa il conteggio dei riferimenti di 1 e, se il conteggio dei riferimenti è 0, vengono eliminate le `CComCachedTearOffObject` oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle compilazioni non di debug, restituisce sempre 0. Nelle build di debug, restituisce un valore che può essere utile per la diagnostica o di testing.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
