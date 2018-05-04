---
title: strtoll, _strtoll_l, wcstoll, _wcstoll_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- strtoll
- wcstoll
- _strtoll_l
- _wcstoll_l
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
- _strtoll_l
- _tcstoll_l
- _tcstoll
- _wcstoll_l
- strtoll
- wcstoll
dev_langs:
- C++
helpviewer_keywords:
- _tcstoll_l function
- _wcstoll_l function
- strtoll function
- wcstoll function
- _tcstoll function
- _strtoll_l function
ms.assetid: e2d05dcf-d3b2-4291-9e60-dee77e540fd7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cd469bcab9e64de070484ce6774e7449eda8d167
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="strtoll-strtolll-wcstoll-wcstolll"></a>strtoll, _strtoll_l, wcstoll, _wcstoll_l

Converte una stringa in un **lungo** **lungo** valore.

## <a name="syntax"></a>Sintassi

```C
long long strtoll(
   const char *strSource,
   char **endptr,
   int base
);
long long wcstoll(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
long long _strtoll_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
long long _wcstoll_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*strSource*<br/>
Stringa con terminazione Null da convertire.

*endptr*<br/>
Puntatore al carattere che interrompe la lettura.

*base*<br/>
Base numerica da usare.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtoll** restituisce il valore rappresentato nella stringa *strSource*, tranne quando la rappresentazione potrebbe provocare un overflow, in tal caso, restituisce **LLONG_MAX** o**LLONG_MIN**. La funzione restituisce 0 se è non possibile eseguire alcuna conversione. **wcstoll** restituisce i valori in modo analogo a **strtoll**.

**LLONG_MAX** e **LLONG_MIN** definiti nei limiti. H.

Se *strSource* viene **NULL** o la *base* è diverso da zero e uno minore di 2 o superiore a 36, **errno** è impostato su **EINVAL** .

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **strtoll** funzione converte *strSource* a un **lungo** **lungo**. Entrambe le funzioni di smettere di leggere la stringa *strSource* con il primo carattere che non è riconosciuto come parte di un numero. Ciò potrebbe essere il carattere di terminazione null, o potrebbe essere il primo carattere numerico che è maggiore o uguale a *base*. **wcstoll** è una versione a caratteri wide **strtoll**; relativo *strSource* argomento è una stringa di caratteri "wide". In caso contrario, il comportamento di queste funzioni è identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcstoll**|**strtoll**|**strtoll**|**wcstoll**|
|**tcstoll_l**|**_strtoll_l**|**_strtoll_l**|**_wcstoll_l**|

Le impostazioni locali **LC_NUMERIC** categoria determina il riconoscimento del carattere radice *strSource*; per ulteriori informazioni, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md). Le funzioni che non hanno il **l** suffisso usano le impostazioni locali; **strtoll_l** e **wcstoll_l** sono identiche alle funzioni corrispondenti che non hanno il suffisso, ad eccezione del fatto che utilizzano le impostazioni locali passato. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non **NULL**, un puntatore al carattere che ha interrotto l'analisi viene archiviato in una posizione che punta alla *endptr*. Se è non possibile eseguire alcuna conversione sono state trovate le cifre non valide o è stata specificata una base non valida, il valore di *strSource* archiviato in una posizione che punta alla *endptr*.

**strtoll** prevede *strSource* in modo che punti a una stringa nel formato seguente:

> [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [*cifre* &#124; *lettere*]  

Un *whitespace* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; *cifre* sono uno o più cifre decimali. *lettere* sono uno o più lettere 'a' a 'z' ('A' a 'Z'). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, i caratteri iniziali della stringa che punta alla *strSource* vengono utilizzati per determinare la base. Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un integer ottale e un carattere '8' o '9' arresta l'analisi.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoll**, **strtoll_l**|\<stdlib.h>|
|**wcstoll**, **wcstoll_l**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
