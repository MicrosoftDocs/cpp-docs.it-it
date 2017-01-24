---
title: "&lt;condition_variable&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<condition_variable>"
dev_langs: 
  - "C++"
ms.assetid: 8567f7cc-20bd-42a7-9137-87c46f878009
caps.latest.revision: 19
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;condition_variable&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le classi [condition\_variable](../standard-library/condition-variable-class.md) e [condition\_variable\_any](../standard-library/condition-variable-any-class.md) utilizzate per creare oggetti che rimangono una condizione per diventare true.  
  
 Questa intestazione utilizza il runtime di concorrenza \(ConcRT\) per consentirne l'utilizzo con altri meccanismi di ConcRT.  Per ulteriori informazioni su ConcRT, vedere [Runtime di concorrenza](../parallel/concrt/concurrency-runtime.md).  
  
## Sintassi  
  
```cpp  
#include <condition_variable>  
```  
  
> [!NOTE]
>  Nel codice compilato utilizzando **\/clr** o **\/clr:pure**, questa intestazione è bloccata.  
  
### Osservazioni  
 Il codice che attende una variabile di condizione è inoltre possibile utilizzare `mutex`.  Un thread chiamante deve essere bloccata `mutex` prima di chiamare le funzioni in attesa che la variabile condition.  `mutex` viene bloccato quando la chiamata di funzione.  `mutex` non è bloccato mentre attende che il thread per la condizione è true.  In modo che non si verifichino risultati imprevisti, ogni thread che attende una variabile di condizione deve utilizzare lo stesso oggetto di `mutex`.  
  
 Oggetti di tipo `condition_variable_any` possono essere utilizzati con un mutex di qualsiasi tipo.  Il tipo del mutex utilizzato non deve fornire il metodo di `try_lock`.  Oggetti di tipo `condition_variable` possono essere utilizzati solo con un mutex di tipo `unique_lock<mutex>`.  Gli oggetti di questo tipo possono essere più veloci degli oggetti di tipo `condition_variable_any<unique_lock<mutex>>`.  
  
 Per attendere un evento, innanzitutto blocchi mutex e chiamare uno dei metodi di `wait` sulla variabile condition.  I blocchi di chiamata di `wait` fino a un altro thread segnala la variabile condition.  
  
 *Le sveglie spurie* si verificano quando i thread in attesa delle variabili di condizione vengono sbloccati senza notifiche appropriate.  Per riconoscere tali sveglie spurie, il codice che attende una condizione diventino true devono controllare esplicitamente tale condizione al ritorno di codice da un'attesa esecuzione.  In genere viene eseguita tramite un ciclo; è possibile utilizzare `wait(unique_lock<mutex>& lock, Predicate pred)` per eseguire il ciclo automaticamente.  
  
```cpp  
while (condition is false)  
    wait for condition variable;  
```  
  
 `condition_variable_any` e `condition_variable` classi includono ognuno tre metodi che restano una condizione.  
  
-   rilevamento di`wait` un periodo di tempo non associato.  
  
-   attende di`wait_until` fino a `time`specificato.  
  
-   rilevamento di`wait_for``time interval`specificato.  
  
 Ognuno di questi metodi sono disponibili due versioni di overload.  Solo attende una svegliare e possono spurio.  L'altro accetta un argomento di modello aggiuntivo che definisce un predicato.  Il metodo non restituisce alcun valore finché il predicato non sia `true`.  
  
 Ogni classe dispone inoltre di due metodi utilizzati per notificare a una variabile di condizione che il relativo stato è `true`.  
  
-   `notify_one` si attiva uno dei thread in attesa della variabile condition.  
  
-   `notify_all` sveglia tutti i thread in attesa la variabile condition.  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Classe condition\_variable](../standard-library/condition-variable-class.md)   
 [Classe condition\_variable\_any](../standard-library/condition-variable-any-class.md)   
 [Enumerazione cv\_status](../Topic/cv_status%20Enumeration.md)