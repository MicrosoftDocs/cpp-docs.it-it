---
title: Classe CComObjectStack | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1b7fa9d14a27277d4c26fc6e7589400e19ef1395
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 La classe, derivata da [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md) o [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md), come anche a causa di una qualsiasi altra interfaccia che si desidera supportare nell'oggetto.  
  
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
|[CComObjectStack::m_hResFinalConstruct](#m_hresfinalconstruct)|Contiene il **HRESULT** restituito durante la costruzione del `CComObjectStack` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CComObjectStack`viene utilizzato per creare un oggetto COM temporaneo e fornire l'oggetto un'implementazione di base di **IUnknown**. In genere, l'oggetto viene utilizzato come una variabile locale all'interno di una funzione (che viene inserita nello stack). Poiché l'oggetto viene eliminato quando la funzione termina, il conteggio dei riferimenti non viene eseguita per aumentare l'efficienza.  
  
 Nell'esempio seguente viene illustrato come creare un oggetto COM utilizzato all'interno di una funzione:  
  
 [!code-cpp[NVC_ATL_COM#42](../../atl/codesnippet/cpp/ccomobjectstack-class_1.cpp)]  
  
 L'oggetto temporaneo `Tempobj` viene inserito nello stack e viene rimosso automaticamente quando la funzione termina.  
  
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
 Chiamate `FinalConstruct` e quindi imposta [m_hResFinalConstruct](#m_hresfinalconstruct) per il `HRESULT` restituito da `FinalConstruct`. Se non è stata derivata la classe base dalla [CComObjectRoot](../../atl/reference/ccomobjectroot-class.md), è necessario fornire `FinalConstruct` metodo. Il distruttore chiama `FinalRelease`.  
  
##  <a name="dtor"></a>CComObjectStack:: ~ CComObjectStack  
 Distruttore.  
  
```
CComObjectStack();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate e chiama [FinalRelease](ccomobjectrootex-class.md#finalrelease).  
  
##  <a name="m_hresfinalconstruct"></a>CComObjectStack::m_hResFinalConstruct  
 Contiene il `HRESULT` restituito dalla chiamata `FinalConstruct` durante la costruzione del `CComObjectStack` oggetto.  
  
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
