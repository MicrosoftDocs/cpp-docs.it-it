---
title: "Enumerazione CancelTransitionPolicy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::CancelTransitionPolicy::TransitionFromCanceled"
  - "module/Microsoft::WRL::CancelTransitionPolicy::RemainCanceled"
  - "module/Microsoft::WRL::CancelTransitionPolicy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Enumerazione CancelTransitionPolicy"
ms.assetid: 5de49f7d-e5e3-43e9-bbca-666caf226cef
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Enumerazione CancelTransitionPolicy
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica un tentativo di un'operazione asincrona di transizione ad uno stato terminale completato o di errore si deve comportare rispetto ad un client richiesto stato annullato.  
  
## Sintassi  
  
```  
enum CancelTransitionPolicy;  
```  
  
## Membri  
  
### Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`RemainCanceled`|Se l'operazione asincrona si trova in uno stato annullato dal client richiesto, questo indica che rimane nello stato annullato rispetto alla transizionea a un terminale completato o lo stato di errore.|  
|`TransitionFromCanceled`|Se l'operazione asincrona si trova in uno stato annullato dal client richiesto, indica che la transizione dallo stato annullato allo stato terminale di completamento o di errore è determinato dalla chiamata che utilizza questo flag.|  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)