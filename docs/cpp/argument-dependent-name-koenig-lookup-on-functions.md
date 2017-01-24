---
title: "Ricerca del nome dipendente dall&#39;argomento nelle funzioni (Koenig) | Microsoft Docs"
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
  - "ricerca dipendente dall'argomento [C++]"
  - "ricerca Koenig"
ms.assetid: c0928401-da2c-4658-942d-9ba4df149c35
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Ricerca del nome dipendente dall&#39;argomento nelle funzioni (Koenig)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il compilatore può usare la ricerca nome dipendente dall'argomento per trovare la definizione di una chiamata di funzione non qualificata.  La ricerca nome dipendente dall'argomento viene anche chiamata ricerca di Koenig.  Il tipo di ciascun argomento in una chiamata di funzione viene definito all'interno di una gerarchia di spazi dei nomi, classi, strutture, unioni o modelli.  Quando si specifica una chiamata di funzione [suffisso](../cpp/postfix-expressions.md) non qualificata, il compilatore cerca una definizione di funzione nella gerarchia associata a ogni tipo di argomento.  
  
## Esempio  
 Nell'esempio il compilatore rileva che la funzione `f()` accetta un argomento `x`.  L'argomento `x` è di tipo `A::X`, definito nello spazio dei nomi `A`.  Il compilatore cerca lo spazio dei nomi `A` e trova una definizione per la funzione `f()` che accetta un argomento di tipo `A::X`.  
  
```  
// argument_dependent_name_koenig_lookup_on_functions.cpp  
namespace A  
{  
   struct X  
   {  
   };  
   void f(const X&)  
   {  
   }  
}  
int main()  
{  
// The compiler finds A::f() in namespace A, which is where   
// the type of argument x is defined. The type of x is A::X.  
   A::X x;  
   f(x);     
}  
```  
  
## Vedere anche  
 [Conformità compilatore avanzata di Visual C\+\+ .NET 2003](../misc/visual-cpp-dotnet-2003-enhanced-compiler-conformance.md)