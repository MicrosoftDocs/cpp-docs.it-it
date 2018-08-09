---
title: Membro dati EventSource::targetsPointerLock_ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::targetsPointerLock_
dev_langs:
- C++
helpviewer_keywords:
- targetsPointerLock_ data member
ms.assetid: 8f08409f-5262-4be7-9cf1-2ed15f19684a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 718a62d627f99eff24fd7c10e0280607a52e2be7
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646887"
---
# <a name="eventsourcetargetspointerlock-data-member"></a>Membro dati EventSource::targetsPointerLock_
Sincronizza l'accesso ai membri dati interni anche durante i gestori eventi per questo **EventSource** vengono aggiunti, rimossi o richiamato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Wrappers::SRWLock targetsPointerLock_;  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)