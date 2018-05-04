---
title: Classe CComObjectNoLock | Documenti Microsoft
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
ms.openlocfilehash: cd7f9fa0ac67592c5fca805eaa4bb4ec4b0ca153
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomobjectnolock-class"></a>Classe CComObjectNoLock
Questa classe implementa **IUnknown** per un oggetto non aggregato, ma vengono non incremento il modulo conteggio dei blocchi nel costruttore.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>  
class CComObjectNoLock : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche a causa di una qualsiasi altra interfaccia che si desidera supportare nell'oggetto.  
  
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
 `CComObjectNoLock` è simile a [CComObject](../../atl/reference/ccomobject-class.md) in quanto implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) per un oggetto non aggregato; tuttavia, `CComObjectNoLock` non incremento il blocco di modulo si tiene conto nel costruttore.  
  
 Utilizza ATL `CComObjectNoLock` internamente per class factory. In generale, non utilizzare questa classe direttamente.  
  
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
 Costruttore. A differenza di [CComObject](../../atl/reference/ccomobject-class.md), non incrementa il conteggio dei blocchi del modulo.  
  
```
CComObjectNoLock(void* = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 **void\***  
 [in] Questo parametro senza nome non viene usato. Stato attuale per simmetria con altri **CCom * * * XXX*`Object`*XXX* costruttori.  
  
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
 `iid`  
 [in] Identificatore dell'interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`. Se l'oggetto non supporta questa interfaccia, `ppvObject` è impostato su **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="release"></a>  CComObjectNoLock::Release  
 Decrementa il conteggio dei riferimenti nell'oggetto.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica o di testing. Nelle build di debug non **versione** restituisce sempre 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
