---
title: 'Metodo handlet:: Close | Documenti Microsoft'
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
ms.openlocfilehash: 4f0c1e47420106651cfe0526d6d212e9819a72ff
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33873251"
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