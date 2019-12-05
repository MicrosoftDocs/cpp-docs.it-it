---
title: Utilizzo di wmain anziché di main
ms.date: 11/04/2016
f1_keywords:
- wmain
helpviewer_keywords:
- main function, vs. wmain
- wmain function
ms.assetid: 7abb1257-b85c-413a-b913-d45b1582a71d
ms.openlocfilehash: f47d7219a54b197ec59f109cf08879774b48e6f7
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857216"
---
# <a name="using-wmain-instead-of-main"></a>Utilizzo di wmain anziché di main

**Sezione specifica Microsoft**

Nel modello di programmazione Unicode è possibile definire una versione a caratteri wide della funzione `main`. Utilizzare **wmain** invece di `main` se si desidera scrivere codice portabile conforme alla specifica Unicode.

I parametri formali vengono dichiarati in **wmain** usando un formato simile a `main`. È quindi possibile passare al programma argomenti a caratteri estesi e, se lo si desidera, un puntatore di ambiente a caratteri estesi. I parametri *argv* e *envp* per **wmain** sono di tipo `wchar_t*`.

Se il programma usa una funzione `main`, l'ambiente con caratteri multibyte viene creato dal sistema operativo all'avvio del programma. Una copia a caratteri estesi dell'ambiente viene creata solo quando necessario, ad esempio tramite una chiamata al [_wgetenv](../c-runtime-library/reference/getenv-wgetenv.md) o alle funzioni di [_wputenv](../c-runtime-library/reference/putenv-wputenv.md) . Alla prima chiamata a `_wputenv` o alla prima chiamata a `_wgetenv`, se esiste già un ambiente MBCS, verrà creato un ambiente corrispondente per una stringa a caratteri "wide". All'ambiente farà quindi riferimento la variabile globale `_wenviron`, una versione a caratteri "wide" della variabile globale `_environ`. A questo punto esistono allo stesso tempo due copie dell'ambiente, MBCS e Unicode, che vengono conservate dal sistema operativo per tutta la durata del programma.

Analogamente, se il programma utilizza una funzione **wmain** , viene creato un ambiente MBCS (ASCII) nella prima chiamata a `_putenv` o `getenv`e a cui fa riferimento la variabile globale `_environ`.

Per ulteriori informazioni sull'ambiente MBCS, vedere [set di caratteri a byte singolo e multibyte](../c-runtime-library/single-byte-and-multibyte-character-sets.md) in *riferimenti alla libreria di Runtime.*

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[main: avvio del programma](../cpp/main-program-startup.md)