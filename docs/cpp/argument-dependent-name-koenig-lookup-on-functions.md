---
title: Ricerca del nome dipendente dall'argomento (Koenig) nelle funzioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- Koenig lookup
- argument-dependent lookup [C++]
ms.assetid: c0928401-da2c-4658-942d-9ba4df149c35
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6a06140522f9d4074eaa0403d0d05fe0f79adec0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="argument-dependent-name-koenig-lookup-on-functions"></a>Ricerca del nome dipendente dall'argomento nelle funzioni (Koenig)
Il compilatore può usare la ricerca nome dipendente dall'argomento per trovare la definizione di una chiamata di funzione non qualificata. La ricerca nome dipendente dall'argomento viene anche chiamata ricerca di Koenig. Il tipo di ciascun argomento in una chiamata di funzione viene definito all'interno di una gerarchia di spazi dei nomi, classi, strutture, unioni o modelli. Quando si specifica un non qualificato [in forma suffissa](../cpp/postfix-expressions.md) chiamata di funzione, il compilatore cerca una definizione di funzione nella gerarchia associata a ogni tipo di argomento.  
  
## <a name="example"></a>Esempio  
 Nell'esempio il compilatore rileva che la funzione `f()` accetta un argomento `x`. L'argomento `x` è di tipo `A::X`, definito nello spazio dei nomi `A`. Il compilatore cerca lo spazio dei nomi `A` e trova una definizione per la funzione `f()` che accetta un argomento di tipo `A::X`.  
  
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
