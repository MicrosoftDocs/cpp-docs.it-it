---
title: Errore del compilatore C3028 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3028
dev_langs:
- C++
helpviewer_keywords:
- C3028
ms.assetid: 175e697f-8e8f-492a-8456-6240ffbbb900
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 56d1ed561b4f414cc85c7b0d7f2c112648ae6281
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3028"></a>Errore del compilatore C3028
'member': solo un membro dati statici o variabili può essere utilizzato in una clausola di condivisione dei dati  
  
 Un simbolo diverso da un membro dati statici o variabili è stato passato alla clausola reduction.  
  
 L'esempio seguente genera l'errore C3028:  
  
```  
// C3028.cpp  
// compile with: /openmp /link vcomps.lib  
int g_i;  
  
class MyClass {  
public:  
   MyClass();  
   MyClass(int x);  
   static int x_public;  
   int mbr;  
private:  
   static int x_private;  
};  
  
int MyClass::x_public;  
int MyClass::x_private;  
  
namespace XyzNS {  
   struct xyz { int x; };  
   xyz xyz;  
}  
  
namespace NS {  
   int a1;  
   struct Bar {  
      static MyClass MyClass;  
   };  
   struct Baz : public Bar {  
      using NS::Bar::MyClass;  
   };  
}  
  
MyClass NS::Bar::MyClass;  
  
typedef int MyInt;  
  
template <class T, size_t n> class CTempl {  
public:  
   static T public_array[n];  
private:  
   static T private_array[n];  
};  
  
template<class T,size_t n> T CTempl<T,n>::public_array[n];  
template<class T,size_t n> T CTempl<T,n>::private_array[n];  
  
CTempl<int,5> tx;  
  
struct Incomplete;  
extern Incomplete inc;  
  
MyClass::MyClass(int x) {  
  
   #pragma omp parallel reduction(+: x, g_i, x_public, x_private)     
   // OK  
      ;  
  
   #pragma omp parallel reduction(+: x, g_i, MyClass::x_public,   
   MyClass::x_private)     
   // OK  
      ;  
  
   #pragma omp parallel reduction(+: mbr)     
   // C3028, member of a class.  
      ;  
}  
  
int main() {  
  
   #pragma omp parallel reduction(+:main)     
   // C3028, main is a function.  
      ;  
  
   #pragma omp parallel reduction(+: XyzNS)     
   // C3028, XyzNS is a namespace.  
      ;  
}  
```
