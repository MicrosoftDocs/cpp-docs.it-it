---
title: "Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "boxing, impliciti"
  - "gcnew (parola chiave) [C++], creazione di tipi di valori"
  - "tipi di valori, creazione"
ms.assetid: ceb48841-d6bd-47be-a167-57f44c961603
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare gcnew per creare tipi di valore e utilizzare la conversione boxing implicita
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzando [gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md) su un tipo di valore comporterà un tipo di valore boxed, che può quindi essere inserito nell'heap gestito e sottoposto a garbage collection.  
  
## Esempio  
  
```  
// vcmcppv2_explicit_boxing4.cpp  
// compile with: /clr  
public value class V {  
public:  
   int m_i;  
   V(int i) : m_i(i) {}  
};  
  
public ref struct TC {  
   void do_test(V^ v) {  
      if (v != nullptr)  
         ;  
      else  
         ;  
   }  
};  
  
int main() {  
   V^ v = gcnew V(42);  
   TC^ tc = gcnew TC;  
   tc->do_test(v);  
}  
```  
  
## Vedere anche  
 [Boxing](../windows/boxing-cpp-component-extensions.md)