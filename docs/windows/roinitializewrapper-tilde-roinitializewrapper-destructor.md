---
title: 'RoInitializeWrapper:: ~ RoInitializeWrapper distruttore | Documenti Microsoft'
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
ms.openlocfilehash: 29683e68f1f5aadcd477cdc717b03a648c5cccc7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="roinitializewrapperroinitializewrapper-destructor"></a>Distruttore RoInitializeWrapper::~RoInitializeWrapper
Annulla l'inizializzazione di Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
~RoInitializeWrapper()  
```  
  
## <a name="remarks"></a>Note  
 La classe RoInitializeWrapper richiama Windows::Foundation::Uninitialize().  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)