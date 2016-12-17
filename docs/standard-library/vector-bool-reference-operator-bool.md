---
title: "vector&lt;bool&gt;::reference::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "operatorbool"
  - "vector<bool>::reference::operatorbool"
  - "bool"
  - "std::vector<bool>::reference::operatorbool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BOOL (operatore)"
  - "reference::operator bool"
ms.assetid: b0e57869-18cc-4296-9061-da502f30120d
caps.latest.revision: 20
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vector&lt;bool&gt;::reference::operator bool
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Fornisce una conversione implicita da `vector<bool>::reference` a `bool`.  
  
## Sintassi  
  
```  
operator bool( ) const;  
```  
  
## Valore restituito  
 Valore booleano dell'elemento dell'oggetto [vector\<bool\>](../standard-library/vector-bool-class.md).  
  
## Note  
 L'oggetto `vector<bool>` non può essere modificato da questo operatore.  
  
## Requisiti  
 **Intestazione:** \<vector\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [vector\<bool\>::reference Class](../standard-library/vector-bool-reference-class.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)