---
title: Operatore per la creazione di stringhe (#)
ms.date: 11/04/2016
f1_keywords:
- '#'
helpviewer_keywords:
- preprocessor, operators
- arguments [C++], converting to strings
- stringizing operator
- preprocessor
- string literals, converting macro parameters to
- macros [C++], converting parameters to strings
- '# preprocessor operator'
ms.assetid: 1175dd19-4538-43b3-ad97-a008ab80e7b1
ms.openlocfilehash: d90d07c8f3cce6c443be0eb994db494746c00fcc
ms.sourcegitcommit: 40ffe764244784c715b086c79626ac390b855d47
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2019
ms.locfileid: "68711145"
---
# <a name="stringizing-operator-"></a>Operatore per la creazione di stringhe (#)

Il simbolo di cancelletto o l'operatore "per **#** " () converte i parametri macro in valori letterali stringa senza espandere la definizione del parametro. Tale operatore viene utilizzato solo con le macro che accetta argomenti. Se questo operatore precede un parametro formale nella definizione della macro, l'argomento effettivo passato alla chiamata della macro viene racchiuso tra virgolette singole e considerato come un valore letterale stringa. Il valore letterale stringa sostituisce quindi ogni occorrenza di una combinazione dell'operatore per la creazione di stringhe e del parametro formale nella definizione di macro.

> [!NOTE]
> L'estensione Microsoft C (versione 6.0 e precedenti) allo standard ANSI C che in precedenza espandeva gli argomenti formali di macro presenti in valori letterali stringa e in costanti carattere non è più supportata. Il codice che si basa su questa estensione deve essere riscritto usando l'operatore **#** per ().

Lo spazio vuoto che precede il primo token dell'argomento effettivo e che segue l'ultimo token dell'argomento effettivo viene ignorato. Tutti gli spazi vuoti tra i token dell'argomento effettivo vengono ridotti a un singolo spazio vuoto nel valore letterale stringa risultante. Di conseguenza, se tra due token nell'argomento effettivo è presente un commento, quest'ultimo viene ridotto a un singolo spazio vuoto. Il valore letterale stringa risultante verrà automaticamente concatenato con tutti i valori letterali stringa adiacenti da cui è separato solo da spazi vuoti.

Se, inoltre, un carattere contenuto nell'argomento richiede in genere una sequenza di escape se utilizzata in un valore letterale stringa, ad esempio le virgolette ( **"** ) **\\** o il carattere barra rovesciata (), la barra rovesciata di escape necessaria viene inserita automaticamente. prima del carattere.

L'operatore C++ Visual per non si comporta correttamente quando viene usato con stringhe che includono sequenze di escape. In questa situazione, il compilatore genera l' [errore del compilatore C2017](../error-messages/compiler-errors-1/compiler-error-c2017.md).

## <a name="examples"></a>Esempi

Nell'esempio seguente vengono illustrate una definizione di macro che include l'operatore per la creazione di stringhe e una funzione principale che richiama la macro:

```cpp
// stringizer.cpp
#include <stdio.h>
#define stringer( x ) printf_s( #x "\n" )
int main() {
   stringer( In quotes in the printf function call );
   stringer( "In quotes when printed to the screen" );
   stringer( "This: \"  prints an escaped double quote" );
}
```

Le `stringer` macro vengono espanse durante la pre-elaborazione, producendo il codice seguente:

```cpp
int main() {
   printf_s( "In quotes in the printf function call" "\n" );
   printf_s( "\"In quotes when printed to the screen\"" "\n" );
   printf_s( "\"This: \\\" prints an escaped double quote\"" "\n" );
}
```

```Output
In quotes in the printf function call
"In quotes when printed to the screen"
"This: \"  prints an escaped double quote"
```

Nell'esempio di codice seguente viene mostrato come è possibile espandere un parametro di macro:

```cpp
// stringizer_2.cpp
// compile with: /E
#define F abc
#define B def
#define FB(arg) #arg
#define FB1(arg) FB(arg)
FB(F B)
FB1(F B)
```

## <a name="see-also"></a>Vedere anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)
