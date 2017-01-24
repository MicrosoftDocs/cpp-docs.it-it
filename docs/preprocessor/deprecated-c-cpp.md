---
title: "deprecated (C/C++) | Microsoft Docs"
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
  - "vc-pragma.deprecated"
  - "deprecated_CPP"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "deprecated (pragma)"
  - "pragma, deprecated"
ms.assetid: 9c046f12-7875-499a-8d5d-12f8642fed2d
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# deprecated (C/C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il pragma **deprecated** consente di indicare che una funzione, un tipo o un qualsiasi altro identificatore potrebbero non essere più supportati in versioni future o che non dovrebbero più essere utilizzati.  
  
## Sintassi  
  
```  
  
#pragma deprecated( identifier1 [,identifier2, ...] )  
```  
  
## Note  
 Quando il compilatore rileva un simbolo deprecato, genera [C4995](../error-messages/compiler-warnings/compiler-warning-level-3-c4995.md).  
  
 È possibile deprecare i nomi di macro.  Inserire il nome della macro tra virgolette, altrimenti l'espansione della macro viene eseguita.  
  
 Il modificatore [deprecato](../cpp/deprecated-cpp.md) `__declspec` consente di specificare lo stato deprecato di moduli o funzioni in overload specifici.  
  
## Esempio  
  
```  
// pragma_directive_deprecated.cpp  
// compile with: /W3  
#include <stdio.h>  
void func1(void) {  
}  
  
void func2(void) {  
}  
  
int main() {  
   func1();  
   func2();  
   #pragma deprecated(func1, func2)  
   func1();   // C4995  
   func2();   // C4995  
}  
```  
  
 Nell'esempio seguente viene illustrato come deprecare una classe:  
  
```  
// pragma_directive_deprecated2.cpp  
// compile with: /W3  
#pragma deprecated(X)  
class X {  // C4995  
public:  
   void f(){}  
};  
  
int main() {  
   X x;   // C4995  
}  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)