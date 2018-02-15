---
title: strtold, _strtold_l, wcstold, _wcstold_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- wcstold
- strtold
- _strtold_l
- _wcstold_l
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
- _tcstold_l
- _wcstold_l
- _tcstold
- strtold
- _strtold_l
- wcstold
dev_langs:
- C++
ms.assetid: 928c0c9a-bc49-445b-8822-100eb5954115
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a0e21329d29bcf65362d837697f2adfe00e27ce3
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="strtold-strtoldl-wcstold-wcstoldl"></a>strtold, _strtold_l, wcstold, _wcstold_l
Converte le stringhe in un valore a virgola mobile e precisione long double.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long double strtold(  
   const char *nptr,  
   char **endptr   
);  
long double _strtold_l(  
   const char *nptr,  
   char **endptr,  
   _locale_t locale  
);  
long double wcstold(  
   const wchar_t *nptr,  
   wchar_t **endptr   
);  
long double wcstold_l(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `nptr`  
 Stringa con terminazione Null da convertire.  
  
 `endptr`  
 Puntatore al carattere che interrompe la lettura.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `strtold` Restituisce il valore del numero a virgola mobile come una `long double`, tranne quando la rappresentazione potrebbe provocare un overflow, in tal caso, la funzione restituisce + /-`HUGE_VALL`. Il segno di `HUGE_VALL` corrisponde al segno del valore che non può essere rappresentato. `strtold` restituisce 0 se è non possibile eseguire alcuna conversione oppure se si verifica un overflow.  
  
 `wcstold` restituisce i valori in modo analogo a `strtold`. Per entrambe le funzioni, `errno` viene impostato su `ERANGE` in caso di overflow o underflow e viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  
  
 Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Ogni funzione converte la stringa di input `nptr` in un valore `long double`. La funzione `strtold` converte `nptr` in un valore a precisione long double. `strtold` interrompe la lettura della stringa `nptr` in corrispondenza del primo carattere che non riconosce come parte di un numero. Questo può essere il carattere Null di terminazione. La versione a caratteri wide di `strtold` è `wcstold`. Il relativo argomento `nptr` è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstold`|`strtold`|`strtold`|`wcstold`|  
|`_tcstold_l`|`_strtold_l`|`_strtold_l`|`_wcstold_l`|  
  
 L'impostazione della categoria `LC_NUMERIC` delle impostazioni locali correnti determina il riconoscimento del carattere di base in `nptr`. Per altre informazioni, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le funzioni senza il suffisso `_l` usano le impostazioni locali correnti. `_strtold_l` e `_wcstold_l` sono identiche a `_strtold` e `_wcstold`, ma usano le impostazioni locali passate. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, un puntatore al carattere che ha interrotto la lettura viene archiviato in corrispondenza della posizione a cui punta `endptr`. Se è non possibile eseguire alcuna conversione (non vengono trovate cifre valide o viene specificata una base non valida), il valore di `nptr` viene archiviato in corrispondenza della posizione a cui punta `endptr`.  
  
 `strtold` prevede che `nptr` punti a una stringa nel formato seguente:  
  
 [`whitespace`] [`sign`] [`digits`] [`.digits`] [ {`d` &#124; `D` &#124; `e` &#124; `E`}[`sign`]`digits`]  
  
 `whitespace` può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. `sign` è più (`+`) o meno (`-`) e `digits` indica una o più cifre decimali. Se non viene visualizzata alcuna cifra prima del carattere di base, deve essercene almeno una dopo il carattere di base. Le cifre decimali possono essere seguite da un esponente, costituito da una lettera introduttiva (`d`, `D`, `e` o `E`) e un intero con segno facoltativo. Se non viene visualizzata una parte esponente né un carattere di base, si presuppone che l'ultima cifra nella stringa sia seguita da un carattere di base. Il primo carattere che non corrisponde a questo formato interrompe la lettura.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strtold`, `_strtold_l`|\<stdlib.h>|  
|`wcstold`, `_wcstold_l`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_strtold.c  
// Build with: cl /W4 /Tc crt_strtold.c  
// This program uses strtold to convert a  
// string to a long double-precision value.  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   char *string;  
   char *stopstring;  
   long double x;  
  
   string = "3.1415926535898This stopped it";  
   x = strtold(string, &stopstring);  
   printf("string = %s\n", string);  
   printf("   strtold = %.13Lf\n", x);  
   printf("   Stopped scan at: %s\n\n", stopstring);  
}  
```  
  
```Output  
string = 3.1415926535898This stopped it  
   strtold = 3.1415926535898  
   Stopped scan at: This stopped it  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)  (Supporto delle funzioni a virgola mobile)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [_create_locale, _wcreate_locale](../../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [_free_locale](../../c-runtime-library/reference/free-locale.md)