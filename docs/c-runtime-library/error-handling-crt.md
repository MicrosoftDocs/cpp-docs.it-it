---
title: Gestione degli errori (CRT) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.errors
dev_langs:
- C++
helpviewer_keywords:
- error handling, C routines for
- logic errors
- error handling, library routines
- testing, for program errors
ms.assetid: 125ac697-9eb0-4152-a440-b7842f23d97f
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 176e744423441711715cc32b355278db20491e8f
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="error-handling-crt"></a>Gestione degli errori (CRT)
Usare queste routine per gestire gli errori del programma.  
  
### <a name="error-handling-routines"></a>Routine di gestione degli errori  
  
|Routine|Uso|  
|-------------|---------|  
|Macro [assert](../c-runtime-library/reference/assert-macro-assert-wassert.md)|Verifica la presenza di errori logici di programmazione ed è disponibile sia nelle versioni di rilascio sia nelle versioni di debug della libreria di runtime.|  
|Macro [_ASSERT, _ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Simile a `assert`, ma è disponibile solo nelle versioni di debug della libreria di runtime.|  
|[clearerr](../c-runtime-library/reference/clearerr.md)|Reimposta l'indicatore di errore. L'indicatore di errore viene reimpostato anche dalla chiamata a `rewind` o dalla chiusura di un flusso.|  
|[_eof](../c-runtime-library/reference/eof.md)|Controlla la fine del file in I/O di basso livello.|  
|[feof](../c-runtime-library/reference/feof.md)|Verifica la fine del file. La fine del file viene indicata anche quando `_read` restituisce 0.|  
|[ferror](../c-runtime-library/reference/ferror.md)|Verifica la presenza di errori di I/O del flusso.|  
|Macro [_RPT, _RPTF](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)|Genera un report in modo simile a `printf`, ma è disponibile solo nelle versioni di debug della libreria di runtime.|  
|[_set_error_mode](../c-runtime-library/reference/set-error-mode.md)|Modifica `__error_mode` per determinare una posizione non predefinita in cui il runtime C scrive un messaggio di errore per un errore che potrebbe terminare il programma.|  
|[_set_purecall_handler](../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md)|Imposta il gestore per una chiamata alla funzione virtuale pura.|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
