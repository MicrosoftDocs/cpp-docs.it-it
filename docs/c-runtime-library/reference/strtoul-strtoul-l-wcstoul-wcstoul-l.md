---
title: strtoul, _strtoul_l, wcstoul, _wcstoul_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _wcstoul_l
- _strtoul_l
- strtoul
- wcstoul
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
- strtoul
- _tcstoul
- wcstoul
dev_langs:
- C++
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
caps.latest.revision: 21
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
ms.openlocfilehash: 8916b8645b212f075b9ea575e4bb19e11c5ee975
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="strtoul-strtoull-wcstoul-wcstoull"></a>strtoul, _strtoul_l, wcstoul, _wcstoul_l
Converte le stringhe in un valore long integer senza segno.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned long strtoul(  
   const char *nptr,  
   char **endptr,  
   int base   
);  
unsigned long _strtoul_l(  
   const char *nptr,  
   char **endptr,  
   int base,  
   _locale_t locale  
);  
unsigned long wcstoul(  
   const wchar_t *nptr,  
   wchar_t **endptr,  
   int base   
);  
unsigned long _wcstoul_l(  
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
 `strtoul` restituisce il valore convertito, se presente, o `ULONG_MAX` in caso di overflow. `strtoul` restituisce 0 se è non possibile eseguire alcuna conversione. `wcstoul` restituisce i valori in modo analogo a `strtoul`. Per entrambe le funzioni, `errno` viene impostato su `ERANGE` in caso di overflow o underflow.  
  
 Per altre informazioni su questo e altri codici restituiti, vedere [_doserrno, errno, _sys_errlist e _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni converte la stringa di input `nptr` in un valore `unsigned` `long`.  
  
 `strtoul` interrompe la lettura della stringa `nptr` in corrispondenza del primo carattere che non riconosce come parte di un numero. Potrebbe trattarsi del carattere Null di terminazione o del primo carattere numerico maggiore o uguale a `base`. L'impostazione della categoria `LC_NUMERIC` delle impostazioni locali determina il riconoscimento del carattere di base in `nptr`. Per altre informazioni, vedere [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). `strtoul` e `wcstoul` usano le impostazioni locali correnti. `_strtoul_l` e `_wcstoul_l` sono identiche, ma usano le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Se `endptr` non è `NULL`, un puntatore al carattere che ha interrotto la lettura viene archiviato in corrispondenza della posizione a cui punta `endptr`. Se è non possibile eseguire alcuna conversione (non vengono trovate cifre valide o viene specificata una base non valida), il valore di `nptr` viene archiviato in corrispondenza della posizione a cui punta `endptr`.  
  
 `wcstoul` è una versione a caratteri wide di `strtoul`. L'argomento `nptr` è una stringa di caratteri wide. In caso contrario, il comportamento di queste funzioni è identico.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcstoul`|`strtoul`|`strtoul`|`wcstoul`|  
|`_tcstoul_l`|`strtoul_l`|`_strtoul_l`|`_wcstoul_l`|  
  
 `strtoul` prevede che `nptr` punti a una stringa nel formato seguente:  
  
 [`whitespace`] [{`+` &#124; `-`}] [`0` [{ `x` &#124; `X` }]] [`digits`]  
  
 `whitespace` può essere costituito da caratteri di spazio e tabulazione, che vengono ignorati. `digits` indica una o più cifre decimali. Il primo carattere che non corrisponde a questo formato interrompe la lettura. Se il valore `base` è compreso tra 2 e 36, viene usato come base del numero. Se `base` è 0, per determinare la base vengono usati i caratteri iniziali della stringa a cui punta `nptr`. Se il primo carattere è 0 e il secondo carattere non è 'x' né 'X', la stringa viene interpretata come un Integer ottale. Se il primo carattere è '0' e il secondo carattere è 'x' o 'X', la stringa viene interpretata come integer esadecimale. Se il primo carattere è compreso tra '1' e '9', la stringa viene interpretata come integer decimale. Alle lettere da 'a' a 'z' (o da 'A' a 'Z') vengono assegnati i valori da 10 a 35. Sono consentite solo le lettere con valori assegnati minori di `base`. Il primo carattere non compreso nell'intervallo della base interrompe la lettura. Ad esempio, se `base` è 0 e il primo carattere analizzato è '0', si presuppone un Integer ottale e il carattere '8' o '9' arresterà l'analisi. `strtoul` consente un prefisso con un segno più (`+`) o meno (`-`). Un segno meno iniziale indica che il valore restituito è negativo.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`strtoul`|\<stdlib.h>|  
|`wcstoul`|\<stdlib.h> o \<wchar.h>|  
|`_strtoul_l`|\<stdlib.h>|  
|`_wcstoul_l`|\<stdlib.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [strtod](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Conversione dei dati](../../c-runtime-library/data-conversion.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [localeconv](../../c-runtime-library/reference/localeconv.md)   
 [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [Funzioni da stringa a valore numerico](../../c-runtime-library/string-to-numeric-value-functions.md)   
 [strtod, _strtod_l, wcstod, _wcstod_l](../../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)   
 [strtol, wcstol, _strtol_l, _wcstol_l](../../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)   
 [atof, _atof_l, _wtof, _wtof_l](../../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)
