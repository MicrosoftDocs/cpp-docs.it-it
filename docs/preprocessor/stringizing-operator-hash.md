---
description: 'Altre informazioni su: operatore per (#)'
title: Operatore per la creazione di stringhe (#)
ms.date: 08/29/2019
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
ms.openlocfilehash: 6b6f938e71e213e57fc6c4ec02b33da02e41ea2e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97136032"
---
# <a name="stringizing-operator-"></a>Operatore per la creazione di stringhe (#)

Il simbolo di cancelletto o l'operatore "per" ( **#** ) converte i parametri macro in valori letterali stringa senza espandere la definizione del parametro. Viene usato solo con macro che accettano argomenti. Se questo operatore precede un parametro formale nella definizione della macro, l'argomento effettivo passato alla chiamata della macro viene racchiuso tra virgolette singole e considerato come un valore letterale stringa. Il valore letterale stringa sostituisce quindi ogni occorrenza di una combinazione dell'operatore per la creazione di stringhe e del parametro formale nella definizione di macro.

> [!NOTE]
> L'estensione Microsoft C (versione 6.0 e precedenti) allo standard ANSI C che in precedenza espandeva gli argomenti formali di macro presenti in valori letterali stringa e in costanti carattere non è più supportata. Il codice che si basa su questa estensione deve essere riscritto usando l'operatore per ( **#** ).

Lo spazio vuoto che precede il primo token e segue l'ultimo token dell'argomento effettivo viene ignorato. Tutti gli spazi vuoti tra i token dell'argomento effettivo vengono ridotti a un singolo spazio vuoto nel valore letterale stringa risultante. Se quindi si verifica un commento tra due token nell'argomento effettivo, questo viene ridotto a un singolo spazio vuoto. Il valore letterale stringa risultante viene concatenato automaticamente a tutti i valori letterali stringa adiacenti separati solo da spazi vuoti.

Se, inoltre, un carattere contenuto nell'argomento richiede in genere una sequenza di escape quando viene usato in un valore letterale stringa, ad esempio il carattere virgoletta ( `"` ) o barra rovesciata ( `\` ), la barra rovesciata di escape necessaria viene inserita automaticamente prima del carattere.

L'operatore Microsoft C++ per non si comporta correttamente quando viene usato con stringhe che includono sequenze di escape. In questa situazione, il compilatore genera l' [errore del compilatore C2017](../error-messages/compiler-errors-1/compiler-error-c2017.md).

## <a name="examples"></a>Esempio

Nell'esempio seguente viene illustrata una definizione di macro che include l'operatore per e una funzione Main che richiama la macro:

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

## <a name="see-also"></a>Vedi anche

[Operatori del preprocessore](../preprocessor/preprocessor-operators.md)
