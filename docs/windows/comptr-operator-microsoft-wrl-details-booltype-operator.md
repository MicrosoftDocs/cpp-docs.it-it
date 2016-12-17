---
title: "Operatore ComPtr::operator Microsoft::WRL::Details::BoolType | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: cfba6521-fb30-4fb8-afb2-cfab1cb5e0b8
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtr::operator Microsoft::WRL::Details::BoolType
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se un ComPtr gestisce o meno la durata degli oggetti di un'interfaccia.  
  
## Sintassi  
  
```  
WRL_NOTHROW operator Microsoft::WRL::Details::BoolType() const;  
```  
  
## Valore restituito  
 Se un'interfaccia è associata a questo ComPtr, l'indirizzo del membro dati [BoolStruct::Member](../windows/boolstruct-member-data-member.md) ; in caso contrario, `nullptr`.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)   
 [Metodo ComPtr::Get](../windows/comptr-get-method.md)