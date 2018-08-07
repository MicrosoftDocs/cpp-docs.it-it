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
ms.openlocfilehash: 9dd026158a2bbc76e7a3e195bc5346f65821f2b7
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569495"
---
# <a name="eventsourceremove-method"></a>Metodo EventSource::Remove
Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto corrente **EventSource** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
 Per altre informazioni sulla struttura EventRegistrationToken, vedere il `Windows::Foundation::EventRegistrationToken` argomento struttura nella documentazione di riferimento di Windows Runtime.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)