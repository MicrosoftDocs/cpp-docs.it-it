---
title: isprint, iswprint, _isprint_l, _iswprint_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- iswprint
- isprint
- _isprint_l
- _iswprint_l
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
- iswprint
- _istprint
- isprint
dev_langs:
- C++
helpviewer_keywords:
- _istprint function
- iswprint function
- _iswprint_l function
- isprint_l function
- istprint function
- isprint function
- iswprint_l function
- _isprint_l function
ms.assetid: a8bbcdb0-e8d0-4d8c-ae4e-56d3bdee6ca3
caps.latest.revision: 16
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
ms.openlocfilehash: 50f17486f72a272d45c45fc3f0c6b25a7b4b6c56
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="isprint-iswprint-isprintl-iswprintl"></a>isprint, iswprint, _isprint_l, _iswprint_l
Determina se un Integer rappresenta un carattere stampabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int isprint(  
   int c   
);  
int iswprint(  
   wint_t c   
);  
int _isprint_l(  
   int c,  
   _locale_t locale  
);  
int _iswprint_l(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere stampabile. `isprint`Restituisce un valore diverso da zero se `c` è un carattere stampabile, ciò include il carattere spazio (0x20 - 0x7E). `iswprint` restituisce un valore diverso da zero se `c` è un carattere wide stampabile; questo include il carattere wide di spazio. Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Il risultato della condizione di test per queste funzioni dipende dall'impostazione della categoria `LC_CTYPE` delle impostazioni locali. Per altre informazioni, vedere [setlocale, _wsetlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md). Le versioni di queste funzioni che non hanno il suffisso `_l` usano le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. Le versioni che non hanno il suffisso `_l` sono identiche, con la differenza che usano le impostazioni locali passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `isprint` e `_isprint_l` è indefinito se `c` non è EOF o non è compreso nell'intervallo da 0 a 0xFF, inclusi. Quando si usa una libreria di debug CRT e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine TCHAR.H|_UNICODE e _MBCS non definiti|_MBCS definito|_unicode definito|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|**_** `istprint`|`isprint`|[_ismbcprint](../../c-runtime-library/reference/ismbcgraph-functions.md)|`iswprint`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`isprint`|\<ctype.h>|  
|`iswprint`|\<ctype.h> o \<wchar.h>|  
|`_isprint_l`|\<ctype.h>|  
|`_iswprint_l`|\<ctype.h> o \<wchar.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)
