---
title: strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wcstoumax_l
- _strtoumax_l
- wcstoumax
- strtoumax
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
- wcstoumax
- _tcstoumax
- _strtoumax_l
- _wcstoumax_l
- _tcstoumax_l
- strtoumax
dev_langs:
- C++
helpviewer_keywords:
- _strtoumax_l function
- conversion functions
- wcstoumax function
- _wcstoumax_l function
- strtoumax function
ms.assetid: 566769f9-495b-4508-b9c6-02217a578897
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 3519fa6a5f1decc4bad385d4204188585afa1630
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="strtoumax-strtoumaxl-wcstoumax-wcstoumaxl"></a>strtoumax, _strtoumax_l, wcstoumax, _wcstoumax_l
Converte le stringhe in un valore intero con il tipo Integer senza segno supportato più grande.  
  
## <a name="syntax"></a>Sintassi  
  
```  
uintmax_t strtoumax(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
uintmax_t _strtoumax_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
uintmax_t wcstoumax(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
uintmax_t _wcstoumax_l(  
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
 `strtoumax` restituisce il valore convertito, se presente, o `UINTMAX_MAX` in caso di overflow. `strtoumax` restituisce 0 se è non possibile eseguire alcuna conversione. `wcstoumax` restituisce i valori in modo analogo a `strtoumax`. Per entrambe le funzioni, `errno` viene impostato su `ERANGE` in caso di overflow o underflow.  
  
 Per altre informazioni sui codici restituiti, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni converte la stringa di input `nptr` in un valore integer `uintmax_t`.  
  
 `strtoumax` interrompe la lettura della stringa `nptr` in corrispondenza del primo carattere che non riconosce come parte di un numero. Potrebbe trattarsi del carattere Null di terminazione o del primo carattere numerico maggiore o uguale a `base`. L'impostazione della categoria `LC_NUMERIC` delle impostazioni locali determina il riconoscimento del carattere di base in `nptr`. Per altre informazioni, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). `strtoumax` e `wcstoumax` usano le impostazioni locali correnti. `_strtoumax_l` e `_wcstoumax_l` sono identiche, ma usano le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, un puntatore al carattere che ha interrotto la lettura viene archiviato in corrispondenza della posizione a cui punta `endptr`. Se è non possibile eseguire alcuna conversione (non vengono trovate cifre valide o viene specificata una base non valida), il valore di `nptr` viene archiviato in corrispondenza della posizione a cui punta `endptr`.  
  
 La versione a caratteri wide di `strtoumax` è `wcstoumax`. Il relativo argomento `nptr` è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstoumax`|`strtoumax`|`strtoumax`|`wcstoumax`|  
|`_tcstoumax_l`|`strtoumax_l`|`_strtoumax_l`|`_wcstoumax_l`|  
  
 `strtoumax` prevede che `nptr` punti a una stringa nel formato seguente:  
  
 [`whitespace`] [{`+` &#124; `-`}] [`0` [{ `x` &#124; `X` }]] [`digits` &#124; [`letters`]]  
  
 `whitespace` può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. `digits` indica una o più cifre decimali. `letters` corrisponde a una o più lettere da 'a' a 'z' (o da 'A' a 'Z'). Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se il valore `base` è compreso tra 2 e 36, viene usato come base del numero. Se `base` è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta `nptr`. Se il primo carattere è '0' e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un intero ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di `base`. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se `base` è 0 e il primo carattere letto è '0', si presuppone un intero ottale e il carattere '8' o '9' interromperà la lettura. `strtoumax` consente un prefisso con un segno più (`+`) o meno (`-`). Un segno meno iniziale indica che il valore restituito è il complemento a due del valore assoluto della stringa convertita.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strtoumax`|\<stdlib.h>|  
|`wcstoumax`|\<stdlib.h> o \<wchar.h>|  
|`_strtoumax_l`|\<stdlib.h>|  
|`_wcstoumax_l`|\<stdlib.h> or \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [strtod](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtoimax, _strtoimax_l, wcstoimax, _wcstoimax_l](../../c-runtime-library/reference/strtoimax-strtoimax-l-wcstoimax-wcstoimax-l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)   
 [strtoll, _strtoll_l, wcstoll, _wcstoll_l](../../c-runtime-library/reference/strtoll-strtoll-l-wcstoll-wcstoll-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)
