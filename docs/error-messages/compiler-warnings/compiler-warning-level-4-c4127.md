---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4127'
title: Avviso del compilatore (livello 4) C4127
ms.date: 10/16/2019
f1_keywords:
- C4127
helpviewer_keywords:
- C4127
ms.assetid: f59ded9e-5227-45bd-ac43-2aa861581363
ms.openlocfilehash: 54c319c6894c0a82c99100c736498466a1c7c135
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261892"
---
# <a name="compiler-warning-level-4-c4127"></a>Avviso del compilatore (livello 4) C4127

> espressione condizionale costante

## <a name="remarks"></a>Commenti

L'espressione di controllo di un' **`if`** istruzione o di un **`while`** ciclo restituisce una costante. A causa dell'utilizzo comune di tipo idiomatiche, a partire da Visual Studio 2015 Update 3, le costanti semplici come 1 o non **`true`** attivano l'avviso, a meno che non siano il risultato di un'operazione in un'espressione.

Se l'espressione di controllo di un **`while`** ciclo è una costante perché il ciclo viene chiuso al centro, provare a sostituire il **`while`** ciclo con un **`for`** ciclo. È possibile omettere l'inizializzazione, il test di terminazione e l'incremento del ciclo di un **`for`** ciclo, che fa sì che il ciclo sia infinito, proprio come `while(1)` ed è possibile uscire dal corpo dell' **`for`** istruzione.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrati due modi per generare C4127 e viene illustrato come utilizzare un ciclo for per evitare l'avviso:

```cpp
// C4127.cpp
// compile with: /W4
#include <stdio.h>
int main() {
   if (true) {}           // OK in VS2015 update 3 and later
   if (1 == 1) {}         // C4127
   while (42) { break; }  // C4127

   // OK
   for ( ; ; ) {
      printf("test\n");
      break;
   }
}
```

Questo avviso può essere generato anche quando in un'espressione condizionale viene utilizzata una costante in fase di compilazione:

```cpp
#include <string>

using namespace std;

template<size_t S, class T>
void MyFunc()
{
   if (sizeof(T) >= S) // C4127. "Consider using 'if constexpr' statement instead"
   {
   }
}

class Foo
{
   int i;
   string s;
};

int main()
{
   Foo f;
   MyFunc<4, Foo>();
}
```
