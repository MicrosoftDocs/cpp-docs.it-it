---
title: Errore del compilatore C3379 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3379
dev_langs:
- C++
helpviewer_keywords:
- C3379
ms.assetid: a66c2c4e-091c-4426-9cde-7c4cfb2ffce1
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: e6fa111a525d81c418d3285c05af86b700e8cb08
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3379"></a>Errore del compilatore C3379
'class': una classe annidata non può avere un identificatore di accesso assembly come parte della relativa dichiarazione  
  
 Quando applicato a un tipo gestito, ad esempio di classe o struttura, il [pubblica](../../cpp/public-cpp.md) e [privata](../../cpp/private-cpp.md) parole chiave indicano se la classe verrà esposta tramite i metadati dell'assembly. `public`o `private` non è possibile applicare a una classe annidata, che erediterà l'accesso all'assembly della classe contenitore.  
  
 Se usato con [/clr](../../build/reference/clr-common-language-runtime-compilation.md), `ref` e `value` parole chiave indicano che una classe è gestita (vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md)).  
  
 L'esempio seguente genera l'errore C3379:  
  
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

