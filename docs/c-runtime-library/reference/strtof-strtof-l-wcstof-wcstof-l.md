---
title: strtof, _strtof_l, wcstof, _wcstof_l
ms.date: 04/05/2018
apiname:
- _strtof_l
- wcstof
- strtof
- _wcstof_l
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
- _tcstof
- _tcstof_l
- stdlib/strtof
- strtof
- stdlib/_strtof_l
- _strtof_l
- corecrt_wstdlib/wcstof
- wcstof
- corecrt_wstdlib/_wcstof_l
- _wcstof_l
helpviewer_keywords:
- _strtof_l function
- _tcstof function
- _wcstof_l function
- wcstof function
- _tcstof_l function
- strtof function
ms.assetid: 52221b46-876d-4fcc-afb1-97512c17a43b
ms.openlocfilehash: 10a50a175685f3e8f7f1241683c7705fd9a9b142
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50607922"
---
# <a name="strtof-strtofl-wcstof-wcstofl"></a>strtof, _strtof_l, wcstof, _wcstof_l

Converte le stringhe in un valore a virgola mobile e precisione singola.

## <a name="syntax"></a>Sintassi

```C
float strtof(
   const char *strSource,
   char **endptr
);
float _strtof_l(
   const char *strSource,
   char **endptr,
   _locale_t locale
);
float wcstof(
   const wchar_t *strSource,
   wchar_t **endptr
);
float wcstof_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   _locale_t locale
);
```

## <a name="parameters"></a>Parametri

*strSource*<br/>
Stringa con terminazione Null da convertire.

*endptr*<br/>
Puntatore al carattere che interrompe la lettura.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtof** restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione potrebbe causare un overflow, nel quale caso la funzione restituisce + /-**HUGE_VALF**. Il segno di **HUGE_VALF** corrisponde al segno del valore non può essere rappresentato. **strtof** restituisce 0 se si verifica un underflow o può essere eseguita alcuna conversione.

**wcstof** restituisce i valori in modo analogo a **strtof**. Per entrambe le funzioni **errno** è impostata su **ERANGE** se overflow o underflow e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni funzione converte la stringa di input *strSource* a un **float**. Il **strtof** funzione converte *strSource* su un valore a precisione singola. **strtof** interrompe la lettura della stringa *strSource* in corrispondenza del primo carattere non riconosciuti come parte di un numero. Questo può essere il carattere Null di terminazione. **wcstof** è una versione a caratteri wide di **strtof**; relativo *strSource* argomento è una stringa di caratteri "wide". In caso contrario, il comportamento di queste funzioni è identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcstof**|**strtof**|**strtof**|**wcstof**|
|**tcstof_l**|**_strtof_l**|**_strtof_l**|**_wcstof_l**|

Il **LC_NUMERIC** impostazione di categoria di impostazioni locali correnti determina il riconoscimento del carattere di base *strSource*; per altre informazioni, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md). Le funzioni che non hanno le **l** suffisso usare le impostazioni locali correnti, quelli che hanno il suffisso sono identiche ma usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto la lettura viene archiviato in corrispondenza della posizione a cui fa riferimento *endptr*. Se è non possibile eseguire alcuna conversione (non trovate cifre valide sono stati o è stata specificata una base non valida), il valore di *strSource* viene archiviato in corrispondenza della posizione a cui punta *endptr*.

**strtof** prevede *strSource* in modo che punti a una stringa nel formato seguente:

[*whitespace*] [*sign*] [*cifre*] [__.__ *cifre*] [{**elettronica** &#124; **elettronica**} [*sign*] *cifre*]

Oggetto *whitespace* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. *sign* può essere plus (**+**) o di sottrazione (**-**); e *cifre* sono uno o più cifre decimali. Se non viene visualizzata alcuna cifra prima del carattere di base, deve essercene almeno una dopo il carattere di base. Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**elettronica** oppure **elettronica**) e un intero con segno facoltativo. Se non viene visualizzata una parte esponente né un carattere di base, si presuppone che l'ultima cifra nella stringa sia seguita da un carattere di base. Il primo carattere che non corrisponde a questo formato interrompe la lettura.

Le versioni UCRT di queste funzioni non supportano la conversione di stile Fortran (**1!d** oppure **1!d**) lettere esponente. Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtof**, **strtof_l**|C: \<stdlib.h> C++: &lt;cstdlib> o \<stdlib.h>|
|**wcstof**, **wcstof_l**|C: \<stdlib.h> o \<wchar.h> C++: &lt;cstdlib>, \<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

```C
// crt_strtof.c
// This program uses strtof to convert a
// string to a single-precision value.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char *string;
   char *stopstring;
   float x;

   string = "3.14159This stopped it";
   x = strtof(string, &stopstring);
   printf("string = %s\n", string);
   printf("   strtof = %f\n", x);
   printf("   Stopped scan at: %s\n\n", stopstring);
}
```

```Output
string = 3.14159This stopped it
   strtof = 3.141590
   Stopped scan at: This stopped it
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
