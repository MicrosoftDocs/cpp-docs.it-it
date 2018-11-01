---
title: Errore del compilatore C2002
ms.date: 11/04/2016
f1_keywords:
- C2002
helpviewer_keywords:
- C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
ms.openlocfilehash: 30f472aa7a9475a19eea0e92fe5c2ea0d54e382b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442848"
---
# <a name="compiler-error-c2002"></a>Errore del compilatore C2002

costante a caratteri "wide" non valida

La costante a caratteri multibyte non valida.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. La costante di caratteri "wide" contiene un numero maggiore di byte maggiore del previsto.

1. L'intestazione standard STDDEF. h non è incluso.

1. Caratteri "wide" non possono essere concatenati con i valori letterali stringa normali.

1. Una costante di caratteri "wide" deve essere preceduta dal carattere "L":

    ```
    L'mbconst'
    ```

1. Per Microsoft C++ gli argomenti di testo di una direttiva del preprocessore devono essere ASCII. Ad esempio, la direttiva `#pragma message(L"string")`, non è valido.