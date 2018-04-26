---
title: gets_s, _getws_s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _getws_s
- gets_s
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
- _getws_s
- gets_s
dev_langs:
- C++
helpviewer_keywords:
- getws_s function
- _getws_s function
- lines, getting
- streams, getting lines
- buffers, avoiding overruns
- buffer overruns
- buffers, buffer overruns
- gets_s function
- standard input, reading from
ms.assetid: 5880c36f-122c-4061-a1a5-aeeced6fe58c
caps.latest.revision: 29
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: efd4e458fa71fd6dcd93d47350c998a4a410cc65
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="getss-getwss"></a>gets_s, _getws_s

Ottiene una riga dal **stdin** flusso. Queste versioni di [gets, _getws](../../c-runtime-library/gets-getws.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
char *gets_s(
   char *buffer,
   size_t sizeInCharacters
);
wchar_t *_getws_s(
   wchar_t *buffer,
   size_t sizeInCharacters
);
```

```cpp
template <size_t size>
char *gets_s( char (&buffer)[size] ); // C++ only

template <size_t size>
wchar_t *_getws_s( wchar_t (&buffer)[size] ); // C++ only
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Percorso di archiviazione per la stringa di input.

*sizeInCharacters*<br/>
Dimensione del buffer.

## <a name="return-value"></a>Valore restituito

Restituisce *buffer* se ha esito positivo. Un **NULL** puntatore indica una condizione di errore o la fine del file. Usare [ferror](ferror.md) o [feof](feof.md) per determinare la condizione che si è verificata.

## <a name="remarks"></a>Note

Il **gets_s** funzione legge una riga dal flusso di input standard **stdin** e lo archivia nel *buffer*. La riga è costituita da tutti i caratteri, incluso il primo carattere di nuova riga ('\n'). **gets_s** sostituisce quindi il carattere di nuova riga con un carattere null ('\0') prima di restituire la riga. Al contrario, il **fgets_s** carattere di nuova riga vengono mantenuti.

Se il primo carattere letto è il carattere di fine del file, un carattere null viene archiviato all'inizio della *buffer* e **NULL** viene restituito.

**getws_s** è una versione a caratteri wide **gets_s**; relativo argomento e il valore restituito sono stringhe a caratteri "wide".

Se *buffer* viene **NULL** oppure *sizeInCharacters* è minore o uguale a zero oppure se il buffer è troppo piccolo per contenere la riga di input e un carattere di terminazione null, queste funzioni richiamano un gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **NULL** e impostare errno su **ERANGE**.

In C++ l'utilizzo di queste funzioni è semplificato dagli overload dei modelli. Gli overload possono dedurre la lunghezza del buffer automaticamente (eliminando la necessità di specificare un argomento di dimensione) e possono sostituire automaticamente le funzioni precedenti e non sicure con le controparti più recenti e sicure. Per altre informazioni, vedere [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_getts_s**|**gets_s**|**gets_s**|**_getws_s**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**gets_s**|\<stdio.h>|
|**_getws_s**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app di piattaforma UWP (Universal Windows). Gli handle di flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_gets_s.c
// This program retrieves a string from the stdin and
// prints the same string to the console.

#include <stdio.h>

int main( void )
{
   char line[21]; // room for 20 chars + '\0'
   gets_s( line, 20 );
   printf( "The line entered was: %s\n", line );
}
```

```Input
Hello there!
```

```Output
The line entered was: Hello there!
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[gets, _getws](../../c-runtime-library/gets-getws.md)<br/>
[fgets, fgetws](fgets-fgetws.md)<br/>
[fputs, fputws](fputs-fputws.md)<br/>
[puts, _putws](puts-putws.md)<br/>
