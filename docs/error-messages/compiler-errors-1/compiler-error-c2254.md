---
title: Errore del compilatore C2254 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2254
dev_langs:
- C++
helpviewer_keywords:
- C2254
ms.assetid: 49bb3d7e-3bdf-4af6-937c-fa627be412a9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 773b6d8b8f0dafe560da8549139442efb31ba429
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33170083"
---
# <a name="compiler-error-c2254"></a>Errore del compilatore C2254
'function': identificatore pure o override abstract non consentito con funzioni friend identificatore  
  
 Oggetto `friend` funzione viene specificata come pure `virtual`.  
  
 L'esempio seguente genera l'errore C2254:  
  
```  
// C2254.cpp  
// compile with: /c  
class A {  
public:  
   friend void func1() = 0;   // C2254, func1 is friend  
   void virtual func2() = 0;   // OK, pure virtual  
   friend void func3();   // OK, friend not virtual nor pure  
};  
  
void func1() {};  
void func3() {};  
```