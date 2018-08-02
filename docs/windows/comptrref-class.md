---
title: ComPtrRef (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef
dev_langs:
- C++
helpviewer_keywords:
- ComPtrRef class
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7f7f392df62892ea0e053e9d243f85772fa0605d
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39463079"
---
# <a name="comptrref-class"></a>ComPtrRef (classe)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename T  
>  
class ComPtrRef : public ComPtrRefBase<T>;  
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 Oggetto [ComPtr\<T >](../windows/comptr-class.md) tipo o un tipo derivato da essa, non soltanto l'interfaccia rappresentata dal `ComPtr`.  
  
## <a name="remarks"></a>Note  
 Rappresenta un riferimento a un oggetto di tipo `ComPtr<T>`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ComPtrRef::ComPtrRef](../windows/comptrref-comptrref-constructor.md)|Inizializza una nuova istanza di **ComPtrRef** classe dal puntatore specificato a un altro **ComPtrRef** oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ComPtrRef::GetAddressOf](../windows/comptrref-getaddressof-method.md)|Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef corrente.|  
|[Metodo ComPtrRef::ReleaseAndGetAddressOf](../windows/comptrref-releaseandgetaddressof-method.md)|Elimina l'oggetto corrente **ComPtrRef** dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dalle **ComPtrRef** oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ComPtrRef::operator InterfaceType**](../windows/comptrref-operator-interfacetype-star-star-operator.md)|Elimina l'oggetto corrente **ComPtrRef** dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dalle **ComPtrRef** oggetto.|  
|[Operatore ComPtrRef::operator T*](../windows/comptrref-operator-t-star-operator.md)|Restituisce il valore della [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dei dati dell'oggetto ComPtrRef corrente.|  
|[Operatore ComPtrRef::operator void**](../windows/comptrref-operator-void-star-star-operator.md)|Elimina l'oggetto corrente **ComPtrRef** dell'oggetto, viene eseguito il cast di puntatore all'interfaccia rappresentata dalle **ComPtrRef** oggetto come un puntatore a puntatore-a **void**e quindi Restituisce il puntatore di cast.|  
|[Operatore ComPtrRef::operator*](../windows/comptrref-operator-star-operator.md)|Recupera il puntatore all'interfaccia rappresentata dall'oggetto corrente **ComPtrRef** oggetto.|  
|[Operatore ComPtrRef::operator==](../windows/comptrref-operator-equality-operator.md)|Indica se due **ComPtrRef** oggetti sono uguali.|  
|[Operatore ComPtrRef::operator!=](../windows/comptrref-operator-inequality-operator.md)|Indica se due **ComPtrRef** oggetti non sono uguali.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ComPtrRefBase`  
  
 `ComPtrRef`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)