---
title: 'Metodo eventtargetarray:: end | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: event/Microsoft::WRL::Details::EventTargetArray::End
dev_langs: C++
helpviewer_keywords: End method
ms.assetid: 20c491b8-f355-4d8f-ad14-8f46121d9af6
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5bb10bf3d88f9c6f0615501a899d60b4a184405c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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