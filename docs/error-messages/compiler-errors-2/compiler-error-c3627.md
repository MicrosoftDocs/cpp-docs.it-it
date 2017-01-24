---
title: "Errore del compilatore C3627 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3627"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3627"
ms.assetid: 905ad0a0-8c49-4187-b66e-b375f5a1fae5
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3627
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Solo un tipo valore può essere boxed  
  
 Solo le classi valore possono essere boxed.  
  
 Il seguente codice di esempio genera l'errore C3627:  
  
```  
// C3627.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__value class vA {  
};  
  
__gc class A {  
};  
  
int main()  
{  
   A* a;  
   __box(a);   // C3627  
  
   // box a value type  
   vA va;  
   __box(va);  
}  
```