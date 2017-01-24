---
title: "How to: Declare Value Types with the interior_ptr Keyword (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ptr keyword"
  - "value types, declaring"
ms.assetid: 49eea66e-eeba-49bd-95b0-ba297be436e3
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Declare Value Types with the interior_ptr Keyword (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un `interior_ptr` può essere utilizzato con un tipo di valore.  
  
> [!IMPORTANT]
>  Questa funzionalità del linguaggio è supportata dall'opzione del compilatore **\/clr**, ma non dall'opzione del compilatore di **\/ZW**.  
  
## Esempio  
  
### Descrizione  
 Il seguente esempio [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)] mostra come utilizzare un `interior_ptr` con un tipo di valore.  
  
### Codice  
  
```  
// interior_ptr_value_types.cpp  
// compile with: /clr  
value struct V {  
   V(int i) : data(i){}  
   int data;  
};  
  
int main() {  
   V v(1);  
   System::Console::WriteLine(v.data);  
  
   // pointing to a value type  
   interior_ptr<V> pv = &v;  
   pv->data = 2;  
  
   System::Console::WriteLine(v.data);  
   System::Console::WriteLine(pv->data);  
  
   // pointing into a value type  
   interior_ptr<int> pi = &v.data;  
   *pi = 3;  
   System::Console::WriteLine(*pi);  
   System::Console::WriteLine(v.data);  
   System::Console::WriteLine(pv->data);  
}  
```  
  
### Output  
  
```  
1  
2  
2  
3  
3  
3  
```  
  
## Esempio  
  
### Descrizione  
 In un tipo di valore, il puntatore `this` restituisce un interior\_ptr.  
  
 Nel corpo di una funzione membro non static di un tipo di valore `V`, `this` è un'espressione di tipo `interior_ptr<V>` il cui valore è l'indirizzo dell'oggetto per cui la funzione viene chiamata.  
  
### Codice  
  
```  
// interior_ptr_value_types_this.cpp  
// compile with: /clr /LD  
value struct V {  
   int data;  
   void f() {  
      interior_ptr<V> pv1 = this;  
      // V* pv2 = this;   error  
   }  
};  
```  
  
## Esempio  
  
### Descrizione  
 Il seguente codice di esempio mostra come utilizzare l'operatore address\-of con membri statici.  
  
 L'indirizzo di un membro di tipo Visual C\+\+ statico genera un puntatore nativo.  L'indirizzo di un membro statico del tipo di valore è un puntatore gestito perché il membro del tipo di valore viene allocato nell'heap di runtime e può essere spostato dal Garbage Collector.  
  
### Codice  
  
```  
// interior_ptr_value_static.cpp  
// compile with: /clr  
using namespace System;  
value struct V { int i; };  
  
ref struct G {  
   static V v = {22};   
   static int i = 23;   
   static String^ pS = "hello";   
};  
  
int main() {  
   interior_ptr<int> p1 = &G::v.i;  
   Console::WriteLine(*p1);  
  
   interior_ptr<int> p2 = &G::i;  
   Console::WriteLine(*p2);  
  
   interior_ptr<String^> p3 = &G::pS;  
   Console::WriteLine(*p3);  
}  
```  
  
### Output  
  
```  
22  
23  
hello  
```  
  
## Vedere anche  
 [interior\_ptr \(C\+\+\/CLI\)](../windows/interior-ptr-cpp-cli.md)