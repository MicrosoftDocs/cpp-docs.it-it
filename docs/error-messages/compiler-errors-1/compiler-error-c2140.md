---
title: "Errore del compilatore C2140 | Microsoft Docs"
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
  - "C2140"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2140"
ms.assetid: d44a0500-002c-4632-9e5e-c71c3a473ec4
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2140
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': un tipo dipendente da un parametro di tipo generico non è consentito come argomento per il tratto di tipo intrinseco del compilatore 'tratto'  
  
 A un tratto di tipo è stato passato un identificatore di tipo non valido.  
  
 Per ulteriori informazioni, vedere [Compiler Support for Type Traits](../../windows/compiler-support-for-type-traits-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2140:  
  
```  
// C2140.cpp  
// compile with: /clr /c  
template <class T>  
  
struct is_polymorphic {  
   static const bool value = __is_polymorphic(T);  
};  
  
class x {};  
  
generic <class T>  
ref class C {  
   void f() {  
      System::Console::WriteLine(__is_polymorphic(T));   // C2140  
      System::Console::WriteLine(is_polymorphic<T>::value);   // C2140  
  
      System::Console::WriteLine(__is_polymorphic(x));   // OK  
      System::Console::WriteLine(is_polymorphic<x>::value);   // OK  
   }  
};  
```