---
title: "Istruzione try-finally (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "try_cpp"
  - "try"
  - "finally"
  - "finally_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__finally (parola chiave) [C]"
  - "__finally (parola chiave) [C], try-finally (sintassi delle istruzioni)"
  - "gestione eccezioni strutturata, try...finally"
  - "try-catch (parola chiave) [C]"
  - "try-catch (parola chiave) [C], try-finally (parola chiave) [C]"
  - "try-finally (parola chiave) [C]"
ms.assetid: 514400c1-c322-4bf3-9e48-3047240b8a82
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Istruzione try-finally (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'istruzione `try-finally` è un'estensione Microsoft del linguaggio C che consente alle applicazioni di garantire l'esecuzione del codice di pulizia quando l'esecuzione di un blocco di codice viene interrotta.  La pulizia è costituita da attività quali la deallocazione della memoria, la chiusura dei file e il rilascio di handle di file.  L'istruzione `try-finally` è particolarmente utile per le routine che presentano vari punti in cui viene eseguito un controllo per verificare la presenza di un errore che potrebbe causare la restituzione prematura dalla routine.  
  
 *try\-finally\-statement*:  
 **\_\_try**  *compound\-statement*  
  
 **\_\_finally**  *compound\-statement*  
  
 L'istruzione composta dopo la clausola `__try` è la sezione protetta.  L'istruzione composta dopo la clausola `__finally` è il gestore terminazioni.  Il gestore specifica un set di azioni che vengono eseguite quando la sezione protetta viene terminata, indipendentemente dal fatto che tale terminazione avvenga tramite un'eccezione \(terminazione anomala\) o un passaggio standard \(terminazione normale\).  
  
 Il controllo raggiunge un'istruzione `__try` tramite l'esecuzione sequenziale semplice \(passaggio\).  Quando il controllo entra nell'istruzione `__try`, il relativo gestore associato diventa attivo.  L'esecuzione procede nel modo seguente:  
  
1.  La sezione protetta viene eseguita.  
  
2.  Il gestore terminazioni viene richiamato.  
  
3.  Al termine dell'esecuzione del gestore terminazioni, l'esecuzione continua dopo l'istruzione `__finally`.  Indipendentemente dal modo in cui la sezione protetta viene terminata \(ad esempio tramite un'istruzione `goto` all'esterno del corpo protetto o un'istruzione `return`\), il gestore terminazioni viene eseguito prima che il flusso di controllo venga spostato all'esterno della sezione protetta.  
  
 La parola chiave `__leave` è valida all'interno di un blocco di istruzioni `try-finally`.  L'effetto di `__leave` è il passaggio alla fine del blocco `try-finally`.  Il gestore terminazioni viene eseguito immediatamente.  Sebbene per ottenere lo stesso risultato possa essere utilizzata un'istruzione `goto`, un'istruzione `goto` causa la rimozione dello stack.  L'istruzione `__leave` è più efficiente perché non comporta la rimozione dello stack.  
  
 L'uscita da un'istruzione `try-finally` mediante una funzione `return` o una funzione di runtime `longjmp` viene considerata una terminazione anomala.  Il passaggio a un'istruzione `__try` non è un'operazione valida, mentre uscire da un'istruzione è consentito.  Devono essere eseguite tutte le istruzioni `__finally` attive tra il punto di origine e il punto di destinazione.  Questo procedimento è denominato "rimozione locale."  
  
 Il gestore terminazioni non viene chiamato se un processo viene terminato durante l'esecuzione di un'istruzione `try-finally`.  
  
> [!NOTE]
>  La gestione strutturata delle eccezioni funziona con i file di origine C e C\+\+.  Tuttavia, non è progettato in particolare per C\+\+.  È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C\+\+.  Inoltre, il meccanismo di gestione delle eccezioni di C\+\+ è molto più flessibile, in quanto è in grado di gestire eccezioni di qualsiasi tipo.  
  
> [!NOTE]
>  Per i programmi C\+\+, è necessario utilizzare la gestione delle eccezioni C\+\+ anziché la gestione delle eccezioni strutturata.  Per ulteriori informazioni, vedere [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md) in *Riferimenti al linguaggio C\+\+*.  
  
 Vedere l'esempio relativo a [try\-except statement](../c-language/try-except-statement-c.md) per verificare il funzionamento dell'istruzione `try-finally`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Istruzione try\-finally](../cpp/try-finally-statement.md)