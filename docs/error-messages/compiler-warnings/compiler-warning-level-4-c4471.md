---
title: Compilatore avviso (livello 4) C4471 | Microsoft Docs
ms.custom: ''
ms.date: 04/24/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4471
dev_langs:
- C++
helpviewer_keywords:
- C4471
ms.assetid: ccfd8bd5-bc1b-4be7-a6ea-0e3a7add6607
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4bcbeafb6952bc40f7fb67c6a0baa2e90051d3ca
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46023358"
---
# <a name="compiler-warning-level-4-c4471"></a>Compilatore avviso (livello 4) C4471

«*enumerazione*': una dichiarazione con prototipo di un'enumerazione senza ambita deve presentare un tipo sottostante (presupposto int)

Una dichiarazione con prototipo di un'enumerazione senza ambita è stata trovata senza un identificatore per il tipo sottostante. Per impostazione predefinita, si presuppone che Visual C++ `int` è il tipo sottostante per un'enumerazione. Ciò può causare problemi se un tipo diverso è utilizzato nella definizione di enumerazione, ad esempio, se viene specificato un diverso tipo esplicito, o se un tipo diverso è impostato in modo implicito da un inizializzatore. L'utente potrebbe avere problemi di portabilità; altri compilatori non presuppongono `int` è il tipo sottostante di un'enumerazione.

Questo avviso è disattivato per impostazione predefinita. è possibile usare /Wall o /w*N*4471 per abilitarla nella riga di comando oppure usare #pragma [avviso](../../preprocessor/warning.md) nel file di origine.

In alcuni casi, questo avviso è spurio. Se una dichiarazione con prototipo per un'enumerazione viene visualizzata dopo la definizione, questo avviso possono essere attivati. Ad esempio, questo codice è valido, anche se potrebbe causare C4471:

```cpp
// C4471a.cpp
// Compile with: cl /c /w14471 C4471a.cpp
enum Example { item = 0x80000000UL };
enum Example;    // Spurious C4471
// ...
```

## <a name="example"></a>Esempio

In generale, è consigliabile utilizzare la definizione completa per un'enumerazione senza ambito invece di una dichiarazione con prototipo. È possibile inserire la definizione in un file di intestazione e includerla nel file di origine che fa riferimento a esso. Può essere il codice scritto per c++98 e versioni successive. Si consiglia di questa soluzione per la portabilità e la facilità di manutenzione.

```cpp
// C4471b.cpp
// Compile with: cl /c /w14471 C4471b.cpp
enum Example;    // C4471
// To fix, replace the line above with the enumeration definition:
// enum Example { item = 0x80000000UL };
// ...
```

## <a name="example"></a>Esempio

In c++11, è possibile aggiungere un tipo esplicito per un'enumerazione senza ambito e alla relativa dichiarazione con prototipo. Questa soluzione è consigliabile solo se la logica di inclusione dell'intestazione complessi impedisce l'uso della definizione di invece di una dichiarazione con prototipo. Questa soluzione può causare un problema di manutenzione: se si modifica il tipo sottostante usato per la definizione di enumerazione, è necessario modificare anche tutte le dichiarazioni con prototipo in modo che corrispondano o potrebbe essere invisibile all'utente errori nel codice. È possibile inserire la dichiarazione con prototipo in un file di intestazione per ridurre al minimo questo problema.

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

Se si specifica un tipo esplicito per un'enumerazione, è consigliabile si abilita anche l'avviso [C4369](compiler-warning-level-1-C4369.md), che è attivata per impostazione predefinita. Identifica i casi in cui un elemento di enumerazione richiede un tipo diverso rispetto al tipo specificato in modo esplicito.

## <a name="example"></a>Esempio

È possibile modificare il codice per usare un'enumerazione con ambito, una funzionalità che è stato introdotta in c++11. La definizione e codice client che utilizza il tipo di enumerazione deve essere modificati per usare un'enumerazione con ambito. È consigliabile che usare un'enumerazione con ambito se hai problemi con inquinamento dello spazio dei nomi, come i nomi degli elementi di enumerazione definiti sono limitati all'ambito dell'enumerazione. Un'altra funzionalità di un'enumerazione con ambito è che i relativi membri non possono essere convertiti implicitamente in un altro tipo integrale o enumerazione, può essere fonte di bug.

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

