---
title: strtod, _strtod_l, wcstod, _wcstod_l
ms.date: 4/2/2020
api_name:
- wcstod
- _wcstod_l
- _strtod_l
- strtod
- _o__strtod_l
- _o__wcstod_l
- _o_strtod
- _o_wcstod
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
- api-ms-win-crt-convert-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
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
ms.openlocfilehash: 03bd90d2848922ee4153b79432bb76245f749ed6
ms.sourcegitcommit: 83ea5df40917885e261089b103d5de3660314104
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/01/2020
ms.locfileid: "85813577"
---
# <a name="strtod-_strtod_l-wcstod-_wcstod_l"></a>strtod, _strtod_l, wcstod, _wcstod_l

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

**strtod** restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione potrebbe causare un overflow, nel qual caso la funzione restituisce +/-**HUGE_VAL**. Il segno di **HUGE_VAL** corrisponde al segno del valore che non può essere rappresentato. **strtod** restituisce `0` se non è possibile eseguire alcuna conversione o si verifica un underflow.

**wcstod** restituisce i valori in modo analogo a **strtod**:

- Per entrambe le funzioni, **errno** viene impostato su **ERANGE** se si verifica un overflow o un underflow.
- Se sono presenti parametri non validi, **errno** viene impostato su **EINVAL** e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per ulteriori informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Ogni funzione converte la stringa di input *strSource* in un **valore Double**. La funzione **strtod** converte *strSource* in un valore a precisione doppia. **strtod** interrompe la lettura della stringa *strSource* al primo carattere che non riconosce come parte di un numero. Questo carattere può essere il carattere null di terminazione. **wcstod** è una versione a caratteri wide di **strtod**; il relativo argomento *strSource* è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstod**|**strtod**|**strtod**|**wcstod**|
|**_tcstod_l**|**_strtod_l**|**_strtod_l**|**_wcstod_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali correnti determina il riconoscimento del carattere punto radice in *strSource*. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni senza il suffisso **_L** usano le impostazioni locali correnti; **_strtod_l** è identico a **_strtod_l** ad eccezione del fatto che usano le *impostazioni locali* passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **null**, un puntatore al carattere che ha interrotto l'analisi viene archiviato in corrispondenza della posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**strtod** prevede che *strSource* faccia riferimento a una stringa di uno dei seguenti formati:

[*spazi vuoti*] [*segno*] {*cifre* [*radix* *cifre*radice] &#124; *radix* *cifre*radice} [{**e** &#124; **e**} [*Sign*] *digits*] [*spazio vuoto*] [*Sign*] {**0x** &#124; **0x**} {*hexdigits* [*radice* *hexdigits*] &#124; *radice* *hexdigits*} [{**p** &#124; **p**} [*Sign*] *hexdigits*] [*spazio vuoto*] [*Sign*] {**inf** &#124; **Infinity**} [*spazio*] [*Sign*] **NaN** [*Sequence*]

Lo spazio *vuoto* iniziali facoltativo può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; *segno* più (+) o meno (-); le *cifre* corrispondono a una o più cifre decimali; *hexdigits* sono una o più cifre esadecimali; la *radice* è il carattere punto radice, un punto (.) nelle impostazioni locali "C" predefinite oppure il valore specifico delle impostazioni locali se le impostazioni locali correnti sono diverse o se *le impostazioni locali sono specificate* . una *sequenza* è una sequenza di caratteri alfanumerici o di sottolineatura. Nei formati con numero decimale e esadecimale, se non sono presenti cifre prima del carattere punto radice, è necessario che almeno uno venga visualizzato dopo il carattere punto radice. Nel formato decimale, le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**e** o **e**) e un intero con segno facoltativo. Nel formato esadecimale, le cifre esadecimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**p** o **p**) e da un Integer esadecimale con segno facoltativo che rappresenta l'esponente come potenza di 2. In entrambi i casi, se non è presente una parte dell'esponente o un carattere punto di base, viene utilizzato un carattere punto radice per seguire l'ultima cifra nella stringa. Il caso viene ignorato nei form **inf** e **NaN** . Il primo carattere che non rientra in uno di questi moduli interrompe l'analisi.

Le versioni UCRT di queste funzioni non supportano la conversione di lettere esponenti di tipo FORTRAN (**d** o **d**). Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente. Le versioni UCRT supportano stringhe esadecimali e sequenze di andata e ritorno dei valori INF e NAN, che non sono supportate nelle versioni precedenti. Questo può anche causare modifiche di rilievo nel codice. Ad esempio, la stringa "0x1a" verrebbe interpretata da **strtod** come 0,0 nelle versioni precedenti, ma come 26,0 nella versione UCRT.

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

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto della virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
