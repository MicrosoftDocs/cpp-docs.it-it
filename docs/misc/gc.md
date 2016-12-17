---
title: "__gc | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__gc"
  - "__gc_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi __gc"
  - "classi [C++], gestite"
  - "classi gestite"
ms.assetid: 63b1e7ab-d1c8-4582-aa89-21bfddf694a9
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# __gc
> [!NOTE]
>  Questo argomento si applica solo alla versione 1 delle estensioni gestite per C\+\+. Questa sintassi deve essere utilizzata solo per gestire il codice della versione 1. Vedere [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md) per informazioni sull'utilizzo della funzionalità equivalente nella nuova sintassi.  
  
 Dichiara un tipo \_\_gc.  
  
## Sintassi  
  
```  
  
__gc  
array-specifier  
__gc   
class-specifier  
__gc   
struct-specifier  
__gc  
interface-specifier  
__gc  
pointer-specifier  
__gc new  
  
```  
  
## Note  
 Un tipo \_\_gc è un'estensione del linguaggio C\+\+ che semplifica la programmazione in .NET Framework fornendo funzionalità quali interoperabilità e Garbage Collection.  
  
> [!NOTE]
>  Ogni funzione membro di una classe abstract \_\_gc deve essere definita, a meno che non si tratti di una funzione virtuale pura.  
  
 Nelle estensioni gestite di C\+\+ gli equivalenti di una classe e di uno struct C\# sono i seguenti:  
  
|Estensioni gestite per C\+\+|C\#|Per altre informazioni|  
|----------------------------------|---------|----------------------------|  
|struct \_\_gc o classe \_\_gc|classe|Parola chiave [class](../Topic/class%20\(C%23%20Reference\).md)|  
|struct \_\_value o classe \_\_value|struct|parola chiave [struct](../Topic/struct%20\(C%23%20Reference\).md)|  
  
## Esempio  
 Nell'esempio seguente una classe gestita \(`X`\) è dichiarata con un membro dati pubblico, che viene modificato tramite un puntatore gestito:  
  
```  
// keyword__gc.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc class X {  
public:  
   int i;  
   int ReturnInt() { return 5; }  
};  
  
int main() {  
   // X is a __gc class, so px is a __gc pointer  
   X* px;  
   px = new X;   // creates a managed object of type X  
   Console::WriteLine(px->i);  
  
   px->i = 4;   // modifies X::i through px  
   Console::WriteLine(px->i);  
  
   int n = px->ReturnInt();   // calls X::ReturnInt through px  
   Console::WriteLine(n);  
}  
```  
  
## Output  
  
```  
0  
4  
5  
```