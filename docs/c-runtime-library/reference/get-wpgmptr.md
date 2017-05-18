---
title: _get_wpgmptr | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _get_wpgmptr
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
- api-ms-win-crt-runtime-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- get_wpgmptr
- _get_wpgmptr
dev_langs:
- C++
helpviewer_keywords:
- _wpgmptr global variable
- get_wpgmptr function
- wpgmptr global variable
- _get_wpgmptr function
ms.assetid: a77cdd13-2303-4b7c-9a60-8debdbef2011
caps.latest.revision: 17
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
ms.openlocfilehash: 2adaf2c760ff90b238c268ba725c73142b4f9a2c
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="getwpgmptr"></a>_get_wpgmptr
Ottiene il valore corrente della variabile globale `_wpgmptr`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
errno_t _get_wpgmptr(   
   wchar_t **pValue   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `pValue`  
 Puntatore a una stringa in cui inserire il valore corrente della variabile `_wpgmptr`.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce zero se ha esito positivo; un codice di errore se ha esito negativo. Se `pValue` è `NULL`, viene richiamato il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione imposta `errno` su`EINVAL` e restituisce `EINVAL`.  
  
## <a name="remarks"></a>Note  
 La variabile globale `_wpgmptr` contiene il percorso completo del file eseguibile associato al processo come stringa di caratteri wide. Per altre informazioni, vedere [_pgmptr, _wpgmptr](../../c-runtime-library/pgmptr-wpgmptr.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_get_wpgmptr`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [_get_pgmptr](../../c-runtime-library/reference/get-pgmptr.md)
