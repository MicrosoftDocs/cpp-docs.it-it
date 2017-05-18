---
title: _get_unexpected | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _get_unexpected
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
- __get_unexpected
- _get_unexpected
- get_unexpected
dev_langs:
- C++
helpviewer_keywords:
- __get_unexpected function
- get_unexpected function
- _get_unexpected function
ms.assetid: a5f7a7a0-18e0-485e-953d-db291068a1e8
caps.latest.revision: 8
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
ms.openlocfilehash: 3be0df8ddd56942986998d3eb8bbc613ba0236e5
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="getunexpected"></a>_get_unexpected
Restituisce la routine di terminazione da chiamare da `unexpected`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unexpected_function _get_unexpected( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore alla funzione registrata da [set_unexpected](../../c-runtime-library/reference/set-unexpected-crt.md). Se nessuna funzione è stata impostata, il valore restituito può essere utilizzato per ripristinare il comportamento predefinito; questo valore può essere NULL.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_get_unexpected`|\<eh.h>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di gestione delle eccezioni](../../c-runtime-library/exception-handling-routines.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [set_terminate](../../c-runtime-library/reference/set-terminate-crt.md)   
 [terminate](../../c-runtime-library/reference/terminate-crt.md)   
 [unexpected](../../c-runtime-library/reference/unexpected-crt.md)
