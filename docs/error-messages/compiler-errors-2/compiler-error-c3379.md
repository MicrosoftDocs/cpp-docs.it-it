---
title: "Errore del compilatore C3379 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3379"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3379"
ms.assetid: a66c2c4e-091c-4426-9cde-7c4cfb2ffce1
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C3379
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe': la dichiarazione di una classe annidata non può includere un identificatore di accesso assembly  
  
 Quando applicate a un tipo gestito, ad esempio una classe o uno struct, le parole chiave [public](../../cpp/public-cpp.md) e [private](../../cpp/private-cpp.md) indicano se la classe verrà esposta tramite i metadati dell'assembly.  La parola chiave `public` o `private` non può essere applicata a una classe annidata che erediterà l'accesso all'assembly della classe contenitore.  
  
 Quando vengono utilizzate con [\/clr](../../build/reference/clr-common-language-runtime-compilation.md), le parole chiave `ref` e `value` indicano che una classe è gestita \(vedere [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md)\).  
  
 Il seguente codice di esempio genera l'errore C3379:  
  
```  
// C3379a.cpp  
// compile with: /clr  
using namespace System;  
  
public ref class A {  
public:  
   static int i = 9;  
  
   public ref class BA {   // C3379  
   // try the following line instead  
   // ref class BA {  
   public:  
      static int ii = 8;  
   };  
};  
  
int main() {  
  
   A^ myA = gcnew A;  
   Console::WriteLine(myA->i);  
  
   A::BA^ myBA = gcnew A::BA;  
   Console::WriteLine(myBA->ii);  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3379:  
  
```  
// C3379b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
public __gc class A {  
public:  
   static int i = 9;  
  
   public __gc class BA {   // C3379  
   // try the following line instead  
   // __gc class BA {  
   public:  
      static int ii = 8;  
   };  
};  
  
int main() {  
  
   A *myA = new A;  
   Console::WriteLine(myA->i);  
  
   A::BA *myBA = new A::BA;  
   Console::WriteLine(myBA->ii);  
}  
```