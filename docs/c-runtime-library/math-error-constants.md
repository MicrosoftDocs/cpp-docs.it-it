---
title: Costanti di errori matematici | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _PLOSS
- _UNDERFLOW
- _TLOSS
- _SING
- _DOMAIN
- _OVERFLOW
dev_langs:
- C++
helpviewer_keywords:
- _TLOSS constant
- _SING constant
- PLOSS constant
- UNDERFLOW constant
- _UNDERFLOW constant
- _OVERFLOW constant
- DOMAIN constant
- OVERFLOW constant
- TLOSS constant
- SING constant
- _DOMAIN constant
- _PLOSS constant
- math error constants
ms.assetid: 4be933a6-674e-45a5-8ac9-090023542f5b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 76313854bc9bb7c9a624836c47d0178978f8befd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="math-error-constants"></a>Costanti di errori matematici
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <math.h>  
  
```  
  
## <a name="remarks"></a>Note  
 Le routine matematiche della libreria di runtime possono generare costanti di errori matematici.  
  
 Questi errori, descritti di seguito, corrispondono ai tipi di eccezione definiti in MATH.H e vengono restituiti dalla funzione `_matherr` quando si verifica un errore matematico.  
  
|Costante|Significato|  
|--------------|-------------|  
|`_DOMAIN`|L'argomento alla funzione è esterno al dominio della funzione.|  
|`_OVERFLOW`|Il risultato è troppo grande per essere rappresentato nel tipo restituito della funzione.|  
|`_PLOSS`|Si è verificata una perdita parziale di significato.|  
|`_SING`|Singolarità dell'argomento: l'argomento a funzione contiene un valore non valido. (Ad esempio, viene passato il valore 0 alla funzione che richiede un valore diverso da zero).|  
|`_TLOSS`|Si è verificata una perdita totale di significato.|  
|`_UNDERFLOW`|Il risultato è troppo piccolo per essere rappresentato.|  
  
## <a name="see-also"></a>Vedere anche  
 [_matherr](../c-runtime-library/reference/matherr.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)