---
title: __argc, __argv, __wargv
description: Descrive le costanti globali della libreria di runtime Microsoft C __argc, __argve __wargv.
ms.date: 11/04/2016
api_name:
- __wargv
- __argv
- __argc
api_location:
- msvcrt120.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __argv
- __argc
- __wargv
helpviewer_keywords:
- __argv
- __wargv
- __argc
ms.assetid: 17001b0a-04ad-4762-b3a6-c54847f02d7c
no-loc:
- __argc
- __argv
- __wargv
- main
- wmain
ms.openlocfilehash: 86a22a7391c7bde34d7734631a2970a45851dda3
ms.sourcegitcommit: e93f3e6a110fe38bc642055bdf4785e620d4220f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2020
ms.locfileid: "76123981"
---
# <a name="opno-loc__argc-opno-loc__argv-opno-loc__wargv"></a>__argc, __argv, __wargv

La variabile globale `__argc` è un conteggio del numero di argomenti da riga di comando passati al programma. `__argv` è un puntatore a una matrice di caratteri a byte singolo o di stringhe di caratteri multibyte che includono gli argomenti del programma e `__wargv` è un puntatore a una matrice di stringhe di caratteri wide che contengono gli argomenti del programma. Queste variabili globali forniscono gli argomenti per `main` o `wmain`.

## <a name="syntax"></a>Sintassi

```C
extern int __argc;
extern char ** __argv;
extern wchar_t ** __wargv;
```

## <a name="remarks"></a>Note

In un programma che usa la funzione `main`, `__argc` e `__argv` vengono inizializzati all'avvio del programma con la riga di comando usata per l'avvio del programma. La riga di comando viene analizzata in singoli argomenti e i caratteri jolly vengono espansi. Il conteggio degli argomenti è assegnato a `__argc`, le stringhe di argomento sono allocate sull'heap e un puntatore alla matrice di argomenti è assegnato a `__argv`. In un programma compilato per l'uso di caratteri wide e di una funzione `wmain`, gli argomenti sono analizzati, i caratteri jolly sono espansi come stringhe di caratteri wide e un puntatore alla matrice di stringhe di argomento è assegnato a `__wargv`.

Nel caso del codice portabile, è consigliabile usare gli argomenti passati a `main` per ottenere gli argomenti da riga di comando nel programma.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine Tchar.h|_UNICODE non definito|_UNICODE definito|
|---------------------|---------------------------|-----------------------|
|`__targv`|`__argv`|`__wargv`|

## <a name="requirements"></a>Requisiti di

|Variabile globale|Intestazione obbligatoria|
|---------------------|---------------------|
|`__argc`, `__argv`, `__wargv`|\<stdlib.h>, \<cstdlib> (C++)|

`__argc`, `__argv` e `__wargv` sono estensioni Microsoft. Per informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Variabili globali](../c-runtime-library/global-variables.md)\
[main funzione e argomenti della riga di comandoC++()](../cpp/main-function-command-line-args.md)\
[Utilizzo di wmain anziché main](../cpp/using-wmain-instead-of-main.md)
