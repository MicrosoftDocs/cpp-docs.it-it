---
title: 'Metodo EventSource:: Remove | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::Remove
dev_langs:
- C++
helpviewer_keywords:
- Remove method
ms.assetid: afafedf5-3665-4408-a639-fb6884f7c5f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 36a057bbad39e61576828c5a02f6863248b235cf
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641405"
---
# <a name="eventsourceremove-method"></a>Metodo EventSource::Remove
Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto corrente **EventSource** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
HRESULT Remove(  
   EventRegistrationToken token  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *token*  
 Un handle che rappresenta un gestore eventi. Questo token è stato restituito quando il gestore dell'evento è stato registrato per il [Add ()](../windows/eventsource-add-method.md) (metodo).  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Per altre informazioni sul `EventRegistrationToken` struttura, vedere la **Windows::Foundation::EventRegistrationToken struttura** argomento nel **Windows Runtime** documentazione di riferimento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)