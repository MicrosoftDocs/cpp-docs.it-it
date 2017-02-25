---
title: "Avviso del compilatore (livello 1) C4258 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4258"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4258"
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4258
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'variabile': definizione contenuta nel ciclo for ignorata. Verrà utilizzata la definizione contenuta nell'ambito che lo contiene  
  
 In [\/Ze](../../build/reference/za-ze-disable-language-extensions.md) e [\/Zc:forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md), le variabili definite in un ciclo [for](../../cpp/for-statement-cpp.md) sono esterne all'ambito dopo la fine del ciclo **for**.  L'avviso viene generato se una variabile con lo stesso nome della variabile del ciclo, ma definita nel ciclo che la contiene, viene nuovamente utilizzata nell'ambito che contiene il ciclo **for**.  Di seguito è riportato un esempio.  
  
```  
// C4258.cpp  
// compile with: /Zc:forScope /W1  
int main()  
{  
   int i;  
   {  
      for (int i =0; i < 1; i++)  
         ;  
      i = 20;   // C4258 i (in for loop) has gone out of scope  
   }  
}  
```