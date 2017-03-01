---
title: Errore del compilatore C2327 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2327
dev_langs:
- C++
helpviewer_keywords:
- C2327
ms.assetid: 95278c95-d1f9-4487-ad27-53311f5e8112
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 62834115e3ad9c9733326a1bc94e5fa51209f485
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2327"></a>Errore del compilatore C2327
'simbolo': non è un nome di tipo, statica o enumeratore  
  
 Codice all'interno di una classe annidata tenta di accedere a un membro della classe contenitore che non è un nome di tipo, un membro statico o un enumeratore.  
  
 Durante la compilazione con **/clr**, una causa comune di C2327 è una proprietà con lo stesso nome del tipo di proprietà.  
  
 Nell'esempio seguente viene generato l'errore C2327:  
  
```  
// C2327.cpp  
int x;  
class enclose {  
public:  
   int x;  
   static int s;  
   class inner {  
      void f() {  
         x = 1;   // C2327; enclose::x is not static  
         s = 1;   // ok; enclose::s is static  
         ::x = 1;   // ok; ::x refers to global  
      }  
   };  
};  
```  
  
 L'errore C2327 può inoltre verificarsi se il nome di un tipo è nascosto in base al nome di un membro:  
  
```  
// C2327b.cpp  
class X {};  
  
class S {  
   X X;  
   // try the following line instead  
   // X MyX;  
   X other;   // C2327, rename member X  
};  
```  
  
 L'errore C2327 può essere attivato anche in questo caso, in cui è necessario specificare completamente il tipo di dati del parametro:  
  
```  
// C2327c.cpp  
// compile with: /c  
struct A {};  
  
struct B {  
   int A;  
   void f(A a) {   // C2327  
   void f2(struct A a) {}   // OK  
   }  
};  
```  
  
 Nell'esempio seguente viene generato l'errore C2327:  
  
```  
// C2327d.cpp  
// compile with: /clr /c  
using namespace System;  
  
namespace NA {  
   public enum class E : Int32 {  
      one = 1,  
      two = 2,  
      three = 3  
   };  
  
   public ref class A {  
   private:  
      E m_e;  
   public:  
      property E E {  
         NA::E get() {  
            return m_e;  
         }  
         // At set, compiler doesn't know whether E is get_E or   
         // Enum E, therefore fully qualifying Enum E is necessary  
         void set( E e ) {   // C2327  
            // try the following line instead  
            // void set(NA::E e) {  
            m_e = e;  
         }  
      }  
   };  
}  
```  
  
Nell'esempio seguente viene illustrato l'errore C2327 quando una proprietà ha lo stesso nome del tipo di proprietà:  
  
```  
// C2327f.cpp  
// compile with: /clr /c  
public value class Address {};  
  
public ref class Person {  
public:  
   property Address Address {  
      ::Address get() {     
         return address;  
      }  
      void set(Address addr) {   // C2327  
      // try the following line instead  
      // set(::Address addr) {  
         address = addr;   
      }  
   }  
private:  
   Address address;   // C2327  
   // try the following line instead  
   // ::Address address;  
};  
```  

