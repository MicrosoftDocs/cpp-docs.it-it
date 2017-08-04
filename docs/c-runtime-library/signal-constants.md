---
title: Costanti signal | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 11
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
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 511d700aa5eaa47c59648160e152cfc14c4c1177
ms.contentlocale: it-it
ms.lasthandoff: 05/19/2017

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
