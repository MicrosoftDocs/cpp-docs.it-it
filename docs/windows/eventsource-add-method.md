---
title: 'Metodo EventSource:: Add | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::Add
dev_langs:
- C++
helpviewer_keywords:
- Add method
ms.assetid: 8bded85b-929e-4425-a464-e5de67bb774c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 90750f965768d5ecda40e074f9a136407613d2d2
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570387"
---
# <a name="eventsourceadd-method"></a>Metodo EventSource::Add
Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente **EventSource** oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT Add(  
   _In_ TDelegateInterface* delegateInterface,  
   _Out_ EventRegistrationToken* token  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *delegateInterface*  
 L'interfaccia per un oggetto delegato, che rappresenta un gestore eventi.  
  
 *token*  
 Quando questa operazione viene completata, un handle che rappresenta l'evento. Usare questo token come parametro per il [Remove ()](../windows/eventsource-remove-method.md) metodo rimuovere il gestore dell'evento.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)