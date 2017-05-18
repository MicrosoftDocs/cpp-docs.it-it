---
title: _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ismbclower
- _ismbclower_l
- _ismbcupper_l
- _ismbcupper
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _ismbcupper
- _ismbclower
dev_langs:
- C++
helpviewer_keywords:
- _ismbcupper function
- ismbclower function
- _ismbclower_l function
- ismbcupper_l function
- _ismbclower function
- ismbcupper function
- ismbclower_l function
- _ismbcupper_l function
ms.assetid: 17d89587-65bc-477c-ba8f-a84e63cf59e7
caps.latest.revision: 19
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 2d62b6859490047796d66cc2b56090a130ffd5f9
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="ismbclower-ismbclowerl-ismbcupper-ismbcupperl"></a>_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l
Verifica se un carattere multibyte è minuscolo o maiuscolo.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbclower(  
   unsigned int c   
);  
int _ismbclower_l(  
   unsigned int c,  
   _locale_t locale   
);  
int _ismbcupper(  
   unsigned int c   
);  
int _ismbcupper_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se `c`<= 255 ed è presente una routine `_ismbb` corrispondente (ad esempio, `_ismbcalnum` corrisponde a `_ismbbalnum`), il risultato è il valore restituito della routine `_ismbb` corrispondente.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.  
  
 Le versioni di queste funzioni che presentano il suffisso `_l` sono identiche ad eccezione del fatto che, per il comportamento dipendente dalle impostazioni locali, usano le impostazioni locali passate anziché quelle correnti. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test|Esempio della tabella codici 932|  
|-------------|--------------------|---------------------------|  
|`_ismbclower`|Carattere alfabetico minuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di una lettera in inglese minuscola ASCII: 0x61<=`c`<=0x7A.|  
|`_ismbclower_l`|Carattere alfabetico minuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di una lettera in inglese minuscola ASCII: 0x61<=`c`<=0x7A.|  
|`_ismbcupper`|Carattere alfabetico maiuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di una lettera in inglese maiuscola ASCII: 0x41<=`c`<=0x5A.|  
|`_ismbcupper_l`|Carattere alfabetico maiuscolo|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di una lettera in inglese maiuscola ASCII: 0x41<=`c`<=0x5A.|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ismbclower`|\<mbstring.h>|  
|`_ismbclower_l`|\<mbstring.h>|  
|`_ismbcupper`|\<mbstring.h>|  
|`_ismbcupper_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routine _ismbc](../../c-runtime-library/ismbc-routines.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)
