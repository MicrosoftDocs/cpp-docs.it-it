---
title: Riferimenti (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- objects [C++], referencing
- references [C++]
- references, to pointers
- declarations, references
- references, declaring
- referencing objects, declarator syntax
ms.assetid: 68156f7f-97a0-4b66-b26d-b25ade5e3bd8
ms.openlocfilehash: 8a771b8bfc067966c3c054700538ebf180a5eb23
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233613"
---
# <a name="references-c"></a>Riferimenti (C++)

Un riferimento, analogamente a un puntatore, archivia l'indirizzo di un oggetto che si trova in un'altra posizione in memoria. A differenza di un puntatore, dopo l'inizializzazione non è possibile impostare un riferimento in modo che indichi un oggetto diverso o che sia impostato su Null. Esistono due tipi di riferimento: i riferimenti lvalue che fanno riferimento a una variabile denominata e a riferimenti rvalue che fanno riferimento a un [oggetto temporaneo](../cpp/temporary-objects.md). L'operatore & indica un riferimento lvalue e l'operatore && significa un riferimento rvalue o un riferimento universale (rvalue o lvalue), a seconda del contesto.

È possibile dichiarare i riferimenti tramite la seguente sintassi:

> \[*Storage-Class-Specifiers*] \[ *CV-Qualifiers*] *Type-Specifiers* \[ *MS-Modifier*] espressione del *dichiaratore* \[ **=** *expression*]**;**

È possibile utilizzare qualsiasi dichiaratore valido che specifica un riferimento. A meno che il riferimento non sia un riferimento al tipo di funzione o di matrice, si applica la sintassi seguente semplificata:

> \[*Storage-Class-Specifiers*] \[ *CV-Qualifiers*] *Type-Specifiers* \[ **&** o **&&** ] \[ *CV-Qualifiers*] *identifier* \[ **=** *espressione*identificatore]**;**

I riferimenti vengono dichiarati tramite la seguente sequenza:

1. Gli identificatori di dichiarazione:

   - Identificatore della classe di archiviazione facoltativo.

   - **`const`** Qualificatori e/o **`volatile`** qualificatori.

   - Il tipo di identificatore: il nome di un tipo.

1. Dichiaratore:

   - Modificatore specifico di Microsoft facoltativo. Per ulteriori informazioni, vedere [modificatori specifici di Microsoft](../cpp/microsoft-specific-modifiers.md).

   - **&** Operatore o **&&** operatore.

   - Facoltativo **`const`** e/o **`volatile`** qualificatori.

   - Identificatore.

1. Inizializzatore facoltativo.

I form dei dichiaratori più complessi per i puntatori a matrici e funzioni si applicano anche ai riferimenti a matrici e funzioni. Per ulteriori informazioni, vedere [puntatori](../cpp/pointers-cpp.md).

Più dichiaratori e inizializzatori possono essere visualizzati in un elenco separato da virgola che segue un singolo identificatore di dichiarazione. Ad esempio:

```cpp
int &i;
int &i, &j;
```

I riferimenti, i puntatori e gli oggetti possono essere dichiarati insieme:

```cpp
int &ref, *ptr, k;
```

Un riferimento contiene l'indirizzo di un oggetto, ma dal punto di vista sintattico si comporta come un oggetto.

Nel seguente programma osservare come il nome dell'oggetto, `s` e il riferimento all'oggetto, `SRef`, possano essere utilizzati in modo identico nei programmi:

## <a name="example"></a>Esempio

```cpp
// references.cpp
#include <stdio.h>
struct S {
   short i;
};

int main() {
   S  s;   // Declare the object.
   S& SRef = s;   // Declare the reference.
   s.i = 3;

   printf_s("%d\n", s.i);
   printf_s("%d\n", SRef.i);

   SRef.i = 4;
   printf_s("%d\n", s.i);
   printf_s("%d\n", SRef.i);
}
```

```Output
3
3
4
4
```

## <a name="see-also"></a>Vedere anche

[Argomenti della funzione di tipo riferimento](../cpp/reference-type-function-arguments.md)<br/>
[La funzione di tipo riferimento restituisce](../cpp/reference-type-function-returns.md)<br/>
[Riferimenti a puntatori](../cpp/references-to-pointers.md)
