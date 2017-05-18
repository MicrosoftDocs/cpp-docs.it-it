---
title: _ismbbprint, _ismbbprint_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ismbbprint_l
- _ismbbprint
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
- _ismbbprint_l
- _ismbbprint
- ismbbprint
- ismbbprint_l
dev_langs:
- C++
helpviewer_keywords:
- ismbbprint_l function
- ismbbprint function
- _ismbbprint function
- _ismbbprint_l function
ms.assetid: d08a061c-18a8-48f2-a75d-bff4870aec9d
caps.latest.revision: 19
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
ms.openlocfilehash: 09187e54126553331a6100fa11c98a730434db12
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="ismbbprint-ismbbprintl"></a>_ismbbprint, _ismbbprint_l
Determina se un particolare carattere multibyte è un carattere di stampa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbbprint(  
   unsigned int c   
);  
int _ismbbprint_l(  
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
 `_ismbbprint` restituisce un valore diverso da zero se l'espressione:  
  
```  
isprint || _ismbbkprint  
```  
  
 è diverso da zero per `c`oppure zero in caso contrario. `_ismbbprint` usa le impostazioni locali correnti per qualsiasi comportamento dipendente dalle impostazioni locali. `_ismbbprint_l` è identico, ma usa le impostazioni locali che gli vengono passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ismbbprint`|\<mbctype.h>|  
|`_ismbbprint_l`|\<mbctype.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)
