---
description: 'Altre informazioni su: strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l'
title: strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l
ms.date: 11/04/2016
api_name:
- _wcstoumax_l
- _strtoumax_l
- wcstoumax
- strtoumax
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- wcstoumax
- _tcstoumax
- _strtoumax_l
- _wcstoumax_l
- _tcstoumax_l
- strtoumax
helpviewer_keywords:
- _strtoumax_l function
- conversion functions
- wcstoumax function
- _wcstoumax_l function
- strtoumax function
ms.assetid: 566769f9-495b-4508-b9c6-02217a578897
ms.openlocfilehash: fe3ef3efe19f6b75ff949362876a2004932e9d14
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97117250"
---
# <a name="strtoumax-_strtoumax_l-wcstoumax-_wcstoumax_l"></a>strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l

Converte le stringhe in un valore intero con il tipo Integer senza segno supportato più grande.

## <a name="syntax"></a>Sintassi

```C
uintmax_t strtoumax(
   const char *strSource,
   char **endptr,
   int base
);
uintmax_t _strtoumax_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
uintmax_t wcstoumax(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
uintmax_t _wcstoumax_l(
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

**strtoumax** restituisce il valore convertito, se presente, o **UINTMAX_MAX** in caso di overflow. **strtoumax** restituisce 0 se non è possibile eseguire alcuna conversione. **wcstoumax** restituisce i valori in modo analogo a **strtoumax**. Per entrambe le funzioni, **errno** viene impostato su **ERANGE** se si verifica un overflow o un underflow.

Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Commenti

Ognuna di queste funzioni converte la stringa di input *strSource* in un valore integer **uintmax_t** .

**strtoumax** interrompe la lettura della stringa *strSource* al primo carattere che non riconosce come parte di un numero. Può trattarsi del carattere null di terminazione o del primo carattere numerico maggiore o uguale a *base*. L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere radice in *strSource*. Per altre informazioni, vedere [setlocale, _wsetlocale](setlocale-wsetlocale.md). **strtoumax** e **wcstoumax** usano le impostazioni locali correnti; **_strtoumax_l** e **_wcstoumax_l** sono identiche, ad eccezione del fatto che usano invece le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **null**, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

La versione a caratteri wide di **strtoumax** è **wcstoumax**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoumax**|**strtoumax**|**strtoumax**|**wcstoumax**|
|**_tcstoumax_l**|**strtoumax_l**|**_strtoumax_l**|**_wcstoumax_l**|

**strtoumax** prevede che *strSource* faccia riferimento a una stringa nel formato seguente:

> [*spazi vuoti*] [{ **+** &#124; **-** }] [**0** [{ **x** &#124; **x** }]] [*cifre*  &#124; *lettere*]

Uno spazio *vuoto* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. le *cifre* corrispondono a una o più cifre decimali. le *lettere* sono una o più lettere da' a' a' z ' (o da' A ' a' z '). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta *strSource* . Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Se ad esempio *base* è 0 e il primo carattere analizzato è' 0', si presuppone un Integer ottale e il carattere ' 8' o ' 9' arresterà l'analisi. **strtoumax** consente un prefisso con segno più ( **+** ) o meno ( **-** ); un segno meno iniziale indica che il valore restituito è il complemento a due del valore assoluto della stringa convertita.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoumax**|\<stdlib.h>|
|**wcstoumax**|\<stdlib.h> o \<wchar.h>|
|**_strtoumax_l**|\<stdlib.h>|
|**_wcstoumax_l**|\<stdlib.h> o \<wchar.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [strtod](strtod-strtod-l-wcstod-wcstod-l.md).

## <a name="see-also"></a>Vedi anche

[Conversione dati](../../c-runtime-library/data-conversion.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[localeconv](localeconv.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)<br/>
[strtoimax, _strtoimax_l, wcstoimax, _wcstoimax_l](strtoimax-strtoimax-l-wcstoimax-wcstoimax-l.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[strtoll, _strtoll_l, wcstoll, _wcstoll_l](strtoll-strtoll-l-wcstoll-wcstoll-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
