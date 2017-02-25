---
title: "Metodo ComPtr::GetAddressOf | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::ComPtr::GetAddressOf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetAddressOf (metodo)"
ms.assetid: 972a41d0-c2ef-4ae3-b2cd-77cc45156ac9
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Metodo ComPtr::GetAddressOf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Viene recuperato l'indirizzo del membro dati [ptr\_](../windows/comptr-ptr-data-member.md), che contiene un puntatore a interfaccia rappresentata da questo ComPtr.  
  
## Sintassi  
  
```  
T* const* GetAddressOf() const;  
T** GetAddressOf();  
```  
  
## Valore restituito  
 L'indirizzo di una variabile  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)