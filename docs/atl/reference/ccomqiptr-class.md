---
title: Classe CComQIPtr | Microsoft Docs
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
ms.openlocfilehash: e480fe81f8a6181aa8543710d050f0f20f288681
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884831"
---
# <a name="ccomqiptr-class"></a>Classe CComQIPtr
Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, const IID* piid= &__uuidof(T)>  
class CComQIPtr: public CComPtr<T>
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
 *piid*  
 Un puntatore all'IID del *T*.  
  
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
 Usa ATL `CComQIPtr` e [CComPtr](../../atl/reference/ccomptr-class.md) per gestire i puntatori a interfaccia COM, che derivano dalla [CComPtrBase](../../atl/reference/ccomptrbase-class.md). Entrambe le classi di eseguono il conteggio dei tramite chiamate a riferimenti automatici `AddRef` e `Release`. Gli operatori di overload gestiscono operazioni dei puntatori.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 [CComPtr](../../atl/reference/ccomptr-class.md)  
  
 `CComQIPtr`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcomcli  
  
##  <a name="ccomqiptr"></a>  CComQIPtr::CComQIPtr  
 Costruttore.  
  
```
CComQIPtr() throw();
CComQIPtr(T* lp) throw();
CComQIPtr(IUnknown* lp) throw();
CComQIPtr(const CComQIPtr<T, piid>& lp) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *LP*  
 Utilizzato per inizializzare il puntatore di interfaccia.  
  
 *T*  
 Un'interfaccia COM.  
  
 *piid*  
 Un puntatore all'IID del *T*.  
  
##  <a name="operator_eq"></a>  CComQIPtr::operator =  
 L'operatore di assegnazione.  
  
```
T* operator= (T* lp) throw();
T* operator= (const CComQIPtr<T, piid>& lp) throw();
T* operator= (IUnknown* lp) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *LP*  
 Utilizzato per inizializzare il puntatore di interfaccia.  
  
 *T*  
 Un'interfaccia COM.  
  
 *piid*  
 Un puntatore all'IID del *T*.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore a aggiornato `CComQIPtr` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [CComPtr::CComPtr](../../atl/reference/ccomptr-class.md#ccomptr)   
 [CComQIPtr::CComQIPtr](#ccomqiptr)   
 [Classe CComPtrBase](../../atl/reference/ccomptrbase-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe CComQIPtrElementTraits](../../atl/reference/ccomqiptrelementtraits-class.md)
