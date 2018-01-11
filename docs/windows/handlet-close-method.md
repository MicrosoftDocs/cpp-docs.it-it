---
title: 'Metodo handlet:: Close | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HandleT::Close
dev_langs: C++
helpviewer_keywords: Close method
ms.assetid: 1b9d597c-abcf-4028-a068-0344560009f6
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c2edd3fee9893c72685eb334bf4b361997646b7d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handletclose-method"></a>Metodo HandleT::Close
Chiude l'oggetto HandleT corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void Close();  
```  
  
## <a name="remarks"></a>Note  
 L'handle sottostante il HandleT corrente viene chiuso e il HandleT è impostato sullo stato non valido.  
  
 Se l'handle non chiude correttamente, viene generata un'eccezione nel thread chiamante.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)