---
title: Ordinamento parziale dei modelli di funzione (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- partial ordering of function templates
ms.assetid: 0c17347d-0e80-47ad-b5ac-046462d9dc73
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 60936a46732e4b2ed827a5efb08740661d9bb0d9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="partial-ordering-of-function-templates-c"></a>Ordinamento parziale di modelli di funzione (C++)

Possono essere disponibili più modelli di funzioni corrispondente all'elenco di argomenti di una chiamata di funzione. In C++ viene definito un ordinamento parziale dei modelli di funzione per specificare la funzione che deve essere chiamata. L'ordinamento è parziale perché possono essere presenti alcuni modelli considerati ugualmente specializzati.

Il compilatore sceglie la funzione del modello più specializzato disponibile tra le possibili corrispondenze. Ad esempio, se un modello di funzione accetta un tipo __T__e un altro modello di funzione richiede __T\*__  è disponibile, il __T\*__  versione viene definita per essere più specializzata ed è preferibile generica __T__ versione ogni volta che l'argomento è un tipo di puntatore, anche se entrambe sarebbero corrispondenze consentite.

Utilizzare la procedura seguente per determinare se un candidato di modello di funzione è più specializzato:

1. Considerare due modelli di funzione, T1 e T2.

2. Sostituire i parametri in T1 con un tipo univoco ipotetico X.

3. Con l'elenco di parametri in T1, vedere se T2 è un modello valido per tale elenco di parametri. Ignorare tutte le conversioni implicite.

4. Ripetere la stessa procedura con T1 e T2 all'inverso.

5. Se un modello è un elenco di argomenti di modello valido per l'altro modello, ma non è vero il contrario, tale modello è considerato meno specializzato dell'altro. Se entrambi i modelli utilizzando i precedente passaggio modulo argomenti validi per l'altro, verranno considerati ugualmente specializzati e risultati di una chiamata ambigua quando si tenta di usarli.

6. Utilizzare le regole seguenti:

     1. Una specializzazione di modello per un tipo specifico è più specializzata di una che accetta un argomento tipo generico.

     2. Un modello richiede solo __T\*__  è più specializzato di prendere una __T__, perché il tipo di un ipotetico __X\*__  è un argomento valido per un __T__ argomento di modello, ma __X__ non è un argomento valido per un __T\*__  argomento di modello.

     3. __const T__ è più specializzata __T__, in quanto __const X__ è un argomento valido per un __T__ argomento di modello, ma __X__ è argomento non valido per un __const T__ argomento di modello.

     4. __const T\*__  è più specializzato __T\*__, in quanto __const X\*__  è un argomento valido per un __T\*__  argomento di modello, ma __X\*__  non è un argomento valido per un __const T\*__  argomento di modello.

## <a name="example"></a>Esempio

L'esempio seguente funziona come specificato nello standard:

```cpp
// partial_ordering_of_function_templates.cpp
// compile with: /EHsc
#include <iostream>

extern "C" int printf(const char*,...);
template <class T> void f(T) {
   printf_s("Less specialized function called\n");
}

template <class T> void f(T*) {
   printf_s("More specialized function called\n");
}

template <class T> void f(const T*) {
   printf_s("Even more specialized function for const T*\n");
}

int main() {
   int i =0;
   const int j = 0;
   int *pi = &i;
   const int *cpi = &j;

   f(i);   // Calls less specialized function.
   f(pi);  // Calls more specialized function.
   f(cpi); // Calls even more specialized function.
   // Without partial ordering, these calls would be ambiguous.
}
```  
  
### <a name="output"></a>Output  
  
```  
Less specialized function called  
More specialized function called  
Even more specialized function for const T*  
```  
  
## <a name="see-also"></a>Vedere anche

[Modelli di funzioni](../cpp/function-templates.md)
