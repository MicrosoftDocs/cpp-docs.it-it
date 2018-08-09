---
title: Membro dati EventSource::targets_ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::targets_
dev_langs:
- C++
helpviewer_keywords:
- targets_ data member
ms.assetid: 5d5cee05-3315-4514-bce2-19173c923c7d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ea08cdc8657100e1c1e0157a8a542a44ea34cd4d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642373"
---
# <a name="eventsourcetargets-data-member"></a>Membro dati EventSource::targets_
Matrice di uno o più gestori di eventi.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
ComPtr<Details::EventTargetArray> targets_;  
```  
  
## <a name="remarks"></a>Note  
 Quando l'evento rappresentato dall'oggetto corrente **EventSource** oggetto è presente, vengono chiamati i gestori di eventi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)