---
title: "Struttura VerifyInterfaceHelper | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::VerifyInterfaceHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VerifyInterfaceHelper (struttura)"
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Struttura VerifyInterfaceHelper
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] e non si può utilizzare direttamente dal codice.  
  
## Sintassi  
  
```  
template <  
   bool isWinRTInterface,  
   typename I  
>  
struct VerifyInterfaceHelper;  
  
template <  
   typename I  
>  
struct VerifyInterfaceHelper<false, I>;  
```  
  
#### Parametri  
 `I`  
 Un'interfaccia da verificare.  
  
 `isWinRTInterface`  
  
## Note  
 Verifica che l'interfaccia specificata dal parametro di template soddisfi determinati requisiti.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo VerifyInterfaceHelper::Verify](../windows/verifyinterfacehelper-verify-method.md)||  
  
## Gerarchia di ereditarietà  
 `VerifyInterfaceHelper`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)