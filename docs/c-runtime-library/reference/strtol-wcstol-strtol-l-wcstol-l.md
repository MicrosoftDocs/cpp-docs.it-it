---
title: ':::no-loc(strtol):::, :::no-loc(wcstol):::, :::no-loc(_strtol_l):::, :::no-loc(_wcstol_l):::'
ms.date: 4/2/2020
api_name:
- ':::no-loc(strtol):::'
- ':::no-loc(wcstol):::'
- ':::no-loc(_strtol_l):::'
- ':::no-loc(_wcstol_l):::'
- '_o_:::no-loc(_strtol_l):::'
- '_o_:::no-loc(_wcstol_l):::'
- '_o_:::no-loc(strtol):::'
- '_o_:::no-loc(wcstol):::'
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
- ':::no-loc(_wcstol_l):::'
- ':::no-loc(strtol):::'
- ':::no-loc(_tcstol):::'
- ':::no-loc(wcstol):::'
- ':::no-loc(_strtol_l):::'
- ':::no-loc(_tcstol_l):::'
helpviewer_keywords:
- ':::no-loc(wcstol)::: function'
- :::no-loc(wcstol):::_l function
- ':::no-loc(_tcstol)::: function'
- string conversion, to integers
- tcstol function
- :::no-loc(strtol):::_l function
- ':::no-loc(_wcstol_l)::: function'
- ':::no-loc(_strtol_l)::: function'
- ':::no-loc(strtol)::: function'
ms.assetid: 1787c96a-f283-4a83-9325-33cfc1c7e240
no-loc:
- ':::no-loc(strtol):::'
- ':::no-loc(wcstol):::'
- ':::no-loc(_strtol_l):::'
- ':::no-loc(_wcstol_l):::'
- ':::no-loc(LONG_MAX):::'
- ':::no-loc(LONG_MIN):::'
- ':::no-loc(errno):::'
- ':::no-loc(ERANGE):::'
- ':::no-loc(EINVAL):::'
- ':::no-loc(LC_NUMERIC):::'
- ':::no-loc(_tcstol):::'
- ':::no-loc(_tcstol_l):::'
- ':::no-loc(localeconv):::'
- ':::no-loc(setlocale):::'
- ':::no-loc(_wsetlocale):::'
- ':::no-loc(strtod):::'
- ':::no-loc(_strtod_l):::'
- ':::no-loc(wcstod):::'
- ':::no-loc(_wcstod_l):::'
- ':::no-loc(strtoll):::'
- ':::no-loc(_strtoll_l):::'
- ':::no-loc(wcstoll):::'
- ':::no-loc(_wcstoll_l):::'
- ':::no-loc(strtoul):::'
- ':::no-loc(_strtoul_l):::'
- ':::no-loc(wcstoul):::'
- ':::no-loc(_wcstoul_l):::'
- ':::no-loc(atof):::'
- ':::no-loc(_atof_l):::'
- ':::no-loc(_wtof):::'
- ':::no-loc(_wtof_l):::'
ms.openlocfilehash: a5265b434f14f299532d6f5ebb65c83d75ea63ca
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232404"
---
# <a name="no-locstrtol-no-locwcstol-no-loc_strtol_l-no-loc_wcstol_l"></a>:::no-loc(strtol):::, :::no-loc(wcstol):::, :::no-loc(_strtol_l):::, :::no-loc(_wcstol_l):::

Converte le stringhe in un **`long`** valore integer.

## <a name="syntax"></a>Sintassi

```C
long :::no-loc(strtol):::(
   const char *string,
   char **end_ptr,
   int base
);
long :::no-loc(wcstol):::(
   const wchar_t *string,
   wchar_t **end_ptr,
   int base
);
long :::no-loc(_strtol_l):::(
   const char *string,
   char **end_ptr,
   int base,
   _locale_t locale
);
long :::no-loc(_wcstol_l):::(
   const wchar_t *string,
   wchar_t **end_ptr,
   int base,
   _locale_t locale
);
```

### <a name="parameters"></a>Parametri

*stringa*\
Stringa con terminazione Null da convertire.

*end_ptr*\
Parametro di output, impostato in modo da puntare al carattere dopo l'ultimo carattere interpretato. Ignorato, se **null**.

*base*\
Base numerica da usare.

*locale*\
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

**:::no-loc(strtol):::**, **:::no-loc(wcstol):::** , **:::no-loc(_strtol_l):::** e **:::no-loc(_wcstol_l):::** restituiscono il valore rappresentato nella *stringa*. Restituiscono 0 se non è possibile alcuna conversione. Quando la rappresentazione provocherebbe un overflow, restituiscono **:::no-loc(LONG_MAX):::** o **:::no-loc(LONG_MIN):::** .

**:::no-loc(errno):::** viene impostato su **:::no-loc(ERANGE):::** se si verifica un overflow o un underflow. Viene impostato su **:::no-loc(EINVAL):::** se la *stringa* è **null**. Oppure se *base* è diverso da zero e minore di 2 o maggiore di 36. Per ulteriori informazioni su **:::no-loc(ERANGE):::** , **:::no-loc(EINVAL):::** e altri codici restituiti, vedere [_dos :::no-loc(errno)::: , :::no-loc(errno)::: , _sys_errlist e _sys_nerr](../../c-runtime-library/:::no-loc(errno):::-dos:::no-loc(errno):::-sys-errlist-and-sys-nerr.md).

## <a name="remarks"></a>Osservazioni

Le **:::no-loc(strtol):::** **:::no-loc(wcstol):::** funzioni,, **:::no-loc(_strtol_l):::** e **:::no-loc(_wcstol_l):::** convertono la *stringa* in un oggetto **`long`** . Arrestano la lettura della *stringa* in corrispondenza del primo carattere non riconosciuto come parte di un numero. Può trattarsi del carattere di terminazione null oppure il primo carattere alfanumerico maggiore o uguale alla *base*.

**:::no-loc(wcstol):::** e **:::no-loc(_wcstol_l):::** sono versioni a caratteri wide di **:::no-loc(strtol):::** e **:::no-loc(_strtol_l):::** . Il relativo argomento *stringa* è una stringa di caratteri wide. Queste funzioni si comportano in modo identico a **:::no-loc(strtol):::** e **:::no-loc(_strtol_l):::** in caso contrario. L'impostazione della categoria delle impostazioni locali **:::no-loc(LC_NUMERIC):::** determina il riconoscimento del carattere radice (il marcatore frazionario o il separatore decimale) nella *stringa*. Le funzioni **:::no-loc(strtol):::** e **:::no-loc(wcstol):::** usano le impostazioni locali correnti. **:::no-loc(_strtol_l):::** e **:::no-loc(_wcstol_l):::** usano invece le impostazioni locali passate. Per ulteriori informazioni, vedere [ :::no-loc(setlocale)::: ] e [impostazioni locali](../../c-runtime-library/locale.md).

Quando *end_ptr* è **null**, viene ignorato. In caso contrario, un puntatore al carattere che ha interrotto l'analisi viene archiviato nella posizione a cui punta *end_ptr*. Non è possibile alcuna conversione se non vengono trovate cifre valide o viene specificata una base non valida. Il valore della *stringa* viene quindi archiviato nella posizione a cui punta *end_ptr*.

**:::no-loc(strtol):::** prevede che la *stringa* punti a una stringa nel formato seguente:

> [*spazi vuoti*] [{ **+** &#124; **-** }] [**0** [{ **x** &#124; **x** }]] [*alfanumerici*]

Le parentesi quadre ( `[ ]` ) racchiudono gli elementi facoltativi. Le parentesi graffe e una barra verticale ( `{ | }` ) racchiudono alternative per un singolo elemento. gli *spazi vuoti* possono essere costituiti da spazi e caratteri di tabulazione, che vengono ignorati. i *caratteri alfanumerici* sono cifre decimali o le lettere da' a' a' z ' (o da' A ' a' z '). Il primo carattere che non si adatta a questo modulo interrompe l'analisi. Se *base* è compreso tra 2 e 36, viene usato come base del numero. Se *base* è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta la *stringa* . Se il primo carattere è 0 e il secondo carattere non è' x ' o ' X ', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da' a' a' z ' (o da' A ' A ' Z ') vengono assegnati i valori da 10 a 35. L'analisi consente solo lettere i cui valori sono minori di *base*. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Si supponga, ad esempio, che la *stringa* inizi con "01". Se *base* è 0, lo scanner presuppone che si tratta di un Integer ottale. Un carattere "8" o "9" interrompe l'analisi.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](../global-state.md).

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**:::no-loc(_tcstol):::**|**:::no-loc(strtol):::**|**:::no-loc(strtol):::**|**:::no-loc(wcstol):::**|
|**:::no-loc(_tcstol_l):::**|**:::no-loc(_strtol_l):::**|**:::no-loc(_strtol_l):::**|**:::no-loc(_wcstol_l):::**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**:::no-loc(strtol):::**|\<stdlib.h>|
|**:::no-loc(wcstol):::**|\<stdlib.h> o \<wchar.h>|
|**:::no-loc(_strtol_l):::**|\<stdlib.h>|
|**:::no-loc(_wcstol_l):::**|\<stdlib.h> o \<wchar.h>|

Le **:::no-loc(_strtol_l):::** **:::no-loc(_wcstol_l):::** funzioni e sono specifiche di Microsoft, non parte della libreria C standard. Per altre informazioni sulla compatibilità, vedere [Compatibilità](../compatibility.md).

## <a name="example"></a>Esempio

Vedere l'esempio per [:::no-loc(strtod):::](:::no-loc(strtod):::-:::no-loc(strtod):::-l-:::no-loc(wcstod):::-:::no-loc(wcstod):::-l.md) .

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../data-conversion.md)\
[Locale](../locale.md)\
[:::no-loc(localeconv):::](:::no-loc(localeconv):::.md)\
[:::no-loc(setlocale):::, :::no-loc(_wsetlocale):::](:::no-loc(setlocale):::-w:::no-loc(setlocale):::.md)\
[Funzioni da stringa a valore numerico](../string-to-numeric-value-functions.md)\
[:::no-loc(strtod):::, :::no-loc(_strtod_l):::, :::no-loc(wcstod):::, :::no-loc(_wcstod_l):::](:::no-loc(strtod):::-:::no-loc(strtod):::-l-:::no-loc(wcstod):::-:::no-loc(wcstod):::-l.md)\
[:::no-loc(strtoll):::, :::no-loc(_strtoll_l):::, :::no-loc(wcstoll):::, :::no-loc(_wcstoll_l):::](:::no-loc(strtoll):::-:::no-loc(strtoll):::-l-:::no-loc(wcstoll):::-:::no-loc(wcstoll):::-l.md)\
[:::no-loc(strtoul):::, :::no-loc(_strtoul_l):::, :::no-loc(wcstoul):::, :::no-loc(_wcstoul_l):::](:::no-loc(strtoul):::-:::no-loc(strtoul):::-l-:::no-loc(wcstoul):::-:::no-loc(wcstoul):::-l.md)\
[:::no-loc(atof):::, :::no-loc(_atof_l):::, :::no-loc(_wtof):::, :::no-loc(_wtof_l):::](:::no-loc(atof):::-:::no-loc(atof):::-l-wtof-wtof-l.md)
