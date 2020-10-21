---
title: _Noreturn parola chiave e noreturn macro (C11)
description: Descrive la `_Noreturn` parola chiave e la `noreturn` macro.
ms.date: 10/19/2020
f1_keywords:
- _Noreturn_c
- noreturn
helpviewer_keywords:
- keywords [C]
ms.openlocfilehash: 68448d8b8c999c92fb240100c25048fa94a559b9
ms.sourcegitcommit: 19016630f9d35f365e9ba249e0f3617515d7ca33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/20/2020
ms.locfileid: "92274685"
---
# <a name="_noreturn-keyword-and-noreturn-macro-c11"></a>`_Noreturn` parola chiave e `noreturn` macro (C11)

La `_Noreturn` parola chiave è stata introdotta in C11. Indica al compilatore che la funzione a cui viene applicata non viene restituita al chiamante. Il compilatore sa che il codice che segue una chiamata a una `_Noreturn` funzione non è raggiungibile. Un esempio di funzione che non restituisce è [Abort](../c-runtime-library/reference/abort.md). Se è possibile che il flusso di controllo torni al chiamante, la funzione non deve avere l' `_Noreturn` attributo.

La parola chiave viene in genere utilizzata tramite la macro convenience, `noreturn` , fornita in <stdnoreturn. h>, che esegue il mapping alla `_Noreturn` parola chiave.

I vantaggi principali per l'utilizzo `_Noreturn` di (o l'equivalente `noreturn` ) sono l'intenzione della funzione di chiarire il codice per i lettori futuri e il rilevamento di codice non eseguibile in modo non intenzionale.

Una funzione contrassegnata `noreturn` non deve includere un tipo restituito perché non restituisce un valore al chiamante. Il valore dovrebbe essere `void`.

## <a name="example-using-noreturn-macro-and-_noreturn-keyword"></a>Esempio `noreturn` di utilizzo di macro e `_Noreturn ` parole chiave

Nell'esempio seguente vengono illustrati la `_Noreturn` parola chiave e la `noreturn` macro equivalente.

IntelliSense può generare un errore non corretto, `E0065` , se si usa la macro `noreturn` che è possibile ignorare. Non impedisce l'esecuzione dell'esempio.

```C
// Compile with Warning Level4 (/W4) and /std:c11
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

noreturn void fatal_error(void)
{
    exit(3);
}

_Noreturn void not_coming_back(void)
{
    puts("There's no coming back");
    fatal_error();
    return; // warning C4645 - function declared with noreturn has a return statement
}

void done(void)
{
    puts("We'll never get here");
}

int main(void)
{
    not_coming_back();
    done(); // warning c4702 - unreachable code

    return 0;
}
```

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-------------|---------------------|
|**`noreturn`**|\<stdnoreturn.h>|

## <a name="see-also"></a>Vedere anche

[/STD (specifica la versione standard del linguaggio)](../build/reference/std-specify-language-standard-version.md)\
[/W4 (specifica il livello di avviso)](../build/reference/compiler-option-warning-level.md)\
[Avviso di C4702](../error-messages\compiler-warnings\compiler-warning-level-4-c4702.md)\
[__declspec (noreturn)](../cpp/noreturn.md)
