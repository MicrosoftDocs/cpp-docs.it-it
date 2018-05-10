---
title: Costanti signal | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- SIGTERM
- SIGFPE
- SIGABRT
- SIGILL
- SIGINT
- SIGSEGV
dev_langs:
- C++
helpviewer_keywords:
- SIGTERM constant
- SIGABRT constant
- SIGSEGV constant
- SIGFPE constant
- SIGINT constant
- signal constants
- SIGILL constant
ms.assetid: a3b39281-dae7-4e44-8d68-e6a610c669dd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 279f4beb3b550f672ac3950c31f3653ca1f00ba2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="signal-constants"></a>Costanti signal
## <a name="syntax"></a>Sintassi  
  
```  
#include <signal.h>  
```  
  
## <a name="remarks"></a>Note  
 L'argomento `sig` deve essere una delle costanti di manifesto elencate di seguito (definite in SIGNAL.H).  
  
 `SIGABRT`  
 Terminazione anomala. L'azione predefinita termina il programma chiamante con codice di uscita 3.  
  
 `SIGABRT_COMPAT`  
 Equivale a SIGABRT. Per la compatibilità con altre piattaforme.  
  
 `SIGFPE`  
 Errore della virgola mobile, ad esempio overflow, divisione per zero oppure operazione non valida. L'azione predefinita termina il programma chiamante.  
  
 `SIGILL`  
 Istruzione non valida. L'azione predefinita termina il programma chiamante.  
  
 `SIGINT`  
 Interruzione con CTRL+C. L'azione predefinita termina il programma chiamante con codice di uscita 3.  
  
 `SIGSEGV`  
 Accesso alla memoria non valido. L'azione predefinita termina il programma chiamante.  
  
 `SIGTERM`  
 Richiesta di chiusura inviata al programma. L'azione predefinita termina il programma chiamante con codice di uscita 3.  
  
 `SIG_ERR`  
 Un tipo restituito da un segnale indica che si è verificato un errore.  
  
## <a name="see-also"></a>Vedere anche  
 [signal](../c-runtime-library/reference/signal.md)   
 [raise](../c-runtime-library/reference/raise.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)