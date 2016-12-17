---
title: "Errore del compilatore C2139 | Microsoft Docs"
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
  - "C2139"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2139"
ms.assetid: 31e047c0-5bf9-46c2-b6de-b627ea6a5768
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2139
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': una classe non definita non è consentita come argomento per il tratto di tipo intrinseco del compilatore 'tratto'  
  
 È stato passato un argomento non valido a un tratto di tipo.  
  
 Per ulteriori informazioni, vedere [Compiler Support for Type Traits](../../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2139:  
  
```  
// C2139.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
template <class T>  
struct is_polymorphic {  
   static const bool value = __is_polymorphic(T);  
};  
  
class C;  
class D {};  
  
class E {  
public:  
   virtual void Test() {}  
};  
  
int main() {  
   cout << is_polymorphic<C>::value << endl;   // C2139  
   cout << is_polymorphic<D>::value << endl;   // OK  
   cout << is_polymorphic<E>::value << endl;   // OK  
}  
```