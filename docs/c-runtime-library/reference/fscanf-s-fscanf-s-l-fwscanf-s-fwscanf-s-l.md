---
title: fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l
ms.date: 11/04/2016
apiname:
- fwscanf_s
- _fscanf_s_l
- _fwscanf_s_l
- fscanf_s
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
- _fwscanf_s_l
- _fscanf_s_l
- fscanf_s
- _ftscanf_s_l
- _ftscanf_s
- fwscanf_s
helpviewer_keywords:
- formatted data [C++], reading from streams
- _ftscanf_s_l function
- _fscanf_s_l function
- ftscanf_s function
- fwscanf_s function
- _ftscanf_s function
- data [CRT], reading from streams
- _fwscanf_s_l function
- fscanf_s function
- fwscanf_s_l function
- ftscanf_s_l function
- streams [C++], reading formatted data from
- fscanf_s_l function
ms.assetid: b6e88194-714b-4322-be82-1cc0b343fe01
ms.openlocfilehash: f9c1686d7e42e0e885a65e153ee4e1ff2be01f27
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50454717"
---
# <a name="fscanfs-fscanfsl-fwscanfs-fwscanfsl"></a>fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l

Legge i dati formattati da un flusso. Queste versioni di [fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int fscanf_s(
   FILE *stream,
   const char *format [,
   argument ]...
);
int _fscanf_s_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument ]...
);
int fwscanf_s(
   FILE *stream,
   const wchar_t *format [,
   argument ]...
);
int _fwscanf_s_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument ]...
);
```

### <a name="parameters"></a>Parametri

*flusso*<br/>
Puntatore alla struttura **FILE**.

*format*<br/>
Stringa di controllo del formato.

*argomento*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ognuna di queste funzioni restituisce il numero di campi che vengono convertiti e assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Se si verifica un errore o se viene raggiunta la fine del flusso di file prima della prima conversione, il valore restituito è **EOF** per **fscanf_s** e **fwscanf_s**.

Queste funzioni convalidano i relativi parametri. Se *stream* è un puntatore di file non valido, o *formato* è un puntatore null, queste funzioni richiamano il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni restituiscono **EOF** e impostare **errno** al **EINVAL**.

## <a name="remarks"></a>Note

Il **fscanf_s** funzione legge i dati dalla posizione corrente del *stream* nelle posizioni specificate dal *argomento* (se presente). Ciascuna *argomenti* deve essere un puntatore a una variabile di un tipo che corrisponde all'identificatore di tipo in *formato*. *formato* controlla l'interpretazione dell'input campi e ha lo stesso formato e funzione come i *formato* argomento per **scanf_s**; vedere [campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md) per una descrizione dei *formato*.  **fwscanf_s** è una versione a caratteri wide di **fscanf_s**; l'argomento format per **fwscanf_s** è una stringa di caratteri "wide". Queste funzioni si comportano in modo identico se il flusso viene aperto in modalità ANSI. **fscanf_s** attualmente non supporta l'input da un flusso UNICODE.

La differenza principale tra le funzioni più sicure (con il **s** suffisso) e le altre versioni è che le funzioni più sicure richiedono la dimensione in caratteri della ognuno **c**, **C**, **s**, **S**, e **[** campo di tipo deve essere passato come argomento subito dopo la variabile. Per altre informazioni, vedere [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) e [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md).

> [!NOTE]
> Il parametro di dimensione è di tipo **unsigned**, non **size_t**.

Le versioni di queste funzioni che hanno le **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passate anziché le impostazioni locali del thread corrente.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**ftscanf_s**|**fscanf_s**|**fscanf_s**|**fwscanf_s**|
|**ftscanf_s_l**|**_fscanf_s_l**|**_fscanf_s_l**|**_fwscanf_s_l**|

## <a name="requirements"></a>Requisiti

|Funzione|Intestazione obbligatoria|
|--------------|---------------------|
|**fscanf_s**, **fscanf_s_l**|\<stdio.h>|
|**fwscanf_s**, **fwscanf_s_l**|\<stdio.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_fscanf_s.c
// This program writes formatted
// data to a file. It then uses fscanf to
// read the various data back from the file.

#include <stdio.h>
#include <stdlib.h>

FILE *stream;

int main( void )
{
   long l;
   float fp;
   char s[81];
   char c;

   errno_t err = fopen_s( &stream, "fscanf.out", "w+" );
   if( err )
      printf_s( "The file fscanf.out was not opened\n" );
   else
   {
      fprintf_s( stream, "%s %ld %f%c", "a-string",
               65000, 3.14159, 'x' );
      // Set pointer to beginning of file:
      fseek( stream, 0L, SEEK_SET );

      // Read data back from file:
      fscanf_s( stream, "%s", s, _countof(s) );
      fscanf_s( stream, "%ld", &l );

      fscanf_s( stream, "%f", &fp );
      fscanf_s( stream, "%c", &c, 1 );

      // Output data read:
      printf( "%s\n", s );
      printf( "%ld\n", l );
      printf( "%f\n", fp );
      printf( "%c\n", c );

      fclose( stream );
   }
}
```

```Output
a-string
65000
3.141590
x
```

## <a name="see-also"></a>Vedere anche

[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md)<br/>
[fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
