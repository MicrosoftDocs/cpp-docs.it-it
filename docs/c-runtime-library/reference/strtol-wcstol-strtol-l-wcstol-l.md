---
title: strtol, wcstol, _strtol_l, _wcstol_l
ms.date: 01/14/2020
api_name:
- strtol
- wcstol
- _strtol_l
- _wcstol_l
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
- _wcstol_l
- strtol
- _tcstol
- wcstol
- _strtol_l
- _tcstol_l
helpviewer_keywords:
- wcstol function
- wcstol_l function
- _tcstol function
- string conversion, to integers
- tcstol function
- strtol_l function
- _wcstol_l function
- _strtol_l function
- strtol function
ms.assetid: 1787c96a-f283-4a83-9325-33cfc1c7e240
no-loc:
- strtol
- wcstol
- _strtol_l
- _wcstol_l
- LONG_MAX
- LONG_MIN
- errno
- ERANGE
- EINVAL
- LC_NUMERIC
- _tcstol
- _tcstol_l
- localeconv
- setlocale
- _wsetlocale
- strtod
- _strtod_l
- wcstod
- _wcstod_l
- strtoll
- _strtoll_l
- wcstoll
- _wcstoll_l
- strtoul
- _strtoul_l
- wcstoul
- _wcstoul_l
- atof
- _atof_l
- _wtof
- _wtof_l
ms.openlocfilehash: 83054e1b31b56fda96bdea198ab34d65d633f335
ms.sourcegitcommit: e93f3e6a110fe38bc642055bdf4785e620d4220f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2020
ms.locfileid: "76123929"
---
# <a name="opno-locstrtol-opno-locwcstol-opno-loc_strtol_l-opno-loc_wcstol_l"></a>strtol, wcstol, _strtol_l, _wcstol_l

Converte le stringhe in un valore **Long** Integer.

## <a name="syntax"></a>Sintassi

```C
long strtol(
   const char *string,
   char **end_ptr,
   int base
);
long wcstol(
   const wchar_t *string,
   wchar_t **end_ptr,
   int base
);
long _strtol_l(
   const char *string,
   char **end_ptr,
   int base,
   _locale_t locale
);
long _wcstol_l(
   const wchar_t *string,
   wchar_t **end_ptr,
   int base,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*string*\
Stringa con terminazione Null da convertire.

*end_ptr*\
Parametro di output, impostato in modo da puntare al carattere dopo l'ultimo carattere interpretato. Ignorato, se **null**.

*base*\
Base numerica da usare.

*impostazioni locali*\
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**strtol** , **wcstol** , **_strtol_l** e **_wcstol_l** restituiscono il valore rappresentato nella *stringa*. Restituiscono 0 se non è possibile alcuna conversione. Quando la rappresentazione provocherebbe un overflow, restituiscono **LONG_MAX** o **LONG_MIN** .

**errno** viene impostato su **ERANGE** se si verifica un overflow o un underflow. È impostato su **EINVAL** se la *stringa* è **null**. Oppure se *base* è diverso da zero e minore di 2 o maggiore di 36. Per ulteriori informazioni su **ERANGE** , **EINVAL** e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Note

Le funzioni **strtol** , **wcstol** , **_strtol_l** e **_wcstol_l** convertono la *stringa* in un valore **Long**. Arrestano la lettura della *stringa* in corrispondenza del primo carattere non riconosciuto come parte di un numero. Può trattarsi del carattere di terminazione null oppure il primo carattere alfanumerico maggiore o uguale alla *base*.

**wcstol** e **_wcstol_l** sono versioni a caratteri wide di **strtol** e **_strtol_l** . Il relativo argomento *stringa* è una stringa di caratteri wide. Queste funzioni si comportano in modo identico a **strtol** e **_strtol_l** in caso contrario. L'impostazione della categoria **LC_NUMERIC** delle impostazioni locali determina il riconoscimento del carattere radice (il marcatore frazionario o il separatore decimale) nella *stringa*. Le funzioni **strtol** e **wcstol** utilizzano le impostazioni locali correnti. **_strtol_l** e **_wcstol_l** utilizzano invece le impostazioni locali passate. Per ulteriori informazioni, vedere [setlocale] e [impostazioni locali](../../c-runtime-library/locale.md).

Quando *end_ptr* è **null**, viene ignorato. In caso contrario, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *end_ptr*. Non è possibile alcuna conversione se non vengono trovate cifre valide o viene specificata una base non valida. Il valore della *stringa* viene quindi archiviato nella posizione a cui punta *end_ptr*.

**strtol** prevede che la *stringa* punti a una stringa nel formato seguente:

> [*spazi vuoti*] [{ **+** &#124; **-** }] [**0** [{ **x** &#124; **x** }]] [*alfanumerici*]

Racchiusi tra parentesi quadre (`[ ]`) elementi facoltativi. Le parentesi graffe e una barra verticale (`{ | }`) racchiudono alternative per un singolo elemento. gli *spazi vuoti* possono essere costituiti da spazi e caratteri di tabulazione, che vengono ignorati. i *caratteri alfanumerici* sono cifre decimali o le lettere da' a' a' z ' (o da' A ' a' z '). Il primo carattere che non si adatta a questo modulo interrompe l'analisi. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta la *stringa* . Se il primo carattere è 0 e il secondo carattere non è' x ' o ' X ', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da' a' a' z ' (o da' A ' A ' Z ') vengono assegnati i valori da 10 a 35. L'analisi consente solo lettere i cui valori sono minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Si supponga, ad esempio, che la *stringa* inizi con "01". Se *base* è 0, lo scanner presuppone che si tratta di un Integer ottale. Un carattere "8" o "9" interrompe l'analisi.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstol**|**strtol**|**strtol**|**wcstol**|
|**_tcstol_l**|**_strtol_l**|**_strtol_l**|**_wcstol_l**|

## <a name="requirements"></a>Requisiti di

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**strtol**|\<stdlib.h>|
|**wcstol**|\<stdlib.h> o \<wchar.h>|
|**_strtol_l**|\<stdlib.h>|
|**_wcstol_l**|\<stdlib.h> o \<wchar.h>|

Le funzioni **_strtol_l** e **_wcstol_l** sono specifiche di Microsoft e non fanno parte della libreria C standard. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [strtod](strtod-strtod-l-wcstod-wcstod-l.md).

## <a name="see-also"></a>Vedere anche

\ [conversione dati](../data-conversion.md)
[Impostazioni locali](../locale.md)\
[localeconv](localeconv.md)\
[setlocale, _wsetlocale](setlocale-wsetlocale.md)\
[Funzioni da stringa a valore numerico](../string-to-numeric-value-functions.md)\
[strtod, _strtod_l, wcstod, _wcstod_l](strtod-strtod-l-wcstod-wcstod-l.md)\
[strtoll, _strtoll_l, wcstoll, _wcstoll_l](strtoll-strtoll-l-wcstoll-wcstoll-l.md)\
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)\
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)
