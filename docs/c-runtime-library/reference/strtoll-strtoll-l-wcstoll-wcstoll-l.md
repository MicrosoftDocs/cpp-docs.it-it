---
title: strtoll, _strtoll_l, wcstoll, _wcstoll_l
ms.date: 4/2/2020
api_name:
- strtoll
- wcstoll
- _strtoll_l
- _wcstoll_l
- _o__strtoll_l
- _o__wcstoll_l
- _o_strtoll
- _o_wcstoll
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
- _strtoll_l
- _tcstoll_l
- _tcstoll
- _wcstoll_l
- strtoll
- wcstoll
helpviewer_keywords:
- _tcstoll_l function
- _wcstoll_l function
- strtoll function
- wcstoll function
- _tcstoll function
- _strtoll_l function
ms.assetid: e2d05dcf-d3b2-4291-9e60-dee77e540fd7
ms.openlocfilehash: 047932a1f1474d443179a37b3dbc4fde6c995a99
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87213476"
---
# <a name="strtoll-_strtoll_l-wcstoll-_wcstoll_l"></a>strtoll, _strtoll_l, wcstoll, _wcstoll_l

Converte una stringa in un **`long long`** valore.

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

**strtoll** restituisce il valore rappresentato nella stringa *strSource*, tranne quando la rappresentazione potrebbe causare un overflow, in questo caso restituisce **LLONG_MAX** o **LLONG_MIN**. La funzione restituisce 0 se è non possibile eseguire alcuna conversione. **wcstoll** restituisce i valori in modo analogo a **strtoll**.

**LLONG_MAX** e **LLONG_MIN** sono definiti nei limiti. H.

Se *strSource* è **null** o la *base* è diversa da zero e minore di 2 o maggiore di 36, **errno** viene impostato su **EINVAL**.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **strtoll** converte *strSource* in un oggetto **`long long`** . Entrambe le funzioni interrompono la lettura della stringa *strSource* al primo carattere che non sono in grado di riconoscere come parte di un numero. Può trattarsi del carattere null di terminazione o del primo carattere numerico maggiore o uguale a *base*. **wcstoll** è una versione a caratteri wide di **strtoll**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoll**|**strtoll**|**strtoll**|**wcstoll**|
|**_tcstoll_l**|**_strtoll_l**|**_strtoll_l**|**_wcstoll_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere radice in *strSource*; Per ulteriori informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). Le funzioni che non hanno il suffisso **_L** usano le impostazioni locali correnti; **_strtoll_l** e **_wcstoll_l** sono identiche alle funzioni corrispondenti che non hanno il suffisso, ad eccezione del fatto che usano invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **null**, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**strtoll** prevede che *strSource* faccia riferimento a una stringa nel formato seguente:

> [*spazi vuoti*] [{ **+** &#124; **-** }] [**0** [{ **x** &#124; **x** }]] [*cifre* &#124; *lettere*]

Uno spazio *vuoto* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati; le *cifre* corrispondono a una o più cifre decimali; le *lettere* sono una o più lettere da' a' a' z ' (o da' A ' a' z '). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta *strSource* . Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Se ad esempio *base* è 0 e il primo carattere analizzato è' 0', si presuppone un Integer ottale e il carattere ' 8' o ' 9' interrompe l'analisi.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoll**, **_strtoll_l**|\<stdlib.h>|
|**wcstoll**, **_wcstoll_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
