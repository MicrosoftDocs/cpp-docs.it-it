---
title: "Operatore HString::Operator== | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HString::operator=="
dev_langs: 
  - "C++"
ms.assetid: 77ff4c1a-e62a-4256-bf9d-0f017137c630
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HString::Operator==
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se i due paramentri non sono uguali.  
  
## Sintassi  
  
```cpp  
  
inline bool operator==(  
               const HString& lhs,   
               const HString& rhs) throw()  
  
inline bool operator==(  
                const HString& lhs,   
                const HStringReference& rhs) throw()  
  
inline bool operator==(  
                const HStringReference& lhs,   
                const HString& rhs) throw()  
  
inline bool operator==(  
                 const HSTRING& lhs,   
                 const HString& rhs) throw()  
  
inline bool operator==(  
                 const HString& lhs,   
                 const HSTRING& rhs) throw()  
  
```  
  
#### Parametri  
 `lhs`  
 Il primo parametro da confrontare.  `lhs` può essere un oggetto HStringReference o HString o un handle HSTRING.  
  
 `rhs`  
 Il secondo parametro da confrontare.`rhs` può essere un oggetto di HStringReference o di HString, o un handle di HSTRING.  
  
## Valore restituito  
 `true` se i parametri `lhs` e `rhs` sono equivalenti. In caso contrario, `false`.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HString](../windows/hstring-class.md)