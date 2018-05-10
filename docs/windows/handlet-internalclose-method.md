---
title: 'Metodo handlet:: Internalclose | Documenti Microsoft'
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
ms.openlocfilehash: 7b0aef97645d515a03dcf2cab90eedc06f07971c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="handletinternalclose-method"></a>Metodo HandleT::InternalClose
Chiude l'oggetto HandleT corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual bool InternalClose();  
```  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se HandleT corrente è stato chiuso correttamente. in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 InternalClose() è protetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)