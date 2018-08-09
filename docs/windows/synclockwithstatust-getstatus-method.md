---
title: 'Metodo synclockwithstatust:: GetStatus | Microsoft Docs'
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
ms.openlocfilehash: 4677239bbcaff0c72eb11ade259f47531a616f19
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39649636"
---
# <a name="synclockwithstatustgetstatus-method"></a>Metodo SyncLockWithStatusT::GetStatus
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
DWORD GetStatus() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato di un'operazione di attesa per l'oggetto che si basa sul **SyncLockWithStatusT** classe, ad esempio un [Mutex](../windows/mutex-class1.md) oppure [semaforo](../windows/semaphore-class.md). Zero (0) indica che l'operazione di attesa restituito lo stato segnalato; in caso contrario, un altro stato si è verificato, come valore di timeout è scaduto.  
  
## <a name="remarks"></a>Note  
 Recupera lo stato di attesa dell'oggetto corrente **SyncLockWithStatusT** oggetto.  
  
 La funzione GetStatus recupera il valore dell'oggetto sottostante [Status](../windows/synclockwithstatust-status-data-member.md) (membro dati). Quando un oggetto basato sul **SyncLockWithStatusT** classe esegue un'operazione di blocco, l'oggetto è in attesa prima di tutto per l'oggetto divenga disponibile. Il risultato di tale operazione di attesa viene archiviato nel `status_` (membro dati). I valori possibili del `status_` (membro dati) sono i valori restituiti dell'operazione di attesa. Per altre informazioni, vedere i valori restituiti di `WaitForSingleObjectEx()` (funzione) in MSDN Library.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)