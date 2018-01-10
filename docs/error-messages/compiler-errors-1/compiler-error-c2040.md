---
title: Errore del compilatore C2040 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2040
dev_langs: C++
helpviewer_keywords: C2040
ms.assetid: 74ca3592-1469-4965-ab34-a4815e2fbefe
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f102b1fea23c89debc86970d7548ba7da152cd37
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2040"></a>Errore del compilatore C2040
'operator': 'identifier1' differisce da 'identifier2' nei livelli dei riferimenti indiretti  
  
 Un'espressione che comprende gli operandi specificati ha tipi di operando incompatibili o tipi di operando convertiti in modo implicito. Se entrambi gli operandi sono aritmetici o non aritmetici (ad esempio, una matrice o un puntatore), vengono usati senza modifiche. Se un operando è aritmetico e l'altro non lo è, l'operando aritmetico verrà convertito nel tipo dell'operando non aritmetico.  
  
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