---
title: Costanti _locking | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _LK_RLCK
- _LK_NBLCK
- _LK_LOCK
- _LK_NBRLCK
- _LK_UNLCK
dev_langs: C++
helpviewer_keywords:
- LK_UNLCK constant
- LK_NBRLCK constant
- _LK_NBRLCK constant
- _LK_NBLCK constant
- _LK_LOCK constant
- LK_NBLCK constant
- _LK_UNLCK constant
- LK_RLCK constant
- _LK_RLCK constant
- LK_LOCK constant
ms.assetid: c3dc92c8-60e3-4d29-9f50-5d217627c8ad
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 799b00209463c90c61b4b497a88af39ba554cd01
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="locking-constants"></a>Costanti _locking
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <sys/locking.h>  
  
```  
  
## <a name="remarks"></a>Note  
 L'argomento *mode* nella chiamata alla funzione `_locking` specifica l'azione di blocco da eseguire.  
  
 L'argomento *mode* deve essere una delle costanti manifesto seguenti.  
  
 `_LK_LOCK`  
 Blocca i byte specificati. Se i byte non possono essere bloccati, la funzione tenterà di bloccarli nuovamente dopo 1 secondo. Se, dopo 10 tentativi, i byte non possono essere bloccati, la funzione restituisce un errore.  
  
 `_LK_RLCK`  
 Uguale a `_LK_LOCK`.  
  
 `_LK_NBLCK`  
 Blocca i byte specificati. Se i byte non possono essere bloccati, la funzione restituisce un errore.  
  
 `_LK_NBRLCK`  
 Uguale a `_LK_NBLCK`.  
  
 `_LK_UNLCK`  
 Sblocca i byte specificati. (I byte devono essere stati bloccati in precedenza).  
  
## <a name="see-also"></a>Vedere anche  
 [_locking](../c-runtime-library/reference/locking.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)