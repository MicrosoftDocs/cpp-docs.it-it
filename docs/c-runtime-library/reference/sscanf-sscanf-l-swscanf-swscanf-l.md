---
title: sscanf, _sscanf_l, swscanf, _swscanf_l
ms.date: 11/04/2016
apiname:
- swscanf
- sscanf
- _sscanf_l
- _swscanf_l
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
apitype: DLLExport
f1_keywords:
- _sscanf_l
- _stscanf
- swscanf
- _stscanf_l
- sscanf
- _swscanf_l
helpviewer_keywords:
- swscanf function
- _stscanf function
- sscanf function
- _stscanf_l function
- _sscanf_l function
- _swscanf_l function
- swscanf_l function
- strings [C++], reading data from
- stscanf function
- reading data, strings
- strings [C++], reading
- sscanf_l function
- stscanf_l function
ms.assetid: c2dcf0d2-9798-499f-a4a8-06f7e2b9a80c
ms.openlocfilehash: 60dbb8e89e531c3020c243d998a69370095424e5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661968"
---
# <a name="sscanf-sscanfl-swscanf-swscanfl"></a>sscanf, _sscanf_l, swscanf, _swscanf_l

Legge i dati formattati da una stringa. Sono disponibili versioni più sicure di queste funzioni. Vedere [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md).

## <a name="syntax"></a>Sintassi

```C
int sscanf(
   const char *buffer,
   const char *format [,
   argument ] ...
);
int _sscanf_l(
   const char *buffer,
   const char *format,
   locale_t locale [,
   argument ] ...
);
int swscanf(
   const wchar_t *buffer,
   const wchar_t *format [,
   argument ] ...
);
int _swscanf_l(
   const wchar_t *buffer,
   const wchar_t *format,
   locale_t locale [,
   argument ] ...
);
```

### <a name="parameters"></a>Parametri

*buffer*<br/>
Dati archiviati

*format*<br/>
Stringa di controllo del formato. Per ulteriori informazioni, vedere [Specifiche di formato](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

*argomento*<br/>
Argomenti facoltativi

*locale*<br/>
Impostazioni locali da usare

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti ed assegnati correttamente; il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito sarà **EOF** per un errore o se viene raggiunta la fine della stringa prima della prima conversione.

Se *buffer* oppure *formato* è un **NULL** puntatore, il gestore di parametri non validi viene richiamato, come descritto nella [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono -1 e impostare **errno** al **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **sscanf** funzione legge i dati dal *buffer* nella posizione specificata da ogni *argomento*. Ogni *argomenti* deve essere un puntatore a una variabile con un tipo che corrisponde a un identificatore di tipo nelle *formato*. Il *formato* argomento controlla l'interpretazione dell'input campi e ha lo stesso formato e funzione come il *formato* argomento per il **scanf** (funzione). Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

> [!IMPORTANT]
> Durante la lettura di una stringa con **sscanf**, specificare sempre una larghezza per il **%s** formato (ad esempio **"% 32s"** anziché **"%s"**); in caso contrario , input formattato in modo errato può facilmente causare un sovraccarico del buffer.

**swscanf** è una versione a caratteri wide di **sscanf**; gli argomenti **swscanf** sono stringhe a caratteri wide. **sscanf** non gestisce caratteri esadecimali multibyte. **swscanf** non gestisce esadecimali a larghezza intera Unicode o caratteri "area di compatibilità". In caso contrario, **swscanf** e **sscanf** si comportano in modo identico.

Le versioni di queste funzioni con il **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passato anziché le impostazioni locali del thread corrente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**stscanf**|**sscanf**|**sscanf**|**swscanf**|
|**stscanf_l**|**_sscanf_l**|**_sscanf_l**|**_swscanf_l**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**sscanf**, **sscanf_l**|\<stdio.h>|
|**swscanf**, **swscanf_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_sscanf.c
// compile with: /W3
// This program uses sscanf to read data items
// from a string named tokenstring, then displays them.

#include <stdio.h>

int main( void )
{
   char  tokenstring[] = "15 12 14...";
   char  s[81];
   char  c;
   int   i;
   float fp;

   // Input various data from tokenstring:
   // max 80 character string:
   sscanf( tokenstring, "%80s", s ); // C4996
   sscanf( tokenstring, "%c", &c );  // C4996
   sscanf( tokenstring, "%d", &i );  // C4996
   sscanf( tokenstring, "%f", &fp ); // C4996
   // Note: sscanf is deprecated; consider using sscanf_s instead

   // Output the data read
   printf( "String    = %s\n", s );
   printf( "Character = %c\n", c );
   printf( "Integer:  = %d\n", i );
   printf( "Real:     = %f\n", fp );
}
```

```Output
String    = 15
Character = 1
Integer:  = 15
Real:     = 15.000000
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l](snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md)<br/>
