---
title: Compilatore avviso (livello 1) C4258 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4258
dev_langs: C++
helpviewer_keywords: C4258
ms.assetid: bbb75e6d-6693-4e62-8ed3-b006a0ec55e3
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e8b987b1ad156106e4944443b778275b7643d116
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-warning-level-1-c4258"></a>Avviso del compilatore (livello 1) C4258
'variabile': definizione dal ciclo for ignorata; viene utilizzata la definizione di ambito di inclusione"  
  
 In [/Ze](../../build/reference/za-ze-disable-language-extensions.md) e [/Zc: forScope](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md), le variabili definite in un [per](../../cpp/for-statement-cpp.md) ciclo escono dall'ambito dopo il **per** fine del ciclo. Questo avviso viene generato se una variabile con lo stesso nome della variabile del ciclo, ma definita nel ciclo di inclusione, viene nuovamente utilizzata nell'ambito che contiene il **per** ciclo. Ad esempio:  
  
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