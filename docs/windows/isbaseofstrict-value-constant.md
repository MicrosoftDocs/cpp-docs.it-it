---
title: 'Costante isbaseofstrict:: value | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: internal/Microsoft::WRL::Details::IsBaseOfStrict::value
dev_langs: C++
helpviewer_keywords: value constant
ms.assetid: 4a0cdab0-ba03-482b-babf-eeec519ba687
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 284cbe8b140d38b31017a97fef1910b3b63513b6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="isbaseofstrictvalue-constant"></a>Costante IsBaseOfStrict::value
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
static const bool value = __is_base_of(Base, Derived);  
```  
  
## <a name="remarks"></a>Note  
 Indica se un tipo di base di un altro.  
  
 `value`è `true` se tipo `Base` è una classe di base del tipo `Derived`, in caso contrario è `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [IsBaseOfStrict (struttura)](../windows/isbaseofstrict-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)