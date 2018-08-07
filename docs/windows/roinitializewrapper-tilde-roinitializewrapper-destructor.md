---
title: 'RoInitializeWrapper:: ~ RoInitializeWrapper distruttore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper
dev_langs:
- C++
ms.assetid: afef4c1f-ffde-4cd2-8654-8de4182eb5f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1c6eaeb044cf3e169bf5927a2fec948cc8d4294c
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39606276"
---
# <a name="roinitializewrapperroinitializewrapper-destructor"></a>Distruttore RoInitializeWrapper::~RoInitializeWrapper
Non inizializza il Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
~RoInitializeWrapper()  
```  
  
## <a name="remarks"></a>Note  
 Il **RoInitializeWrapper** classe richiama `Windows::Foundation::Uninitialize()`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)