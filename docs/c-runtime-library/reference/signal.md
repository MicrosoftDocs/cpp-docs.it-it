---
title: "signal | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "signal"
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
  - "signal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "signal (funzione)"
ms.assetid: 094118de-d789-4063-b4f4-cffcc80bf29d
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 26
---
# signal
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la gestione del segnale di interrupt.  
  
> [!IMPORTANT]
>  Non utilizzare questo metodo per interrompere un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], eccetto che negli scenari di test o di debug.  Le modalità da interfaccia utente o da codice per concludere un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] non sono consentite come descritto nella Section 3.6 dei [Requisiti di certificazione delle app di Windows 8](http://go.microsoft.com/fwlink/?LinkId=262889).  Per ulteriori informazioni, vedere [Ciclo di vita delle applicazioni \(app di Windows Store\)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Sintassi  
  
```  
void (__cdecl *signal(  
   int sig,   
   void (__cdecl *func ) (int [, int ] )))   
   (int);  
```  
  
#### Parametri  
 `sig`  
 Valore del segnale.  
  
 `func`  
 Funzione da eseguire.  Il primo parametro è un valore di segnale e il secondo parametro è un codice secondario che può essere utilizzato quando il primo parametro è SIGFPE.  
  
## Valore restituito  
 `signal` restituisce il valore precedente di `func` che è associato ad un segnale specifico.  Ad esempio, se il valore precedente di `func` era `SIG_IGN`, anche il valore restituito sarà `SIG_IGN`.  Un valore restituito pari a `SIG_ERR` indica un errore; in tal caso `errno` è impostato su `EINVAL`.  
  
 Vedere [errno, \_doserrno, \_sys\_errlist, and \_sys\_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) per ulteriori informazioni sui codice restituiti.  
  
## Note  
 La funzione `signal` permette ad un processo di scegliere uno dei vari modi per gestire un segnale di interrupt proveniente dal sistema operativo.  L'argomento `sig` è l'interrupt al quale risponde `signal`; deve essere una delle seguenti costanti manifesto, che sono definite in SIGNAL.H.  
  
|Valore `sig`|Descrizione|  
|------------------|-----------------|  
|`SIGABRT`|Terminazione anomala|  
|`SIGFPE`|Errore a virgola mobile|  
|`SIGILL`|Istruzione non valida|  
|`SIGINT`|Segnale CTRL\+C|  
|`SIGSEGV`|Accesso alla memoria non valido|  
|`SIGTERM`|Richiesta di terminazione|  
  
 Se `sig` non è uno dei valori riportati in precedenza, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se l'esecuzione può continuare, la funzione imposta `errno` e imposta `EINVAL` su `SIG_ERR`.  
  
 Per impostazione predefinita, `signal` termina il programma chiamante con codice di uscita 3, indipendentemente dal valore di `sig`.  
  
> [!NOTE]
>  `SIGINT` non è supportato per qualsiasi applicazione Win32.  Quando si verifica un'interrupt CTRL\+C, i sistemi operativi Win32 generano un nuovo thread per gestire in maniera specifica tale interrupt.  Ciò può far sì che un'applicazione a thread singola, come una in UNIX, diventi multithreading e causi un comportamento inaspettato.  
  
 L'argomento `func` è un indirizzo a un gestore del segnale scritto dall'utente, o ad una delle costanti predefinite `SIG_DFL` o `SIG_IGN`, anch'esse definite in SIGNAL.H.  Se `func` è una funzione, viene impostata come gestore di segnale per il segnale specificato.  Il prototipo del gestore di segnale richiede un argomento formale, `sig`, di tipo `int`.  Quando si verifica un'interrupt il sistema operativo fornisce l'argomento effettivo tramite `sig`; l'argomento è il segnale che ha generato l'interrupt.  Pertanto, è possibile utilizzare le sei costanti manifesto \(elencate nella tabella precedente\) nel gestore di segnale per determinare quale interrupt si è verificato ed eseguire l'azione appropriata.  Ad esempio, è possibile chiamare due volte `signal` per assegnare lo stesso gestore a due segnali diversi e quindi verificare l'argomento `sig` nel gestore per eseguire azioni differenti a seconda del segnale ricevuto.  
  
 Se si stanno verificando le eccezioni a virgola mobile \(`SIGFPE`\), `func` fa riferimento a una funzione che accetta un secondo argomento facoltativo che è una delle numerose costanti manifesto definite in FLOAT.H nella forma `FPE_xxx`.  Quando viene generato un segnale `SIGFPE`, è possibile verificare il valore del secondo argomento per determinare il tipo di eccezione a virgola mobile e quindi eseguire l'azione appropriata.  Questo argomento e i relativi valori possibili sono estensioni Microsoft.  
  
 Per le eccezioni a virgola mobile, il valore `func` non viene reimpostato quando viene ricevuto il segnale.  Per gestire eccezioni di virgola mobile, utilizzare le clausole try\/except per racchiudere le operazioni in virgola mobile.  È anche possibile gestirle utilizzando [setjmp](../../c-runtime-library/reference/setjmp.md) con [longjmp](../../c-runtime-library/reference/longjmp.md).  In entrambi i casi, il processo chiamante riprende l'esecuzione e lascia che lo stato del processo a virgola mobile sia indefinito.  
  
 Se il gestore del segnale restituisce il controllo, il processo chiamante riprende l'esecuzione immediatamente dopo il punto in cui aveva ricevuto il segnale di interrupt.  Questo vale indipendentemente dal tipo di segnale o dalla modalità operativa.  
  
 Prima che la funzione specificata venga eseguita, il valore di `func` è impostato su `SIG_DFL`.  Il segnale di interrupt seguente viene trattato come descritto per `SIG_DFL`, a meno che non sia specificata una corrispondente chiamata a `signal`.  È possibile utilizzare questa funzionalità per i segnali di ripristino della funzione chiamata.  
  
 Poiché le routine del gestore di segnale in genere vengono chiamate in modo asincrono quando si verifica un'interrupt, la funzione del gestore di segnale potrebbe ottenere il controllo quando un'operazione runtime è incompleta e in uno stato sconosciuto.  Nell'elenco seguente sono riepilogate le restrizioni che determinano quali funzioni è possibile utilizzare nelle routine del gestore di segnale.  
  
-   Non utilizzare le routine di STDIO.H o di basso livello I\/O \(ad esempio, `printf` o `fread`\).  
  
-   Non chiamare le routine dello heap o qualsiasi procedura che utilizza routine dello heap, ad esempio `malloc`, `_strdup`, oppure `_putenv`.  Per ulteriori informazioni, vedere [malloc](../../c-runtime-library/reference/malloc.md).  
  
-   Non utilizzare alcuna funzione che genera una chiamata al sistema \(ad esempio, `_getcwd` o `time`\).  
  
-   Non utilizzare `longjmp` a meno che l'interrupt non sia causato da un'eccezione a virgola mobile \(ovvero, `sig` è `SIGFPE`\).  In questo caso, bisogna prima di tutto reinizializzare il pacchetto a virgola mobile utilizzando una chiamata a `_fpreset`.  
  
-   Non utilizzare routine sovrapposte.  
  
 Un programma deve contenere codice a virgola mobile se prevede di intercettare l'eccezione `SIGFPE` utilizzando la funzione.  Se il programma non dispone di codice a virgola mobile e richiede il codice del gestore di segnale della libreria di runtime, è sufficiente dichiarare un double volatile e inizializzarlo su zero:  
  
```  
volatile double d = 0.0f;   
```  
  
 I segnali `SIGILL` e `SIGTERM` non vengono generati in Windows.  Sono inclusi per la compatibilità ANSI.  Pertanto, è possibile impostare gestori del segnale per i segnali che utilizzano `signal` ed è inoltre possibile generare in modo esplicito i segnali chiamando [raise](../../c-runtime-library/reference/raise.md).  
  
 Le impostazioni del segnale non vengono mantenute nei processi compilati che sono stati creati dalle chiamate alle funzioni `_exec` o `_spawn`.  Le impostazioni del segnale del nuovo processo vengono reimpostate sui valori predefiniti.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`signal`|\<signal.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo di `signal` per aggiungere un comportamento personalizzato al segnale `SIGABRT`.  Per ulteriori informazioni sul comportamento delle interruzioni, vedere [\_set\_abort\_behavior](../../c-runtime-library/reference/set-abort-behavior.md).  
  
```cpp  
// crt_signal.c  
// compile with: /EHsc /W4  
// Use signal to attach a signal handler to the abort routine  
#include <stdlib.h>  
#include <signal.h>  
#include <tchar.h>  
  
void SignalHandler(int signal)  
{  
    if (signal == SIGABRT) {  
        // abort signal handler code  
    } else {  
        // ...  
    }  
}  
  
int main()  
{  
    typedef void (*SignalHandlerPointer)(int);  
  
    SignalHandlerPointer previousHandler;  
    previousHandler = signal(SIGABRT, SignalHandler);  
  
    abort();  
}  
  
```  
  
  **Questa applicazione ha richiesto all'ambiente di Runtime di terminare alla maniera usuale.**  
**Prego contattare il supporto dell'applicazione per maggiori informazioni.**   
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [Funzioni \_exec, \_wexec](../../c-runtime-library/exec-wexec-functions.md)   
 [exit, \_Exit, \_exit](../../c-runtime-library/reference/exit-exit-exit.md)   
 [\_fpreset](../../c-runtime-library/reference/fpreset.md)   
 [Funzioni \_spawn, \_wspawn](../../c-runtime-library/spawn-wspawn-functions.md)