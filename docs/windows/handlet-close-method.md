---
title: 'Metodo handlet:: Close | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::Close
dev_langs:
- C++
helpviewer_keywords:
- Close method
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7cbe76cdea5c8fadef818ede1d63d88e4437bdae
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39651067"
---
# <a name="handletclose-method"></a>Metodo HandleT::Close
Chiude l'oggetto corrente **HandleT** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
void Close();  
```  
  
## <a name="remarks"></a>Note  
 L'handle sottostante l'oggetto corrente **HandleT** viene chiusa e il **HandleT** viene impostato sullo stato non valido.  
  
 Se l'handle non chiusa correttamente, viene generata un'eccezione nel thread chiamante.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)