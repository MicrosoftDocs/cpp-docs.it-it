---
title: Swap (funzione) (libreria modelli C++ di Windows Runtime) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: internal/Microsoft::WRL::Details::Swap
dev_langs: C++
ms.assetid: ed134a08-ceb7-4279-aa02-a183c3a426ea
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3e3278b21d57de0aa23e8b371ae286df4f64327b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="swap-function-windows-runtime-c-template-library"></a>Funzione swap (Libreria modelli C++ per Windows Runtime)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW inline void Swap(  
   _Inout_ T& left,  
   _Inout_ T& right  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `left`  
 Primo argomento.  
  
 `right`  
 Secondo argomento.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="remarks"></a>Note  
 Scambia i valori dei due argomenti specificati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)