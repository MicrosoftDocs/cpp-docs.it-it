---
title: Classe CComObjectGlobal | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComObjectGlobal
- ATLCOM/ATL::CComObjectGlobal
- ATLCOM/ATL::CComObjectGlobal::CComObjectGlobal
- ATLCOM/ATL::CComObjectGlobal::AddRef
- ATLCOM/ATL::CComObjectGlobal::QueryInterface
- ATLCOM/ATL::CComObjectGlobal::Release
- ATLCOM/ATL::CComObjectGlobal::m_hResFinalConstruct
dev_langs:
- C++
helpviewer_keywords:
- CComObjectGlobal class
ms.assetid: 79bdee55-66e4-4536-b5b3-bdf09f78b9a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3614962d3bebada0c63b7fe804b52efaa965c6a9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32362443"
---
# <a name="ccomobjectglobal-class"></a>Classe CComObjectGlobal
Questa classe gestisce un conteggio dei riferimenti in cui il modulo contenente il `Base` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>
class CComObjectGlobal : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche a causa di una qualsiasi altra interfaccia che si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectGlobal::CComObjectGlobal](#ccomobjectglobal)|Costruttore.|  
|[CComObjectGlobal:: ~ CComObjectGlobal](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectGlobal::AddRef](#addref)|Implementa un globale `AddRef`.|  
|[CComObjectGlobal::QueryInterface](#queryinterface)|Implementa un globale `QueryInterface`.|  
|[CComObjectGlobal::Release](#release)|Implementa un globale **versione**.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectGlobal::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il **HRESULT** restituito durante la costruzione del `CComObjectGlobal` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObjectGlobal` gestisce un conteggio dei riferimenti sul modulo che contiene il `Base` oggetto. `CComObjectGlobal` assicura che l'oggetto non verrà eliminato, purché il modulo non viene rilasciato. L'oggetto verrà rimosso solo quando l'intero modulo il conteggio dei riferimenti va a zero.  
  
 Ad esempio, usando `CComObjectGlobal`, una class factory può contenere un oggetto globale comune condiviso da tutti i client.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectGlobal`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>  CComObjectGlobal::AddRef  
 Incrementa il conteggio dei riferimenti dell'oggetto di 1.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e di testing.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, `AddRef` chiamate **_Module::Lock**, dove **Module** è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.  
  
##  <a name="ccomobjectglobal"></a>  CComObjectGlobal::CComObjectGlobal  
 Costruttore. Chiamate `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) per il `HRESULT` restituito da `FinalConstruct`.  
  
```
CComObjectGlobal(void* = NULL));
```  
  
### <a name="remarks"></a>Note  
 Se non è stata derivata la classe base dalla [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire `FinalConstruct` metodo. Il distruttore chiama `FinalRelease`.  
  
##  <a name="dtor"></a>  CComObjectGlobal:: ~ CComObjectGlobal  
 Distruttore.  
  
```
CComObjectGlobal();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).  
  
##  <a name="m_hresfinalconstruct"></a>  CComObjectGlobal::m_hResFinalConstruct  
 Contiene il `HRESULT` dalla chiamata `FinalConstruct` durante la costruzione del `CComObjectGlobal` oggetto.  
  
```
HRESULT m_hResFinalConstruct;
```  
  
##  <a name="queryinterface"></a>  CComObjectGlobal::QueryInterface  
 Recupera un puntatore al puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] Il GUID dell'interfaccia richiesto.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal iid, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 `QueryInterface` gestisce solo le interfacce nella tabella di mappe COM.  
  
##  <a name="release"></a>  CComObjectGlobal::Release  
 Decrementa il conteggio dei riferimenti dell'oggetto di 1.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug **versione** restituisce un valore che può essere utile per la diagnostica e di testing. Nelle build di debug non **versione** restituisce sempre 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, **versione** chiamate **_Module::Unlock**, dove **Module** è l'istanza globale di [CComModule](../../atl/reference/ccommodule-class.md) o una classe derivata da esso.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComObjectStack](../../atl/reference/ccomobjectstack-class.md)   
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
