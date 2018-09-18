---
title: Compilatore avviso (livello 1) C4744 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4744
dev_langs:
- C++
helpviewer_keywords:
- C4744
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1754977486327e06fb56a786be523c1b2fb7b917
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068975"
---
# <a name="compiler-warning-level-1-c4744"></a>Avviso del compilatore (livello 1) C4744

'var' ha un tipo diverso in "file1" e "file2": 'type1' e 'type2'

Una variabile esterna riferimenti o definizione in due file ha tipi diversi in tali file.  Per risolvere, apportare le definizioni di tipo uguale o modificare il nome di variabile in un file.

C4744 viene generato solo quando i file vengono compilati con /GL  Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).

> [!NOTE]
>  C4744 si verifica in genere nei file di C (C++ non), perché in C++ un nome di variabile è decorato con le informazioni sul tipo.  Quando l'esempio (sotto) viene compilato come C++, si otterrà un errore del linker LNK2019.

## <a name="example"></a>Esempio

In questo esempio contiene la prima definizione.

```
// C4744.c
// compile with: /c /GL
int global;
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4744.

```
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