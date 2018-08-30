---
title: Classe CComCachedTearOffObject | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 62ed04d8e54e4bf107ae12b9a4165b663c9d10d8
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203871"
---
# <a name="ccomcachedtearoffobject-class"></a>Classe CComCachedTearOffObject
Questa classe implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off.  
  
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
 La classe a comparsa, derivata da `CComTearOffObjectBase` e le interfacce si desidera che l'oggetto tear-off per il supporto.  
  
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
|[CComCachedTearOffObject::FinalConstruct](#finalconstruct)|Le chiamate di `m_contained::FinalConstruct` (il tear-off metodo della classe).|  
|[CComCachedTearOffObject::FinalRelease](#finalrelease)|Le chiamate di `m_contained::FinalRelease` (il tear-off metodo della classe).|  
|[CComCachedTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore ai `IUnknown` del `CComCachedTearOffObject` oggetto, o all'interfaccia richiesta nella classe tear-off (la classe `contained`).|  
|[CComCachedTearOffObject::Release](#release)|Decrementa il conteggio dei riferimenti per un `CComCachedTearOffObject` dell'oggetto viene distrutto, se il conteggio dei riferimenti è 0.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComCachedTearOffObject::m_contained](#m_contained)|Oggetto `CComContainedObject` oggetto derivato dalla classe tear-off (la classe `contained`).|  
  
## <a name="remarks"></a>Note  
 `CComCachedTearOffObject` implementa [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) per un'interfaccia tear-off. Questa classe è diverso da `CComTearOffObject` in quanto `CComCachedTearOffObject` ha il proprio `IUnknown`, separato dell'oggetto proprietario `IUnknown` (il proprietario è l'oggetto per cui viene creata il tear-off). `CComCachedTearOffObject` mantiene la propria il conteggio dei riferimenti nel relativo `IUnknown` e si elimina automaticamente dopo che il conteggio dei riferimenti è zero. Tuttavia, se esegue una query per uno qualsiasi dei relativi a comparsa interfacce, il conteggio dei riferimenti dell'oggetto proprietario `IUnknown` verrà incrementato.  
  
 Se il `CComCachedTearOffObject` dell'oggetto che implementa il tear-off è già creata un'istanza e l'interfaccia tear-off viene eseguita una query per anche in questo caso, lo stesso `CComCachedTearOffObject` oggetto viene riutilizzato. Al contrario, se un'interfaccia tear-off implementato da una `CComTearOffObject` nuovamente richieste le tramite l'oggetto proprietario, un altro `CComTearOffObject` verrà avviata l'istanza.  
  
 La classe proprietario deve implementare `FinalRelease` e chiamare `Release` su memorizzato nella cache `IUnknown` per il `CComCachedTearOffObject`, che verrà ridotto il conteggio dei riferimenti. Ciò causerà `CComCachedTearOffObject`del `FinalRelease` per essere chiamato ed eliminare il tear-off.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 `IUnknown`  
  
 `CComCachedTearOffObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>  CComCachedTearOffObject::AddRef  
 Incrementa il conteggio dei riferimenti di `CComCachedTearOffObject` oggetto in base 1.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di test.  
  
##  <a name="ccomcachedtearoffobject"></a>  CComCachedTearOffObject::CComCachedTearOffObject  
 Costruttore.  
  
```
CComCachedTearOffObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 *PV*  
 [in] Puntatore per il `IUnknown` del `CComCachedTearOffObject`.  
  
### <a name="remarks"></a>Note  
 Inizializza la `CComContainedObject` membro [m_contained](#m_contained).  
  
##  <a name="dtor"></a>  CComCachedTearOffObject:: ~ CComCachedTearOffObject  
 Distruttore.  
  
```
~CComCachedTearOffObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](#finalrelease).  
  
##  <a name="finalconstruct"></a>  CComCachedTearOffObject::FinalConstruct  
 Le chiamate `m_contained::FinalConstruct` per creare `m_contained`, il `CComContainedObject` <  `contained`> oggetto usato per accedere all'interfaccia implementata dalla classe tear-off.  
  
```
HRESULT FinalConstruct();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="finalrelease"></a>  CComCachedTearOffObject::FinalRelease  
 Le chiamate `m_contained::FinalRelease` liberare `m_contained`, il `CComContainedObject` <  `contained`> oggetti.  
  
```
void FinalRelease();
```  
  
##  <a name="m_contained"></a>  CComCachedTearOffObject::m_contained  
 Oggetto [CComContainedObject](../../atl/reference/ccomcontainedobject-class.md) oggetto derivato dalla classe tear-off.  
  
```
CcomContainedObject <contained> m_contained;
```     
  
### <a name="parameters"></a>Parametri  
 *contenuti*  
 [in] La classe a comparsa, derivata da `CComTearOffObjectBase` e le interfacce si desidera che l'oggetto tear-off per il supporto.  
  
### <a name="remarks"></a>Note  
 I metodi `m_contained` eredita vengono utilizzati per accedere all'interfaccia tear-off nella classe tear-off tramite l'oggetto memorizzato nella cache a comparsa `QueryInterface`, `FinalConstruct`, e `FinalRelease`.  
  
##  <a name="queryinterface"></a>  CComCachedTearOffObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *IID*  
 [in] Il GUID dell'interfaccia richiesto.  
  
 *ppvObject*  
 [out] Un puntatore al puntatore a interfaccia identificato dal *iid*, oppure NULL se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se l'interfaccia richiesta è `IUnknown`, restituisce un puntatore per il `CComCachedTearOffObject`del proprio `IUnknown` e incrementa il conteggio dei riferimenti. In caso contrario, esegue una query per l'interfaccia di classe tear-off utilizzando il [InternalQueryInterface](ccomobjectrootex-class.md#internalqueryinterface) metodo ereditato dal `CComObjectRootEx`.  

  
##  <a name="release"></a>  CComCachedTearOffObject::Release  
 Decrementa il conteggio dei riferimenti di 1 e, se il conteggio dei riferimenti è 0, vengono eliminate le `CComCachedTearOffObject` oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle compilazioni non di debug, restituisce sempre 0. Nelle build di debug, restituisce un valore che può essere utile per la diagnostica o di testing.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComTearOffObject](../../atl/reference/ccomtearoffobject-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
