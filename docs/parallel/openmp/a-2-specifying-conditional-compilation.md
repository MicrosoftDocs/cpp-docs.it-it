---
title: A.2   Specifica della compilazione condizionale
ms.date: 11/04/2016
ms.assetid: de4a21b9-f987-4738-9f13-c4795f6f2dff
ms.openlocfilehash: 92ae22ffac1b1a1c3fc45a9a7a883203ff6d251e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50491221"
---
# <a name="a2---specifying-conditional-compilation"></a>A.2   Specifica della compilazione condizionale

Gli esempi seguenti illustrano l'uso di compilazione condizionale utilizzando la macro OpenMP `_OPENMP` ([sezione 2.2](../../parallel/openmp/2-2-conditional-compilation.md) nella pagina 8). Compilazione di OpenMP, con la `_OPENMP` macro viene definita.

```
# ifdef _OPENMP
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```

L'operatore del preprocessore definita consente più di una macro da sottoporre a test in una singola direttiva.

```
# if defined(_OPENMP) && defined(VERBOSE)
    printf_s("Compiled by an OpenMP-compliant implementation.\n");
# endif
```