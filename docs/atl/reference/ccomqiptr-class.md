---
title: Classe CComQIPtr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComQIPtr
- ATL::CComQIPtr
- CComQIPtr
dev_langs:
- C++
helpviewer_keywords:
- CComQIPtr class
ms.assetid: 969cacb5-05b6-4af4-b683-24911d70242d
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: e2060a0be3f9780191c316c2df41115e66033d4d
ms.lasthandoff: 02/24/2017

---
# <a name="ccomqiptr-class"></a>Classe CComQIPtr
Una classe di puntatore intelligente per la gestione dei puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, const IID* piid= &__uuidof(T)>  
class CComQIPtr: public CComPtr<T>
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
 `piid`  
 Un puntatore a IID del `T`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComQIPtr::CComQIPtr](#ccomqiptr)|Costruttore.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComQIPtr::operator =](#operator_eq)|Assegna un puntatore al puntatore di membro.|  
  
## <a name="remarks"></a>Note  
 ATL utilizza `CComQIPtr` e [CComPtr](../../atl/reference/ccomptr-class.md) per gestire i puntatori a interfaccia COM, che derivano da [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Entrambe le classi eseguono conteggio automatico tramite chiamate a `AddRef` e **versione**. Gli operatori di overload gestiscono operazioni dei puntatori.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 [CComPtr](../../atl/reference/ccomptr-class.md)  
  
 `CComQIPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli. h  
  
##  <a name="a-nameccomqiptra--ccomqiptrccomqiptr"></a><a name="ccomqiptr"></a>CComQIPtr::CComQIPtr  
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
 Un puntatore a IID del `T`.  
  
##  <a name="a-nameoperatoreqa--ccomqiptroperator-"></a><a name="operator_eq"></a>CComQIPtr::operator =  
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
 Un puntatore a IID del `T`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a aggiornato `CComQIPtr` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)   
 [CComQIPtr::CComQIPtr](#ccomqiptr)   
 [Classe CComPtrBase](../../atl/reference/ccomptrbase-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)

