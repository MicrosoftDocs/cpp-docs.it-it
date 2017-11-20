---
title: isupper, _isupper_l, iswupper, _iswupper_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- isupper
- iswupper
- _iswupper_l
- _isupper_l
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
- isupper
- _istupper
- iswupper
dev_langs: C++
helpviewer_keywords:
- istupper function
- iswupper function
- isupper_l function
- _isupper_l function
- iswupper_l function
- _istupper function
- _iswupper_l function
- isupper function
ms.assetid: da2bcc9f-241c-48c0-9a0e-ad273827e16a
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 65ba046c6e2f592dece527f73186220084ca576b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="isupper-isupperl-iswupper-iswupperl"></a>isupper, _isupper_l, iswupper, _iswupper_l
Determina se un intero rappresenta un carattere maiuscolo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int isupper(  
   int c   
);  
int _isupper_l (  
   int c,  
   _locale_t locale  
);  
int iswupper(  
   wint_t c   
);  
int _iwsupper_l(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere maiuscolo. `isupper`Restituisce un valore diverso da zero se `c` è una lettera maiuscola (A - Z). `iswupper` restituisce un valore diverso da zero se `c` è un carattere wide corrispondente a una lettera maiuscola oppure se `c` fa parte di un set definito dall'implementazione di caratteri wide per cui nessuno dei valori `iswcntrl`, `iswdigit`, `iswpunct` o `iswspace` è diverso da zero. Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` utilizzano le impostazioni locali passate anziché le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `isupper` e `_isupper_l` è indefinito se `c` non è EOF o non è compreso nell'intervallo da 0 a 0xFF, inclusi. Quando si usa una libreria di debug CRT e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_istupper`|`isupper`|[_ismbcupper](../../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|`iswupper`|  
|`_istupper_l`|`_isupper_l`|[_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l](../../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|`_iswupper_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`isupper`|\<ctype.h>|  
|`_isupper_l`|\<ctype.h>|  
|`iswupper`|\<ctype.h> o \<wchar.h>|  
|`_iswupper_l`|\<ctype.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)