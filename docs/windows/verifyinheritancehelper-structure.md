---
title: "Struttura VerifyInheritanceHelper | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::VerifyInheritanceHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VerifyInheritanceHelper (struttura)"
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Struttura VerifyInheritanceHelper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename I,  
   typename Base  
>  
struct VerifyInheritanceHelper;  
template <  
   typename I  
>  
struct VerifyInheritanceHelper<I, Nil>;  
```  
  
#### Parametri  
 `I`  
 Un tipo.  
  
 `Base`  
 Un altro tipo.  
  
## Note  
 Verifica se un'interfaccia è derivata da un'altra interfaccia.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo VerifyInheritanceHelper::Verify](../windows/verifyinheritancehelper-verify-method.md)|Verifica le due interfacce specificate dai parametri del modello corrente e determina se un'interfaccia è derivata dall'altra.|  
  
## Gerarchia di ereditarietà  
 `VerifyInheritanceHelper`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)