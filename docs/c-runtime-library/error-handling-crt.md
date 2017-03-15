---
title: Gestione degli errori (CRT) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: ab0f6998aa2f4f6ba5066cbc1d4c6813dcbaab0b
ms.lasthandoff: 02/24/2017

---
# <a name="error-handling-crt"></a>Gestione degli errori (CRT)
Usare queste routine per gestire gli errori del programma.  
  
### <a name="error-handling-routines"></a>Routine di gestione degli errori  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|-------------------------------|  
|Macro [assert](../c-runtime-library/reference/assert-macro-assert-wassert.md)|Verifica la presenza di errori logici di programmazione ed è disponibile sia nelle versioni di rilascio sia nelle versioni di debug della libreria di runtime|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|Macro [_ASSERT, _ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Simile a `assert`, ma è disponibile solo nelle versioni di debug della libreria di runtime|[System::Diagnostics::Debug::Assert](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[clearerr](../c-runtime-library/reference/clearerr.md)|Reimposta l'indicatore di errore. L'indicatore di errore viene reimpostato anche dalla chiamata a `rewind` o dalla chiusura di un flusso.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_eof](../c-runtime-library/reference/eof.md)|Controlla la fine del file in I/O di basso livello|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[feof](../c-runtime-library/reference/feof.md)|Verifica la fine del file. La fine del file viene indicata anche quando `_read` restituisce 0.|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[ferror](../c-runtime-library/reference/ferror.md)|Verifica la presenza di errori di I/O del flusso|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|Macro [_RPT, _RPTF](../c-runtime-library/reference/rpt-rptf-rptw-rptfw-macros.md)|Genera un report in modo simile a `printf`, ma è disponibile solo nelle versioni di debug della libreria di runtime|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[_set_error_mode](../c-runtime-library/reference/set-error-mode.md)|Modifica `__error_mode` per determinare una posizione non predefinita in cui il runtime C scrive un messaggio di errore per un errore che potrebbe terminare il programma.||  
|[_set_purecall_handler](../c-runtime-library/reference/get-purecall-handler-set-purecall-handler.md)|Imposta il gestore per una chiamata alla funzione virtuale pura.||  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
