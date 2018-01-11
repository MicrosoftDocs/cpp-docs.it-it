---
title: 'Metodo EventSource:: Add | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: event/Microsoft::WRL::EventSource::Add
dev_langs: C++
helpviewer_keywords: Add method
ms.assetid: 8bded85b-929e-4425-a464-e5de67bb774c
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6e5a39abdced8929ac1a01db596a6099c70853c7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="eventsourceadd-method"></a>Metodo EventSource::Add
Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori eventi per l'oggetto EventSource corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT Add(  
   _In_ TDelegateInterface* delegateInterface,  
   _Out_ EventRegistrationToken* token  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `delegateInterface`  
 L'interfaccia per un oggetto delegato, che rappresenta un gestore eventi.  
  
 `token`  
 Al termine di questa operazione, un handle che rappresenta l'evento. Usare questo token come parametro per il [Remove ()](../windows/eventsource-remove-method.md) metodo rimuovere il gestore dell'evento.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [Classe EventSource](../windows/eventsource-class.md)