---
title: Avviso del compilatore (livello 4) C4471
ms.date: 04/24/2017
f1_keywords:
- C4471
helpviewer_keywords:
- C4471
ms.assetid: ccfd8bd5-bc1b-4be7-a6ea-0e3a7add6607
ms.openlocfilehash: 5b8c3ef419a4c6eaf9a674827cd5545a1f1b2bfe
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90685502"
---
# <a name="compiler-warning-level-4-c4471"></a>Avviso del compilatore (livello 4) C4471

'*Enumeration*': una dichiarazione con stato di un'enumerazione senza ambito deve avere un tipo sottostante (presupposto int)

È stata trovata una dichiarazione con stato di un'enumerazione senza ambito senza un identificatore per il tipo sottostante. Per impostazione predefinita, Visual C++ presuppone che **`int`** sia il tipo sottostante per un'enumerazione. Ciò può causare problemi se nella definizione di enumerazione viene utilizzato un tipo diverso, ad esempio se viene specificato un tipo esplicito diverso o se un tipo diverso viene impostato in modo implicito da un inizializzatore. È anche possibile che si verifichino problemi di portabilità; altri compilatori non presumono **`int`** è il tipo sottostante di un'enumerazione.

Questo avviso è disattivato per impostazione predefinita; è possibile usare/Wall o/w*N*4471 per abilitarlo nella riga di comando o usare #pragma [avviso](../../preprocessor/warning.md) nel file di origine.

## <a name="examples"></a>Esempi

In alcuni casi, questo avviso è false. Se una dichiarazione con il valore di un'enumerazione viene visualizzata dopo la definizione, è possibile che venga generato questo avviso. Questo codice, ad esempio, è valido anche se può causare C4471:

```cpp
// C4471a.cpp
// Compile with: cl /c /w14471 C4471a.cpp
enum Example { item = 0x80000000UL };
enum Example;    // Spurious C4471
// ...
```

In generale, è possibile usare la definizione completa per un'enumerazione senza ambito anziché una dichiarazione in diretta. È possibile inserire la definizione in un file di intestazione e includerla nei file di origine che vi fanno riferimento. Funziona nel codice scritto per C++ 98 e versioni successive. Questa soluzione è consigliata per la portabilità e la facilità di manutenzione.

```cpp
// C4471b.cpp
// Compile with: cl /c /w14471 C4471b.cpp
enum Example;    // C4471
// To fix, replace the line above with the enumeration definition:
// enum Example { item = 0x80000000UL };
// ...
```

In C++ 11 è possibile aggiungere un tipo esplicito a un'enumerazione senza ambito e alla relativa dichiarazione in diretta. Questa soluzione è consigliata solo se la logica di inclusione di intestazioni complesse impedisce l'uso della definizione anziché di una dichiarazione in diretta. Questa soluzione può causare un problema di manutenzione: se si modifica il tipo sottostante usato per la definizione di enumerazione, è necessario modificare anche tutte le dichiarazioni con esecuzione in modo che corrispondano oppure è possibile che nel codice si siano verificati errori non visibili. Per ridurre al minimo questo problema, è possibile inserire la dichiarazione in un file di intestazione.

```cpp
// C4471c.cpp
// Client code for enumeration defined in C4471d.cpp
// Compile with: cl /c /w14471 C4471c.cpp C4471d.cpp
enum Example;    // C4471, int assumed
// To fix, replace the lines above with the forward declarations:
// enum Example : unsigned;
// ...
```

```cpp
// C4471d.cpp
// Definition for enumeration used in C4471c.cpp
// Compile with: cl /c /w14471 C4471c.cpp C4471d.cpp
enum Example : unsigned { item = 0x80000000 }; // explicit type
// ...
```

Se si specifica un tipo esplicito per un'enumerazione, è consigliabile abilitare anche l'avviso [C4369](compiler-warning-level-1-C4369.md), che è attivato per impostazione predefinita. Identifica i casi in cui un elemento di enumerazione richiede un tipo diverso dal tipo specificato in modo esplicito.

È possibile modificare il codice per utilizzare un'enumerazione con ambito, una nuova funzionalità di C++ 11. Sia la definizione che qualsiasi codice client che usa il tipo di enumerazione devono essere modificate in modo da usare un'enumerazione con ambito. Si consiglia di usare un'enumerazione con ambito se si verificano problemi con l'inquinamento dello spazio dei nomi, in quanto i nomi degli elementi di enumerazione definiti sono limitati all'ambito dell'enumerazione. Un'altra funzionalità di un'enumerazione con ambito è che i relativi membri non possono essere convertiti in modo implicito in un altro tipo integrale o di enumerazione, che può essere un'origine di bug delicati.

```cpp
// C4471e.cpp
// Client code for scoped enumeration defined in C4471f.cpp
// Compile with: cl /c /w14471 C4471e.cpp C4471f.cpp
enum Example;    // C4471
// To fix, replace the line above with the forward declaration:
// enum class Example;
// ...
```

```cpp
// C4471f.cpp
// Definition for scoped enumeration used in C4471e.cpp
// Compile with: cl /c /w14471 C4471e.cpp C4471f.cpp
enum class Example { item = 0 };
// ...
```
