---
title: "Operatore HStringReference::Operator&lt; | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator<"
dev_langs: 
  - "C++"
ms.assetid: 55aa48e8-7c96-4123-9ebe-42b4cd8b9377
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HStringReference::Operator&lt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se il primo parametro è minore del secondo.  
  
## Sintassi  
  
```cpp  
  
inline bool operator<(  
    const HStringReference& lhs,   
    const HStringReference& rhs) throw()  
  
```  
  
#### Parametri  
 `lhs`  
 Il primo parametro da confrontare.  `lhs` può essere un riferimento ad un HStringReference.  
  
 `rhs`  
 Il secondo parametro da confrontare. `rhs` può essere un riferimento a un HStringReference.  
  
## Valore restituito  
 `true` se il parametro `lhs` è minore del parametro `rhs` ; In caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)