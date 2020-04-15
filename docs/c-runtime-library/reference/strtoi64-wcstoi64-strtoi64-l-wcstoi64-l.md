---
title: _strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l
ms.date: 4/2/2020
api_name:
- _strtoi64
- _strtoi64_l
- _wcstoi64_l
- _wcstoi64
- _o__strtoi64
- _o__strtoi64_l
- _o__wcstoi64
- _o__wcstoi64_l
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
- _strtoi64
- strtoi64
- _stroi64_l
- _wcstoi64_l
- wcstoi64_l
- _wcstoi64
- wcstoi64
- strtoi64_l
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
ms.openlocfilehash: 8dcdff4cf6f3eff191dc126583c1ca8290133e02
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365124"
---
# <a name="_strtoi64-_wcstoi64-_strtoi64_l-_wcstoi64_l"></a>_strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l

Convertire una stringa in un **valore __int64.**

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

*Strsource*<br/>
Stringa con terminazione Null da convertire.

*endptr (in base alla data in*<br/>
Puntatore al carattere che interrompe la lettura.

*base*<br/>
Base numerica da usare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**_strtoi64** restituisce il valore rappresentato nella stringa *strSource*, tranne quando la rappresentazione causerebbe un overflow, nel qual caso restituisce **_I64_MAX** o **_I64_MIN**. La funzione restituirà 0 se è non possibile eseguire alcuna conversione. **_wcstoi64** restituisce valori analogamente a **strtoi64**.

**_I64_MAX** e **_I64_MIN** sono definiti in LIMITI. H.

Se *strSource* è **NULL** o la *base* è diversa da zero e minore di 2 o maggiore di 36, **errno** è impostato su **EINVAL**.

Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **_strtoi64** converte *strSource* in un **__int64**. Entrambe le funzioni interrompono la lettura della stringa *strSource* al primo carattere che non possono riconoscere come parte di un numero. Può trattarsi del carattere di terminazione null oppure del primo carattere numerico maggiore o uguale a *base*. **_wcstoi64** è una versione a caratteri wide di **_strtoi64**; il relativo argomento *strSource* è una stringa di caratteri wide. A parte ciò, queste funzioni si comportano in modo identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoi64**|**_strtoi64**|**_strtoi64**|**_wcstoi64**|
|**_tcstoi64_l**|**_strtoi64_l**|**_strtoi64_l**|**_wcstoi64_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere di radice in *strSource*; Per ulteriori informazioni, vedere [setlocale](setlocale-wsetlocale.md). Le funzioni senza il suffisso _l utilizzano le impostazioni locali correnti; **_strtoi64_l** e **_wcstoi64_l** sono identici alla funzione corrispondente senza il suffisso **_l,** ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto l'analisi viene memorizzato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**_strtoi64** prevede che *strSource* punti a una stringa del formato seguente:

> [*spazio vuoto*] **-**[&#124;]**+** [**0** **[x** &#124; **X]]** [*cifre* &#124; *lettere*]

Uno *spazio può* essere costituito da spazi e caratteri di tabulazione, che vengono ignorati; *cifre* sono una o più cifre decimali; *lettere* sono una o più lettere tra 'a' e 'z' (o da 'A' a ''').  Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene utilizzato come base del numero. Se *base* è 0, i caratteri iniziali della stringa a cui *punta strSource* vengono utilizzati per determinare la base. Se il primo carattere è 0 e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un numero intero ottale e un carattere '8' o '9' interromperà la scansione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**_strtoi64**, **_strtoi64_l**|\<stdlib.h>|
|**_wcstoi64**, **_wcstoi64_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
