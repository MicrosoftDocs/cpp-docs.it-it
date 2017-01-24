---
title: "Funzioni della libreria di runtime del linguaggio C per il controllo dei thread | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_beginthread (funzione)"
  - "_beginthreadex (funzione)"
  - "_endthread (funzione)"
  - "_endthreadex (funzione)"
  - "multithreading [C++], controllo di thread"
  - "threading [C++], controllo di thread"
ms.assetid: 39d0529c-c392-4c6f-94f5-105d1e8054e4
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni della libreria di runtime del linguaggio C per il controllo dei thread
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In tutti i programmi Win32 è presente almeno un thread.  Per ogni thread possono essere creati thread aggiuntivi.  Un thread può completare rapidamente le proprie funzioni e quindi terminare l'esecuzione oppure rimanere attivo per tutta la durata del programma.  
  
 Le librerie di runtime del linguaggio C LIBCMT e MSVCRT forniscono le seguenti funzioni per la creazione e la terminazione dei thread: [\_beginthread, \_beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) e [\_endthread, \_endthreadex](../../c-runtime-library/reference/endthread-endthreadex.md).  
  
 Le funzioni `_beginthread` e `_beginthreadex` creano un nuovo thread e restituiscono un identificatore di thread se l'operazione viene eseguita correttamente.  l thread viene terminato automaticamente al completamento dell'esecuzione oppure può autoterminarsi eseguendo una chiamata `_endthread` o `_endthreadex`.  
  
> [!NOTE]
>  Se un programma compilato con Libcmt.lib chiama le routine di runtime del linguaggio C, sarà necessario avviare i thread tramite la funzione `_beginthread` o `_beginthreadex`.   Non utilizzare le funzioni Win32 `ExitThread` e `CreateThread`.  L'utilizzo di `SuspendThread` può portare a un deadlock se vi sono più thread bloccati in attesa che il thread in sospeso completi il proprio accesso a una struttura di dati della libreria di runtime del linguaggio C.  
  
##  <a name="_core_the__beginthread_function"></a> Funzioni \_beginthread e \_beginthreadex  
 Le funzioni `_beginthread` e `_beginthreadex` creano un nuovo thread.  Ogni thread di un processo condivide con gli altri thread i segmenti di codice e di dati del processo, mentre i valori dei registri, lo spazio dello stack e l'indirizzo dell'istruzione corrente sono univoci per ogni thread.  A ogni thread viene assegnato un tempo di CPU, in modo che l'esecuzione di tutti i thread del processo possa avvenire in concorrenza.  
  
 `_beginthread` e `_beginthreadex` sono simili alla funzione [CreateThread](http://msdn.microsoft.com/library/windows/desktop/ms682453) dell'API Win32, ma con le differenze descritte di seguito.  
  
-   Tali funzioni inizializzano determinate variabili della libreria di runtime del linguaggio C.   Questo aspetto è importante solo se nei thread viene utilizzata la libreria di runtime del linguaggio C.  
  
-   `CreateThread` consente di controllare gli attributi di sicurezza.  È possibile utilizzare questa funzione per avviare un thread in uno stato sospeso.  
  
 `_beginthread` e `_beginthreadex` restituiscono un handle per il nuovo thread in caso di esito positivo oppure un codice di errore se si è verificato un errore.  
  
##  <a name="_core_the__endthread_function"></a> Funzioni \_endthread e \_endthreadex  
 La funzione [\_endthread](../../c-runtime-library/reference/endthread-endthreadex.md) provoca la terminazione di un thread creato tramite `_beginthread` e allo stesso modo, `_endthreadex` provoca la terminazione di un thread creato tramite`_beginthreadex`.  I thread vengono terminati automaticamente al completamento.  `_endthread` e `_endthreadex` sono utili per la terminazione condizionale da un thread.  Un thread dedicato all'elaborazione di comunicazioni, ad esempio, può essere terminato se non è in grado di ottenere il controllo della porta di comunicazione.  
  
## Vedere anche  
 [Multithreading con C e Win32](../../parallel/multithreading-with-c-and-win32.md)