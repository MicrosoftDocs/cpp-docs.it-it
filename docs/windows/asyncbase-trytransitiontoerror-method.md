---
title: 'Metodo asyncbase:: Trytransitiontoerror | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: async/Microsoft::WRL::AsyncBase::TryTransitionToError
dev_langs: C++
helpviewer_keywords: TryTransitionToError method
ms.assetid: f6d11c25-1ce3-43f9-af1c-97c4dc0f6f0f
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6da3d84e3e5e1ee0fd71da1cf59ec79497f81d35
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="asyncbasetrytransitiontoerror-method"></a>Metodo AsyncBase::TryTransitionToError
Indica se il codice di errore può modificare lo stato di errore interno.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool TryTransitionToError(  
   const HRESULT error  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `error`  
 Un errore HRESULT.  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se è stato modificato lo stato di errore interno; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Questa operazione modifica lo stato di errore solo se lo stato di errore è già impostato su S_OK. Questa operazione non ha alcun effetto se lo stato di errore è errore, annullato, completato o chiuso.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)