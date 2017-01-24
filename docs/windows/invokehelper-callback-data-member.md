---
title: "Membro dati InvokeHelper::callback_ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::InvokeHelper::callback_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "callback_ (membro dati)"
ms.assetid: 6f0cbf6d-0448-46f8-ba71-bd6fd8702e3a
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Membro dati InvokeHelper::callback_
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
TCallback callback_;  
```  
  
## Note  
 Rappresenta il gestore eventi da chiamare quando si verifica un evento .  
  
 Il parametro del modello `TCallback` specifica il tipo del gestore eventi.  
  
## Requisiti  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Struttura InvokeHelper](../windows/invokehelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)