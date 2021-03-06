---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4744'
title: Avviso del compilatore (livello 1) C4744
ms.date: 11/04/2016
f1_keywords:
- C4744
helpviewer_keywords:
- C4744
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
ms.openlocfilehash: d7be7c44d0e5abb1d0e3618ffa6ed1778a6410c7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228456"
---
# <a name="compiler-warning-level-1-c4744"></a>Avviso del compilatore (livello 1) C4744

' var ' ha un tipo diverso in ' file1' è file2':' tipo1' è tipo2'

Una variabile esterna a cui viene fatto riferimento o definita in due file ha tipi diversi in tali file.  Per risolvere il nome, impostare lo stesso tipo di definizioni oppure modificare il nome della variabile in uno dei file.

C4744 viene generato solo quando i file vengono compilati con/GL.  Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

> [!NOTE]
> C4744 di solito si verifica nei file C (non C++), perché in C++ un nome di variabile è decorato con le informazioni sul tipo.  Quando l'esempio (sotto) viene compilato come C++, si otterrà l'errore del linker LNK2019.

## <a name="examples"></a>Esempio

Questo esempio contiene la prima definizione.

```c
// C4744.c
// compile with: /c /GL
int global;
```

L'esempio seguente genera l'C4744.

```c
// C4744b.c
// compile with: C4744.c /GL /W1
// C4744 expected
#include <stdio.h>

extern unsigned global;

main()
{
    printf_s("%d\n", global);
}
```
