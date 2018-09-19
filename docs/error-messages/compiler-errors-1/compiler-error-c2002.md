---
title: Errore del compilatore C2002 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2002
dev_langs:
- C++
helpviewer_keywords:
- C2002
ms.assetid: 91982314-203a-4de1-b884-94e39a623f61
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b87a7fe1513c695344676624ae1968060097c885
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116919"
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