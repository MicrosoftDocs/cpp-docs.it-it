---
title: Classe CComObjectStack | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComObjectStack
- ATLCOM/ATL::CComObjectStack
- ATLCOM/ATL::CComObjectStack::CComObjectStack
- ATLCOM/ATL::CComObjectStack::AddRef
- ATLCOM/ATL::CComObjectStack::QueryInterface
- ATLCOM/ATL::CComObjectStack::Release
- ATLCOM/ATL::CComObjectStack::m_hResFinalConstruct
dev_langs:
- C++
helpviewer_keywords:
- CComObjectStack class
ms.assetid: 3da72c40-c834-45f6-bb76-6ac204028d80
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 0738eae13fdca5906596194016ce22812fbfcd36
ms.lasthandoff: 02/24/2017

---
# <a name="ccomobjectstack-class"></a>Classe CComObjectStack
Questa classe crea un oggetto COM temporaneo e fornisce un'implementazione di base di **IUnknown**.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class  Base>  
class CComObjectStack
 : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 La classe derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche da qualsiasi altra interfaccia si desidera supportare nell'oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectStack::CComObjectStack](#ccomobjectstack)|Costruttore.|  
|[CComObjectStack:: ~ CComObjectStack](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectStack::AddRef](#addref)|Restituisce zero. In modalità debug, chiama `_ASSERTE`.|  
|[CComObjectStack::QueryInterface](#queryinterface)|Restituisce **E_NOINTERFACE**. In modalità debug, chiama `_ASSERTE`.|  
|[CComObjectStack::Release](#release)|Restituisce zero. In modalità debug, chiama `_ASSERTE`. ~|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComObjectStack::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il **HRESULT** restituito durante la costruzione di `CComObjectStack` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObjectStack`viene utilizzato per creare un oggetto COM temporaneo e fornire l'oggetto un'implementazione di base di **IUnknown**. In genere, l'oggetto viene utilizzato come una variabile locale all'interno di una funzione (che viene inserita nello stack). Poiché l'oggetto viene eliminato al termine della funzione, il conteggio dei riferimenti non viene eseguita per aumentare l'efficienza.  
  
 Nell'esempio seguente viene illustrato come creare un oggetto COM utilizzato in una funzione:  
  
 [!code-cpp[NVC_ATL_COM&#42;](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]  
  
 L'oggetto temporaneo `Tempobj` viene inserito nello stack e scompare automaticamente al termine della funzione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComObjectStack`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="addref"></a>CComObjectStack::AddRef  
 Restituisce zero.  
  
```
STDMETHOD_(ULONG, AddRef)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero.  
  
### <a name="remarks"></a>Note  
 In modalità debug, chiama `_ASSERTE`.  
  
##  <a name="ccomobjectstack"></a>CComObjectStack::CComObjectStack  
 Costruttore.  
  
```
CComObjectStack(void* = NULL);
```  
  
### <a name="remarks"></a>Note  
 Chiamate `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) per il `HRESULT` restituito da `FinalConstruct`. Se non è stata derivata dalla classe base [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire `FinalConstruct` metodo. Il distruttore chiama `FinalRelease`.  
  
##  <a name="dtor"></a>CComObjectStack:: ~ CComObjectStack  
 Distruttore.  
  
```
CComObjectStack();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).  
  
##  <a name="m_hresfinalconstruct"></a>CComObjectStack::m_hResFinalConstruct  
 Contiene il `HRESULT` restituito dalla chiamata `FinalConstruct` durante la costruzione di `CComObjectStack` oggetto.  
  
```
HRESULT    m_hResFinalConstruct;
```  
  
##  <a name="queryinterface"></a>CComObjectStack::QueryInterface  
 Restituisce **E_NOINTERFACE**.  
  
```
HRESULT    QueryInterface(REFIID, void**)
 ;
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **E_NOINTERFACE**.  
  
### <a name="remarks"></a>Note  
 In modalità debug, chiama `_ASSERTE`.  
  
##  <a name="release"></a>CComObjectStack::Release  
 Restituisce zero.  
  
```
STDMETHOD_(ULONG, Release)();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce zero.  
  
### <a name="remarks"></a>Note  
 In modalità debug, chiama `_ASSERTE`.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [Classe CComObjectGlobal](../../atl/reference/ccomobjectglobal-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

