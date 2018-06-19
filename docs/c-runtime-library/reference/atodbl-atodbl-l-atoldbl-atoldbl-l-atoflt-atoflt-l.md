---
title: _atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _atoldbl
- _atoldbl_l
- _atodbl
- _atoflt
- _atoflt_l
- _atodbl_l
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
- _atoflt
- _atoflt_l
- atodbl_l
- atoflt_l
- _atoldbl
- _atoldbl_l
- atodbl
- _atodbl_l
- atoldbl
- atoflt
- atoldbl_l
- _atodbl
dev_langs:
- C++
helpviewer_keywords:
- _atodbl function
- _atoldbl_l function
- atoflt function
- atoflt_l function
- atoldbl function
- _atoldbl function
- atodbl_l function
- _atoflt_l function
- atoldbl_l function
- atodbl function
- string conversion, to floating point values
- _atoflt function
- _atodbl_l function
ms.assetid: 2d2530f4-4bd4-42e3-8083-f2d2fbc8432a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: da36dfae81f33f5fb30a1a4bc93a57437980d720
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32393589"
---
# <a name="atodbl-atodbll-atoldbl-atoldbll-atoflt-atofltl"></a>_atodbl, _atodbl_l, _atoldbl, _atoldbl_l, _atoflt, _atoflt_l

Converte una stringa in un valore double (**atodbl**), long double (**atoldbl**), o float (**atoflt**).

## <a name="syntax"></a>Sintassi

```C
int _atodbl( _CRT_DOUBLE * value, char * str );
int _atodbl_l ( _CRT_DOUBLE * value, char * str, locale_t locale );
int _atoldbl( _LDOUBLE * value, char * str );
int _atoldbl_l ( _LDOUBLE * value, char * str, locale_t locale );
int _atoflt( _CRT_FLOAT * value, const char * str );
int _atoflt_l( _CRT_FLOAT * value, const char * str, locale_t locale );
```

### <a name="parameters"></a>Parametri

*valore*<br/>
Il valore double, long double o float prodotto dalla conversione della stringa in valore a virgola mobile. Viene eseguito il wrapping di questi valori in una struttura.

*str*<br/>
La stringa da analizzare per la conversione in valore a virgola mobile.

*locale*<br/>
Impostazioni locali da usare.

## <a name="return-value"></a>Valore restituito

Restituisce 0 in caso di esito positivo. Sono possibili codici di errore **underflow** oppure **overflow**, che sono definiti nel file di intestazione \<Math. h >.

## <a name="remarks"></a>Note

Queste funzioni convertono una stringa in un valore a virgola mobile. La differenza tra queste funzioni e le **atof** famiglia di funzioni è che queste funzioni non generano codice a virgola mobile e non provocano eccezioni hardware. Al contrario, le condizioni di errore vengono segnalate come codici di errore.

Se una stringa non dispone di un'interpretazione valida come valore a virgola mobile *valore* è impostata su zero e il valore restituito è zero.

Le versioni di queste funzioni con il **l** suffisso sono identiche le versioni che non hanno il suffisso, ad eccezione del fatto che usano il *delle impostazioni locali* parametro viene passato al posto del thread corrente impostazioni locali.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|--------------|---------------------|
|**atodbl**, **atoldbl**, **atoflt**<br /><br /> **atodbl_l**, **atoldbl_l**, **atoflt_l**|\<stdlib.h>|

## <a name="example"></a>Esempio

```C
// crt_atodbl.c
// Uses _atodbl to convert a string to a double precision
// floating point value.

#include <stdlib.h>
#include <stdio.h>

int main()
{
   char str1[256] = "3.141592654";
   char abc[256] = "abc";
   char oflow[256] = "1.0E+5000";
   _CRT_DOUBLE dblval;
   _CRT_FLOAT fltval;
   int retval;

   retval = _atodbl(&dblval, str1);

   printf("Double value: %lf\n", dblval.x);
   printf("Return value: %d\n\n", retval);

   retval = _atoflt(&fltval, str1);
   printf("Float value: %f\n", fltval.f);
   printf("Return value: %d\n\n", retval);

   // A non-floating point value: returns 0.
   retval = _atoflt(&fltval, abc);
   printf("Float value: %f\n", fltval.f);
   printf("Return value: %d\n\n", retval);

   // Overflow.
   retval = _atoflt(&fltval, oflow);
   printf("Float value: %f\n", fltval.f);
   printf("Return value: %d\n\n", retval);

   return 0;
}
```

```Output
Double value: 3.141593
Return value: 0

Float value: 3.141593
Return value: 0

Float value: 0.000000
Return value: 0

Float value: inf
Return value: 3
```

## <a name="see-also"></a>Vedere anche

[Conversione dei dati](../../c-runtime-library/data-conversion.md)<br/>
[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[Impostazioni locali](../../c-runtime-library/locale.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
