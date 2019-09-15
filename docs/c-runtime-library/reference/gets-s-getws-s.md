---
title: gets_s, _getws_s
ms.date: 11/04/2016
api_name:
- _getws_s
- gets_s
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _getws_s
- gets_s
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
ms.openlocfilehash: f282b4e8de12185a19e07374cf565788dc549136
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70954965"
---
# <a name="gets_s-_getws_s"></a>gets_s, _getws_s

Ottiene una riga dal flusso **stdin** . Queste versioni di [gets, _getws](../../c-runtime-library/gets-getws.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

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

Restituisce il *buffer* in caso di esito positivo. Un puntatore **NULL** indica una condizione di errore o di fine file. Usare [ferror](ferror.md) o [feof](feof.md) per determinare quella che si è verificata.

## <a name="remarks"></a>Note

La funzione **gets_s** legge una riga dal flusso di input standard **stdin** e la archivia nel *buffer*. La riga è costituita da tutti i caratteri, incluso il primo carattere di nuova riga ('\n'). **gets_s** sostituisce quindi il carattere di nuova riga con un carattere null (' \ 0') prima di restituire la riga. Al contrario, la funzione **fgets_s** mantiene il carattere di nuova riga.

Se il primo carattere letto è il carattere di fine del file, viene archiviato un carattere null all'inizio del *buffer* e viene restituito **null** .

**_getws_s** è una versione a caratteri wide di **gets_s**; il relativo argomento e il valore restituito sono stringhe a caratteri wide.

Se il *buffer* è **null** o *sizeInCharacters* è minore o uguale a zero oppure se il buffer è troppo piccolo per contenere la riga di input e il carattere di terminazione null, queste funzioni richiamano un gestore di parametri non validi, come descritto in [Parameter Convalida](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **null** e impostano errno su **ERANGE**.

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

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Gli handle del flusso standard associati alla console, **stdin**, **stdout**e **stderr**devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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
