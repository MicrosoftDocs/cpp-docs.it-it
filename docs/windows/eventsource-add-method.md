---
title: "Metodo EventSource::Add | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource::Add"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Add (metodo)"
ms.assetid: 8bded85b-929e-4425-a464-e5de67bb774c
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo EventSource::Add
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato al set di gestori eventi per l'oggetto EventSource corrente.  
  
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
 Quando questa operazione viene completata, un handle che rappresenta l'evento. Usare questo token come parametro per il [Remove](../windows/eventsource-remove-method.md) metodo per rimuovere il gestore dell'evento.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [EventSource (classe)](../windows/eventsource-class.md)