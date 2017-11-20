---
title: 'Metodo handlet:: Internalclose | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HandleT::InternalClose
dev_langs: C++
helpviewer_keywords: InternalClose method
ms.assetid: fe693c02-aa1f-4e00-8bdd-a0d7d736da0b
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: dfa2597daf24530284a55cf59e646a75d0704f39
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="handletinternalclose-method"></a>Metodo HandleT::InternalClose
Chiude l'oggetto HandleT corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
virtual bool InternalClose();  
```  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se il HandleT corrente è stato chiuso correttamente. in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 InternalClose() è protetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)