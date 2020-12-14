---
description: 'Altre informazioni su: errore del compilatore C2002'
title: Errore del compilatore C2002
ms.date: 11/04/2016
f1_keywords:
- C2002
helpviewer_keywords:
- C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
ms.openlocfilehash: acf6e0679f2579d25d37ccf0c11965bc1d8b436a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298617"
---
# <a name="compiler-error-c2002"></a>Errore del compilatore C2002

costante carattere "wide" non valida

La costante carattere multibyte non è valida.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. La costante a caratteri wide contiene più byte del previsto.

1. L'intestazione standard STDDEF. h non è inclusa.

1. I caratteri Wide non possono essere concatenati con valori letterali stringa normali.

1. Una costante a caratteri "wide" deve essere preceduta dal carattere "L":

    ```
    L'mbconst'
    ```

1. Per Microsoft C++, gli argomenti di testo di una direttiva per il preprocessore devono essere ASCII. Ad esempio, la direttiva, `#pragma message(L"string")` , non è valida.
