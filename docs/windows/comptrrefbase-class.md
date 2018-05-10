---
title: Classe ComPtrRefBase | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRefBase
dev_langs:
- C++
helpviewer_keywords:
- ComPtrRefBase class
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 13744a1629ede5575dc992ea15b90e22961a8570
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptrrefbase-class"></a>ComPtrRefBase (classe)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename T  
>  
class ComPtrRefBase;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Oggetto [ComPtr\<T >](../windows/comptr-class.md) tipo o un tipo derivato da esso, non solamente l'interfaccia rappresentata dal ComPtr.  
  
## <a name="remarks"></a>Note  
 Rappresenta la classe base per il [ComPtrRef](../windows/comptrref-class.md) classe.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`InterfaceType`|Un sinonimo del tipo di parametro di modello `T`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore ComPtrRefBase::operator IInspectable**](../windows/comptrrefbase-operator-iinspectable-star-star-operator.md)|Esegue il cast corrente [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un-puntatore-all'interfaccia IInspectable.|  
|[Operatore ComPtrRefBase::operator IUnknown**](../windows/comptrrefbase-operator-iunknown-star-star-operator.md)|Esegue il cast corrente [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un-puntatore-a interfaccia IUnknown.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati ComPtrRefBase::ptr_](../windows/comptrrefbase-ptr-data-member.md)|Puntatore al tipo specificato dal parametro di modello corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ComPtrRefBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)