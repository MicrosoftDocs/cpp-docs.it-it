---
title: strtoul, _strtoul_l, wcstoul, _wcstoul_l
ms.date: 11/04/2016
api_name:
- _wcstoul_l
- _strtoul_l
- strtoul
- wcstoul
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
- ntoskrnl.exe
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- strtoul
- _tcstoul
- wcstoul
helpviewer_keywords:
- _wcstoul_l function
- _tcstoul function
- _strtoul_l function
- string conversion, to integers
- wcstoul function
- strtoul function
- wcstoul_l function
- strtoul_l function
- tcstoul function
ms.assetid: 38f2afe8-8178-4e0b-8bbe-d5c6ad66e3ab
ms.openlocfilehash: 29edd517b9aa4737497a36557820bf45b6b9804f
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70946320"
---
# <a name="strtoul-_strtoul_l-wcstoul-_wcstoul_l"></a>strtoul, _strtoul_l, wcstoul, _wcstoul_l

Converte le stringhe in un valore long integer senza segno.

## <a name="syntax"></a>Sintassi

```C
unsigned long strtoul(
   const char *strSource,
   char **endptr,
   int base
);
unsigned long _strtoul_l(
   const char *strSource,
   char **endptr,
   int base,
   _locale_t locale
);
unsigned long wcstoul(
   const wchar_t *strSource,
   wchar_t **endptr,
   int base
);
unsigned long _wcstoul_l(
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

**strtoul** restituisce il valore convertito, se presente, o **ULONG_MAX** in caso di overflow. **strtoul** restituisce 0 se non è possibile eseguire alcuna conversione. **wcstoul** restituisce i valori in modo analogo a **strtoul**. Per entrambe le funzioni, **errno** viene impostato su **ERANGE** se si verifica un overflow o un underflow.

Per altre informazioni su questo e su altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) .

## <a name="remarks"></a>Note

Ognuna di queste funzioni converte la stringa di input *strSource* in un oggetto **Long** **senza segno** .

**strtoul** interrompe la lettura della stringa *strSource* al primo carattere che non riconosce come parte di un numero. Potrebbe trattarsi del carattere null di terminazione o del primo carattere numerico maggiore o uguale alla *base*. L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere radice in *strSource*; Per ulteriori informazioni, vedere [setlocale](setlocale-wsetlocale.md). **strtoul** e **wcstoul** usano le impostazioni locali correnti; **_strtoul_l** e **_wcstoul_l** sono identici, ad eccezione del fatto che usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).

Se *endptr* non è **null**, un puntatore al carattere che ha interrotto l'analisi viene archiviato in corrispondenza della posizione a cui punta *endptr*. Se non è possibile eseguire alcuna conversione (non sono state trovate cifre valide o è stata specificata una base non valida), il valore di *strSource* viene archiviato nella posizione a cui punta *endptr*.

**wcstoul** è una versione a caratteri wide di **strtoul**; il relativo argomento *strSource* è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstoul**|**strtoul**|**strtoul**|**wcstoul**|
|**_tcstoul_l**|**strtoul_l**|**_strtoul_l**|**_wcstoul_l**|

**strtoul** prevede che *strSource* faccia riferimento a una stringa nel formato seguente:

> [*spazi vuoti*] [{ **+** &#124; &#124; &#124; }] [0 [{x x}]] [cifre lettere] **-**

Uno spazio *vuoto* può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. le *cifre* corrispondono a una o più cifre decimali. le *lettere* sono una o più lettere da' a' a' z ' (o da' A ' a' z '). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta *strSource* . Se il primo carattere è 0 e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Se ad esempio *base* è 0 e il primo carattere analizzato è' 0', si presuppone un Integer ottale e il carattere ' 8' o ' 9' arresterà l'analisi. **strtoul** consente un prefisso di **+** segno più () **-** o meno (). un segno meno iniziale indica che il valore restituito è negato.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtoul**|\<stdlib.h>|
|**wcstoul**|\<stdlib.h> or \<wchar.h>|
|**_strtoul_l**|\<stdlib.h>|
|**_wcstoul_l**|\<stdlib.h> or \<wchar.h>|

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
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
