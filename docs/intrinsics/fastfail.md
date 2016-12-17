---
title: "__fastfail | Microsoft Docs"
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
ms.assetid: 9cd32639-e395-4c75-9f3a-ac3ba7f49921
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __fastfail
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Termina immediatamente il processo chiamante con un sovraccarico minimo.  
  
## Sintassi  
  
```  
void __fastfail(unsigned int code);  
```  
  
#### Parametri  
 \[in\] `code`  
 Costante simbolica `FAST_FAIL_<description>` in winnt.h o wdm.h che indica il motivo della terminazione del processo.  
  
## Valore restituito  
 La funzione intrinseca `__fastfail` non restituisce alcun risultato.  
  
## Note  
 La funzione intrinseca `__fastfail` fornisce un meccanismo per una richiesta di *errore immediato*, ovvero un modo per richiedere la terminazione immediata di un processo potenzialmente danneggiato.  Gli errori critici che possono aver danneggiato lo stato del programma e lo stack senza ripristino non possono essere gestiti tramite la normale funzionalità di gestione delle eccezioni.  Usare `__fastfail` per terminare il processo con un sovraccarico minimo.  
  
 Internamente, `__fastfail` viene implementato tramite diversi meccanismi specifici per l'architettura:  
  
|Architettura|Istruzione|Posizione dell'argomento code|  
|------------------|----------------|-----------------------------------|  
|x86|int 0x29|ecx|  
|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|int 0x29|rcx|  
|ARM|Opcode 0xDEFB|r0|  
  
 Una richiesta di errore immediato è autonoma e in genere richiede l'esecuzione di solo due istruzioni.  Dopo l'esecuzione di una richiesta di errore immediato, il kernel eseguirà l'azione appropriata.  Quando viene generato un evento di errore immediato, nel codice in modalità utente non ci sono dipendenze di memoria oltre al puntatore all'istruzione stesso.  Ciò ottimizza l'affidabilità, anche nel caso di un grave danneggiamento della memoria.  
  
 L'argomento `code`, ovvero una delle costanti simboliche `FAST_FAIL_<description>` in winnt.h o wdm.h, descrive il tipo di condizione di errore e viene incorporato nei report di errore in un modo specifico per l'ambiente.  
  
 Le richieste di errore immediato in modalità utente vengono visualizzate come eccezione second\-chance critica con codice 0xC0000409 e con almeno un parametro dell'eccezione.  Il primo parametro dell'eccezione è il valore `code`.  Questo codice di eccezione indica al servizio Segnalazione errori Windows e all'infrastruttura di debug che il processo è danneggiato e che è necessario intraprendere il numero minimo di azioni in\-process in risposta all'errore.  Le richieste di errore immediato in modalità kernel vengono implementate usando un codice di controllo errori dedicato, `KERNEL_SECURITY_CHECK_FAILURE` \(0x139\).  In entrambi i casi, non vengono richiamati i gestori delle eccezioni perché è previsto che lo stato del programma sia danneggiato.  Se è presente un debugger, viene esaminato lo stato del programma prima della terminazione.  
  
 Il supporto del meccanismo nativo di errore immediato è iniziato in Windows 8.  I sistemi operativi Windows che non supportano in modo nativo l'istruzione di errore immediato, in genere tratteranno la richiesta di errore immediato come una violazione di accesso o come un controllo errori `UNEXPECTED_KERNEL_MODE_TRAP`.  In questi casi, il programma viene comunque terminato, ma non necessariamente con la stessa rapidità.  
  
 `__fastfail` è disponibile solo come funzione intrinseca.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`__fastfail`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)], ARM|  
  
 **File di intestazione** \<intrin.h\>  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)