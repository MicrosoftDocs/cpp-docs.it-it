---
title: srand | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- srand
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- srand
dev_langs:
- C++
helpviewer_keywords:
- random starting point
- random starting point, setting
- random numbers, generating
- srand function
- numbers, pseudorandom
- numbers, random
- pseudorandom numbers
- starting points, setting random
- starting points
ms.assetid: 7bf56dc5-5692-4182-a3c1-18af98d2dd1a
caps.latest.revision: 12
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
ms.openlocfilehash: e86ea8aa561af584a6825d4225820aca7baeced2
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="srand"></a>srand
Imposta il valore di inizializzazione iniziale per il generatore di numeri pseudocasuali.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void srand(  
   unsigned int seed   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `seed`  
 Valore di inizializzazione per la generazione di numeri pseudocasuali  
  
## <a name="remarks"></a>Note  
 La funzione `srand` imposta il punto iniziale per generare una serie di interi pseudocasuali nel thread corrente. Per reinizializzare il generatore in modo da creare la stessa sequenza di risultati, chiamare la funzione `srand` e usare di nuovo lo stesso argomento `seed`. Qualsiasi altro valore di `seed` imposta il generatore su un punto iniziale diverso nella sequenza di numeri pseudocasuali. `rand` recupera i numeri pseudocasuali generati. La chiamata a `rand` prima di qualsiasi chiamata a `srand` genera la stessa sequenza della chiamata a `srand` passando 1 per `seed`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`srand`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [rand](../../c-runtime-library/reference/rand.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [rand](../../c-runtime-library/reference/rand.md)
