---
title: "Operatore ComPtr::operator!= | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::operator!="
dev_langs: 
  - "C++"
ms.assetid: 63647240-dec7-4eb9-9272-96c07d01493c
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtr::operator!=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se due oggetti ComPtr non sono uguali.  
  
## Sintassi  
  
```cpp  
bool operator!=(  
   const ComPtr<T>& a,  
   const ComPtr<U>& b  
);  
  
bool operator!=(  
   const ComPtr<T>& a,  
   decltype(__nullptr)  
);  
  
bool operator!=(  
   decltype(__nullptr),  
   const ComPtr<T>& a  
);  
  
```  
  
#### Parametri  
 `a`  
 Riferimento a un oggetto ComPtr.  
  
 `b`  
 Riferimento a un altro oggetto ComPtr.  
  
## Valore restituito  
 Il primo operatore diventa `true` se l'oggetto `a` non è uguale a `b`; in caso contrario, `false`.  
  
 Il secondo e il terzo operatore restituiscono `true` se l'oggetto `a` non è uguale a `nullptr`; in caso contrario, `false`.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)   
 [Classe ComPtr](../windows/comptr-class.md)