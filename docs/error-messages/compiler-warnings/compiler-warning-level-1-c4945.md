---
title: Compilatore avviso (livello 1) C4945 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4945
dev_langs:
- C++
helpviewer_keywords:
- C4945
ms.assetid: 6d2079ea-dc59-4611-bc68-9a22c06f7587
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d02583de0d4b986b2b723d3347d0aa0f212f4d16
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4945"></a>Avviso del compilatore (livello 1) C4945
'symbol': Impossibile importare il simbolo da 'assembly2': come 'simbolo' è già stato importato da un altro assembly 'assembly1'  
  
 Un simbolo è stato importato da un assembly di riferimento, ma tale simbolo è stato importato da un altro assembly di riferimento. Non fare riferimento a uno degli assembly o il nome del simbolo modificato in uno degli assembly.  
  
 Gli esempi seguenti generano C4945.  
  
```  
// C4945a.cs  
// compile with: /target:library  
// C# source code to create a dll  
public class ClassA {  
   public int i;  
}  
```  
  
 E poi  
  
```  
// C4945b.cs  
// compile with: /target:library  
// C# source code to create a dll  
public class ClassA {  
   public int i;  
}  
```  
  
 E poi  
  
```  
// C4945c.cpp  
// compile with: /clr /LD /W1  
#using "C4945a.dll"  
#using "C4945b.dll"   // C4945  
```