---
title: 'Metodo EventSource:: Remove | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: event/Microsoft::WRL::EventSource::Remove
dev_langs: C++
helpviewer_keywords: Remove method
ms.assetid: afafedf5-3665-4408-a639-fb6884f7c5f9
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a11bce6d70c70bba2a4e75753c55d83bec32329f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="eventsourceremove-method"></a>Metodo EventSource::Remove
Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto EventSource corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT Remove(  
   EventRegistrationToken token  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `token`  
 Handle che rappresenta un gestore eventi. Questo token è stato restituito quando il gestore dell'evento è stato registrato per il [Add](../windows/eventsource-add-method.md) metodo.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni sulla struttura EventRegistrationToken, vedere l'argomento Windows::Foundation::EventRegistrationToken struttura nella documentazione di riferimento di Windows Runtime.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)