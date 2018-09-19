---
title: Identificatore di classi di archiviazione extern | Microsoft Docs
ms.custom: ''
ms.date: 07/10/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- extern keyword [C]
- storage class specifiers, extern
- extern keyword [C], storage class specifier
- external linkage, storage-class specifiers
- external linkage, extern modifier
ms.assetid: 6e16d927-291f-49e4-986c-9d91a482a441
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 24f25116a955c83f8f3685b9646c3086238d306e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46020849"
---
# <a name="extern-storage-class-specifier"></a>Identificatore di classi di archiviazione extern

Una variabile dichiarata con l'identificatore di classe di archiviazione **extern** è un riferimento a una variabile con lo stesso nome, definita in un altro file di origine. Viene usata per rendere visibile la definizione della variabile a livello esterno. Una variabile dichiarata come **extern** non ha spazio di archiviazione allocato, ma è solo un nome.

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

In questo esempio, la variabile `i` è definita in Source1.c con un valore iniziale 1. Una dichiarazione **extern** in Source2.c rende 'i' visibile in tale file.

Nella funzione `func` l'indirizzo della variabile globale `i` viene usato per inizializzare la variabile puntatore **static** `external_i`. Questa operazione è possibile perché la variabile globale ha una durata **static**, pertanto il relativo indirizzo rimane invariato durante l'esecuzione del programma. Viene poi definita una variabile `i` all'interno dell'ambito di `func` come variabile locale con valore iniziale 16. Questa definizione non influisce sul valore di `i` a livello esterno, che viene nascosto mediante l'uso del nome per la variabile locale. Il valore della variabile globale `i` è ora accessibile solo tramite il puntatore `external_i`.

## <a name="see-also"></a>Vedere anche

[Identificatori di classi di archiviazione per dichiarazioni di livello interno](../c-language/storage-class-specifiers-for-internal-level-declarations.md)