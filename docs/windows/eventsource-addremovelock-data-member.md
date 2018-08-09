---
title: Membro dati EventSource::addRemoveLock_ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::addRemoveLock_
dev_langs:
- C++
helpviewer_keywords:
- addRemoveLock_ data member
ms.assetid: e2d69256-4891-4aad-ad0b-76479c0bb076
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9d45ba6670d94ae1a58a1a46fab41dbb2ee6f1c6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39646540"
---
# <a name="eventsourceaddremovelock-data-member"></a>Membro dati EventSource::addRemoveLock_
Sincronizza l'accesso per il [targets](../windows/eventsource-targets-data-member.md) matrice durante l'aggiunta, rimozione o richiamare i gestori eventi.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
Wrappers::SRWLock addRemoveLock_;  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)