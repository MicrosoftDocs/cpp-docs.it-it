---
title: "Controllo processo e ambiente | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.programs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "routine di controllo di ambiente"
  - "processo padre"
  - "routine di controllo processi"
  - "processi, attività amministrative"
  - "processi, avvio"
  - "processi, interruzione"
ms.assetid: 7fde74c3-c2a6-4d15-84b8-092160d60c3e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Controllo processo e ambiente
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare le routine di controllo processi per avviare, arrestare e gestire i processi dall'interno di un programma.  Utilizzare le routine di controllo dell'ambiente per ottenere modificare le informazioni sull'ambiente del sistema operativo.  
  
### Funzioni del controllo dell'ambiente e di processo  
  
|Routine|Utilizzo|Equivalente .NET Framework|  
|-------------|--------------|--------------------------------|  
|[abort](../c-runtime-library/reference/abort.md)|interrompe il processo senza svuotare i buffer o chiamare funzioni registrate da `atexit` e `_onexit`|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[assert](../c-runtime-library/reference/assert-macro-assert-wassert.md)|Test per errori logici|[\<caps:sentence id\="tgt14" sentenceid\="14fd9bf776829d73028df00162f7533f" class\="tgtSentence"\>System::Diagnostics::Debug::Assert\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[\_ASSERT, \_ASSERTE](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro|Simile a `assert`, ma è disponibile solo nelle versioni di debug delle librerie di run\-time|[\<caps:sentence id\="tgt17" sentenceid\="14fd9bf776829d73028df00162f7533f" class\="tgtSentence"\>System::Diagnostics::Debug::Assert\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.debug.assert.aspx)|  
|[atexit](../c-runtime-library/reference/atexit.md)|Routine di pianificazione per l'esecuzione alla chiusura del programma|[\<caps:sentence id\="tgt20" sentenceid\="db022fa9aa2a12937c3610e3eb32e80f" class\="tgtSentence"\>System::Diagnostics::Process::Exited\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)|  
|[\_beginthread, \_beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)|Crea un nuovo thread in un processo del sistema operativo Windows|[\<caps:sentence id\="tgt23" sentenceid\="221e38ecc6535bce91af4e1a19f464d1" class\="tgtSentence"\>System::Threading::Thread::Start\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.threading.thread.start.aspx)|  
|[\_cexit](../c-runtime-library/reference/cexit-c-exit.md)|Esegue le procedure di chiusura di `exit` \(come svuotare il buffer\), quindi restituisce il controllo al programma chiamante senza terminare il processo|[\<caps:sentence id\="tgt26" sentenceid\="46302f19d05c09c5875a795cb64800f9" class\="tgtSentence"\>System::Diagnostics::Process::CloseMainWindow\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.closemainwindow.aspx)|  
|[\_c\_exit](../c-runtime-library/reference/cexit-c-exit.md)|Esegue le procedure di chiusura di `_exit`, quindi restituisce il controllo al programma chiamante senza terminare il processo|[\<caps:sentence id\="tgt29" sentenceid\="46302f19d05c09c5875a795cb64800f9" class\="tgtSentence"\>System::Diagnostics::Process::CloseMainWindow\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.closemainwindow.aspx)|  
|[\_cwait](../c-runtime-library/reference/cwait.md)|Attende fino alla terminazione di un altro processo|[\<caps:sentence id\="tgt32" sentenceid\="d9c88c429eaacaa9f37d91d29bc6504e" class\="tgtSentence"\>System::Diagnostics::Process::WaitForExit\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.waitforexit.aspx)|  
|[\_endthread, \_endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)|Termina un thread del sistema operativo Windows|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_execl, \_wexecl](../c-runtime-library/reference/execl-wexecl.md)|Esegue un nuovo processo con un elenco di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execle, \_wexecle](../c-runtime-library/reference/execle-wexecle.md)|Esegue un nuovo processo con un elenco di argomenti e l'ambiente specificato|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execlp, \_wexeclp](../c-runtime-library/reference/execlp-wexeclp.md)|Esegue un nuovo processo utilizzando la variabile `PATH` e un elenco di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execlpe, \_wexeclpe](../c-runtime-library/reference/execlpe-wexeclpe.md)|Esegue un nuovo processo utilizzando la variabile `PATH`, l'ambiente fornito e un elenco di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execv, \_wexecv](../c-runtime-library/reference/execv-wexecv.md)|Esegue un nuovo processo con un array di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execve, \_wexecve](../c-runtime-library/reference/execve-wexecve.md)|Esegue un nuovo processo con un array di argomenti e l'ambiente specificato|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execvp, \_wexecvp](../c-runtime-library/reference/execvp-wexecvp.md)|Esegue un nuovo processo utilizzando la variabile `PATH` e un array di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_execvpe, \_wexecvpe](../c-runtime-library/reference/execvpe-wexecvpe.md)|Esegue un nuovo processo utilizzando la variabile `PATH`, l'ambiente fornito e un array di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[exit](../c-runtime-library/reference/exit-exit-exit.md)|Chiama le funzioni registrate da `atexit` e `_onexit`, svuota tutti i buffer, chiude tutti i file aperti e termina il processo|[\<caps:sentence id\="tgt64" sentenceid\="811a70e90f150f212690505b37a46c0f" class\="tgtSentence"\>System::Diagnostics::Process::Kill\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.kill.aspx)|  
|[\_exit](../c-runtime-library/reference/exit-exit-exit.md)|Termina il processo immediatamente senza chiamare `atexit` o `_onexit` oppure svuotare il buffer|[\<caps:sentence id\="tgt67" sentenceid\="811a70e90f150f212690505b37a46c0f" class\="tgtSentence"\>System::Diagnostics::Process::Kill\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.kill.aspx)|  
|[getenv, \_wgetenv](../c-runtime-library/reference/getenv-wgetenv.md), [getenv\_s, \_wgetenv\_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)|Ottiene il valore della variabile di ambiente|[\<caps:sentence id\="tgt70" sentenceid\="795988b9277d74ea3b722ecd42dcb29d" class\="tgtSentence"\>System::Environment::GetEnvironmentVariable\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.environment.getenvironmentvariable.aspx)|  
|[\_getpid](../c-runtime-library/reference/getpid.md)|Ottiene il numero dell'ID del processo|[\<caps:sentence id\="tgt73" sentenceid\="745b82c461dc74b15540e9622f7cd7bd" class\="tgtSentence"\>System::Diagnostics::Process::Id\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.id.aspx)|  
|[longjmp](../c-runtime-library/reference/longjmp.md)|Ripristina l'ambiente dello stack salvato; utilizzarlo per eseguire un `goto` non locale|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_onexit](../c-runtime-library/reference/onexit-onexit-m.md)|Routine di pianificazione per l'esecuzione alla chiusura del programma; utilizzare per compatibilità con le versioni 7.0 di Microsoft C\/C\+\+ e precedenti|[\<caps:sentence id\="tgt81" sentenceid\="db022fa9aa2a12937c3610e3eb32e80f" class\="tgtSentence"\>System::Diagnostics::Process::Exited\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.exited.aspx)|  
|[\_pclose](../c-runtime-library/reference/pclose.md)|Attendere un nuovo processore dei comandi e chiude il flusso sulla pipe collegate|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[perror, \_wperror](../c-runtime-library/reference/perror-wperror.md)|Stampa un messaggio di errore|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_pipe](../c-runtime-library/reference/pipe.md)|Crea una pipe per la lettura e la scrittura|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_popen, \_wpopen](../c-runtime-library/reference/popen-wpopen.md)|Crea una pipe ed esegue il comando|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_putenv, \_wputenv](../c-runtime-library/reference/putenv-wputenv.md), [\_putenv\_s, \_wputenv\_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)|Aggiunge o modifica il valore della variabile di ambiente|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[raise](../c-runtime-library/reference/raise.md)|Invia un segnale al processo chiamante|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[setjmp](../c-runtime-library/reference/setjmp.md)|Salva l'ambiente dello stack; utilizzarlo per eseguire un `goto`non locale|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[signal](../c-runtime-library/reference/signal.md)|Gestisce un segnale di interruzione|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[\_spawnl, \_wspawnl](../c-runtime-library/reference/spawnl-wspawnl.md)|Crea ed esegue il nuovo processo con l'elenco di argomenti specificato|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnle, \_wspawnle](../c-runtime-library/reference/spawnle-wspawnle.md)|Crea ed esegue il nuovo processo con l'elenco di argomenti e l'ambiente specificati|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnlp, \_wspawnlp](../c-runtime-library/reference/spawnlp-wspawnlp.md)|Crea ed esegue un nuovo processo utilizzando la variabile `PATH` e l'elenco di argomenti specificato|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnlpe, \_wspawnlpe](../c-runtime-library/reference/spawnlpe-wspawnlpe.md)|Crea ed esegue un nuovo processo utilizzando la variabile `PATH`, l'ambiente specificato e un elenco di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnv, \_wspawnv](../c-runtime-library/reference/spawnv-wspawnv.md)|Crea ed esegue il nuovo processo con l'array di argomenti specificato|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnve, \_wspawnve](../c-runtime-library/reference/spawnve-wspawnve.md)|Crea ed esegue il nuovo processo con l'ambiente specificato e un array di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnvp, \_wspawnvp](../c-runtime-library/reference/spawnvp-wspawnvp.md)|Crea ed esegue un nuovo processo utilizzando la variabile `PATH` e l'elenco di array specificato|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[\_spawnvpe, \_wspawnvpe](../c-runtime-library/reference/spawnvpe-wspawnvpe.md)|Crea ed esegue un nuovo processo utilizzando la variabile `PATH`, l'ambiente specificato e un array di argomenti|[Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx), [Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx)|  
|[system, \_wsystem](../c-runtime-library/reference/system-wsystem.md)|Esegue un comando del sistema operativo|[Classe di System::Diagnostics::ProcessStartInfo](https://msdn.microsoft.com/en-us/library/system.diagnostics.processstartinfo.aspx), [Classe di System::Diagnostics::Process](https://msdn.microsoft.com/en-us/library/system.diagnostics.process.aspx)|  
  
 Nel sistema operativo Windows, il processo figlio è equivalente al processo padre.  Qualsiasi processo può utilizzare `_cwait` per attendere qualsiasi altro processo di cui è noto l'id processo.  
  
 La differenza tra le famiglie `_exec` e `_spawn` è che una funzione `_spawn` può restituire il controllo dal nuovo processo al processo chiamante.  In una funzione `_spawn`, sia il processo chiamante che il nuovo processo sono presenti in memoria a meno che non sia specificato `_P_OVERLAY`.  In una funzione `_exec`, il nuovo processo si sovrappone al processo chiamante, in modo che il controllo non torni al processo chiamante a meno che non si verifichi un errore nel tentativo di avviare l'esecuzione del nuovo processo.  
  
 Le differenze tra le funzioni della famiglia `_exec` come quelle della famiglia `_spawn`, includono il metodo di individuazione del file da eseguire come nuovo processo, il modulo in cui gli argomenti vengono passati al nuovo processo ed il metodo di impostazione dell'ambiente, come illustrato nella tabella seguente.  Utilizzare una funzione che passa un elenco di argomenti quando il numero di argomenti è costante o è noto in fase di compilazione.  Utilizzare una funzione che passa un puntatore a un array contenente gli argomenti quando il numero di argomenti viene determinato in fase di esecuzione.  Le informazioni nella tabella seguente vengono applicati anche alle controparti a caratteri estesi delle funzioni `_spawn` e `_exec`.  
  
### Famiglie di funzioni \_exec e \_spawn  
  
|Funzioni|Utilizza la variabile PATH per individuare il file|Convenzione per il passaggio degli argomenti|Impostazioni dell'ambiente|  
|--------------|--------------------------------------------------------|--------------------------------------------------|--------------------------------|  
|`_execl, _spawnl`|No|Elenco|Ereditato dal processo chiamante|  
|`_execle, _spawnle`|No|Elenco|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
|`_execlp, _spawnlp`|Yes|Elenco|Ereditato dal processo chiamante|  
|`_execlpe, _spawnlpe`|Yes|Elenco|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
|`_execv, _spawnv`|No|Matrice|Ereditato dal processo chiamante|  
|`_execve, _spawnve`|No|Matrice|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
|`_execvp, _spawnvp`|Yes|Matrice|Ereditato dal processo chiamante|  
|`_execvpe, _spawnvpe`|Yes|Matrice|Puntatore alla tabella dell'ambiente per il nuovo processo passato come ultimo argomento|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)