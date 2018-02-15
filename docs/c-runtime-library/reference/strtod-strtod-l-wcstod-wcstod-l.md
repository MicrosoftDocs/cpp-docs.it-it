---
title: strtod, _strtod_l, wcstod, _wcstod_l | Microsoft Docs
ms.custom: 
ms.date: 10/20/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- wcstod
- _wcstod_l
- _strtod_l
- strtod
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _tcstod
- strtod
- wcstod
- _strtod_l
- _wcstod_l
- stdlib/strtod
- corecrt_wstdlib/wcstod
- stdlib/_strtod_l
- corecrt_wstdlib/_wcstod_l
dev_langs:
- C++
helpviewer_keywords:
- wcstod_l function
- tcstod_l function
- _tcstod_l function
- strtod function
- _wcstod_l function
- wcstod function
- strtod_l function
- tcstod function
- _tcstod function
- _strtod_l function
- string conversion, to floating point values
ms.assetid: 0444f74a-ba2a-4973-b7f0-1d77ba88c6ed
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fe18737b52ba2b04e3ee09813c6b48b6ebdf0363
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="strtod-strtodl-wcstod-wcstodl"></a>strtod, _strtod_l, wcstod, _wcstod_l

Converte una stringa di caratteri in un valore a precisione doppia.

## <a name="syntax"></a>Sintassi

```C
double strtod(
   const char *nptr,
   char **endptr
);
double _strtod_l(
   const char *nptr,
   char **endptr,
   _locale_t locale
);
double wcstod(
   const wchar_t *nptr,
   wchar_t **endptr
);
double wcstod_l(
   const wchar_t *nptr,
   wchar_t **endptr,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*nptr*  
Stringa con terminazione Null da convertire.

*endptr*  
Puntatore al carattere che interrompe la lettura.

*locale*  
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

`strtod` Restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione causerebbe un overflow, in cui la funzione case restituisce + /-`HUGE_VAL`. Il segno di `HUGE_VAL` corrisponde al segno del valore che non può essere rappresentato. `strtod` restituisce 0 se è non possibile eseguire alcuna conversione oppure se si verifica un overflow.

`wcstod` restituisce i valori in modo analogo a `strtod`. Per entrambe le funzioni, `errno` viene impostato su `ERANGE` in caso di overflow o underflow e viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni funzione converte la stringa di input *nptr* per un `double`. Il `strtod` funzione converte *nptr* su un valore a precisione doppia. `strtod` Interrompe la lettura della stringa *nptr* con il primo carattere non riconosciuto come parte di un numero. Questo può essere il carattere Null di terminazione. `wcstod` è una versione a caratteri wide di `strtod`; relativo *nptr* argomento è una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_tcstod`|`strtod`|`strtod`|`wcstod`|
|`_tcstod_l`|`_strtod_l`|`_strtod_l`|`_wcstod_l`|

Il `LC_NUMERIC` impostazione della categoria di impostazioni locali correnti determina il riconoscimento del carattere punto radice *nptr*. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le funzioni senza il `_l` suffisso usano le impostazioni locali; `_strtod_l` è identico a `_strtod_l` ad eccezione del fatto che usano il *internazionali* passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non `NULL`, un puntatore al carattere che ha interrotto l'analisi è archiviato in una posizione a cui puntata *endptr*. Se è non possibile eseguire alcuna conversione sono state trovate le cifre non valide o è stato specificato un base non valido, il valore di *nptr* è archiviato in una posizione a cui puntata *endptr*.

`strtod` prevista *nptr* in modo che punti a una stringa di uno dei formati seguenti:

[*whitespace*] [*sign*] {*cifre* [*radice* *cifre*] &#124; *radice* *cifre*} [{**e** &#124; **E**} [*sign*] *cifre*]  
[*whitespace*] [*sign*] {**0x** &#124; **0x**} {*cifre esadecimali* [*radice* *cifre esadecimali*] &#124; *radice* *cifre esadecimali*} [{**p** &#124; **P**} [*sign*] *cifre esadecimali*]  
[*whitespace*] [*sign*] {**INF** &#124; **Infinito**}  
[*whitespace*] [*sign*] **NAN** [*sequenza*]

Il prefisso facoltativo *whitespace* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; *sign* è un segno più (+) o meno (-). *cifre* sono uno o più cifre decimali *cifre esadecimali* sono uno o più cifre esadecimali. *radice* è il carattere punto radice, ovvero un punto (.) nelle impostazioni locali "C", valore predefinito o la specifica delle impostazioni locali valore diversa se le impostazioni locali correnti o quando *internazionali* è specificato; un *sequenza* è una sequenza di caratteri alfanumerici o caratteri di sottolineatura. In formati di numero esadecimale sia decimale, se viene visualizzata nessuna cifra prima del carattere punto radice, almeno uno deve apparire dopo il carattere punto radice. In formato decimale, le cifre decimali possono essere seguite da un esponente è costituito da una lettera introduttiva (**e** o **E**) e un integer con segno facoltativo. In formato esadecimale, le cifre esadecimali possono essere seguite da un esponente è costituito da una lettera introduttiva (**p** o **P**) e un numero intero esadecimale facoltativamente con segno che rappresenta il esponente come potenza di 2. In delle forme, se viene visualizzata una parte esponente né un carattere punto radice, un carattere punto radice equivale a seguire l'ultima cifra nella stringa. Case viene ignorato in entrambe le **INF** e **NAN** form. Il primo carattere non appartenente a uno di questi moduli arresta l'analisi.

Le versioni della libreria UCRT di queste funzioni non supportano la conversione dello stile di Fortran (**d** o **D**) lettere esponente. Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente. Le versioni della libreria UCRT supportano stringhe esadecimali e round trip dei valori INF e NAN non sono supportati nelle versioni precedenti. Possono verificarsi modifiche di rilievo introdotte nel codice. Ad esempio, la stringa "0x1a" verrebbe interpretata dal `strtod` come 0,0 nelle versioni precedenti, ma come 26.0 nella versione UCRT.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`strtod`, `_strtod_l`|C: &lt;stdlib.h> C++: &lt;cstdlib> o &lt;stdlib.h> |
|`wcstod`, `_wcstod_l`|C: &lt;stdlib.h> o &lt;wchar.h> C++: &lt;cstdlib>, &lt;stdlib.h> o &lt;wchar.h> |

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strtod.c
// This program uses strtod to convert a
// string to a double-precision value; strtol to
// convert a string to long integer values; and strtoul
// to convert a string to unsigned long-integer values.
//

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char   *string, *stopstring;
   double x;
   long   l;
   int    base;
   unsigned long ul;

   string = "3.1415926This stopped it";
   x = strtod( string, &stopstring );
   printf( "string = %s\n", string );
   printf("   strtod = %f\n", x );
   printf("   Stopped scan at: %s\n\n", stopstring );

   string = "-10110134932This stopped it";
   l = strtol( string, &stopstring, 10 );
   printf( "string = %s\n", string );
   printf("   strtol = %ld\n", l );
   printf("   Stopped scan at: %s\n\n", stopstring );

   string = "10110134932";
   printf( "string = %s\n", string );

   // Convert string using base 2, 4, and 8:
   for( base = 2; base <= 8; base *= 2 )
   {
      // Convert the string:
      ul = strtoul( string, &stopstring, base );
      printf( "   strtol = %ld (base %d)\n", ul, base );
      printf( "   Stopped scan at: %s\n", stopstring );
   }
}
```

```Output
string = 3.1415926This stopped it
   strtod = 3.141593
   Stopped scan at: This stopped it

string = -10110134932This stopped it
   strtol = -2147483648
   Stopped scan at: This stopped it

string = 10110134932
   strtol = 45 (base 2)
   Stopped scan at: 34932
   strtol = 4423 (base 4)
   Stopped scan at: 4932
   strtol = 2134108 (base 8)
   Stopped scan at: 932
```

## <a name="see-also"></a>Vedere anche

[Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
[Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
[strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
[atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
[localeconv](../../c-runtime-library/reference/localeconv.md)   
[_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
[_free_locale](../../c-runtime-library/reference/free-locale.md)