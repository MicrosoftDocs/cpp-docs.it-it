---
title: "raise | Microsoft Docs"
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
  - "raise"
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
  - "Raise"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "programmi [C++], invio di segnali ai programmi in esecuzione"
  - "raise (funzione)"
  - "segnali"
  - "segnali, invio ai programmi in esecuzione"
ms.assetid: a3ccd3ad-f68f-4a7b-a005-c3ebfb217e8b
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# raise
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Invia un segnale a un programma in esecuzione.  
  
> [!NOTE]
>  Non utilizzare questo metodo per interrompere un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)], eccetto che negli scenari di test o di debug.  Le modalità da interfaccia utente o da livello di codice per concludere un'app [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] non sono consentite come descritto nella Section 3.6 dei [Requisiti di certificazione delle app di Windows 8](http://go.microsoft.com/fwlink/?LinkId=262889).  Per ulteriori informazioni, vedere [Ciclo di vita delle applicazioni \(app di Windows Store\)](http://go.microsoft.com/fwlink/?LinkId=262853).  
  
## Sintassi  
  
```  
  
      int raise(  
int sig   
);  
```  
  
#### Parametri  
 *sig*  
 Segnale che deve essere generato.  
  
## Valore restituito  
 Se l'operazione riesce, **raise** restituisce 0.  In caso contrario, restituisce un valore diverso da zero.  
  
## Note  
 La funzione **raise** invia *sig* al programma di esecuzione.  Se una chiamata precedente a **signal** configura una funzione di gestione del segnale per *sig*, **raise** esegue tale funzione.  Se nessuna funzione di gestione è stata installata, le azioni predefinite associate a *sig* vengono eseguite, nel modo seguente.  
  
|Signal|Significato|Predefinito|  
|------------|-----------------|-----------------|  
|`SIGABRT`|Terminazione anomala|Terminare il programma chiamante con codice di uscita 3|  
|`SIGFPE`|Errore a virgola mobile|Termina il programma chiamante|  
|`SIGILL`|Istruzione non valida|Termina il programma chiamante|  
|`SIGINT`|Interrupt CTRL\+C|Termina il programma chiamante|  
|`SIGSEGV`|Accesso alla memoria non valido|Termina il programma chiamante|  
|`SIGTERM`|Richiesta di chiusura inviata al programma|Ignora il segnale|  
  
 Se l'argomento non è un segnale valido come specificato in precedenza, viene richiamato il gestore di parametro non valido, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se non gestita, la funzione imposta `errno` a `EINVAL` e restituisce un valore diverso da zero.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|**raise**|\<signal.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [Librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [Controllo processo e ambiente](../../c-runtime-library/process-and-environment-control.md)   
 [abort](../../c-runtime-library/reference/abort.md)   
 [signal](../../c-runtime-library/reference/signal.md)