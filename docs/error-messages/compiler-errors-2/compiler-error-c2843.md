---
title: "Errore del compilatore C2843 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2843"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2843"
ms.assetid: 9d3f2ac4-eea5-4fed-abeb-e752f442bfcc
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C2843
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member%$S': impossibile accettare l'indirizzo di un membro dati non statico oppure di un metodo di un tipo gestito o WinRT  
  
 È necessaria un'istanza per accettare l'indirizzo di membri dati non statici di una classe o interfaccia gestita o WinRT.  
  
 L'esempio seguente genera l'errore C2843 e mostra come risolverlo:  
  
```  
// C2843_2.cpp  
// compile with: /clr  
public ref class C {  
public:  
   int m_i;  
};  
  
ref struct MyStruct {  
   static void sf() {}  
   void f() {}  
};  
  
int main() {  
   MyStruct ^ps = gcnew MyStruct;  
   void (__clrcall MyStruct::*F1)() = & MyStruct::f;   // C2843  
   void (__clrcall MyStruct::*F2)() = & ps->f;   // C2843  
   void (__clrcall MyStruct::*F3)();   // C2843  
  
   void (__clrcall *F5)() = MyStruct::sf;   // OK  
   void (__clrcall *F6)() = & ps->sf;   // OK  
  
   interior_ptr<int> i = &C::m_i; // C2843  
   C ^x = gcnew C();  
   interior_ptr<int> ii = &x->m_i;  
}  
```  
  
 L'esempio seguente genera l'errore C2843 e mostra come risolverlo:  
  
```  
// C2843.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
public __gc class C {  
public:  
   int m_i;  
};  
  
__gc struct MyStruct {  
   static void sf() {}  
   void f() {}  
};  
  
int main() {  
   MyStruct *ps = new MyStruct;  
   void (__clrcall MyStruct::*F1)() = & MyStruct::f;   // C2843  
   void (__clrcall MyStruct::*F2)() = & ps->f;   // C2843  
   void (__clrcall MyStruct::*F3)();   // C2843  
  
   void (__clrcall *F5)() = MyStruct::sf;   // OK  
   void (__clrcall *F6)() = & ps->sf;   // OK  
  
   int __gc *i = &C::m_i; // C2843  
   C *x = new C();  
   int __gc *i = &x->m_i;  
}  
```