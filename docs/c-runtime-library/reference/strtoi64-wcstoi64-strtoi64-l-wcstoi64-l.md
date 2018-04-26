---
title: _strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
apiname:
- _strtoi64
- _strtoi64_l
- _wcstoi64_l
- _wcstoi64
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
- _strtoi64
- strtoi64
- _stroi64_l
- _wcstoi64_l
- wcstoi64_l
- _wcstoi64
- wcstoi64
- strtoi64_l
dev_langs:
- C++
helpviewer_keywords:
- _strtoi64 function
- _wcstoi64 function
- _strtoi64_l function
- string conversion, to integers
- _wcstoi64_l function
- strtoi64_l function
- wcstoi64 function
- strtoi64 function
- wcstoi64_l function
ms.assetid: ea2abc50-7bfe-420e-a46b-703c3153593a
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 42754fcdd4e5b32d646f33817a965018be8410db
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="strtoi64-wcstoi64-strtoi64l-wcstoi64l"></a>_strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l

Convertire una stringa in un **__int64** valore.

## <a name="syntax"></a>Sintassi

```C
__int64 _strtoi64(
   const char *strSource,
   char **endptr,
   int base
);
__int64 _wcstoi64(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
__int64 _strtoi64_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
__int64 _wcstoi64_l(
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

**_strtoi64** restituisce il valore rappresentato nella stringa *strSource*, tranne quando la rappresentazione potrebbe provocare un overflow, in tal caso, restituisce **_I64_MAX** o **_I64 Min**. La funzione restituirà 0 se è non possibile eseguire alcuna conversione. **_wcstoi64** restituisce i valori in modo analogo a **strtoi64**.

**_I64_MAX** e **_I64_MIN** definiti nei limiti. H.

Se *strSource* viene **NULL** o la *base* è diverso da zero e uno minore di 2 o superiore a 36, **errno** è impostato su **EINVAL** .

Per altre informazioni su questi e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Il **_strtoi64** funzione converte *strSource* a un **__int64**. Entrambe le funzioni di smettere di leggere la stringa *strSource* con il primo carattere che non è riconosciuto come parte di un numero. Ciò potrebbe essere il carattere di terminazione null, o potrebbe essere il primo carattere numerico maggiore o uguale a *base*. **_wcstoi64** è una versione a caratteri wide **_strtoi64**; relativo *strSource* argomento è una stringa di caratteri "wide". A parte ciò, queste funzioni si comportano in modo identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoi64**|**_strtoi64**|**_strtoi64**|**_wcstoi64**|
|**_tcstoi64_l**|**_strtoi64_l**|**_strtoi64_l**|**_wcstoi64_l**|

Le impostazioni locali **LC_NUMERIC** categoria determina il riconoscimento del carattere radice *strSource * *;* per altre informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni senza il suffisso l utilizzano le impostazioni locali correnti; **_strtoi64_l** e **_wcstoi64_l** sono identiche per la funzione corrispondente senza il **l** suffisso ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non **NULL**, un puntatore al carattere che ha interrotto l'analisi viene archiviato in una posizione a cui puntata *endptr*. Se è non possibile eseguire alcuna conversione sono state trovate le cifre non valide o è stata specificata una base non valida, il valore di *strSource* archiviato in una posizione a cui puntata *endptr*.

**_strtoi64** prevede *strSource* in modo che punti a una stringa nel formato seguente:

> [*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [*cifre* &#124; *lettere*]  

Un *whitespace* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; *cifre* sono uno o più cifre decimali. *lettere* sono uno o più lettere 'a' a 'z' ('A' a 'Z').  Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, i caratteri iniziali della stringa a cui puntata *strSource* vengono utilizzati per determinare la base. Se il primo carattere è 0 e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un integer ottale e un carattere '8' o '9' arresterà l'analisi.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strtoi64**, **_strtoi64_l**|\<stdlib.h>|
|**_wcstoi64**, **_wcstoi64_l**|\<stdlib.h> or \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
