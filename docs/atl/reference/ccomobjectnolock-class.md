---
title: Classe CComObjectNoLock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComObjectNoLock
- ATLCOM/ATL::CComObjectNoLock
- ATLCOM/ATL::CComObjectNoLock::CComObjectNoLock
- ATLCOM/ATL::CComObjectNoLock::AddRef
- ATLCOM/ATL::CComObjectNoLock::QueryInterface
- ATLCOM/ATL::CComObjectNoLock::Release
dev_langs:
- C++
helpviewer_keywords:
- CComObjectNoLock class
ms.assetid: 288c6506-7da8-4127-8d58-7f4bd779539a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27dd0ad9bb64c8e708b228ec13a9fbf0e33fa589
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884116"
---
# <a name="ccomobjectnolock-class"></a>Classe CComObjectNoLock
Questa classe implementa `IUnknown` per un oggetto non aggregato, ma non non incremento il modulo conteggio dei blocchi nel costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>  
class CComObjectNoLock : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 *base*  
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) oppure [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da qualsiasi altra interfaccia si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectNoLock::CComObjectNoLock](#ccomobjectnolock)|Costruttore.|  
|[CComObjectNoLock:: ~ CComObjectNoLock](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectNoLock::AddRef](#addref)|Incrementa il conteggio dei riferimenti nell'oggetto.|  
|[CComObjectNoLock::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta.|  
|[CComObjectNoLock::Release](#release)|Decrementa il conteggio dei riferimenti nell'oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObjectNoLock` è simile a [CComObject](../../atl/reference/ccomobject-class.md) in quanto implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto non aggregato; tuttavia, `CComObjectNoLock` tiene conto non incremento del blocco di modulo nel costruttore.  
  
 Usa ATL `CComObjectNoLock` internamente per class factory. In generale, non utilizzare questa classe direttamente.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectNoLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>  CComObjectNoLock::AddRef  
 Incrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica o di testing.  
  
##  <a name="ccomobjectnolock"></a>  CComObjectNoLock::CComObjectNoLock  
 Costruttore. A differenza [CComObject](../../atl/reference/ccomobject-class.md), non incrementa il conteggio dei blocchi del modulo.  
  
```
CComObjectNoLock(void* = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 **void\***  
 [in] Questo parametro senza nome non viene utilizzato. Stato attuale per simmetria con altri **CCom * * * XXX*`Object`*XXX* costruttori.  
  
##  <a name="dtor"></a>  CComObjectNoLock::~CComObjectNoLock  
 Distruttore.  
  
```
~CComObjectNoLock();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).  

  
##  <a name="queryinterface"></a>  CComObjectNoLock::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *IID*  
 [in] L'identificatore dell'interfaccia richiesto.  
  
 *ppvObject*  
 [out] Un puntatore al puntatore a interfaccia identificato dal *iid*. Se l'oggetto non supporta questa interfaccia, *ppvObject* è impostato su NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="release"></a>  CComObjectNoLock::Release  
 Decrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug `Release` restituisce un valore che può essere utile per la diagnostica o di testing. Nelle compilazioni non di debug, `Release` restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
