---
description: 'Altre informazioni su: errore del compilatore C2659'
title: Errore del compilatore C2659
ms.date: 11/04/2016
f1_keywords:
- C2659
helpviewer_keywords:
- C2659
ms.assetid: b0883600-4d27-4ca7-a931-8ca6bd48654d
ms.openlocfilehash: 6a0f6c84e6bc279d9db75c423fdfc0d99b5ea769
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249672"
---
# <a name="compiler-error-c2659"></a>Errore del compilatore C2659

'operatore': funzione come operando sinistro

Funzione presente a sinistra dell'operatore specificato. La causa più comune di questo errore è il fatto che il compilatore ha analizzato l'identificatore a sinistra dell'operatore come una funzione, mentre lo sviluppatore lo aveva inteso come una variabile. Per ulteriori informazioni, vedere l'articolo di Wikipedia relativo alla [maggior parte dell'analisi vexing](https://en.wikipedia.org/wiki/Most_vexing_parse). In questo esempio vengono illustrate una dichiarazione di funzione e una definizione di variabile che spesso generano confusione:

```cpp
// C2659a.cpp
// Compile using: cl /W4 /EHsc C2659a.cpp
#include <string>
using namespace std;

int main()
{
   string string1(); // string1 is a function returning string
   string string2{}; // string2 is a string initialized to empty

   string1 = "String 1"; // C2659
   string2 = "String 2";
}
```

Per risolvere questo problema, modificare la dichiarazione dell'identificatore in modo che non venga analizzato come una dichiarazione di funzione.

L'errore C2659 può verificarsi anche quando la funzione contiene un tipo che non può essere utilizzato nell'espressione a sinistra dell'operatore specificato. In questo esempio l'errore C2659 si verifica quando il codice assegna un puntatore di funzione a una funzione:

```cpp
// C2659b.cpp
// Compile using: cl /W4 /EHsc C2659b.cpp
int func0(void) { return 42; }
int (*func1)(void);

int main()
{
   func1 = func0;
   func0 = func1; // C2659
}
```
