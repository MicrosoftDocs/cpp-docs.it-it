---
title: Errore del compilatore C2682 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2682
dev_langs:
- C++
helpviewer_keywords:
- C2682
ms.assetid: 30c6a7c4-f5f7-4fe8-81a8-c48938521ab4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9422dc079891e6536c825538c99f4179f2c086c1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33234081"
---
# <a name="compiler-error-c2682"></a>Errore del compilatore C2682
Impossibile utilizzare operatore_cast per convertire da 'type1' a 'type2'  
  
 Un operatore di cast ha tentato di eseguire la conversione tra tipi incompatibili. Ad esempio, è possibile usare il [dynamic_cast](../../cpp/dynamic-cast-operator.md) operatore per convertire un puntatore a un riferimento. Il `dynamic_cast` operatore non può essere utilizzato per eseguire il cast qualificatori. Qualificatori tutti i tipi devono corrispondere.  
  
 È possibile utilizzare il `const_cast` operatore per rimuovere gli attributi, ad esempio `const`, `volatile`, o `__unaligned`.  
  
 L'esempio seguente genera l'errore C2682:  
  
```  
// C2682.cpp  
class A { virtual void f(); };  
class B: public A {};  
  
void g(A* pa) {  
    B& rb = dynamic_cast<B&>(pa); // C2682  
}  
```  
  
 L'esempio seguente genera l'errore C2682:  
  
```  
// C2682b.cpp  
// compile with: /clr  
ref struct R{};  
ref struct RR : public R{};  
ref struct H {  
   RR^ r ;  
   short s;  
   int i;  
};  
  
int main() {  
   H^ h = gcnew H();    
   interior_ptr<int>lr = &(h->i);  
   interior_ptr<short>ssr = safe_cast<interior_ptr<short> >(lr);   // C2682  
   interior_ptr<short>ssr = reinterpret_cast<interior_ptr<short> >(lr);   // OK  
}  
```