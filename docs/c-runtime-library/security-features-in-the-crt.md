---
title: "Funzionalit&#224; di sicurezza in CRT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_CRT_SECURE_NO_DEPRECATE"
  - "_CRT_NONSTDC_NO_WARNINGS"
  - "_CRT_SECURE_NO_WARNINGS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CRT_NONSTDC_NO_DEPRECATE"
  - "_CRT_NONSTDC_NO_WARNINGS"
  - "_CRT_SECURE_NO_DEPRECATE"
  - "_CRT_SECURE_NO_WARNINGS"
  - "sovraccarichi del buffer"
  - "buffer [C++], sovraccarichi del buffer"
  - "CRT, miglioramenti della sicurezza"
  - "CRT_NONSTDC_NO_DEPRECATE"
  - "CRT_NONSTDC_NO_WARNINGS"
  - "CRT_SECURE_NO_DEPRECATE"
  - "CRT_SECURE_NO_WARNINGS"
  - "avvisi elementi deprecati (correlati alla sicurezza)"
  - "avvisi elementi deprecati (correlati alla sicurezza), disabilitazione"
  - "parametri [C++], convalida"
  - "sicurezza [CRT]"
  - "avvisi elementi deprecati di sicurezza [C++]"
  - "CRT con sicurezza avanzata"
ms.assetid: d9568b08-9514-49cd-b3dc-2454ded195a3
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Funzionalit&#224; di sicurezza in CRT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Numerose funzioni CRT datate hanno una rispettiva nuova versione più sicura.  Se esiste una funzione sicura, la precedente versione meno sicura è contrassegnata come deprecata e la nuova versione ha il suffisso `_s` \("secure"\).  
  
 In questo contesto, "deprecata" significa semplicemente che l'utilizzo di una funzione non è consigliato; non indica che è in programma la rimozione della funzione dal CRT.  
  
 Le funzioni protette non impediscono o non correggere gli errori di sicurezza; piuttosto, intercettano gli errori quando si verificano.  Eseguono controlli aggiuntivi per le condizioni di errore e in caso di errore, invocano un gestore errori \(vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md)\).  
  
 Ad esempio, la funzione `strcpy` non consente di stabilire se la stringa che si sta copiando è troppo grande per il suo buffer di destinazione.  Tuttavia, la relativa controparte sicura, `strcpy_s`, accetta la dimensione del buffer come parametro, pertanto può determinare se si verifica un sovraccarico del buffer.  Se si utilizza `strcpy_s` per copiare undici caratteri in un buffer di dieci caratteri, è un errore da parte dell'utente; `strcpy_s` non può risolvere il problema, ma può rilevare l'errore e notificare invocando il gestore di parametro non valido.  
  
## Eliminazione degli avvisi di deprecazione  
 Esistono diversi modi per eliminare gli avvisi di funzioni deprecate per le funzioni precedenti meno sicure.  La più semplice è semplicemente quello di definire `_CRT_SECURE_NO_WARNINGS` o utilizzare il pragma [warning](../preprocessor/warning.md).  Disabilita gli avvisi di funzioni deprecate, ma naturalmente i problemi di sicurezza che hanno causato gli avvisi persistono.  È preferibile lasciare gli avvisi di deprecazione abilitati e usufruire delle nuove funzionalità di sicurezza CRT.  
  
 In C\+\+, il modo più semplice per farlo prevede l'utilizzo di [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md), in molti casi eliminerà gli avvisi di deprecazione sostituendo le chiamate alle funzioni deprecate con chiamate alle nuove versioni sicure di queste funzioni.  Si consideri, ad esempio la chiamata deprecata a `strcpy`:  
  
```  
char szBuf[10];   
strcpy(szBuf, "test"); // warning: deprecated   
```  
  
 Definendo `_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES` come 1 viene eliminato l'avviso modificando la chiamata di `strcpy` a `strcpy_s`, in modo da evitare sovraccarichi del buffer.  Per ulteriori informazioni, vedere [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md).  
  
 Per queste funzioni deprecate senza verificare gli overload del modello, è necessario certamente considerare la possibilità di aggiornare manualmente il codice per utilizzare le versioni sicure.  
  
 Un'altra origine degli avvisi di funzioni deprecate, indipendente dalla sicurezza, sono le funzioni di gestione POSIX.  Sostituire i nomi delle funzioni POSIX con i relativi equivalenti standard \(ad esempio, cambiare [access](../c-runtime-library/reference/access-crt.md) in [\_access](../c-runtime-library/reference/access-waccess.md)\), o disabilitare gli avvisi correlati POSIX delle funzioni deprecate definendo `_CRT_NONSTDC_NO_WARNINGS`.  Per ulteriori informazioni, vedere [Deprecated CRT Functions](http://msdn.microsoft.com/it-it/7e259932-c6c8-4c1a-9637-639e591681a5).  
  
## Funzionalità di sicurezza aggiuntive  
 Alcune delle funzionalità di sicurezza includono quanto segue:  
  
-   `Parameter Validation`.  I parametri passati alle funzioni CRT vengono convalidati, in entrambi forniscono funzioni sicure e in molte versioni preesistenti delle funzioni.  Le convalide includono:  
  
    -   Verifica dei valori `NULL` passati alle funzioni.  
  
    -   Verifica i valori enumerati per la validità.  
  
    -   Verifica che i valori integrali siano in intervalli validi.  
  
-   Per ulteriori informazioni, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).  
  
-   Un gestore per i parametri non validi è inoltre accessibile allo sviluppatore.  Quando si riscontra un parametro non valido, anziché interrompere ed uscire dall'applicazione, il CRT fornisce un modo per controllare questi problemi con la funzione [set\_invalid\_parameter\_handler, \_set\_thread\_local\_invalid\_parameter\_handler](../c-runtime-library/reference/set-invalid-parameter-handler-set-thread-local-invalid-parameter-handler.md).  
  
-   `Sized Buffers`.  Le funzioni protette richiedono che le dimensioni del buffer siano passate a qualsiasi funzione che scrive in un buffer.  Le versioni sicure verificano che il buffer sia sufficientemente grande prima di scriverci dentro, contribuendo ad evitare pericolosi sovraccarichi del buffer che potrebbero consentire l'esecuzione di codice malevolo.  Queste funzioni in genere restituiscono un tipo `errno` di codice di errore e invocano il gestore di parametro non valido se la dimensione del buffer è troppo piccola.  Le funzioni che leggono da buffer di input, come `gets`, dispongono di versioni sicure che richiede di specificare una dimensione massima.  
  
-   `Null termination`.  Alcune funzioni che accettavano stringhe potenzialmente non terminate hanno le rispettive versioni sicure che garantiscono che le stringhe siano correttamente null terminate.  
  
-   `Enhanced error reporting`.  Le funzioni protette restituiscono codici di errore con più informazioni sugli errori rispetto a quelle disponibili con le funzioni preesistenti.  Le funzioni protette e molte delle funzioni preesistenti impostano `errno` e restituiscono spesso un tipo di codice `errno`, per definire meglio gli errori.  
  
-   `Filesystem security`.  Le API di I\/O di file sicuri supportano l'accesso sicuro ai file nel caso predefinito.  
  
-   `Windows security`.  Le API di processo sicuro rafforzano i criteri di sicurezza e permettono agli ACL di essere specificati.  
  
-   `Format string syntax checking`.  Le stringhe non valide vengono rilevate, ad esempio, l'utilizzo scorretto dei caratteri di campo di tipo nelle stringhe di formato di `printf`.  
  
## Vedere anche  
 [Convalida dei parametri](../c-runtime-library/parameter-validation.md)   
 [Overload di modelli sicuri](../c-runtime-library/secure-template-overloads.md)   
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)