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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: a688846d5db4d508327745728f8933c91bfd54e0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337659"
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

*Strsource*<br/>
Stringa con terminazione Null da convertire.

*endptr (in base alla data in*<br/>
Puntatore al carattere che interrompe la lettura.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtod** restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione causerebbe un overflow, nel qual caso la funzione restituisce HUGE_VAL di**lavoro**. Il segno di **HUGE_VAL** corrisponde al segno del valore che non può essere rappresentato. **strtod** restituisce 0 se non è possibile eseguire alcuna conversione o se si verifica un underflow.

**wcstod** restituisce i valori analogamente a **strtod**. Per entrambe le funzioni, **errno** è impostato su **ERANGE** se si verifica un overflow o un underflow e viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Ogni funzione converte la stringa di input *strSource* in un **file double.** La funzione **strtod** converte *strSource* in un valore a precisione doppia. **strtod** interrompe la lettura della stringa *strSource* al primo carattere che non è in grado di riconoscere come parte di un numero. Questo può essere il carattere Null di terminazione. **wcstod** è una versione a caratteri wide di **strtod**; il relativo argomento *strSource* è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstod**|**strtod**|**strtod**|**wcstod**|
|**_tcstod_l**|**_strtod_l**|**_strtod_l**|**_wcstod_l**|

L'impostazione **LC_NUMERIC** categoria delle impostazioni locali correnti determina il riconoscimento del carattere del punto di radice in *strSource*. Per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni senza il **suffisso _l** utilizzano le impostazioni locali correnti; **_strtod_l** è identica a **_strtod_l** ad eccezione del fatto che usano le *impostazioni locali* passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto l'analisi viene memorizzato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**strtod** prevede che *strSource* punti a una stringa di una delle forme seguenti:

[*spazio vuoto*] [*segno*] Cifre [*cifre* *radiodix* *digits*] &#124; *cifre* *radioss* [e**e** &#124; **E**: [*segno*] *cifre*] [*spazio vuoto*] [*segno*] -**0x** &#124; **0X**, x 0X , x , x , esadecimali [*cifre* esadecimali*radiox* *hexdigits*] &#124; *radix* *hexdigits*, [sezione**p** &#124; **P**,*[ segno*] *hexdigits*] [*spazio vuoto*] [*segno*] ]**- INF** &#124; **INFINITY**- [*spazio vuoto*] [*segno* **] [** *sequenza ]*]

Lo *spazio iniziale* facoltativo può essere costituito da spazi e caratteri di tabulazione, che vengono ignorati; *segno* è il segno più (-) o meno (-); *cifre* sono una o più cifre decimali; *le cifre esadecimali* sono una o più cifre esadecimali; *radix* è il carattere del punto di radice, un punto (.) nelle impostazioni locali "C" predefinite o il valore specifico delle impostazioni locali se le impostazioni locali correnti sono diverse o quando vengono specificate *le impostazioni locali;* una *sequenza* è una sequenza di caratteri alfanumerici o di sottolineatura. Nelle forme di numeri decimali ed esadecimali, se non vengono visualizzate cifre prima del carattere del punto di radice, almeno una deve comparire dopo il carattere del punto di radice. Nel formato decimale, le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**e** o **E**) e da un numero intero con segno facoltativo. Nel formato esadecimale, le cifre esadecimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**p** o **P**) e da un numero intero esadecimale con segno facoltativo che rappresenta l'esponente come potenza di 2. In entrambi i casi, se non viene visualizzata né una parte esponente né un carattere punto radice, si presuppone che un carattere punto di radice segua l'ultima cifra nella stringa. Case viene ignorato nei moduli **INF** e **NAN.** Il primo carattere che non rientra in una di queste forme interrompe la scansione.

Le versioni UCRT di queste funzioni non supportano la conversione di lettere esponenti in stile Fortran **(d** o **D).** Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente. Le versioni UCRT supportano stringhe esadecimali e round trip dei valori INF e NAN, che non erano supportati nelle versioni precedenti. Ciò può anche causare modifiche di rilievo nel codice. Ad esempio, la stringa "0x1a" verrebbe interpretata da **strtod** come 0.0 nelle versioni precedenti, ma come 26.0 nella versione UCRT.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtod** **, _strtod_l**|C: &lt;stdlib.h> C++: &lt;cstdlib> o &lt;stdlib.h> |
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
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
