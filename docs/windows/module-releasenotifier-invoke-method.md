---
title: "Metodo Module::ReleaseNotifier::Invoke | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::ReleaseNotifier::Invoke"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Invoke (metodo)"
ms.assetid: f62686fe-74bf-482b-a46b-6a3c09b80e7e
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo Module::ReleaseNotifier::Invoke
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una volta implementata, chiama un gestore eventi quando l'ultimo oggetto in un modulo viene rilasciato.  
  
## Sintassi  
  
```  
virtual void Invoke() = 0;  
```  
  
## Requisiti  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)