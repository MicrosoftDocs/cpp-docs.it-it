---
title: Errore del compilatore C2059
ms.date: 03/26/2019
f1_keywords:
- C2059
helpviewer_keywords:
- C2059
ms.assetid: 2be4eb39-3f37-4b32-8e8d-75835e07c78a
ms.openlocfilehash: f91eb428fcb49c81187788730128545916955790
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127660"
---
# <a name="compiler-error-c2059"></a>Errore del compilatore C2059

errore di sintassi:' token '

Il token ha causato un errore di sintassi.

Nell'esempio seguente viene generato un messaggio di errore per la riga che dichiara `j`.

```cpp
// C2059e.cpp
// compile with: /c
// C2143 expected
// Error caused by the incorrect use of '*'.
   int j*; // C2059
```

Per determinare la motivo dell'errore, esaminare non solo la riga elencata nel messaggio di errore, ma anche le righe sopra di esso. Se l'analisi delle righe non restituisce alcun indizio sul problema, provare a impostare come commento la riga elencata nel messaggio di errore e forse più righe sopra.

Se il messaggio di errore si verifica in un simbolo che segue immediatamente una variabile di `typedef`, assicurarsi che la variabile sia definita nel codice sorgente.

C2059 viene generato quando un nome di simbolo del preprocessore viene riutilizzato come identificatore. Nell'esempio seguente il compilatore vede `DIGITS.ONE` come numero 1, che non è valido come nome di elemento enum:

```cpp
#define ONE 1

enum class DIGITS {
    ZERO,
    ONE // error C2059
};
```

È possibile ottenere C2059 se un simbolo non restituisce alcun valore, come può verificarsi quando si usa **/d**_Symbol_ **=** per la compilazione.

```cpp
// C2059a.cpp
// compile with: /DTEST=
#include <stdio.h>

int main() {
   #ifdef TEST
      printf_s("\nTEST defined %d", TEST);   // C2059
   #else
      printf_s("\nTEST not defined");
   #endif
}
```

Un altro caso in cui può verificarsi C2059 è quando si compila un'applicazione che specifica una struttura negli argomenti predefiniti per una funzione. Il valore predefinito per un argomento deve essere un'espressione. Un elenco di inizializzatori, ad esempio quello utilizzato per inizializzare una struttura, non è un'espressione.  Per risolvere questo problema, definire un costruttore per eseguire l'inizializzazione richiesta.

L'esempio seguente genera l'C2059:

```cpp
// C2059b.cpp
// compile with: /c
struct ag_type {
   int a;
   float b;
   // Uncomment the following line to resolve.
   // ag_type(int aa, float bb) : a(aa), b(bb) {}
};

void func(ag_type arg = {5, 7.0});   // C2059
void func(ag_type arg = ag_type(5, 7.0));   // OK
```

C2059 può verificarsi per un cast con formato non valido.

L'esempio seguente genera l'C2059:

```cpp
// C2059c.cpp
// compile with: /clr
using namespace System;
ref class From {};
ref class To : public From {};

int main() {
   From^ refbase = gcnew To();
   To^ refTo = safe_cast<To^>(From^);   // C2059
   To^ refTo2 = safe_cast<To^>(refbase);   // OK
}
```

C2059 può verificarsi anche se si tenta di creare un nome di spazio dei nomi che contiene un punto.

L'esempio seguente genera l'C2059:

```cpp
// C2059d.cpp
// compile with: /c
namespace A.B {}   // C2059

// OK
namespace A  {
   namespace B {}
}
```

C2059 può verificarsi quando un operatore che può qualificare un nome (`::`, `->`e `.`) deve essere seguito dalla parola chiave `template`, come illustrato nell'esempio seguente:

```cpp
template <typename T> struct Allocator {
    template <typename U> struct Rebind {
        typedef Allocator<U> Other;
    };
};

template <typename X, typename AY> struct Container {
    typedef typename AY::Rebind<X>::Other AX; // error C2059
};
```

Per impostazione predefinita, in C++ si presuppone che `AY::Rebind` non è un modello; pertanto, `<` viene interpretato come segno minore di.  È necessario indicare al compilatore in modo esplicito che `Rebind` è un modello in modo da poter analizzare correttamente la parentesi angolare. Per correggere questo errore, utilizzare la parola chiave `template` sul nome del tipo dipendente, come illustrato di seguito:

```cpp
template <typename T> struct Allocator {
    template <typename U> struct Rebind {
        typedef Allocator<U> Other;
    };
};

template <typename X, typename AY> struct Container {
    typedef typename AY::template Rebind<X>::Other AX; // correct
};
```
