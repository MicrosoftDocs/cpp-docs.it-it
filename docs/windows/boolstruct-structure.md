---
title: "Struttura BoolStruct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "internal/Microsoft::WRL::Details::BoolStruct"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BoolStruct (struttura)"
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Struttura BoolStruct
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
struct BoolStruct;  
```  
  
## Note  
 La struttura di BoolStruct definisce se un ComPtr gestisce la durata degli oggetti di un'interfaccia.  BoolStruct viene utilizzato internamente dall'operatore [BoolType \(\)](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md).  
  
## Membri  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati BoolStruct::Member](../windows/boolstruct-member-data-member.md)|Specifica se [ComPtr](../windows/comptr-class.md) è, o non è, la gestione della durata degli oggetti di un'interfaccia.|  
  
## Gerarchia di ereditarietà  
 `BoolStruct`  
  
## Requisiti  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)   
 [Operatore ComPtr::operator Microsoft::WRL::Details::BoolType](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md)