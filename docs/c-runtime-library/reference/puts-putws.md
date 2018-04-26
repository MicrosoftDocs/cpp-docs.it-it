---
title: puts, _putws | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _putws
- puts
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
- _putts
- _putws
- puts
dev_langs:
- C++
helpviewer_keywords:
- strings [C++], writing
- _putts function
- standard output, writing to
- putws function
- puts function
- putts function
- _putws function
ms.assetid: 32dada12-ed45-40ac-be06-3feeced9ecd6
caps.latest.revision: 15
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a823106478e575f9b2d65bc4e739236098da5124
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="puts-putws"></a>puts, _putws

Scrive una stringa in **stdout**.

## <a name="syntax"></a>Sintassi

```C
int puts(
   const char *str
);
int _putws(
   const wchar_t *str
);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Stringa di output.

## <a name="return-value"></a>Valore restituito

Restituisce un valore non negativo se ha esito positivo. Se **inserisce** ha esito negativo, viene restituito **EOF**; se **putws** non riesce, restituisce **WEOF**. Se *str* è un puntatore null, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, le funzioni impostano **errno** alla **EINVAL** e restituire **EOF** oppure **WEOF**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **inserisce** funzione scritture *str* il flusso di output standard **stdout**, sostituendo la stringa di carattere di terminazione null ('\0') con un carattere di nuova riga ('\n') nei flusso di output.

**putws** è la versione a caratteri "wide" di **inserisce**; le due funzioni si comportano in modo identico, se il flusso viene aperto in modalità ANSI. **Inserisce** attualmente non supporta output in un flusso UNICODE.

**putwch** scrive i caratteri Unicode utilizzando l'impostazione delle impostazioni locali di CONSOLE corrente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**putts**|**puts**|**puts**|**_putws**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**puts**|\<stdio.h>|
|**_putws**|\<stdio.h>|

La console non è supportata nelle app di piattaforma UWP (Universal Windows). Gli handle di flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="example"></a>Esempio

```C
// crt_puts.c
// This program uses puts to write a string to stdout.

#include <stdio.h>

int main( void )
{
   puts( "Hello world from puts!" );
}
```

### <a name="output"></a>Output

```Output
Hello world from puts!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fputs, fputws](fputs-fputws.md)<br/>
[fgets, fgetws](fgets-fgetws.md)<br/>
