---
title: 'Metodo asyncbase:: Getoncomplete | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::GetOnComplete
dev_langs:
- C++
helpviewer_keywords:
- GetOnComplete method
ms.assetid: f06ae02d-9a88-41d2-b749-bdc1a7ff8748
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ffe517b75df4e1cdd8172279c12256db940f0980
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647037"
---
# <a name="asyncbasegetoncomplete-method"></a>Metodo AsyncBase::GetOnComplete
Copia l'indirizzo del gestore dell'evento di completamento corrente per la variabile specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(  
   GetOnComplete  
)(TComplete** completeHandler);  
```  
  
### <a name="parameters"></a>Parametri  
 *completeHandler*  
 Il percorso in cui è archiviato l'indirizzo del gestore dell'evento di completamento corrente.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)