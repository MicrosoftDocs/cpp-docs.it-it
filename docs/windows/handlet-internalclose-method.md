---
title: 'Metodo handlet:: Internalclose | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleT::InternalClose
dev_langs:
- C++
helpviewer_keywords:
- InternalClose method
ms.assetid: fe693c02-aa1f-4e00-8bdd-a0d7d736da0b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a54b61902c8994397c7bd6effa74a90d43c7e512
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39568641"
---
# <a name="handletinternalclose-method"></a>Metodo HandleT::InternalClose
Chiude l'oggetto corrente **HandleT** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual bool InternalClose();  
```  
  
## <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto corrente **HandleT** chiuso correttamente; in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 **InternalClose()** viene **protetti**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)