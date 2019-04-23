---
title: Avviso del compilatore (livello 4) C4754
ms.date: 11/04/2016
f1_keywords:
- C4754
helpviewer_keywords:
- C4754
ms.assetid: e0e4606a-754a-4f42-a274-21a34978d21d
ms.openlocfilehash: 203f2b97547c7ff8b1d68e3640e62d531b2600e9
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59779388"
---
# <a name="compiler-warning-level-4-c4754"></a>Avviso del compilatore (livello 4) C4754

Le regole di conversione per operazioni aritmetiche in un confronto indicano che un ramo non può essere eseguito.

Dal momento che il risultato del confronto è sempre lo stesso viene generato l'avviso C4754. Questo indica che uno dei rami della condizione non viene mai eseguito, molto probabilmente perché l'espressione Integer collegata non è corretta. Tale errore del codice si verifica spesso nei controlli dell'overflow Integer nelle architetture a 64 bit.

Le regole di conversione degli Integer sono complesse ed esistono molte insidie sottili. Come alternativa a correggere ogni avviso C4754, è possibile aggiornare il codice per usare la [Libreria SafeInt](../../safeint/safeint-library.md).

## <a name="example"></a>Esempio

In questo esempio genera l'errore C4754:

```cpp
// C4754a.cpp
// Compile with: /W4 /c
#include "errno.h"

int sum_overflow(unsigned long a, unsigned long b)
{
   unsigned long long x = a + b; // C4754

   if (x > 0xFFFFFFFF)
   {
      // never executes!
      return EOVERFLOW;
   }
   return 0;
}
```

L'addizione `a + b` potrebbe provocare un overflow aritmetico prima che il risultato subisca l'upcast a un valore a 64 bit e venga assegnato ad una variabile a 64 bit `x`. Ciò significa che il controllo su `x` è ridondante e non rileverà mai un overflow. In questo caso, il compilatore genera questo avviso:

```Output
Warning C4754: Conversion rules for arithmetic operations in the comparison at C4754a.cpp (7) mean that one branch cannot be executed. Cast '(a + ...)' to 'ULONG64' (or similar type of 8 bytes).
```

Per eliminare l'avviso, è possibile modificare l'istruzione di assegnazione per eseguire il cast degli operandi a valori di 8 byte:

```cpp
// Casting one operand is sufficient to force all the operands in
// the addition be upcast according to C/C++ conversion rules, but
// casting both is clearer.
unsigned long long x =
   (unsigned long long)a + (unsigned long long)b;
```

## <a name="example"></a>Esempio

Anche l'esempio seguente genera l'errore C4754.

```cpp
// C4754b.cpp
// Compile with: /W4 /c
#include "errno.h"

int wrap_overflow(unsigned long a)
{
   if (a + sizeof(unsigned long) < a) // C4754
   {
      // never executes!
      return EOVERFLOW;
   }
   return 0;
}
```

L'operatore `sizeof()` restituisce `size_t`, la cui dimensione è dipendente dall'architettura in uso. Il codice di esempio funziona nelle architetture a 32 bit in cui `size_t` è un tipo a 32 bit. Tuttavia, nelle architetture a 64 bit, `size_t` è un tipo a 64 bit. Le regole di conversione per Integer indicano che `a` subisce l'upcast a un valore a 64 bit nell'espressione `a + b < a` come se fosse scritto `(size_t)a + (size_t)b < (size_t)a`. Quando `a` e `b` sono Integer a 32 bit, l'operazione di addizione a 64 bit non può mai generare un overflow e mantenere il vincolo. Di conseguenza, il codice non rileva mai alcun overflow di Integer nelle architetture a 64 bit. L'esempio fa sì che il compilatore generi questo avviso:

```Output
Warning C4754: Conversion rules for arithmetic operations in the comparison at C4754b.cpp (7) mean that one branch cannot be executed. Cast '4' to 'ULONG' (or similar type of 4 bytes).
```

Si noti che il messaggio di avviso elenca in modo esplicito il valore costante 4 anziché la stringa di origine originale perché quando l'analisi dell'avviso rileva il codice che crea il problema, `sizeof(unsigned long)` è già stato convertito in costante. Pertanto, è possibile che si debba individuare quale espressione nel codice sorgente sia associata al valore costante nel messaggio di avviso. Le origini di codice più comuni risolte in costanti nei messaggi di avviso C4754 sono espressioni come `sizeof(TYPE)` e `strlen(szConstantString)`.

In questo caso, il codice corretto sarà simile alla seguente:

```cpp
// Casting the result of sizeof() to unsigned long ensures
// that all the addition operands are 32-bit, so any overflow
// is detected by the check.
if (a + (unsigned long)sizeof(unsigned long) < a)
```

**Nota** il numero di riga indicato negli avvisi del compilatore è l'ultima riga di un'istruzione. In un messaggio di avviso relativo a un'istruzione condizionale complessa suddivisa su più righe, la riga che effettivamente presenta l'errore del codice può essere una delle righe prima della riga segnalata. Ad esempio:

```cpp
unsigned long a;

if (a + sizeof(unsigned long) < a || // incorrect check
    condition1() ||
    a == 0) {    // C4754 warning reported on this line
         // never executes!
         return INVALID_PARAMETER;
}
```