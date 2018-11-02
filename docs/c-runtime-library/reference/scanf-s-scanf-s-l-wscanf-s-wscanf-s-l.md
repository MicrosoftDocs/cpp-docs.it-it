---
title: scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l
ms.date: 11/04/2016
apiname:
- wscanf_s
- _wscanf_s_l
- scanf_s
- _scanf_s_l
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
ms.openlocfilehash: 0fcf2a9f3ac8585e71caa9f2cc990c7e303a2f5f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50528612"
---
# <a name="scanfs-scanfsl-wscanfs-wscanfsl"></a>scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l

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

*argomento*<br/>
Argomenti facoltativi.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce il numero di campi che vengono convertiti ed assegnati correttamente; il valore restituito non include i campi che sono stati letti ma non assegnati. Un valore restituito pari a 0 indica che nessun campo è stato assegnato. Il valore restituito sarà **EOF** per un errore, o se viene rilevato il carattere di fine del file o il carattere di fine della stringa al primo tentativo di leggere un carattere. Se *formato* è un **NULL** puntatore, il gestore di parametri non validi viene richiamato, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **scanf_s** e **wscanf_s** restituiscono **EOF** e impostare **errno** a **EINVAL**.

Per informazioni su questi e altri codici di errore, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **scanf_s** funzione legge i dati dal flusso di input standard **stdin** e scrive i dati in una posizione che viene fornita dalla *argomento*. Ciascuna *argomenti* deve essere un puntatore a una variabile di un tipo che corrisponde all'identificatore di tipo in *formato*. Se la copia avviene tra stringhe che si sovrappongono, il comportamento non è definito.

**wscanf_s** è una versione a caratteri wide di **scanf_s**; gli *formato* argomento **wscanf_s** è una stringa di caratteri "wide". **wscanf_s** e **scanf_s** si comportano in modo identico se il flusso viene aperto in modalità ANSI. **scanf_s** attualmente non supporta l'input da un flusso UNICODE.

Le versioni di queste funzioni che hanno le **l** suffisso sono identiche ad eccezione del fatto che usano il parametro delle impostazioni locali passate anziché le impostazioni locali del thread corrente.

A differenza **scanf** e **wscanf**, **scanf_s** e **wscanf_s** richiedono le dimensioni del buffer necessario specificarlo per tutti i parametri di tipo diinput**c**, **C**, **s**, **S**, o set di controllo sono racchiusi tra parentesi stringa **[]**. La dimensione del buffer in caratteri viene passata come parametro aggiuntivo segue immediatamente dopo il puntatore del buffer o della variabile. Ad esempio, se si sta leggendo una stringa, la dimensione del buffer per tale stringa viene passata nel modo seguente:

```C
char s[10];
scanf_s("%9s", s, (unsigned)_countof(s)); // buffer size is 10, width specification is 9
```

La dimensione del buffer include il carattere di terminazione null. È possibile utilizzare un campo di specifica della larghezza per assicurare che il token che viene letto possa essere inserito nel buffer. Se non viene utilizzato alcun campo di specifica di larghezza e il token letto è troppo grande per entrare nel buffer, non vengono scritti dati nel buffer.

> [!NOTE]
> Il parametro di dimensione è di tipo **unsigned**, non **size_t**. Usare un cast statico per convertire un **size_t** valore **unsigned** configurazioni della build per 64 bit.

L'esempio seguente mostra che il parametro di dimensione del buffer indica il numero massimo di caratteri, non di byte. Nella chiamata a **wscanf_s**, la larghezza del carattere indicato dal tipo di buffer non corrisponde la larghezza del carattere indicato dall'identificatore di formato.

```C
wchar_t ws[10];
wscanf_s(L"%9S", ws, (unsigned)_countof(ws));
```

Il **S** identificatore di formato indica l'utilizzo della larghezza del carattere che è "opposta" la larghezza predefinita supportata dalla funzione. La larghezza del carattere è a byte singolo, ma la funziona supporta caratteri a byte doppio. In questo esempio viene letta una stringa con un massimo di 9 caratteri wide a byte singolo e li inserisce in un buffer di caratteri wide a byte doppio. I caratteri vengono trattati come valori a byte singolo; i primi due caratteri vengono archiviati in `ws[0]`, i due successivi vengono archiviati in `ws[1]` e così via.

Nel caso dei caratteri, un singolo carattere può essere letto come segue:

```C
char c;
scanf_s("%c", &c, 1);
```

Quando vengono letti più caratteri per stringhe con terminazione non null, vengono utilizzati interi per specificare la larghezza e la dimensione del buffer.

```C
char c[4];
scanf_s("%4c", &c, (unsigned)_countof(c)); // not null terminated
```

Per altre informazioni, vedere [Specifica della larghezza per scanf](../../c-runtime-library/scanf-width-specification.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tscanf_s**|**scanf_s**|**scanf_s**|**wscanf_s**|
|**tscanf_s_l**|**_scanf_s_l**|**_scanf_s_l**|**_wscanf_s_l**|

Per altre informazioni, vedere [Campi di specifica di formato: funzioni scanf e wscanf](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**scanf_s**, **scanf_s_l**|\<stdio.h>|
|**wscanf_s**, **wscanf_s_l**|\<stdio.h> o \<wchar.h>|

La console non è supportata nelle App Universal Windows Platform (UWP). L'handle del flusso standard associati con la console **stdin**, **stdout**, e **stderr**, devono essere reindirizzati prima di poter usare le funzioni di runtime C nelle App UWP . Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

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

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[I/O di flusso](../../c-runtime-library/stream-i-o.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
