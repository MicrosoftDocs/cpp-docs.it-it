---
title: "Operatore HStringReference::Operator!= | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator!="
dev_langs: 
  - "C++"
ms.assetid: 01ab6691-1fc7-4feb-85f0-fe795593a160
caps.latest.revision: 2
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore HStringReference::Operator!=
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indica se i due parametri non sono uguali.  
  
## Sintassi  
  
```cpp  
  
inline bool operator==(  
               const HStringReference& lhs,   
               const HSTRING& rhs) throw()  
  
inline bool operator!=(  
               const HStringReference& lhs,   
               const HStringReference& rhs) throw()  
  
inline bool operator!=(  
               const HSTRING& lhs,   
               const HStringReference& rhs) throw()  
  
inline bool operator!=(  
               const HStringReference& lhs,   
               const HSTRING& rhs) throw()  
  
```  
  
#### Parametri  
 `lhs`  
 Il primo parametro da confrontare.  `lhs` può essere un oggetto HStringReference o un handle HSTRING.  
  
 `rhs`  
 Il secondo parametro da confrontare. `rhs` può essere un oggetto di HStringReference, o un handle di HSTRING.  
  
## Valore restituito  
 `true` se i parametri `lhs` e `rhs` non sono equivalenti. In caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)