---
title: Costanti azione signal | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SIG_IGN
- SIG_DFL
dev_langs: C++
helpviewer_keywords:
- signal action constants
- SIG_IGN constant
- SIG_DFL constant
ms.assetid: c3cb4f15-d39e-4d9d-84f9-0d33e3eb5993
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 26a5b349836b7c9b08a66d4df8f3d2bedbe5b63f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="signal-action-constants"></a>Costanti azione signal
L'azioni eseguita quando il segnale di interruzione viene ricevuto dipende dal valore di `func`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <signal.h>  
```  
  
## <a name="remarks"></a>Note  
 L'argomento di `func` deve essere un indirizzo funzione o una delle costanti manifesto elencate di seguito e definite in SIGNAL.H.  
  
 `SIG_DFL`  
 Usa la risposta del sistema predefinita. Se il programma chiamante usa i flussi di I/O, i buffer creati dalla libreria run-time non vengono scaricati.  
  
 `SIG_IGN`  
 Ignora il segnale di interruzione. Questo valore non deve essere mai specificato per `SIGFPE`, visto che lo stato a virgola mobile del processo rimane indefinito.  
  
 `SIG_SGE`  
 Indica che si è verificato un errore nel segnale.  
  
 `SIG_ACK`  
 Indica che è stato ricevuto un acknowledgement.  
  
 `SIG_ERR`  
 Un tipo restituito da un segnale indica che si è verificato un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [signal](../c-runtime-library/reference/signal.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)