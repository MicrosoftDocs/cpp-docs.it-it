---
title: 'Metodo asyncbase:: Putonprogress | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::PutOnProgress
dev_langs:
- C++
helpviewer_keywords:
- PutOnProgress method
ms.assetid: 1f5f180e-eb5a-4afe-ac16-69dbf36f0383
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a99eee63496632b8f0918ee888e6a824424b757d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649890"
---
# <a name="asyncbaseputonprogress-method"></a>Metodo AsyncBase::PutOnProgress
Imposta l'indirizzo del gestore dell'evento di stato di avanzamento sul valore specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(  
   PutOnProgress  
)(TProgress* progressHandler);  
```  
  
### <a name="parameters"></a>Parametri  
 *progressHandler*  
 L'indirizzo a cui è impostato il gestore dell'evento di stato di avanzamento.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)