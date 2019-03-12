---
title: _pgmptr, _wpgmptr
ms.date: 11/04/2016
f1_keywords:
- pgmptr
- _pgmptr
- wpgmptr
- _wpgmptr
helpviewer_keywords:
- wpgmptr function
- _wpgmptr function
- _pgmptr function
- pgmptr function
ms.assetid: 4d44b515-0eff-4136-8bc4-684195f218f5
ms.openlocfilehash: 6991dfe90e58352b26d7c914e1601a68674b8a5b
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57749867"
---
# <a name="pgmptr-wpgmptr"></a>_pgmptr, _wpgmptr

Percorso del file eseguibile. Deprecate. Usare [_get_pgmptr](../c-runtime-library/reference/get-pgmptr.md) e [_get_wpgmptr](../c-runtime-library/reference/get-wpgmptr.md).

## <a name="syntax"></a>Sintassi

```
extern char *_pgmptr;
extern wchar_t *_wpgmptr;
```

## <a name="remarks"></a>Osservazioni

Quando un programma viene eseguito dall'interprete dei comandi (Cmd.exe), `_pgmptr` viene automaticamente inizializzato al percorso completo del file eseguibile. Ad esempio, se Hello.exe è in C:\BIN e C:\BIN nel percorso, `_pgmptr` è impostato su C:\BIN\Hello.exe quando si esegue:

```
C> hello
```

Quando un programma non viene eseguito dalla riga di comando, `_pgmptr` potrebbe essere inizializzato al nome del programma (il nome di base del file senza l'estensione di file) o a un nome file, un percorso relativo oppure un percorso completo.

`_wpgmptr` è l'equivalente a caratteri wide di `_pgmptr` da utilizzare con i programmi che utilizzano `wmain`.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_tpgmptr`|`_pgmptr`|`_pgmptr`|`_wpgmptr`|

## <a name="requirements"></a>Requisiti

|Variabile|Intestazione obbligatoria|
|--------------|---------------------|
|`_pgmptr`, `_wpgmptr`|\<stdlib.h>|

## <a name="example"></a>Esempio

Nel programma seguente viene illustrato l'utilizzo di `_pgmptr`.

```
// crt_pgmptr.c
// compile with: /W3
// The following program demonstrates the use of _pgmptr.
//
#include <stdio.h>
#include <stdlib.h>
int main( void )
{
   printf("The full path of the executing program is : %Fs\n",
     _pgmptr); // C4996
   // Note: _pgmptr is deprecated; use _get_pgmptr instead
}
```

È possibile utilizzare `_wpgmptr` modificando `%Fs` in `%S` e `main` in `wmain`.

## <a name="see-also"></a>Vedere anche

[Variabili globali](../c-runtime-library/global-variables.md)
