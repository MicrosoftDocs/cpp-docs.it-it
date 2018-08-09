---
title: 'Metodo asyncbase:: Trytransitiontoerror | Microsoft Docs'
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
ms.openlocfilehash: 61b56472e490d95e22c1013595c5c088d2b58dcd
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39643030"
---
# <a name="asyncbasetrytransitiontoerror-method"></a>Metodo AsyncBase::TryTransitionToError
Indica se il codice di errore può modificare lo stato di errore interno.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
bool TryTransitionToError(  
   const HRESULT error  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *Errore*  
 Un errore HRESULT.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se lo stato di errore interno è stato modificato; in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 Questa operazione modifica lo stato di errore solo se lo stato di errore è già impostato su S_OK. Questa operazione non ha effetto se lo stato di errore è già errore, annullato, completato o chiuso.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)