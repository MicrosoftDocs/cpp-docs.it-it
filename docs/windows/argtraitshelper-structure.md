---
title: ArgTraitsHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraitsHelper
dev_langs:
- C++
helpviewer_keywords:
- ArgTraitsHelper structure
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1bb8dfeff0e1f3e659e0d3c6514904df39286c45
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39466637"
---
# <a name="argtraitshelper-structure"></a>ArgTraitsHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename TDelegateInterface>  
struct ArgTraitsHelper;  
```  
  
#### <a name="parameters"></a>Parametri  
 *TDelegateInterface*  
 Un'interfaccia di delegato.  
  
## <a name="remarks"></a>Note  
 Consente di definire le caratteristiche comuni di argomenti del delegato.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`methodType`|Sinonimo di `decltype(&TDelegateInterface::Invoke)`.|  
|`Traits`|Sinonimo di `ArgTraits<methodType>`.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costante ArgTraitsHelper::args](../windows/argtraitshelper-args-constant.md)|Aiuta [argtraits:: args](../windows/argtraits-args-constant.md) Mantieni il numero di parametri sul `Invoke` metodo di un'interfaccia di delegato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ArgTraitsHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)