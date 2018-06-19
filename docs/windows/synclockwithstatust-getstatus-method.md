---
title: 'Metodo synclockwithstatust:: GetStatus | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus
dev_langs:
- C++
helpviewer_keywords:
- GetStatus method
ms.assetid: d448b51d-a63d-40d9-a9ee-4aad3204118d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 03addd8d89c54eddb5deb721ab47d46e8b945edd
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889762"
---
# <a name="synclockwithstatustgetstatus-method"></a>Metodo SyncLockWithStatusT::GetStatus
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
DWORD GetStatus() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato di un'operazione di attesa per l'oggetto che si basa sulla classe SyncLockWithStatusT, ad esempio un [Mutex](../windows/mutex-class1.md) o [semaforo](../windows/semaphore-class.md). Zero (0) indica che l'operazione di attesa restituito lo stato segnalato; in caso contrario, un altro stato si è verificato, come valore di timeout è scaduto.  
  
## <a name="remarks"></a>Note  
 Recupera lo stato di attesa dell'oggetto SyncLockWithStatusT corrente.  
  
 La funzione GetStatus recupera il valore dell'oggetto sottostante [Status](../windows/synclockwithstatust-status-data-member.md) (membro dati). Quando un oggetto in base alla classe SyncLockWithStatusT esegue un'operazione di blocco, l'oggetto attende prima di tutto l'oggetto divenga disponibile. Il risultato dell'operazione di attesa viene archiviato nel `status_` (membro dati). I valori possibili del `status_` (membro dati) sono i valori restituiti dell'operazione di attesa. Per ulteriori informazioni, vedere i valori restituiti di **WaitForSingleObjectEx()** funzione in MSDN Library.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)