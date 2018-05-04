---
title: Classe CComQIPtr | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr
- ATLCOMCLI/ATL::CComQIPtr::CComQIPtr
dev_langs:
- C++
helpviewer_keywords:
- CComQIPtr class
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 66c6cc1484ef84ce53ffaf5529575eea43431869
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomqiptr-class"></a>Classe CComQIPtr
Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, const IID* piid= &__uuidof(T)>  
class CComQIPtr: public CComPtr<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
 `piid`  
 Un puntatore per l'IID del `T`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComQIPtr::CComQIPtr](#ccomqiptr)|Costruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComQIPtr::operator =](#operator_eq)|Assegna un puntatore al puntatore a membro.|  
  
## <a name="remarks"></a>Note  
 Utilizza ATL `CComQIPtr` e [CComPtr](../../atl/reference/ccomptr-class.md) per gestire i puntatori a interfaccia COM, che derivano da [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Conteggio automatico tramite chiamate a eseguire entrambe le classi `AddRef` e **versione**. Gli operatori di overload gestiscono operazioni dei puntatori.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 [Istanze CComPtr](../../atl/reference/ccomptr-class.md)  
  
 `CComQIPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  
  
##  <a name="ccomqiptr"></a>  CComQIPtr::CComQIPtr  
 Costruttore.  
  
```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(IUnknown* lp) throw();
CComQIPtr(const CComQIPtr<T, piid>& lp) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lp`  
 Utilizzato per inizializzare il puntatore di interfaccia.  
  
 `T`  
 Un'interfaccia COM.  
  
 `piid`  
 Un puntatore per l'IID del `T`.  
  
##  <a name="operator_eq"></a>  CComQIPtr::operator =  
 L'operatore di assegnazione.  
  
```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lp`  
 Utilizzato per inizializzare il puntatore di interfaccia.  
  
 `T`  
 Un'interfaccia COM.  
  
 `piid`  
 Un puntatore per l'IID del `T`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a aggiornato `CComQIPtr` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)   
 [CComQIPtr::CComQIPtr](#ccomqiptr)   
 [Classe CComPtrBase](../../atl/reference/ccomptrbase-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)
