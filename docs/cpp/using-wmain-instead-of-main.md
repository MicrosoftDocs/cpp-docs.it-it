---
title: Utilizzo di wmain anziché di main
ms.date: 11/04/2016
f1_keywords:
- wmain
helpviewer_keywords:
- main function, vs. wmain
- wmain function
ms.assetid: 7abb1257-b85c-413a-b913-d45b1582a71d
ms.openlocfilehash: 8cdc986d1582d2b26f137e3147ce78bc83e9daca
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677760"
---
# <a name="using-wmain-instead-of-main"></a>Utilizzo di wmain anziché di main

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Nel modello di programmazione Unicode, è possibile definire una versione a caratteri wide del `main` (funzione). Uso **wmain** invece di `main` se si desidera scrivere codice portabile conforme alla specifica Unicode.

Si dichiarano i parametri formali **wmain** usando un formato simile a `main`. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. Il *argv* e *envp* parametri **wmain** sono di tipo `wchar_t*`.

Se il programma Usa una `main` (funzione), l'ambiente a caratteri multibyte verrà creato dal sistema operativo all'avvio del programma. Solo quando necessario, viene creata una copia di caratteri "wide" dell'ambiente (ad esempio, da una chiamata ai [wgetenv](../c-runtime-library/reference/getenv-wgetenv.md) oppure [wputenv](../c-runtime-library/reference/putenv-wputenv.md) funzioni). Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`. A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.

Analogamente, se il programma Usa un **wmain** funzione, viene creato un ambiente MBCS (ASCII) alla prima chiamata a `_putenv` o `getenv`, a cui fa riferimento il `_environ` (variabile globale).

Per altre informazioni sull'ambiente MBCS, vedere [a un byte e i set di caratteri Multibyte](../c-runtime-library/single-byte-and-multibyte-character-sets.md) nel *Run-Time Library Reference.*

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)