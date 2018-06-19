---
title: 'Metodo asyncbase:: Trytransitiontoerror | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::TryTransitionToError
dev_langs:
- C++
helpviewer_keywords:
- TryTransitionToError method
ms.assetid: f6d11c25-1ce3-43f9-af1c-97c4dc0f6f0f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 97fcade98e82a289c172c7651f62f3de0394fe16
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33863504"
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
 `true` Se è stato modificato lo stato di errore interno; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Questa operazione modifica lo stato di errore solo se lo stato di errore è già impostato su S_OK. Questa operazione non ha alcun effetto se lo stato di errore è errore, annullato, completato o chiuso.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)