---
title: strtod, _strtod_l, wcstod, _wcstod_l
ms.date: 10/20/2017
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
ms.openlocfilehash: c8c2b3b491e2e7265829fa88580529dc757ace8c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62376471"
---
# <a name="strtod-strtodl-wcstod-wcstodl"></a>strtod, _strtod_l, wcstod, _wcstod_l

Converte una stringa di caratteri in un valore a precisione doppia.

## <a name="syntax"></a>Sintassi

```C
double strtod(
   const char *strSource,
   char **endptr
);
double _strtod_l(
   const char *strSource,
   char **endptr,
   _locale_t locale
);
double wcstod(
   const wchar_t *strSource,
   wchar_t **endptr
);
double wcstod_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*strSource*<br/>
Stringa con terminazione Null da convertire.

*endptr*<br/>
Puntatore al carattere che interrompe la lettura.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtod** restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione potrebbe causare un overflow, nel quale caso la funzione restituisce + /-**HUGE_VAL**. Il segno di **HUGE_VAL** corrisponde al segno del valore non può essere rappresentato. **strtod** restituisce 0 se si verifica un underflow o può essere eseguita alcuna conversione.

**wcstod** restituisce i valori in modo analogo a **strtod**. Per entrambe le funzioni **errno** è impostata su **ERANGE** se overflow o underflow e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni funzione converte la stringa di input *strSource* a un **doppie**. Il **strtod** funzione converte *strSource* su un valore a precisione doppia. **strtod** interrompe la lettura della stringa *strSource* in corrispondenza del primo carattere non riconosciuti come parte di un numero. Questo può essere il carattere Null di terminazione. **wcstod** è una versione a caratteri wide di **strtod**; relativo *strSource* argomento è una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstod**|**strtod**|**strtod**|**wcstod**|
|**_tcstod_l**|**_strtod_l**|**_strtod_l**|**_wcstod_l**|

Il **LC_NUMERIC** impostazione di categoria di impostazioni locali correnti determina il riconoscimento del carattere di punto di base *strSource*. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni senza il **l** suffisso usare le impostazioni locali correnti. **strtod_l** è identica alla **strtod_l** ad eccezione del fatto che usino il *delle impostazioni locali* passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto la lettura viene archiviato in corrispondenza della posizione a cui fa riferimento *endptr*. Se è non possibile eseguire alcuna conversione (non trovate cifre valide sono stati o è stata specificata una base non valida), il valore di *strSource* viene archiviato in corrispondenza della posizione a cui punta *endptr*.

**strtod** prevede *strSource* in modo che punti a una stringa di uno dei formati seguenti:

[*whitespace*] [*sign*] {*cifre* [*radice* *cifre*] &#124;  *radix* *cifre*} [{**elettronica** &#124; **elettronica**} [*sign*] *cifre*] [*whitespace*] [*sign*] {**0x** &#124; **0x**} {*cifre esadecimali* [ *radix* *cifre esadecimali*] &#124; *radice* *cifre esadecimali*} [{**p** &#124; **P**} [*sign*] *cifre esadecimali*] [*whitespace*] [*sign*] { **INF** &#124; **infinito**} [*whitespace*] [*sign*]  **NAN** [*sequenza*]

Il prefisso facoltativo *whitespace* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. *sign* è più (+) o un segno meno (-). *cifre* sono uno o più cifre decimali. *cifre esadecimali* sono uno o più cifre esadecimali. *radix* è il carattere di punto di base, sia un punto (.) nelle impostazioni locali "C" impostazione predefinita, la specifica delle impostazioni locali valore o se le impostazioni locali correnti sono diversa o quando *delle impostazioni locali* è specificato; una *sequenza* è una sequenza di caratteri alfanumerici o caratteri di sottolineatura. In formati di numero esadecimale sia decimale, se viene visualizzata alcuna cifra prima del carattere punto radice, almeno uno deve apparire dopo il carattere di punto di base. Nel formato decimale, le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**elettronica** oppure **elettronica**) e un intero con segno facoltativo. In formato esadecimale, le cifre esadecimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**p** oppure **P**) e un intero con segno facoltativo esadecimale che rappresenta il esponente come potenza di 2. In qualsiasi formato, se viene visualizzata una parte esponente né un carattere di punto di base, un carattere di punto di base presuppone che seguono l'ultima cifra nella stringa. Viene ignorato il caso in entrambe le **INF** e **NAN** form. Il primo carattere che non rientrano in nessuno di questi moduli interrompe la lettura.

Le versioni UCRT di queste funzioni non supportano la conversione di stile Fortran (**1!d** oppure **1!d**) lettere esponente. Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente. Le versioni UCRT supportano stringhe esadecimali e round trip dei valori INF e NAN, che non erano supportate nelle versioni precedenti. Anche questo può causare modifiche di rilievo nel codice. Ad esempio, sarebbe possibile interpretare la stringa "0x1a" **strtod** come 0,0 nelle versioni precedenti, ma come 26.0 nella versione di libreria UCRT.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtod**, **_strtod_l**|C: &lt;stdlib.h> C++: &lt;cstdlib> o &lt;stdlib.h> |
|**wcstod**, **_wcstod_l**|C: &lt;stdlib.h> o &lt;wchar.h> C++: &lt;cstdlib>, &lt;stdlib.h> o &lt;wchar.h> |

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

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
