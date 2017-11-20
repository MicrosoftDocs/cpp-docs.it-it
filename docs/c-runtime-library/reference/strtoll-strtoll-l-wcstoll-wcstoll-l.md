---
title: strtoll, _strtoll_l, wcstoll, _wcstoll_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- strtoll
- wcstoll
- _strtoll_l
- _wcstoll_l
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
- _strtoll_l
- _tcstoll_l
- _tcstoll
- _wcstoll_l
- strtoll
- wcstoll
dev_langs: C++
helpviewer_keywords:
- _tcstoll_l function
- _wcstoll_l function
- strtoll function
- wcstoll function
- _tcstoll function
- _strtoll_l function
ms.assetid: e2d05dcf-d3b2-4291-9e60-dee77e540fd7
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 0c0528427216f08723d67cb56018a3379562cf32
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="strtoll-strtolll-wcstoll-wcstolll"></a>strtoll, _strtoll_l, wcstoll, _wcstoll_l
Converte una stringa in un valore `long long`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long long strtoll(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
long long wcstoll(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
long long _strtoll_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
long long _wcstoll_l(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `nptr`  
 Stringa con terminazione Null da convertire.  
  
 `endptr`  
 Puntatore al carattere che interrompe la lettura.  
  
 `base`  
 Base numerica da usare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `strtoll` restituisce il valore rappresentato nella stringa `nptr`, tranne quando la rappresentazione potrebbe causare un overflow, nel qual caso restituisce `LLONG_MAX` o `LLONG_MIN`. La funzione restituisce 0 se è non possibile eseguire alcuna conversione. `wcstoll` restituisce i valori in modo analogo a `strtoll`.  
  
 `LLONG_MAX` e `LLONG_MIN` sono definiti in LIMITS.H.  
  
 Se `nptr` è `NULL` o `base` è diverso da zero e minore di 2 o maggiore di 36, `errno` viene impostato su `EINVAL`.  
  
 Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 La funzione `strtoll` converte `nptr` in un valore `long long`. Entrambe le funzioni interrompono la lettura della stringa `nptr` in corrispondenza del primo carattere che non può essere riconosciuto come parte di un numero. Potrebbe trattarsi del carattere Null di terminazione o del primo carattere numerico maggiore o uguale a `base`. `wcstoll` è una versione a caratteri wide di `strtoll`. L'argomento `nptr` è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstoll`|`strtoll`|`strtoll`|`wcstoll`|  
|`_tcstoll_l`|`_strtoll_l`|`_strtoll_l`|`_wcstoll_l`|  
  
 L'impostazione della categoria `LC_NUMERIC` delle impostazioni locali determina il riconoscimento del carattere di base `nptr`. Per altre informazioni, vedere [setlocale, wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le funzioni senza il suffisso `_l` usano le impostazioni locali correnti. `_strtoll_l` e `_wcstoll_l` sono identiche alle funzioni corrispondenti senza il suffisso, ma usano le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, un puntatore al carattere che ha interrotto la lettura viene archiviato in corrispondenza della posizione a cui punta `endptr`. Se è non possibile eseguire alcuna conversione (non vengono trovate cifre valide o viene specificata una base non valida), il valore di `nptr` viene archiviato in corrispondenza della posizione a cui punta `endptr`.  
  
 `strtoll` prevede che `nptr` punti a una stringa nel formato seguente:  
  
 [`whitespace`] [{`+` &#124; `-`}] [`0` [{ `x` &#124; `X` }]] [`digits` &#124; `letters`]  
  
 `whitespace` può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. `digits` indica una o più cifre decimali. `letters` corrisponde a una o più lettere da 'a' a 'z' (o da 'A' a 'Z'). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se il valore `base` è compreso tra 2 e 36, viene usato come base del numero. Se `base` è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta `nptr`. Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di `base`. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se `base` è 0 e il primo carattere letto è '0', si presuppone un intero ottale e il carattere '8' o '9' interrompe la lettura.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strtoll`, `_strtoll_l`|\<stdlib.h>|  
|`wcstoll`, `_wcstoll_l`|\<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)