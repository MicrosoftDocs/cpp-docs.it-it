---
title: "Errore del compilatore C2040 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2040"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2040"
ms.assetid: 74ca3592-1469-4965-ab34-a4815e2fbefe
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C2040
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operator': 'identifier1' differisce da 'identifier2' nei livelli dei riferimenti indiretti  
  
 Un'espressione che comprende gli operandi specificati ha tipi di operando incompatibili o tipi di operando convertiti in modo implicito.  Se entrambi gli operandi sono aritmetici o non aritmetici \(ad esempio, una matrice o un puntatore\), vengono usati senza modifiche.  Se un operando è aritmetico e l'altro non lo è, l'operando aritmetico verrà convertito nel tipo dell'operando non aritmetico.  
  
 Questo esempio genera l'errore C2040 e mostra come risolverlo.  
  
```  
// C2040.cpp  
// Compile by using: cl /c /W3 C2040.cpp  
bool test() {  
   char c = '3';  
   return c == "3"; // C2446, C2040  
   // return c == '3'; // OK  
}  
  
```