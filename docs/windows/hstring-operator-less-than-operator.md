---
title: "Operatore HString::Operator&lt; | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HString::operator<"
dev_langs: 
  - "C++"
ms.assetid: 48a051cb-4609-42be-b48c-d35fc99d1eab
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HString::Operator&lt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se il primo parametro è minore del secondo.  
  
## Sintassi  
  
```cpp  
  
inline bool operator<(  
    const HString& lhs,   
    const HString& rhs) throw()  
  
```  
  
#### Parametri  
 `lhs`  
 Il primo parametro da confrontare.  `lhs` può essere un riferimento ad un HStringReference.  
  
 `rhs`  
 Il secondo parametro da confrontare.  `rhs` può essere un riferimento ad un HStringReference.  
  
## Valore restituito  
 `true` se il parametro `lhs` è minore del parametro `rhs` ; In caso contrario, `false`.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)