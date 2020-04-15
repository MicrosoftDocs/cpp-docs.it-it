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
- api-ms-win-crt-private-l1-1-0
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
ms.openlocfilehash: d5a0ce8cb2c1d5f88d5439b99047609b32c8d2ec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365184"
---
# <a name="strtoll-_strtoll_l-wcstoll-_wcstoll_l"></a>strtoll, _strtoll_l, wcstoll, _wcstoll_l

Converte una stringa in un valore **long** **long.**

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

*Strsource*<br/>
Stringa con terminazione Null da convertire.

*endptr (in base alla data in*<br/>
Puntatore al carattere che interrompe la lettura.

*base*<br/>
Base numerica da usare.

*Impostazioni internazionali*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtoll** restituisce il valore rappresentato nella stringa *strSource*, tranne quando la rappresentazione causerebbe un overflow, in tal caso, restituisce **LLONG_MAX** o **LLONG_MIN**. La funzione restituisce 0 se è non possibile eseguire alcuna conversione. **wcstoll** restituisce i valori analogamente a **strtoll**.

**LLONG_MAX** e **LLONG_MIN** sono definiti in LIMITI. H.

Se *strSource* è **NULL** o la *base* è diversa da zero e minore di 2 o maggiore di 36, **errno** è impostato su **EINVAL**.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

La funzione **strtoll** converte *strSource* in un **lungo** **oggetto**long . Entrambe le funzioni interrompono la lettura della stringa *strSource* al primo carattere che non possono riconoscere come parte di un numero. Può trattarsi del carattere di terminazione null oppure del primo carattere numerico maggiore o uguale a *base*. **wcstoll** è una versione a caratteri wide di **strtoll**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa impostazione, vedere [Stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoll**|**strtoll**|**strtoll**|**wcstoll**|
|**_tcstoll_l**|**_strtoll_l**|**_strtoll_l**|**_wcstoll_l**|

L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere di radice in *strSource*; Per ulteriori informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). Le funzioni che non hanno il suffisso **_l** utilizzano le impostazioni locali correnti; **_strtoll_l** e **_wcstoll_l** sono identici alle funzioni corrispondenti che non hanno il suffisso, ad eccezione del fatto che utilizzano invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **NULL**, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**strtoll** prevede che *strSource* punti a una stringa del formato seguente:

> [*spazio vuoto*] **-**[&#124;]**+** [**0** **[x** &#124; **X]]** [*cifre* &#124; *lettere*]

Uno *spazio può* essere costituito da spazi e caratteri di tabulazione, che vengono ignorati; *cifre* sono una o più cifre decimali; *lettere* sono una o più lettere tra 'a' e 'z' (o da 'A' a '''). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene utilizzato come base del numero. Se *base* è 0, i caratteri iniziali della stringa a cui *punta strSource* vengono utilizzati per determinare la base. Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se *base* è 0 e il primo carattere analizzato è '0', si presuppone un numero intero ottale e un carattere '8' o '9' interrompe la scansione.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoll**, **_strtoll_l**|\<stdlib.h>|
|**wcstoll** **, _wcstoll_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="see-also"></a>Vedere anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni internazionali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
