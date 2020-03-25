---
title: Avviso del compilatore (livello 1) C4744
ms.date: 11/04/2016
f1_keywords:
- C4744
helpviewer_keywords:
- C4744
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
ms.openlocfilehash: 9f63da4acd87ef2bb0ba80df9e8c0e3e3db4bc79
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80185646"
---
# <a name="compiler-warning-level-1-c4744"></a>Avviso del compilatore (livello 1) C4744

' var ' ha un tipo diverso in ' file1' è file2':' tipo1' è tipo2'

Una variabile esterna a cui viene fatto riferimento o definita in due file ha tipi diversi in tali file.  Per risolvere il nome, impostare lo stesso tipo di definizioni oppure modificare il nome della variabile in uno dei file.

C4744 viene generato solo quando i file vengono compilati con/GL.  Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

> [!NOTE]
>  C4744 di solito si verifica nei file C++C (non), C++ perché in un nome di variabile è decorato con le informazioni sul tipo.  Quando l'esempio (sotto) viene compilato come C++, si otterrà l'errore del linker LNK2019.

## <a name="example"></a>Esempio

Questo esempio contiene la prima definizione.

```c
// C4744.c
// compile with: /c /GL
int global;
```

## <a name="example"></a>Esempio

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
