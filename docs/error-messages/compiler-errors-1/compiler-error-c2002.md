---
title: Errore del compilatore C2002
ms.date: 11/04/2016
f1_keywords:
- C2002
helpviewer_keywords:
- C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
ms.openlocfilehash: c37a9b94be837248c8025a4fc069d8a242128542
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80208247"
---
# <a name="compiler-error-c2002"></a>Errore del compilatore C2002

costante carattere "wide" non valida

La costante carattere multibyte non è valida.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. La costante a caratteri wide contiene più byte del previsto.

1. L'intestazione standard STDDEF. h non è inclusa.

1. I caratteri Wide non possono essere concatenati con valori letterali stringa normali.

1. Una costante a caratteri "wide" deve essere preceduta dal carattere "L":

    ```
    L'mbconst'
    ```

1. Per Microsoft C++, gli argomenti di testo di una direttiva per il preprocessore devono essere ASCII. La direttiva, ad esempio, `#pragma message(L"string")`non è valida.
