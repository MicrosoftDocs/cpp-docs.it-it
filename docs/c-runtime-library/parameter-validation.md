---
title: Convalida dei parametri | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- parameters, validation
ms.assetid: 019dd5f0-dc61-4d2e-b4e9-b66409ddf1f2
caps.latest.revision: 9
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
ms.openlocfilehash: 749e734bc4657efff3f0dfaeb735a0ea69375d02
ms.lasthandoff: 02/24/2017

---
# <a name="parameter-validation"></a>Convalida dei parametri
La maggior parte delle funzioni CRT con sicurezza avanzata e molte delle funzioni preesistenti convalidano i propri parametri. La convalida può includere il controllo della presenza di puntatori NULL, la verifica che i numeri interi rientrino in un intervallo valido o il controllo della validità dei valori di enumerazione. Quando viene rilevato un parametro non valido, viene eseguito il gestore di parametri non validi.  
  
## <a name="invalid-parameter-handler-routine"></a>Routine del gestore di parametri non validi  
 Quando una funzione della libreria di runtime C rileva un parametro non valido, acquisisce alcune informazioni sull'errore e quindi chiama una macro che esegue il wrapping di una funzione di invio del gestore di parametri non validi, ovvero [_invalid_parameter](../c-runtime-library/reference/invalid-parameter-functions.md), [_invalid_parameter_noinfo](../c-runtime-library/reference/invalid-parameter-functions.md) o [_invalid_parameter_noinfo_noreturn](../c-runtime-library/reference/invalid-parameter-functions.md). La funzione di invio chiamata varia a seconda che il codice sia, rispettivamente, una compilazione di debug, una compilazione della versione finale o che l'errore sia considerato irreversibile. 
 
 Nelle compilazioni di debug, la macro per i parametri non validi genera di solito un'asserzione non riuscita e un punto di interruzione del debugger prima della chiamata della funzione di invio. Quando viene eseguito il codice, l'asserzione può essere segnalata all'utente in una finestra di dialogo con scelte di tipo "Interrompi", "Riprova" e "Continua" o simili, a seconda della versione del sistema operativo e della libreria di runtime. Queste opzioni consentono all'utente di terminare immediatamente il programma, di collegare un debugger o di consentire la continuazione dell'esecuzione del codice esistente, che chiama la funzione di invio. 
 
 La funzione di invio del gestore di parametri non validi chiama a sua volta il gestore di parametri non validi attualmente assegnato. Per impostazione predefinita, il parametro non valido chiama `_invoke_watson` in modo che si verifichi un arresto anomalo dell'applicazione, ovvero che l'applicazione termini e generi un minidump. Se abilitata dal sistema operativo, una finestra di dialogo chiede all'utente se vuole inviare il dump di arresto anomalo del sistema a Microsoft per l'analisi.   
  
 Questo comportamento può essere modificato usando le funzioni [set_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) o [_set_thread_local_invalid_parameter_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md) per impostare il gestore di parametri non validi su una funzione personalizzata. Se la funzione specificata non termina l'applicazione, il controllo viene restituito alla funzione che ha ricevuto i parametri non validi. In CRT, queste funzioni in genere cessano l'esecuzione della funzione, impostano `errno` su un codice di errore e restituiscono un codice di errore. In molti casi, il valore di `errno` e il valore restituito sono entrambi `EINVAL`, a indicare un parametro non valido. In alcuni casi, viene restituito un codice di errore più specifico, ad esempio `EBADF` per un puntatore di file non valido passato come parametro. Per altre informazioni su `errno`, vedere [errno, _doserrno, _sys_errlist e _sys_nerr](../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Funzionalità di sicurezza in CRT](../c-runtime-library/security-features-in-the-crt.md)   
 [CRT Library Features](../c-runtime-library/crt-library-features.md) (Funzionalità della libreria CRT)
