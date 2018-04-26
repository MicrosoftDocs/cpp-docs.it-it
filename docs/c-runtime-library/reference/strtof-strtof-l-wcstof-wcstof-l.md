---
title: strtof, _strtof_l, wcstof, _wcstof_l | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- _strtof_l function
- _tcstof function
- _wcstof_l function
- wcstof function
- _tcstof_l function
- strtof function
ms.assetid: 52221b46-876d-4fcc-afb1-97512c17a43b
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9e084140b3b220df04859f4ac1bdfe3c1e34ddfc
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
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

**strtof** restituisce il valore del numero a virgola mobile, tranne quando la rappresentazione potrebbe provocare un overflow, in cui la funzione case restituisce + /-**HUGE_VALF**. Il segno di **HUGE_VALF** corrisponde al segno del valore non può essere rappresentato. **strtof** restituisce 0 se si verifica un underflow o può essere eseguita alcuna conversione.

**wcstof** restituisce i valori in modo analogo a **strtof**. Per entrambe le funzioni **errno** è impostata su **ERANGE** se si verifica overflow o underflow e viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md).

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ogni funzione converte la stringa di input *strSource* a un **float**. Il **strtof** funzione converte *strSource* su un valore di precisione singola. **strtof** interrompe la lettura della stringa *strSource* con il primo carattere non riconosciuto come parte di un numero. Questo può essere il carattere Null di terminazione. **wcstof** è una versione a caratteri wide **strtof**; relativo *strSource* argomento è una stringa di caratteri "wide". In caso contrario, il comportamento di queste funzioni è identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcstof**|**strtof**|**strtof**|**wcstof**|
|**tcstof_l**|**_strtof_l**|**_strtof_l**|**_wcstof_l**|

Il **LC_NUMERIC** impostazione della categoria di impostazioni locali correnti determina il riconoscimento del carattere radice *strSource*; per ulteriori informazioni, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md). Le funzioni che non hanno il **l** suffisso usare le impostazioni locali correnti, quelle che hanno il suffisso sono identiche ad eccezione del fatto che usano le impostazioni locali che vengono passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non **NULL**, un puntatore al carattere che ha interrotto l'analisi viene archiviato in una posizione che punta alla *endptr*. Se è non possibile eseguire alcuna conversione sono state trovate le cifre non valide o è stata specificata una base non valida, il valore di *strSource* archiviato in una posizione che punta alla *endptr*.

**strtof** prevede *strSource* in modo che punti a una stringa nel formato seguente:

[*whitespace*] [*sign*] [*cifre*] [__.__ *cifre*] [{**espulsione** &#124; **espulsione**} [*sign*] *cifre*]

Un *whitespace* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; *sign* è plus (**+**) o di sottrazione (**-**); e *cifre* sono uno o più cifre decimali. Se non viene visualizzata alcuna cifra prima del carattere di base, deve essercene almeno una dopo il carattere di base. Le cifre decimali possono essere seguite da un esponente che è costituito da una lettera introduttiva (**espulsione** oppure **E**) e un numero intero con segno facoltativo. Se non viene visualizzata una parte esponente né un carattere di base, si presuppone che l'ultima cifra nella stringa sia seguita da un carattere di base. Il primo carattere che non corrisponde a questo formato interrompe la lettura.

Le versioni della libreria UCRT di queste funzioni non supportano la conversione dello stile di Fortran (**d** o **D**) lettere esponente. Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente.

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
