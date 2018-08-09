---
title: 'Costante argtraits:: args | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraits::args
dev_langs:
- C++
helpviewer_keywords:
- args constant
ms.assetid: a68100ab-254b-4571-a0bc-946f1633a46b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 03db2fd8853321e4a9320f2c17b05800b87e466c
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652962"
---
# <a name="argtraitsargs-constant"></a>Costante ArgTraits::args
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
static const int args = -1; ;  
```  
  
## <a name="remarks"></a>Note  
 Conta il numero di parametri di `Invoke` metodo di un'interfaccia di delegato.  
  
## <a name="remarks"></a>Note  
 Quando **args** uguale a -1 indica non può esistere alcuna corrispondenza per il `Invoke` firma del metodo.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ArgTraits (struttura)](../windows/argtraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)