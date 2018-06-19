---
title: 'Metodo eventtargetarray:: end | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray::End
dev_langs:
- C++
helpviewer_keywords:
- End method
ms.assetid: 20c491b8-f355-4d8f-ad14-8f46121d9af6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 00827d42bb01263d6b4fd9b5aea3b0fc7f7c76e1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874265"
---
# <a name="eventtargetarrayend-method"></a>Metodo EventTargetArray::End
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ComPtr<IUnknown>* End();  
```  
  
## <a name="return-value"></a>Valore restituito  
 L'indirizzo dell'ultimo elemento della matrice interna di gestori eventi.  
  
## <a name="remarks"></a>Note  
 Ottiene l'indirizzo dell'ultimo elemento della matrice interna di gestori eventi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [EventTargetArray (classe)](../windows/eventtargetarray-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)