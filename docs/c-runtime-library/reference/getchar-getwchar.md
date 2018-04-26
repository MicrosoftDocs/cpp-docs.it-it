---
title: getchar, getwchar | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- getchar
- getwchar
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- getwchar
- GetChar
dev_langs:
- C++
helpviewer_keywords:
- gettchar function
- characters, reading
- getwchar function
- _gettchar function
- standard input, reading from
ms.assetid: 19fda588-3e33-415c-bb60-dd73c028086a
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4ab9e7dfa0e42bcb6225917be991c43dd0f844da
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getchar-getwchar"></a>getchar, getwchar

Legge un carattere dall'input standard.

## <a name="syntax"></a>Sintassi

```C
int getchar();
wint_t getwchar();
```

## <a name="return-value"></a>Valore restituito

Restituisce il carattere letto. Per indicare un errore di lettura o una condizione di fine del file, **getchar** restituisce **EOF**, e **getwchar** restituisce **WEOF**. Per **getchar**, utilizzare **ferror** oppure **feof** per controllare l'errore o per la fine del file.

## <a name="remarks"></a>Note

Ogni routine legge un singolo carattere da **stdin** e incrementa il puntatore del file associato in modo da puntare al carattere successivo. **GetChar** corrisponde al [fgetchar](fgetc-fgetwc.md), ma viene implementato come una funzione che come macro.

Queste funzioni bloccano il thread chiamante e pertanto sono thread-safe. Per una versione che non blocca il thread, vedere [_getchar_nolock, _getwchar_nolock](getchar-nolock-getwchar-nolock.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**gettchar**|**getchar**|**getchar**|**getwchar**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**getchar**|\<stdio.h>|
|**getwchar**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app di piattaforma UWP (Universal Windows). Gli handle di flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_getchar.c
// Use getchar to read a line from stdin.

#include <stdio.h>

int main()
{
    char buffer[81];
    int i, ch;

    for (i = 0; (i < 80) && ((ch = getchar()) != EOF)
                         && (ch != '\n'); i++)
    {
        buffer[i] = (char) ch;
    }

    // Terminate string with a null character
    buffer[i] = '\0';
    printf( "Input was: %s\n", buffer);
}
```

```Output

This textInput was: This text
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
[fgetc, fgetwc](fgetc-fgetwc.md)<br/>
[_getch, _getwch](getch-getwch.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
[ungetc, ungetwc](ungetc-ungetwc.md)<br/>
