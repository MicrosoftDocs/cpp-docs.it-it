---
title: Classe CComTearOffObject | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComTearOffObject
- ATLCOM/ATL::CComTearOffObject
- ATLCOM/ATL::CComTearOffObject::CComTearOffObject
- ATLCOM/ATL::CComTearOffObject::AddRef
- ATLCOM/ATL::CComTearOffObject::QueryInterface
- ATLCOM/ATL::CComTearOffObject::Release
- ATLCOM/ATL::CComTearOffObjectBase
- ATLCOM/ATL::m_pOwner
dev_langs:
- C++
helpviewer_keywords:
- tear-off interfaces, ATL
- tear-off interfaces
- CComTearOffObject class
ms.assetid: d974b598-c6b2-42b1-8360-9190d9d0fbf3
caps.latest.revision: 20
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
ms.openlocfilehash: 3e8e997f26df1adca8050bd4d967a38297685831
ms.lasthandoff: 02/24/2017

---
# <a name="ccomtearoffobject-class"></a>Classe CComTearOffObject
Questa classe implementa un'interfaccia tear-off.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class Base>
class CComTearOffObject : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe tear-off, derivata da `CComTearOffObjectBase` e le interfacce si desidera che l'oggetto a comparsa per il supporto.  
  
 ATL implementa le interfacce tear-off in due fasi, ovvero il `CComTearOffObjectBase` metodi gestiscono il conteggio dei riferimenti e `QueryInterface`, mentre `CComTearOffObject` implementa [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComTearOffObject::CComTearOffObject](#ccomtearoffobject)|Costruttore.|  
|[CComTearOffObject:: ~ CComTearOffObject](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComTearOffObject::AddRef](#addref)|Incrementa il conteggio dei riferimenti per un `CComTearOffObject` oggetto.|  
|[CComTearOffObject::QueryInterface](#queryinterface)|Restituisce un puntatore all'interfaccia richiesta nella classe tear-off o classe del proprietario.|  
|[CComTearOffObject::Release](#release)|Decrementa il conteggio dei riferimenti per un `CComTearOffObject` dell'oggetto ed elimina il.|  
  
### <a name="ccomtearoffobjectbase-methods"></a>Metodi CComTearOffObjectBase  
  
|||  
|-|-|  
|[CComTearOffObjectBase](#ccomtearoffobjectbase)|Costruttore.|  
  
### <a name="ccomtearoffobjectbase-data-members"></a>Membri dati CComTearOffObjectBase  
  
|||  
|-|-|  
|[m_pOwner](#m_powner)|Un puntatore a un `CComObject` derivato dalla classe proprietario.|  
  
## <a name="remarks"></a>Note  
 `CComTearOffObject`implementa un'interfaccia tear-off come oggetto separato che viene creata un'istanza solo quando viene richiesto tale interfaccia. La comparsa viene eliminato quando il conteggio dei riferimenti diventa zero. In genere, si compila un'interfaccia tear-off per un'interfaccia che viene utilizzata raramente, poiché utilizzo un tear-off Salva un puntatore vtable in tutte le istanze dell'oggetto principale.  
  
 È necessario derivare la classe che implementa la comparsa di `CComTearOffObjectBase` e da qualunque interfacce si desidera che l'oggetto a comparsa per supportare. `CComTearOffObjectBase`viene creato nella classe del proprietario e il modello di thread. La classe proprietario è la classe dell'oggetto per cui viene implementata una tear-off. Se non si specifica un modello di thread, viene utilizzato il modello di thread predefinito.  
  
 È necessario creare una mappa COM per la classe tear-off. Quando si crea un'istanza ATL tear-off, verrà creato **CComTearOffObject\<CYourTearOffClass >** o **CComCachedTearOffObject\<CYourTearOffClass >**.  
  
 Ad esempio, nell'esempio CERCAPERSONE, la `CBeeper2` è la classe tear-off e `CBeeper` è la classe proprietario:  
  
 [!code-cpp[NVC_ATL_COM&#43;](../../atl/codesnippet/cpp/ccomtearoffobject-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComTearOffObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComTearOffObject::AddRef  
 Incrementa il conteggio dei riferimenti di `CComTearOffObject` oggetto da uno.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore che può essere utile per la diagnostica e test.  
  
##  <a name="ccomtearoffobject"></a>CComTearOffObject::CComTearOffObject  
 Costruttore.  
  
```
CComTearOffObject(void* pv);
```  
  
### <a name="parameters"></a>Parametri  
 `pv`  
 [in] Puntatore che verrà convertita in un puntatore a un **CComObject\<proprietario >** oggetto.  
  
### <a name="remarks"></a>Note  
 Incrementa il conteggio di riferimento del proprietario.  
  
##  <a name="dtor"></a>CComTearOffObject:: ~ CComTearOffObject  
 Distruttore.  
  
```
~CComTearOffObject();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate, chiama FinalRelease e decrementa il modulo di conteggio di blocco.  
  
##  <a name="ccomtearoffobjectbase"></a>CComTearOffObject::CComTearOffObjectBase  
 Costruttore.  
  
```
CComTearOffObjectBase();
```  
  
### <a name="remarks"></a>Note  
 Inizializza il [m_pOwner](#m_powner) membro **NULL**.  
  
##  <a name="m_powner"></a>CComTearOffObject::m_pOwner  
 Un puntatore a un [CComObject](../../atl/reference/ccomobject-class.md) oggetto derivato da *proprietario*.  
  
```
CComObject<Owner>* m_pOwner;
```  
  
### <a name="parameters"></a>Parametri  
 *Proprietario*  
 [in] Classe per cui viene implementata una tear-off.  
  
### <a name="remarks"></a>Note  
 Il puntatore viene inizializzato su **NULL** durante la costruzione.  
  
##  <a name="queryinterface"></a>CComTearOffObject::QueryInterface  
 Recupera un puntatore all'interfaccia richiesta.  
  
```
STDMETHOD(QueryInterface)(REFIID iid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `iid`  
 [in] L'IID di interfaccia richiesta.  
  
 `ppvObject`  
 [out] Un puntatore al puntatore a interfaccia identificato dal `iid`, o **NULL** se l'interfaccia non viene trovato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Innanzitutto una query per le interfacce nella classe tear-off. Se l'interfaccia non è disponibile, le query per l'interfaccia sull'oggetto proprietario. Se l'interfaccia richiesta **IUnknown**, restituisce il **IUnknown** del proprietario.  
  
##  <a name="release"></a>CComTearOffObject::Release  
 Decrementa il conteggio dei riferimenti di uno e, se il conteggio dei riferimenti è zero, Elimina il `CComTearOffObject`.  
  
```
STDMETHOD_ULONG Release();
```  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug non restituisce sempre zero. Restituisce un valore che può essere utile per la diagnostica o test nelle build di debug.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComCachedTearOffObject](../../atl/reference/ccomcachedtearoffobject-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

