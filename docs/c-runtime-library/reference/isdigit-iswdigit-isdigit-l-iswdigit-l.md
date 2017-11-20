---
title: isdigit, iswdigit, _isdigit_l, _iswdigit_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _isdigit_l
- iswdigit
- _iswdigit_l
- isdigit
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
- api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _iswdigit_l
- _isdigit_l
- iswdigit
- isdigit
- _istdigit
- _istdigit_l
dev_langs: C++
helpviewer_keywords:
- iswdigit function
- iswdigit_l function
- _iswdigit_l function
- _istdigit_l function
- _istdigit function
- istdigit function
- isdigit function
- isdigit_l function
- _ismbcdigit_l function
- _isdigit_l function
ms.assetid: 350b0093-843a-47b0-954e-c1776e8a3853
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 56a143d0cec7c1fd46c3dbd7b82faee4413fbab4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="isdigit-iswdigit-isdigitl-iswdigitl"></a>isdigit, iswdigit, _isdigit_l, _iswdigit_l
Determina se un Integer rappresenta un carattere di cifra decimale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int isdigit(   
   int c   
);  
int iswdigit(   
   wint_t c   
);  
int _isdigit_l(   
   int c,  
   _locale_t locale  
);  
int _iswdigit_l(   
   wint_t c,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Valore Integer da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere di cifra decimale. `isdigit`Restituisce un valore diverso da zero se `c` è una cifra decimale (0 - 9). `iswdigit` restituisce un valore diverso da zero se `c` è un carattere wide che corrisponde a un carattere di cifra decimale. Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `isdigit` e `_isdigit_l` è indefinito se `c` non è EOF o non è compreso nell'intervallo da 0 a 0xFF, inclusi. Quando si usa una libreria di debug CRT e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_istdigit`|`isdigit`|[_ismbcdigit](../../c-runtime-library/reference/ismbcalnum-functions.md)|`iswdigit`|  
|`_istdigit_l`|`_isdigit_l`|[_ismbcdigit_l](../../c-runtime-library/reference/ismbcalnum-functions.md)|`_iswdigit_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`isdigit`|\<ctype.h>|  
|`iswdigit`|\<ctype.h> o \<wchar.h>|  
|`_isdigit_l`|\<ctype.h>|  
|`_iswdigit_l`|\<ctype.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)