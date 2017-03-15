---
title: "Errore del compilatore C2682 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2682"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2682"
ms.assetid: 30c6a7c4-f5f7-4fe8-81a8-c48938521ab4
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 13
---
# Errore del compilatore C2682
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile utilizzare operatore\_cast per convertire da 'tipo1' a 'tipo2'  
  
 Un operatore di cast ha tentato la conversione tra tipi incompatibili.  Non è possibile, ad esempio, utilizzare l'operatore [dynamic\_cast](../../cpp/dynamic-cast-operator.md) per convertire un puntatore in un riferimento.  L'operatore `dynamic_cast` non può essere utilizzato per eseguire il cast dei qualificatori.  Tutti i qualificatori sui tipi devono corrispondere.  
  
 È possibile utilizzare l'operatore `const_cast` per rimuovere attributi quale `const`, `volatile` o `__unaligned`.  
  
 Il seguente codice di esempio genera l'errore C2682:  
  
```  
// C2682.cpp  
class A { virtual void f(); };  
class B: public A {};  
  
void g(A* pa) {  
    B& rb = dynamic_cast<B&>(pa); // C2682  
}  
```  
  
 Il seguente codice di esempio genera l'errore C2682:  
  
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