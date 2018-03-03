---
title: Comptrref (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef
dev_langs:
- C++
helpviewer_keywords:
- ComPtrRef class
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9b1bbe134f15fdba6863f1725cbcc7effcb6d94f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comptrref-class"></a>ComPtrRef (classe)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename T  
>  
class ComPtrRef : public ComPtrRefBase<T>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Oggetto [ComPtr\<T >](../windows/comptr-class.md) tipo o un tipo derivato da esso, non solamente l'interfaccia rappresentata dal ComPtr.  
  
## <a name="remarks"></a>Note  
 Rappresenta un riferimento a un oggetto di tipo ComPtr\<T >.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ComPtrRef::ComPtrRef](../windows/comptrref-comptrref-constructor.md)|Inizializza una nuova istanza della classe ComPtrRef dal puntatore specificato a un altro oggetto ComPtrRef.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ComPtrRef::GetAddressOf](../windows/comptrref-getaddressof-method.md)|Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef corrente.|  
|[Metodo ComPtrRef::ReleaseAndGetAddressOf](../windows/comptrref-releaseandgetaddressof-method.md)|Elimina l'oggetto ComPtrRef corrente e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ComPtrRef::operator InterfaceType**](../windows/comptrref-operator-interfacetype-star-star-operator.md)|Elimina l'oggetto ComPtrRef corrente e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef.|  
|[Operatore ComPtrRef::operator T*](../windows/comptrref-operator-t-star-operator.md)|Restituisce il valore della [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati dell'oggetto ComPtrRef corrente.|  
|[Operatore ComPtrRef::operator void**](../windows/comptrref-operator-void-star-star-operator.md)|Elimina l'oggetto ComPtrRef corrente, esegue il cast di puntatore a interfaccia che è stato rappresentato dall'oggetto ComPtrRef come un puntatore a puntatore-a `void`e quindi restituisce il puntatore di cast.|  
|[Operatore ComPtrRef::operator*](../windows/comptrref-operator-star-operator.md)|Recupera il puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef corrente.|  
|[Operatore ComPtrRef::operator==](../windows/comptrref-operator-equality-operator.md)|Indica se due oggetti ComPtrRef sono uguali.|  
|[Operatore ComPtrRef::operator!=](../windows/comptrref-operator-inequality-operator.md)|Indica se due oggetti ComPtrRef non sono uguali.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ComPtrRefBase`  
  
 `ComPtrRef`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)