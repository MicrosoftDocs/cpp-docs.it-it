---
title: 'Metodo handlenulltraits:: Close | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close
dev_langs:
- C++
helpviewer_keywords:
- Close method
ms.assetid: 6fb2fa0d-df20-45dc-856f-f78497f8bdf9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0206433d2b329501b10a8262e7b487ec83e99302
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642110"
---
# <a name="handlenulltraitsclose-method"></a>Metodo HANDLENullTraits::Close
Chiude l'handle specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline static bool Close(  
   _In_ Type h  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *h*  
 Handle da chiudere.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se gestiscono *h* chiuso correttamente; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura HANDLENullTraits](../windows/handlenulltraits-structure.md)