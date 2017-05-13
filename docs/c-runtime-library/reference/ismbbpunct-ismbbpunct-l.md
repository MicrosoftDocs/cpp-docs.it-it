---
title: _ismbbpunct, _ismbbpunct_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ismbbpunct
- _ismbbpunct_l
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
- ismbbpunct
- ismbbpunct_l
- _ismbbpunct_l
- _ismbbpunct
dev_langs:
- C++
helpviewer_keywords:
- ismbbpunct function
- _ismbbpunct function
- ismbbpunct_l function
- _ismbbpunct_l function
ms.assetid: 1976c9d3-7d1a-415f-ac52-2715c7bb56eb
caps.latest.revision: 20
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
ms.openlocfilehash: 91887834f7bfc9dc078cd3af4248f84ce0bf7753
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="ismbbpunct-ismbbpunctl"></a>_ismbbpunct, _ismbbpunct_l
Determina se un particolare carattere è un carattere di punteggiatura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbbpunct(  
   unsigned int c   
);  
int _ismbbpunct_l(  
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
 `_ismbbpunct` restituisce un valore diverso da zero se l'Integer `c` è un simbolo di punteggiatura non ASCII. `_ismbbpunct` usa le impostazioni locali correnti per qualsiasi impostazione del carattere dipendente dalle impostazioni locali. `_ismbbpunct_l` è identico, ma usa le impostazioni locali che gli vengono passate. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ismbbpunct`|\<mbctype.h>|  
|`_ismbbpunct_l`|\<mbctype.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)
