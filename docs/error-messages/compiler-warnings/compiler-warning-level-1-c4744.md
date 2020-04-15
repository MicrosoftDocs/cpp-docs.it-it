---
title: Avviso del compilatore (livello 1) C4744
ms.date: 11/04/2016
f1_keywords:
- C4744
helpviewer_keywords:
- C4744
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
ms.openlocfilehash: f932b1bcdf011678d4f85e0edf1e116a954b59fe
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367374"
---
# <a name="compiler-warning-level-1-c4744"></a>Avviso del compilatore (livello 1) C4744

'var' ha un tipo diverso in 'file1' e 'file2': 'tipo1' e 'tipo2'

Una variabile esterna a cui viene fatto riferimento o definita in due file ha tipi diversi in tali file.  Per risolvere il problema, rendere uguali le definizioni dei tipi oppure modificare il nome della variabile in uno dei file.

L'operazione C4744 viene generata solo quando i file vengono compilati con /GL.  Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

> [!NOTE]
> L'errore C4744 si verifica in genere nei file C (non in C) , perché in C, un nome di variabile è decorato con informazioni sul tipo.  Quando l'esempio (sotto) viene compilato come C , si otterrà l'errore del linker LNK2019.

## <a name="example"></a>Esempio

Questo esempio contiene la prima definizione.

```c
// C4744.c
// compile with: /c /GL
int global;
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene generato l'errore C4744.

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
