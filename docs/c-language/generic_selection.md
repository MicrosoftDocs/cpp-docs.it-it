---
title: Selezione generica (C11)
description: Descrive la parola chiave C11 _Generic utilizzata nel compilatore Microsoft Visual C
ms.date: 12/9/2020
helpviewer_keywords:
- _Generic keyword [C]
ms.openlocfilehash: de0e840c19186219d53800b9d008d7695b807bc1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97349417"
---
# <a name="generic-selection-c11"></a>Selezione generica (C11)

Usare la **`_Generic`** parola chiave per scrivere codice che seleziona un'espressione in fase di compilazione in base al tipo dell'argomento. È simile all'overload in C++, in cui il tipo dell'argomento seleziona la funzione da chiamare, ad eccezione del fatto che il tipo dell'argomento seleziona l'espressione da valutare.

Ad esempio, l'espressione `_Generic(42, int: "integer", char: "character", default: "unknown");` valuta il tipo di `42` e cerca il tipo corrispondente `int` nell'elenco. Viene trovato e restituito `"integer"` .

## <a name="syntax"></a>Sintassi

*`generic-selection`*:\
&nbsp;&nbsp;&nbsp;&nbsp;**`_Generic`** **(** *`assignment-expression`, `assoc-list`* **)**

*`assoc-list`*:\
&nbsp;&nbsp;&nbsp;&nbsp;*`association`*\
&nbsp;&nbsp;&nbsp;&nbsp;*`assoc-list`, `association`*

*`association`*:\
&nbsp;&nbsp;&nbsp;&nbsp;*`type-name`* : *`assignment-expression`*\
&nbsp;&nbsp;&nbsp;&nbsp;**`default`** : *`assignment-expression`*

Il primo *`assignment-expression`* viene chiamato espressione di controllo. Il tipo dell'espressione di controllo viene determinato in fase di compilazione e corrispondente *`assoc-list`* a per individuare l'espressione da valutare e restituire. L'espressione di controllo non viene valutata. Ad esempio, `_Generic(intFunc(), int: "integer", default: "error");` non comporta una chiamata in fase di esecuzione a `intFunc()` . 

Quando il tipo dell'espressione di controllo è determinato, `const` ,  `volatile` e `restrict` vengono rimossi prima della corrispondenza con *`assoc-list`* .

Le voci dell'oggetto `assoc-list` non selezionate non vengono valutate.

## <a name="constraints"></a>Vincoli

- *`assoc-list`* Impossibile specificare più volte lo stesso tipo.
- *`assoc-list`* Non può specificare tipi compatibili tra loro, ad esempio un'enumerazione e il tipo sottostante dell'enumerazione.
- Se una selezione generica non ha un valore predefinito, l'espressione di controllo deve avere un solo nome di tipo compatibile nell'elenco di associazioni generiche.

## <a name="example"></a>Esempio

Un modo per usare **`_Generic`** è in una macro. Il file di intestazione <tgmath. h> USA **_Generic** per chiamare la funzione Math corretta a seconda del tipo di argomento. Ad esempio, la macro per esegue il mapping di `cos()` una chiamata a con un valore float a `cosf()` , durante il mapping di una chiamata con un valore Double complesso a `ccos()` .

Nell'esempio seguente viene illustrato come scrivere una macro che identifichi il tipo di argomento passato. Produce `"unknown"` se nessuna voce in *`assoc-list`* corrisponde all'espressione di controllo:

```C
// Compile with /std:c11

#include <stdio.h>

/* Get a type name string for the argument x */
#define TYPE_NAME(X) _Generic((X), \
      int: "int", \
      char: "char", \
      double: "double", \
      default: "unknown")

int main()
{
    printf("Type name: %s\n", TYPE_NAME(42.42));

    // The following would result in a compile error because 
    // 42.4 is a double, doesn't match anything in the list, 
    // and there is no default.
    // _Generic(42.4, int: "integer", char: "character"));
}

/* Output:
Type name: double
*/

```

## <a name="see-also"></a>Vedi anche

[`/std` (Specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md)\
[Operazione matematiche generiche di tipo](../c-runtime-library/tgmath.md)