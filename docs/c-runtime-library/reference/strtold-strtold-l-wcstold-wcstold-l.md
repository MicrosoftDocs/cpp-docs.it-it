---
title: strtold, _strtold_l, wcstold, _wcstold_l
ms.date: 4/2/2020
api_name:
- wcstold
- strtold
- _strtold_l
- _wcstold_l
- _o__strtold_l
- _o__wcstold_l
- _o_strtold
- _o_wcstold
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
- _tcstold_l
- _wcstold_l
- _tcstold
- strtold
- _strtold_l
- wcstold
ms.assetid: 928c0c9a-bc49-445b-8822-100eb5954115
ms.openlocfilehash: 9acc98296651f549ceffb1e1deab350a71747ea5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365369"
---
# <a name="strtold-_strtold_l-wcstold-_wcstold_l"></a>strtold, _strtold_l, wcstold, _wcstold_l

Converte le stringhe in un valore a virgola mobile e precisione long double.

## <a name="syntax"></a>Sintassi

```C
long double strtold(
   const char *strSource,
   char **endptr
);
long double _strtold_l(
   const char *strSource,
   char **endptr,
   _locale_t locale
);
long double wcstold(
   const wchar_t *strSource,
   wchar_t **endptr
);
long double wcstold_l(
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

**strtold** restituisce il valore del numero a virgola mobile come **long** **double**, tranne quando la rappresentazione causerebbe un overflow, in tal caso, la funzione restituisce il valore**di HUGE_VALL**. Il segno di **HUGE_VALL** corrisponde al segno del valore che non può essere rappresentato. **strtold** restituisce 0 se non è possibile eseguire alcuna conversione o se si verifica un underflow.

**wcstold** restituisce i valori in modo analogo a **strtold**. Per entrambe le funzioni, **errno** è impostato su **ERANGE** se si verifica un overflow o un underflow e viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Ogni funzione converte la stringa di input *strSource* in un **valore long** **double.** La funzione **strtold** interrompe la lettura della stringa *strSource* in corrispondenza del primo carattere che non è in grado di riconoscere come parte di un numero. Questo può essere il carattere Null di terminazione. La versione a caratteri wide di **strtold** è **cstold**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstold**|**strtold**|**strtold**|**wcstold**|
|**_tcstold_l**|**_strtold_l**|**_strtold_l**|**_wcstold_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali correnti determina il riconoscimento del carattere di radice in *strSource*. Per altre informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). Le funzioni senza il **suffisso _l** utilizzano le impostazioni locali correnti; **_strtold_l** e **_wcstold_l** sono identici a **_strtold** e **_wcstold,** ad eccezione del fatto che utilizzano invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**strtold** prevede che *strSource* punti a una stringa del formato seguente:

[*spazio vuoto*] [*segno*] [*cifre*] [. *cifre*] [ :**d** &#124; **D** &#124; **e** &#124; **E**-*[segno*]*cifre*]

Uno *spazio può* essere costituito da spazi e caratteri di tabulazione, che vengono ignorati; *segno* è più**+**( )**-** o meno ( ); e *digits* sono una o più cifre decimali. Se non viene visualizzata alcuna cifra prima del carattere di base, deve essercene almeno una dopo il carattere di base. Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**d**, **D**, **e** o **E**) e facoltativamente da un intero con segno. Se non viene visualizzata una parte esponente né un carattere di base, si presuppone che l'ultima cifra nella stringa sia seguita da un carattere di base. Il primo carattere che non corrisponde a questo formato interrompe la lettura.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtold**, **_strtold_l**|\<stdlib.h>|
|**wcstold**, **_wcstold_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strtold.c
// Build with: cl /W4 /Tc crt_strtold.c
// This program uses strtold to convert a
// string to a long double-precision value.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char *string;
   char *stopstring;
   long double x;

   string = "3.1415926535898This stopped it";
   x = strtold(string, &stopstring);
   printf("string = %s\n", string);
   printf("   strtold = %.13Lf\n", x);
   printf("   Stopped scan at: %s\n\n", stopstring);
}
```

```Output
string = 3.1415926535898This stopped it
   strtold = 3.1415926535898
   Stopped scan at: This stopped it
```

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretazione di sequenze di caratteri multibyteInterpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
