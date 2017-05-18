---
title: Controllo processo e ambiente | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.programs
dev_langs:
- C++
helpviewer_keywords:
- processes, stopping
- processes, administrative tasks
- parent process
- processes, starting
- environment control routines
- process control routines
ms.assetid: 7fde74c3-c2a6-4d15-84b8-092160d60c3e
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
ms.translationtype: Human Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 3cf27e03831d5f70d9035a4d8fdb0d9b1cdb40e5
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="process-and-environment-control"></a>Controllo processo e ambiente
Le routine di controllo dei processi consentono di avviare, arrestare e gestire i processi dall'interno di un programma, mentre le routine di controllo dell'ambiente consentono di ottenere e modificare le informazioni relative all'ambiente del sistema operativo.  
  
### <a name="process-and-environment-control-functions"></a>Funzioni di controllo dei processi e dell'ambiente  
  
|Routine|Uso|  
|-------------|---------|  
|[abort](../c-runtime-library/reference/abort.md)|Interrompe il processo senza svuotare i buffer né chiamare funzioni registrate da `atexit` e `_onexit`|  
|[assert](../c-runtime-library/reference/assert-macro-assert-wassert.md)|Verifica la presenza di errori logici|  
|Macro [_ASSERT, _ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md)|Simile a `assert`, ma è disponibile solo nelle versioni di debug delle librerie di runtime|  
|[atexit](../c-runtime-library/reference/atexit.md)|Routine di pianificazione per l'esecuzione alla chiusura del programma|  
|[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)|Crea un nuovo thread in un processo del sistema operativo Windows|  
|[_cexit](../c-runtime-library/reference/cexit-c-exit.md)|Esegue le routine di terminazione di `exit`, ad esempio lo svuotamento del buffer, e quindi restituisce il controllo al programma chiamante senza terminare il processo|  
|[_c_exit](../c-runtime-library/reference/cexit-c-exit.md)|Esegue le routine di terminazione di `_exit` e quindi restituisce il controllo al programma chiamante senza terminare il processo|  
|[_cwait](../c-runtime-library/reference/cwait.md)|Attende fino alla terminazione di un altro processo|  
|[_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)|Termina un thread del sistema operativo Windows|  
|[_execl, _wexecl](../c-runtime-library/reference/execl-wexecl.md)|Esegue un nuovo processo con un elenco di argomenti|  
|[_execle, _wexecle](../c-runtime-library/reference/execle-wexecle.md)|Esegue un nuovo processo con un elenco di argomenti e l'ambiente specificato|  
|[_execlp, _wexeclp](../c-runtime-library/reference/execlp-wexeclp.md)|Esegue un nuovo processo usando la variabile `PATH` e un elenco di argomenti|  
|[_execlpe, _wexeclpe](../c-runtime-library/reference/execlpe-wexeclpe.md)|Esegue un nuovo processo usando la variabile `PATH`, l'ambiente specificato e un elenco di argomenti|  
|[_execv, _wexecv](../c-runtime-library/reference/execv-wexecv.md)|Esegue un nuovo processo con una matrice di argomenti|  
|[_execve, _wexecve](../c-runtime-library/reference/execve-wexecve.md)|Esegue un nuovo processo con una matrice di argomenti e l'ambiente specificato|  
|[_execvp, _wexecvp](../c-runtime-library/reference/execvp-wexecvp.md)|Esegue un nuovo processo usando la variabile `PATH` e una matrice di argomenti|  
|[_execvpe, _wexecvpe](../c-runtime-library/reference/execvpe-wexecvpe.md)|Esegue un nuovo processo usando la variabile `PATH`, l'ambiente specificato e una matrice di argomenti|  
|[exit](../c-runtime-library/reference/exit-exit-exit.md)|Chiama le funzioni registrate da `atexit` e `_onexit`, svuota tutti i buffer, chiude tutti i file aperti e termina il processo|  
|[_exit](../c-runtime-library/reference/exit-exit-exit.md)|Termina il processo immediatamente, senza chiamare `atexit` o `_onexit` oppure senza svuotare il buffer|  
|[getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md), [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)|Ottiene il valore della variabile di ambiente|  
|[_getpid](../c-runtime-library/reference/getpid.md)|Ottiene il numero dell'ID del processo|[System::Diagnostics::Process::Id](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.id.aspx)|  
|[longjmp](../c-runtime-library/reference/longjmp.md)|Ripristina l'ambiente dello stack salvato; usarla per eseguire un `goto` non locale|  
|[_onexit](../c-runtime-library/reference/onexit-onexit-m.md)|Pianifica le routine per l'esecuzione alla chiusura del programma; usarla per assicurare la compatibilità con Microsoft C/C++ 7.0 e versioni precedenti|  
|[_pclose](../c-runtime-library/reference/pclose.md)|Attende un nuovo processore dei comandi e chiude il flusso sulla pipe collegata|  
|[perror, _wperror](../c-runtime-library/reference/perror-wperror.md)|Stampa un messaggio di errore|  
|[_pipe](../c-runtime-library/reference/pipe.md)|Crea una pipe per la lettura e la scrittura|  
|[_popen, _wpopen](../c-runtime-library/reference/popen-wpopen.md)|Crea una pipe ed esegue il comando|  
|[_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md), [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)|Aggiunge o modifica il valore della variabile di ambiente|  
|[raise](../c-runtime-library/reference/raise.md)|Invia un segnale al processo chiamante|  
|[setjmp](../c-runtime-library/reference/setjmp.md)|Salva l'ambiente dello stack; usarla per eseguire un `goto` non locale|  
|[signal](../c-runtime-library/reference/signal.md)|Gestisce un segnale di interruzione|  
|[_spawnl, _wspawnl](../c-runtime-library/reference/spawnl-wspawnl.md)|Crea ed esegue il nuovo processo con l'elenco di argomenti specificato|  
|[_spawnle, _wspawnle](../c-runtime-library/reference/spawnle-wspawnle.md)|Crea ed esegue il nuovo processo con l'elenco di argomenti e l'ambiente specificati|  
|[_spawnlp, _wspawnlp](../c-runtime-library/reference/spawnlp-wspawnlp.md)|Crea ed esegue un nuovo processo usando la variabile `PATH` e l'elenco di argomenti specificato|  
|[_spawnlpe, _wspawnlpe](../c-runtime-library/reference/spawnlpe-wspawnlpe.md)|Crea ed esegue un nuovo processo usando la variabile `PATH`, l'ambiente specificato e un elenco di argomenti|  
|[_spawnv, _wspawnv](../c-runtime-library/reference/spawnv-wspawnv.md)|Crea ed esegue il nuovo processo con la matrice di argomenti specificata|  
|[_spawnve, _wspawnve](../c-runtime-library/reference/spawnve-wspawnve.md)|Crea ed esegue il nuovo processo con l'ambiente specificato e una matrice di argomenti|  
|[_spawnvp, _wspawnvp](../c-runtime-library/reference/spawnvp-wspawnvp.md)|Crea ed esegue un nuovo processo usando la variabile `PATH` e la matrice di argomenti specificata|  
|[_spawnvpe, _wspawnvpe](../c-runtime-library/reference/spawnvpe-wspawnvpe.md)|Crea ed esegue un nuovo processo usando la variabile `PATH`, l'ambiente specificato e una matrice di argomenti|  
|[system, _wsystem](../c-runtime-library/reference/system-wsystem.md)|Esegue un comando del sistema operativo|  
  
 Nel sistema operativo Windows, il processo figlio è equivalente al processo padre. Qualsiasi processo può usare `_cwait` per attendere un altro processo di cui è noto l'ID.  
  
 La differenza tra le famiglie `_exec` e `_spawn` consiste nel fatto che una funzione `_spawn` può restituire il controllo dal nuovo processo al processo chiamante. In una funzione `_spawn`,sia il processo chiamante che il nuovo processo sono presenti in memoria, a meno che non sia specificato `_P_OVERLAY`. In una funzione `_exec`, il nuovo processo si sovrappone al processo chiamante, in modo che il controllo non torni a quest'ultimo a meno che non si verifichi un errore durante il tentativo di avviare l'esecuzione del nuovo processo.  
  
 Le differenze tra le funzioni della famiglia `_exec`, come tra quelle della famiglia `_spawn`, includono il metodo di individuazione del file da eseguire come nuovo processo, il modo in cui gli argomenti vengono passati al nuovo processo e il metodo di impostazione dell'ambiente, come illustrato nella tabella seguente. Usare una funzione che passa un elenco di argomenti quando il numero di argomenti è costante o è noto in fase di esecuzione. Usare una funzione che passa un puntatore a una matrice contenente gli argomenti quando il numero di argomenti viene determinato in fase di esecuzione. Le informazioni riportate nella tabella seguente vengono applicate anche alle controparti con caratteri wide delle funzioni `_spawn` e `_exec`.  
  
### <a name="spawn-and-exec-function-families"></a>Famiglie di funzioni _spawn e _exec  
  
|Funzioni|Uso della variabile PATH per individuare il file|Convenzione per il passaggio degli argomenti|Impostazioni dell'ambiente|  
|---------------|--------------------------------------|----------------------------------|--------------------------|  
|`_execl, _spawnl`|No|Elenco|Ereditate dal processo chiamante|  
|`_execle, _spawnle`|No|Elenco|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
|`_execlp, _spawnlp`|Sì|Elenco|Ereditate dal processo chiamante|  
|`_execlpe, _spawnlpe`|Sì|Elenco|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
|`_execv, _spawnv`|No|Matrice|Ereditate dal processo chiamante|  
|`_execve, _spawnve`|No|Matrice|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
|`_execvp, _spawnvp`|Sì|Matrice|Ereditate dal processo chiamante|  
|`_execvpe, _spawnvpe`|Sì|Matrice|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
