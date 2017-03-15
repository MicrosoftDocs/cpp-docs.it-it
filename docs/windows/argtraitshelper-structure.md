---
title: "Struttura ArgTraitsHelper | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::ArgTraitsHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ArgTraitsHelper (struttura)"
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Struttura ArgTraitsHelper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template<  
   typename TDelegateInterface  
>  
struct ArgTraitsHelper;  
```  
  
#### Parametri  
 `TDelegateInterface`  
 Un'interfaccia delegata.  
  
## Note  
 Aiuta a definire le funzionalità comuni degli argomenti del delegato.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`methodType`|Un sinonimo per `decltype(&TDelegateInterface::Invoke)`.|  
|`Traits`|Un sinonimo per `ArgTraits<methodType>`.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante ArgTraitsHelper::args](../windows/argtraitshelper-args-constant.md)|Le guide [ArgTraits::args](../windows/argtraits-args-constant.md) mantengono il conteggio del numero di parametri nel metodo di richiamata dell'interfaccia delegata.|  
  
## Gerarchia di ereditarietà  
 `ArgTraitsHelper`  
  
## Requisiti  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)