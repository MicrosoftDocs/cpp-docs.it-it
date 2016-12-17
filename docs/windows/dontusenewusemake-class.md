---
title: "Classe DontUseNewUseMake | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::DontUseNewUseMake"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DontUseNewUseMake (classe)"
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe DontUseNewUseMake
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
class DontUseNewUseMake;  
```  
  
## Note  
 Impedisce l'utilizzo dell'operatore `new` in RuntimeClass.  Pertanto, è necessario utilizzare [Crea funzione](../windows/make-function.md).  
  
## Membri  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore DontUseNewUseMake::operator new](../windows/dontusenewusemake-operator-new-operator.md)|Esegue l'overload dell'operatore `new` e gli impedisce di essere utilizzato in RuntimeClass.|  
  
## Gerarchia di ereditarietà  
 `DontUseNewUseMake`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)   
 [Funzione Make](../windows/make-function.md)