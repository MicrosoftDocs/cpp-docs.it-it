---
title: "Istruzione try-except (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__except"
  - "try"
  - "__try"
  - "except"
  - "__except_cpp"
  - "__try_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__except (parola chiave) [C]"
  - "__except (parola chiave) [C], try-except"
  - "__try (parola chiave) [C]"
  - "gestione eccezioni strutturata, try-except"
  - "try-catch (parola chiave) [C]"
  - "try-catch (parola chiave) [C], try-except (parola chiave) [C]"
  - "try-except (parola chiave) [C]"
ms.assetid: f76db9d1-fc78-417f-b71f-18e545fc01c3
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Istruzione try-except (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'istruzione **try\-except** è un'estensione Microsoft del linguaggio C che consente alle applicazioni di ottenere il controllo di un programma quando si verificano eventi che generalmente terminano l'esecuzione.  Tali eventi vengono chiamati eccezioni e il meccanismo che tratta le eccezioni viene chiamato gestione delle eccezioni strutturate.  
  
 Le eccezioni possono essere basate sull'hardware o sul software.  Anche quando le applicazioni non possono completamente recuperare le eccezioni hardware o software, la gestione delle eccezioni strutturata consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per diagnosticare il problema.  Ciò è particolarmente utile per i problemi saltuari che non possono essere riprodotti facilmente.  
  
## Sintassi  
 *try\-except\-statement*:  
 **\_\_try**  *compound\-statement*  
  
 **\_\_except \(**  *expression*  **\)**  *compound\-statement*  
  
 L'istruzione composta dopo la clausola `__try` è la sezione protetta.  L'istruzione composta dopo la clausola `__except` è il gestore dell'eccezione.  Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione della sezione protetta.  L'esecuzione procede nel modo seguente:  
  
1.  La sezione protetta viene eseguita.  
  
2.  Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continuerà nell'istruzione dopo la clausola `__except`.  
  
3.  Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamate dalla sezione protetta, l'espressione `__except` viene valutata e il valore restituito determina come viene gestita l'eccezione.  Vi sono tre valori:  
  
     `EXCEPTION_CONTINUE_SEARCH` L'eccezione non viene riconosciuta.  Continuare la ricerca dello stack per un gestore, anzitutto per contenere le istruzioni **try\-except**, quindi per i gestori con la precedenza successiva più elevata.  
  
     `EXCEPTION_CONTINUE_EXECUTION` L'eccezione viene riconosciuta ma viene chiusa.  Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.  
  
     `EXCEPTION_EXECUTE_HANDLER` L'eccezione viene riconosciuta.  Trasferire il controllo al gestore eccezioni eseguendo l'istruzione composta `__except`, quindi continuare l'esecuzione nel punto in cui si è verificata l'eccezione.  
  
 Poiché l'espressione `__except` viene valutata come un'espressione C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola.  Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.  
  
> [!NOTE]
>  La gestione strutturata delle eccezioni funziona con i file di origine C e C\+\+.  Tuttavia, non è progettato in particolare per C\+\+.  È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C\+\+.  Inoltre, il meccanismo di gestione delle eccezioni di C\+\+ è molto più flessibile, in quanto è in grado di gestire eccezioni di qualsiasi tipo.  
  
> [!NOTE]
>  Per i programmi C\+\+, è necessario utilizzare la gestione delle eccezioni C\+\+ anziché la gestione delle eccezioni strutturata.  Per ulteriori informazioni, vedere [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md) in *Riferimenti al linguaggio C\+\+*.  
  
 Ogni routine in un'applicazione può essere associata al proprio gestore eccezioni.  L'espressione `__except` viene eseguita nell'ambito del corpo `__try`.  Ciò significa che ha accesso a tutte le variabili locali dichiarate lì.  
  
 La parola chiave `__leave` è valida all'interno di un blocco di istruzioni **try\-except**.  L'effetto di `__leave` è il passaggio alla fine del blocco **try\-except**.  L'esecuzione riprende dopo la fine del gestore eccezioni.  Sebbene per ottenere lo stesso risultato possa essere utilizzata un'istruzione `goto`, un'istruzione `goto` causa la rimozione dello stack.  L'istruzione `__leave` è più efficiente perché non comporta la rimozione dello stack.  
  
 L'uscita da un'istruzione **try\-except** utilizzando la funzione di runtime `longjmp` viene considerata una terminazione anomala.  Il passaggio a un'istruzione `__try` non è un'operazione valida, mentre uscire da un'istruzione è consentito.  Il gestore eccezioni non viene chiamato se un processo viene terminato nel corso dell'esecuzione di un'istruzione **try\-except**.  
  
## Esempio  
 Di seguito è riportato un esempio di un gestore eccezioni e di un gestore di terminazione.  Vedere l'[Istruzione try\-finally](../c-language/try-finally-statement-c.md) per ulteriori informazioni sui gestori di terminazione.  
  
```  
.  
.  
.  
puts("hello");  
__try{  
   puts("in try");  
   __try{  
      puts("in try");  
      RAISE_AN_EXCEPTION();  
   }__finally{  
      puts("in finally");  
   }  
}__except( puts("in filter"), EXCEPTION_EXECUTE_HANDLER ){  
   puts("in except");  
}  
puts("world");  
```  
  
 Si tratta dell'output nell'esempio, con il commento aggiunto a destra:  
  
```  
hello  
in try              /* fall into try                     */  
in try              /* fall into nested try                */  
in filter           /* execute filter; returns 1 so accept  */  
in finally          /* unwind nested finally                */  
in except           /* transfer control to selected handler */  
world               /* flow out of handler                  */  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Istruzione try\-except](../cpp/try-except-statement.md)