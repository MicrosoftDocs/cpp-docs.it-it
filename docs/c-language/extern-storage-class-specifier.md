---
description: 'Altre informazioni su: extern Storage-Class specifier'
title: Identificatore di classi di archiviazione extern
ms.date: 07/10/2018
helpviewer_keywords:
- extern keyword [C]
- storage class specifiers, extern
- extern keyword [C], storage class specifier
- external linkage, storage-class specifiers
- external linkage, extern modifier
ms.assetid: 6e16d927-291f-49e4-986c-9d91a482a441
ms.openlocfilehash: f3a4a583f21809761878a060a3131a000f57915f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196308"
---
# <a name="extern-storage-class-specifier"></a>Identificatore di classi di archiviazione extern

Una variabile dichiarata con l' **`extern`** identificatore della classe di archiviazione è un riferimento a una variabile con lo stesso nome definito in un altro file di origine. Viene usata per rendere visibile la definizione della variabile a livello esterno. Una variabile dichiarata come **`extern`** non dispone di spazio di archiviazione allocato per se stesso; è solo un nome.

## <a name="example"></a>Esempio

In questo esempio sono illustrate le dichiarazioni a livello interno e a livello esterno:

```c

// Source1.c

int i = 1;

// Source2. c

#include <stdio.h>

// Refers to the i that is defined in Source1.c:
extern int i;

void func(void);

int main()
{
    // Prints 1:
    printf_s("%d\n", i);
    func();
    return;
}

void func(void)
{
    // Address of global i assigned to pointer variable:
    static int *external_i = &i;

    // This definition of i hides the global i in Source.c:
    int i = 16;

    // Prints 16, 1:
    printf_s("%d\n%d\n", i, *external_i);
}
```

In questo esempio, la variabile `i` è definita in Source1.c con un valore iniziale 1. Una **`extern`** dichiarazione in source2. c rende visibile ' i ' in tale file.

Nella `func` funzione l'indirizzo della variabile globale `i` viene usato per inizializzare la **`static`** variabile puntatore `external_i` . Questa operazione funziona perché la variabile globale ha una durata, il che significa che l' **`static`** indirizzo non cambia durante l'esecuzione del programma. Viene poi definita una variabile `i` all'interno dell'ambito di `func` come variabile locale con valore iniziale 16. Questa definizione non influisce sul valore di `i` a livello esterno, che viene nascosto mediante l'uso del nome per la variabile locale. Il valore della variabile globale `i` è ora accessibile solo tramite il puntatore `external_i`.

## <a name="see-also"></a>Vedi anche

[Identificatori di classi di archiviazione per dichiarazioni di Internal-Level](../c-language/storage-class-specifiers-for-internal-level-declarations.md)
