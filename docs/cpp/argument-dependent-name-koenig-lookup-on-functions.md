---
title: Ricerca del nome dipendente dall'argomento nelle funzioni (Koenig)
ms.date: 11/04/2016
helpviewer_keywords:
- Koenig lookup
- argument-dependent lookup [C++]
ms.assetid: c0928401-da2c-4658-942d-9ba4df149c35
ms.openlocfilehash: 88811e8070fdfe398bc12734221dee772515d8bc
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190536"
---
# <a name="argument-dependent-name-koenig-lookup-on-functions"></a>Ricerca del nome dipendente dall'argomento nelle funzioni (Koenig)

Il compilatore può usare la ricerca nome dipendente dall'argomento per trovare la definizione di una chiamata di funzione non qualificata. La ricerca nome dipendente dall'argomento viene anche chiamata ricerca di Koenig. Il tipo di ciascun argomento in una chiamata di funzione viene definito all'interno di una gerarchia di spazi dei nomi, classi, strutture, unioni o modelli. Quando si specifica una chiamata di funzione [suffissa](../cpp/postfix-expressions.md) non qualificata, il compilatore cerca la definizione della funzione nella gerarchia associata a ogni tipo di argomento.

## <a name="example"></a>Esempio

Nell'esempio il compilatore rileva che la funzione `f()` accetta un argomento `x`. L'argomento `x` è di tipo `A::X`, definito nello spazio dei nomi `A`. Il compilatore cerca lo spazio dei nomi `A` e trova una definizione per la funzione `f()` che accetta un argomento di tipo `A::X`.

```cpp
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
