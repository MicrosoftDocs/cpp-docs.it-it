---
title: scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l
ms.date: 03/26/2019
api_name:
- wscanf_s
- _wscanf_s_l
- scanf_s
- _scanf_s_l
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wscanf_s
- _tscanf_s_l
- _wscanf_s_l
- scanf_s
- _tscanf_s
- _scanf_s_l
helpviewer_keywords:
- reading data [C++], from input streams
- buffers [C++], buffer overruns
- _scanf_s_l function
- _wscanf_s_l function
- tscanf_s_l function
- tscanf_s function
- scanf_s function
- data [C++], reading from input stream
- wscanf_s function
- _tscanf_s_l function
- _tscanf_s function
- scanf_s_l function
- formatted data [C++], from input streams
- wscanf_s_l function
- buffers [C++], avoiding overruns
ms.assetid: 42cafcf7-52d6-404a-80e4-b056a7faf2e5
ms.openlocfilehash: 8811bd0b6e4009cd6aba570e65d0687fab465614
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87231364"
---
# <a name="scanf_s-_scanf_s_l-wscanf_s-_wscanf_s_l"></a>scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l

Legge i dati formattati dal flusso di input standard. Queste versioni di [scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md) includono miglioramenti per la sicurezza, come descritto in [Funzionalità di sicurezza in CRT](../../c-runtime-library/security-features-in-the-crt.md).

## <a name="syntax"></a>Sintassi

```C
int scanf_s(
   const char *format [,
   argument]...
);
int _scanf_s_l(
   const char *format,
   locale_t locale [,
   argument]...
);
int wscanf_s(
   const wchar_t *format [,
   argument]...
);
int _wscanf_s_l(
   const wchar_t *format,
   locale_t locale [,
   argument]...
);
```

### <a name="parameters"></a>Parametri

*format*<br/>
Stringa di formato controllo.

*argument*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di campi convertiti e assegnati correttamente. Il valore restituito non include i campi che sono stati letti ma non assegnati. Il valore restituito 0 indica che non è stato assegnato alcun campo. Il valore restituito è **EOF** per un errore o se il carattere di fine del file o il carattere di fine della stringa viene trovato nel primo tentativo di leggere un carattere. Se *Format* è un puntatore **null** , viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **scanf_s** e **wscanf_s** restituire **EOF** e impostare **errno** su **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **scanf_s** legge i dati dal flusso di input standard, **stdin**e li scrive in un *argomento*. Ogni *argomento* deve essere un puntatore a un tipo di variabile che corrisponde all'identificatore di tipo nel *formato*. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

**wscanf_s** è una versione a caratteri wide di **scanf_s**; l'argomento *Format* per **wscanf_s** è una stringa di caratteri wide. **wscanf_s** e **scanf_s** si comportano in modo identico se il flusso viene aperto in modalità ANSI. **scanf_s** attualmente non supporta l'input da un flusso Unicode.

Le versioni di queste funzioni che hanno il suffisso **_L** sono identiche, ad eccezione del fatto che usano il parametro delle *impostazioni locali* anziché le impostazioni locali del thread corrente.

Diversamente da **scanf** e **wscanf**, **scanf_s** e **wscanf_s** richiedono di specificare le dimensioni del buffer per alcuni parametri. Specificare le dimensioni per tutti i parametri **c**, **c**, **s** **, o**set di controllo stringa **[]** . La dimensione del buffer in caratteri viene passata come parametro aggiuntivo. Segue immediatamente il puntatore al buffer o alla variabile. Ad esempio, se si sta leggendo una stringa, la dimensione del buffer per tale stringa viene passata nel modo seguente:

```C
char s[10];
scanf_s("%9s", s, (unsigned)_countof(s)); // buffer size is 10, width specification is 9
```

La dimensione del buffer include il terminale null. È possibile usare un campo di specifica della larghezza per assicurarsi che il token che viene letto in si inserisce nel buffer. Quando un token è troppo grande per adattarsi, non viene scritto alcun elemento nel buffer a meno che non esista una specifica della larghezza.

> [!NOTE]
> Il parametro size è di tipo **`unsigned`** , non **size_t**. Usare un cast statico per convertire un valore **size_t** in **`unsigned`** per le configurazioni di compilazione a 64 bit.

Il parametro della dimensione del buffer descrive il numero massimo di caratteri, non i byte. In questo esempio, la larghezza del tipo di buffer non corrisponde alla larghezza dell'identificatore di formato.

```C
wchar_t ws[10];
wscanf_s(L"%9S", ws, (unsigned)_countof(ws));
```

L'identificatore di formato **S** significa usare la larghezza del carattere "opposta" alla larghezza predefinita supportata dalla funzione. La larghezza del carattere è a byte singolo, ma la funzione supporta caratteri a byte doppio. Questo esempio legge in una stringa con un massimo di nove caratteri a byte singolo e li inserisce in un buffer di caratteri wide a byte doppio. I caratteri vengono trattati come valori a byte singolo; i primi due caratteri vengono archiviati in `ws[0]`, i due successivi vengono archiviati in `ws[1]` e così via.

Questo esempio legge un singolo carattere:

```C
char c;
scanf_s("%c", &c, 1);
```

Quando vengono letti più caratteri per le stringhe con terminazione non null, vengono utilizzati numeri interi per la specifica della larghezza e per le dimensioni del buffer.

```C
char c[4];
scanf_s("%4c", c, (unsigned)_countof(c)); // not null terminated
```

Per altre informazioni, vedere [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tscanf_s**|**scanf_s**|**scanf_s**|**wscanf_s**|
|**_tscanf_s_l**|**_scanf_s_l**|**_scanf_s_l**|**_wscanf_s_l**|

Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**scanf_s**, **_scanf_s_l**|\<stdio.h>|
|**wscanf_s**, **_wscanf_s_l**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle app piattaforma UWP (Universal Windows Platform) (UWP). Il flusso standard gestisce **stdin**, **stdout**e **stderr** devono essere reindirizzati prima che le funzioni di runtime del linguaggio C possano usarle nelle app UWP. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_scanf_s.c
// This program uses the scanf_s and wscanf_s functions
// to read formatted input.

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
   int      i,
            result;
   float    fp;
   char     c,
            s[80];
   wchar_t  wc,
            ws[80];

   result = scanf_s( "%d %f %c %C %s %S", &i, &fp, &c, 1,
                     &wc, 1, s, (unsigned)_countof(s), ws, (unsigned)_countof(ws) );
   printf( "The number of fields input is %d\n", result );
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c,
           wc, s, ws);
   result = wscanf_s( L"%d %f %hc %lc %S %ls", &i, &fp, &c, 2,
                      &wc, 1, s, (unsigned)_countof(s), ws, (unsigned)_countof(ws) );
   wprintf( L"The number of fields input is %d\n", result );
   wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp,
            c, wc, s, ws);
}
```

Questo programma produce l'output seguente quando viene fornito questo input:

```Input
71 98.6 h z Byte characters
36 92.3 y n Wide characters
```

```Output
The number of fields input is 6
The contents are: 71 98.599998 h z Byte characters
The number of fields input is 6
The contents are: 36 92.300003 y n Wide characters
```

## <a name="see-also"></a>Vedere anche

[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \_ _swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
