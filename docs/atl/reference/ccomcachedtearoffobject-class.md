---
title: Classe CComCachedTearOffObject | Documenti di Microsoft
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 96f040c732c5545a9b8febb32fcb1636f0fe4a40
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce si desidera che l'oggetto a comparsa per il supporto.  
  
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
|[CComCachedTearOffObject::FinalConstruct](#finalconstruct)|Chiamate di `m_contained::FinalConstruct` (comparsa del metodo della classe).|  
|[CComCachedTearOffObject::FinalRelease](#finalrelease)|Chiamate di `m_contained::FinalRelease` (comparsa del metodo della classe).|  
|[CComCachedTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore al `IUnknown` di `CComCachedTearOffObject` oggetto, o all'interfaccia richiesta sulla classe tear-off (la classe `contained`).|  
|[CComCachedTearOffObject::Release](#release)|Decrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` dell'oggetto viene distrutto, se il conteggio dei riferimenti è 0.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::m_contained](#m_contained)|Oggetto `CComContainedObject` oggetto derivato dalla classe tear-off (la classe `contained`).|  
  
## <a name="remarks"></a>Note  
 `CComCachedTearOffObject`implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un'interfaccia tear-off. Questa classe è diverso da `CComTearOffObject` in `CComCachedTearOffObject` dispone di propri **IUnknown**distinta dell'oggetto proprietario **IUnknown** (il proprietario è l'oggetto per cui viene creata il tear-off). `CComCachedTearOffObject`mantiene la relativa il conteggio dei riferimenti nel relativo **IUnknown** e si elimina automaticamente quando il conteggio dei riferimenti è zero. Tuttavia, se esegue una query per uno qualsiasi dei relativi tear-off interfacce, il conteggio dei riferimenti dell'oggetto proprietario **IUnknown** verrà incrementato.  
  
 Se il `CComCachedTearOffObject` oggetto che implementa la tear-off è già creata un'istanza e l'interfaccia tear-off viene eseguita una query per nuovamente lo stesso `CComCachedTearOffObject` oggetto viene riutilizzato. Al contrario, se un'interfaccia tear-off implementato da un `CComTearOffObject` viene nuovamente richiesto tramite l'oggetto proprietario, un altro `CComTearOffObject` verrà creata un'istanza.  
  
 La classe proprietario deve implementare `FinalRelease` e chiamare **versione** su memorizzato nella cache **IUnknown** per il `CComCachedTearOffObject`, che ridurrà il conteggio dei riferimenti. In questo modo `CComCachedTearOffObject`del `FinalRelease` chiamare ed eliminare tear-off.  
  
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
 Un valore che può essere utile per la diagnostica e test.  
  
##  <a name="ccomcachedtearoffobject"></a>CComCachedTearOffObject::CComCachedTearOffObject  
 Costruttore.  
  
```
CComCachedTearOffObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Puntatore al **IUnknown** di `CComCachedTearOffObject`.  
  
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
 [in] La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce si desidera che l'oggetto a comparsa per il supporto.  
  
### <a name="remarks"></a>Note  
 I metodi `m_contained` eredita vengono utilizzati per accedere all'interfaccia tear-off nella classe tear-off tramite l'oggetto memorizzato nella cache a comparsa `QueryInterface`, `FinalConstruct`, e `FinalRelease`.  
  
##  <a name="queryinterface"></a>CComCachedTearOffObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] GUID dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Se l'interfaccia richiesta **IUnknown**, restituisce un puntatore per il `CComCachedTearOffObject`del proprio **IUnknown** e incrementa il conteggio dei riferimenti. In caso contrario, esegue una query per l'interfaccia di classe tear-off utilizzando il [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) metodo ereditato da `CComObjectRootEx`.  

  
##  <a name="release"></a>CComCachedTearOffObject::Release  
 Decrementa il conteggio dei riferimenti di 1 e, se il conteggio dei riferimenti è 0, Elimina il `CComCachedTearOffObject` oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug non restituisce sempre 0. Restituisce un valore che può essere utile per la diagnostica o test nelle build di debug.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)   
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

