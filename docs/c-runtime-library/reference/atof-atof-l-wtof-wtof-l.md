---
title: atof, _atof_l, _wtof, _wtof_l
ms.date: 04/05/2018
api_name:
- _wtof_l
- atof
- _atof_l
- _wtof
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
- _tstof
- _ttof
- atof
- stdlib/atof
- math/atof
- _atof_l
- stdlib/_atof_l
- math/_atof_l
- _wtof
- corecrt_wstdlib/_wtof
- _wtof_l
- corecrt_wstdlib/_wtof_l
helpviewer_keywords:
- tstof function
- atof_l function
- _atof_l function
- atof function
- _tstof function
- _ttof function
- wtof function
- _wtof_l function
- ttof function
- wtof_l function
- _wtof function
- string conversion, to floating point values
ms.assetid: eb513241-c9a9-4f5c-b7e7-a49b14abfb75
ms.openlocfilehash: a624ae9f900395ed2117ed2bb89e2768c64daba9
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70939562"
---
# <a name="atof-_atof_l-_wtof-_wtof_l"></a>atof, _atof_l, _wtof, _wtof_l

Convertire una stringa in double.

## <a name="syntax"></a>Sintassi

```C
double atof(
   const char *str
);
double _atof_l(
   const char *str,
   _locale_t locale
);
double _wtof(
   const wchar_t *str
);
double _wtof_l(
   const wchar_t *str,
   _locale_t locale
);
```

## <a name="parameters"></a>Parametri

*str*<br/>
Stringa da convertire.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Ogni funzione restituisce il valore **Double** prodotto interpretando i caratteri di input come numero. Il valore restituito è 0.0 se l'input non può essere convertito in un valore di tale tipo.

In tutti i casi fuori intervallo, **errno** viene impostato su **ERANGE**. Se il parametro passato è **null**, viene richiamato il gestore di parametri non validi, come descritto in [convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, queste funzioni impostano **errno** su **EINVAL** e restituiscono 0.

## <a name="remarks"></a>Note

Queste funzioni convertono una stringa di caratteri in un valore a virgola mobile a precisione doppia.

La stringa di input è una sequenza di caratteri che può essere interpretata come valore numerico del tipo specificato. La funzione interrompe la lettura della stringa di input in corrispondenza del primo carattere che non riconosce come parte di un numero. Questo carattere può essere il carattere null ('\0' o L'\0') che termina la stringa.

L'argomento *Str* per **atof** e **_wtof** ha il formato seguente:

[*spazi vuoti*] [*segno*] [*cifre*] [ __.__ *cifre*] [{**e** &#124; **e** } [*Sign*]*digits*]

Uno spazio *vuoto* è costituito da caratteri di spazio o di tabulazione, che vengono ignorati; *segno* più (+) o meno (-); le *cifre* e corrispondono a una o più cifre decimali. Se non viene visualizzata alcuna cifra prima del separatore decimale, è necessario che sia presente almeno una cifra dopo il separatore decimale. Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (**e**o **e**) e un intero decimale con segno facoltativo.

Le versioni UCRT di queste funzioni non supportano la conversione di lettere esponenti di tipo FORTRAN (**d** o **d**). Questa estensione non standard è supportata dalle versioni precedenti della libreria CRT e può rappresentare una modifica con impatto significativo per il codice esistente.

Le versioni di queste funzioni con il suffisso **suffisso** sono identiche, ad eccezione del fatto che usano il parametro delle *impostazioni locali* passato anziché le impostazioni locali correnti.

### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico

|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstof**|**atof**|**atof**|**_wtof**|
|**_ttof**|**atof**|**atof**|**_wtof**|

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|------------------|---------------------|
|**atof**, **_atof_l**|C: \<math.h> o \<stdlib.h> C++: \<cstdlib>, \<stdlib.h>, \<cmath> o \<math.h>|
|**_wtof**, **_wtof_l**|C: \<stdlib.h> o \<wchar.h> C++: \<cstdlib>, \<stdlib.h> o \<wchar.h>|

## <a name="example"></a>Esempio

Questo programma Mostra come i numeri archiviati come stringhe possono essere convertiti in valori numerici usando le funzioni **atof** e **_atof_l** .

```C
// crt_atof.c
//
// This program shows how numbers stored as
// strings can be converted to numeric
// values using the atof and _atof_l functions.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
    char    *str = NULL;
    double value = 0;
    _locale_t fr = _create_locale(LC_NUMERIC, "fr-FR");

    // An example of the atof function
    // using leading and training spaces.
    str = "  3336402735171707160320 ";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);

    // Another example of the atof function
    // using the 'E' exponential formatting keyword.
    str = "3.1412764583E210";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);

    // An example of the atof and _atof_l functions
    // using the 'e' exponential formatting keyword
    // and showing different decimal point interpretations.
    str = "  -2,309e-25";
    value = atof(str);
    printf("Function: atof(\"%s\") = %e\n", str, value);
    value = _atof_l(str, fr);
    printf("Function: _atof_l(\"%s\", fr)) = %e\n", str, value);
}
```

```Output
Function: atof("  3336402735171707160320 ") = 3.336403e+21
Function: atof("3.1412764583E210") = 3.141276e+210
Function: atof("  -2,309e-25") = -2.000000e+00
Function: _atof_l("  -2,309e-25", fr)) = -2.309000e-25
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[_ecvt](ecvt.md)<br/>
[_fcvt](fcvt.md)<br/>
[_gcvt](gcvt.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l](atodbl-atodbl-l-atoldbl-atoldbl-l-atoflt-atoflt-l.md)<br/>
