---
title: _ismbbtrail, _ismbbtrail_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ismbbtrail
- _ismbbtrail_l
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
- _ismbbtrail
- ismbbtrail
- _ismbbtrail_l
- ismbbtrail_l
dev_langs:
- C++
helpviewer_keywords:
- ismbbtrail_l function
- _ismbbtrail function
- _ismbbtrail_l function
- ismbbtrail function
ms.assetid: dfdd0292-960b-4c1d-bf11-146e0fc80247
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: 125b35ecc01c58808fab939649f9b71f5c4ca85f
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="ismbbtrail-ismbbtraill"></a>_ismbbtrail, _ismbbtrail_l
Determina se un byte è un byte finale di un carattere multibyte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbbtrail(  
   unsigned int c   
);  
int _ismbbtrail_l(  
   unsigned int c,  
   _locale_t locale   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Valore Integer da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 `_ismbbtrail` restituisce un valore diverso da zero se l'Integer `c` è il secondo byte di un carattere multibyte. Ad esempio, solo nella tabella codici 932, gli intervalli validi sono da 0x40 a 0x7E e da 0x80 a 0xFC.  
  
## <a name="remarks"></a>Note  
 `_ismbbtrail` usa le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali. `_ismbbtrail_l` è identico, ma usa le impostazioni locali che gli vengono passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|Intestazione facoltativa|  
|-------------|---------------------|---------------------|  
|`_ismbbtrail`|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|  
|`_ismbbtrail_l`|\<mbctype.h> o \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|  
  
 \* Per le costanti manifeste per le condizioni di test.  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)
