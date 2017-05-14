---
title: _RTC_GetErrDesc | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _RTC_GetErrDesc
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
apitype: DLLExport
f1_keywords:
- RTC_GetErrDesc
- _RTC_GetErrDesc
dev_langs:
- C++
helpviewer_keywords:
- run-time errors
- _RTC_GetErrDesc function
- RTC_GetErrDesc function
ms.assetid: 7994ec2b-5488-4fd4-806d-a166c9a9f927
caps.latest.revision: 12
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
ms.openlocfilehash: 00098336be0198102b6154a7d6252b024b3cf949
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="rtcgeterrdesc"></a>_RTC_GetErrDesc
Restituisce una breve descrizione di un tipo di controllo degli errori di runtime (RTC).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      const char * _RTC_GetErrDesc(  
   _RTC_ErrorNumber errnum   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *errnum*  
 Un numero compreso tra zero e uno minore del valore restituito da `_RTC_NumErrors`.  
  
## <a name="return-value"></a>Valore restituito  
 Una stringa di caratteri che contiene una breve descrizione di uno dei tipi di errore rilevati dal sistema di controllo degli errori di runtime. Se l'errore è minore di zero o maggiore o uguale al valore restituito da [_RTC_NumErrors](../../c-runtime-library/reference/rtc-numerrors.md), `_RTC_GetErrDesc` restituisce NULL.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_RTC_GetErrDesc`|\<rtcapi.h>|  
  
 Per altre informazioni, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [_RTC_NumErrors](../../c-runtime-library/reference/rtc-numerrors.md)   
 [Controllo degli errori di runtime](../../c-runtime-library/run-time-error-checking.md)
