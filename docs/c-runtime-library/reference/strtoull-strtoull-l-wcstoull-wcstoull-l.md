---
title: strtoull, _strtoull_l, wcstoull, _wcstoull_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _strtoull_l
- _wcstoull_l
- strtoull
- wcstoull
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
- _wcstoull_l
- _tcstoull
- _tcstoull_l
- wcstoull
- _strtoull_l
- strtoull
dev_langs:
- C++
helpviewer_keywords:
- strtoull function
- _tcstoull_l function
- _tcstoull function
- _wcstoull_l function
- _strtoull_l function
- wcstoull function
ms.assetid: 36dac1cc-e901-40a0-8802-63562d6d01df
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5080946188858e4a0dcd9eb6b2aa0029f1c343e7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32417208"
---
# <a name="strtoull-strtoulll-wcstoull-wcstoulll"></a>strtoull, _strtoull_l, wcstoull, _wcstoull_l

Converte le stringhe in un valore integer long long senza segno.

## <a name="syntax"></a>Sintassi

```C
unsigned long long strtoull(
   const char *strSource,
   char **endptr,
   int base
);
unsigned long long _strtoull_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
unsigned long long wcstoull(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
unsigned long long _wcstoull_l(
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

**strtoull** restituisce il valore convertito, se presente, o **ULLONG_MAX** in caso di overflow. **strtoull** restituisce 0 se è non possibile eseguire alcuna conversione. **wcstoull** restituisce i valori in modo analogo a **strtoull**. Per entrambe le funzioni **errno** è impostata su **ERANGE** in caso di overflow o underflow.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Ognuna di queste funzioni converte la stringa di input *strSource* a un **unsigned** **lungo** **lungo** valore intero.

**strtoull** interrompe la lettura della stringa *strSource* con il primo carattere non riconosciuto come parte di un numero. Ciò potrebbe essere il carattere di terminazione null, o potrebbe essere il primo carattere numerico che è maggiore o uguale a *base*. L'impostazione delle **LC_NUMERIC** categoria delle impostazioni locali determina il riconoscimento del carattere radice *strSource*; per ulteriori informazioni, vedere [setlocale, wsetlocale](setlocale-wsetlocale.md). **strtoull** e **wcstoull** usano le impostazioni locali; **strtoull_l** e **wcstoull_l** invece utilizzare in caso contrario, le impostazioni locali passato ma sono identici. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non **NULL**, un puntatore al carattere che ha interrotto l'analisi viene archiviato in una posizione che punta alla *endptr*. Se è non possibile eseguire alcuna conversione sono state trovate le cifre non valide o è stata specificata una base non valida, il valore di *strSource* archiviato in una posizione che punta alla *endptr*.

**wcstoull** è una versione a caratteri wide **strtoull** e il relativo *strSource* argomento è una stringa di caratteri "wide". In caso contrario, il comportamento di queste funzioni è identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**tcstoull**|**strtoull**|**strtoull**|**wcstoull**|
|**tcstoull_l**|**strtoull_l**|**_strtoull_l**|**_wcstoull_l**|

**strtoull** prevede *strSource* in modo che punti a una stringa nel formato seguente:

> [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [*cifre* &#124; *lettere*]  

Un *whitespace* può essere costituito da caratteri di spazio e tabulazione, ovvero vengono ignorati. *cifre* sono uno o più cifre decimali. *lettere* sono uno o più lettere 'a' a 'z' ('A' a 'Z'). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, i caratteri iniziali della stringa che punta alla *strSource* vengono utilizzati per determinare la base. Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un integer ottale e un carattere '8' o '9' arresta l'analisi. **strtoull** consente a un segno più (**+**) o segno meno (**-**) prefisso; un segno meno iniziale sign indica che il valore restituito è negativo.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoull**|\<stdlib.h>|
|**wcstoull**|\<stdlib.h> or \<wchar.h>|
|**_strtoull_l**|\<stdlib.h>|
|**_wcstoull_l**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [strtod](strtod-strtod-l-wcstod-wcstod-l.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[strtoll, _strtoll_l, wcstoll, _wcstoll_l](strtoll-strtoll-l-wcstoll-wcstoll-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
