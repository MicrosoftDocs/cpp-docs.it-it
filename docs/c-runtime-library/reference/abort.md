---
title: "abort | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "abort"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "Abort"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "abort (funzione)"
  - "interruzione processo corrente"
  - "processi, interruzione"
ms.assetid: a797783b-40ed-4bdb-a2cd-14ffede39e8a
caps.latest.revision: 24
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# abort
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Interrompe il processo corrente e restituisce un codice di errore.  
  
> [!NOTE]
>  Non utilizzare questo metodo per interrompere un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], eccetto che negli scenari di test o di debug.  Le modalità dell'interfaccia utente o a livello di codice per chiudere un'app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] non sono consentite come descritto in [Requisiti di certificazione delle app di Windows 8](http://go.microsoft.com/fwlink/?LinkId=262889).  Per ulteriori informazioni, vedere [Ciclo di vita delle applicazioni \(app di Windows Store\)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Sintassi  
  
```  
void abort( void );  
```  
  
## Valore restituito  
 `abort` non restituisce il controllo al processo chiamante.  Per impostazione predefinita, verifica la disponibilità di un gestore del segnale di interruzione e genera `SIGABRT` se uno è impostato.  Quindi `abort` termina il processo corrente e restituisce un codice di uscita al processo padre.  
  
## Note  
 **Specifici di Microsoft**  
  
 Per impostazione predefinita, quando un'applicazione viene compilata con la libreria di runtime di debug, la routine `abort` visualizza un messaggio di errore prima che venga generato `SIGABRT`.  Per le applicazioni di console in esecuzione in modalità di console, il messaggio viene inviato a `STDERR`.  Le applicazioni desktop di Windows e le applicazioni console eseguite in modalità a finestra visualizzano il messaggio in una finestra di messaggio.  Per eliminare il messaggio, utilizzare [\_set\_abort\_behavior](../../c-runtime-library/reference/set-abort-behavior.md) per rimuovere il flag `_WRITE_ABORT_MSG`.  Il messaggio visualizzato dipende dalla versione dell'ambiente di runtime in uso.  Per le applicazioni compilate con la versione più recente di Visual C\+\+, il messaggio è simile al seguente:  
  
 `R6010`  
  
 `- abort() has been called`  
  
 Nelle versioni precedenti della libreria di runtime C, viene visualizzato questo messaggio:  
  
 "`This application has requested the Runtime to terminate it in an unusual way. Please contact the application's support team for more information.`"  
  
 Quando il programma viene compilato in modalità di debug, la finestra di messaggio visualizza le opzioni **Interrompi**, **Riprova** o **Ignora**.  Se l'utente sceglie **Interrompi**, il programma termina immediatamente e restituisce il codice di uscita 3.  Se l'utente sceglie **Riprova**, viene chiamato un debugger per il debug JIT, se disponibile.  Se l'utente sceglie **Ignora**, `abort` continua l'elaborazione normale.  
  
 In entrambi le build di debug e per la vendita, `abort` controlla quindi se è impostato un gestore di interruzione del segnale.  Se è impostato un gestore di segnale non predefinito, `abort` chiama `raise(SIGABRT)`.  Utilizzare la funzione [signal](../../c-runtime-library/reference/signal.md) per associare una funzione di gestione di interruzione del segnale al segnale `SIGABRT`.  È possibile eseguire azioni personalizzate, ad esempio la pulizia delle risorse o la registrazione di informazioni, e terminare l'applicazione con il proprio codice di errore nella funzione di gestione.  Se non viene definito un gestore di segnale personalizzato, `abort` non genera il segnale `SIGABRT`.  
  
 Per impostazione predefinita, nelle compilazioni non di debug del desktop o nelle applicazioni di console, `abort` richiama il meccanismo di segnalazione errori di Windows \(Dr.  Watson\) per segnalare gli errori a Microsoft.  Questo comportamento può essere abilitato o disabilitato chiamando `_set_abort_behavior` e impostando o mascherando il flag `_CALL_REPORTFAULT`.  Quando il flag è impostato, Windows visualizza una finestra di messaggio che contiene un messaggio analogo al seguente: "Si è verificato un problema che impedisce il funzionamento corretto del programma". L'utente può scegliere di richiamare un debugger con un pulsante **Debug** oppure scegliere il pulsante **Chiudi programma** per terminare l'applicazione con un codice di errore definito dal sistema operativo.  
  
 Se il gestore di Segnalazione errori Windows non viene richiamato, `abort` chiama [\_exit](../../c-runtime-library/reference/exit-exit-exit.md) per terminare il processo con il codice di uscita 3 e il controllo viene restituito al processo padre o al sistema operativo.  `_exit` non svuota i buffer del flusso o esegue l'elaborazione di `atexit`\/`_onexit`.  
  
 Per ulteriori informazioni sul debug di CRT, vedere [Tecniche di debug CRT](../Topic/CRT%20Debugging%20Techniques.md).  
  
 **Specifica END Microsoft**  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`abort`|\<process.h\> o \<stdlib.h\>|  
  
## Esempio  
 Il seguente programma tenta di aprire un file e si interrompe se il tentativo fallisce.  
  
```c  
// crt_abort.c  
// compile with: /TC  
// This program demonstrates the use of  
// the abort function by attempting to open a file  
// and aborts if the attempt fails.  
  
#include  <stdio.h>  
#include  <stdlib.h>  
  
int main( void )  
{  
    FILE    *stream = NULL;  
    errno_t err = 0;  
  
    err = fopen_s(&stream, "NOSUCHF.ILE", "r" );  
    if ((err != 0) || (stream == NULL))  
    {  
        perror( "File could not be opened" );  
        abort();  
    }  
    else  
    {  
        fclose( stream );  
    }  
}  
```  
  
  **Impossibile aprire il file. Tale file o directory non esiste**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Utilizzo della funzione abort](../../cpp/using-abort.md)   
 [Funzione abort](../../c-language/abort-function-c.md)   
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [raise](../../c-runtime-library/reference/raise.md)   
 [signal](../../c-runtime-library/reference/signal.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)   
 [\_DEBUG](../../c-runtime-library/debug.md)   
 [\_set\_abort\_behavior](../../c-runtime-library/reference/set-abort-behavior.md)