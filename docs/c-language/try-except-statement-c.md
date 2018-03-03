---
title: Istruzione try-except (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- try-except keyword [C]
- structured exception handling, try-except
- try-catch keyword [C]
- __try keyword [C]
- __except keyword [C]
- __except keyword [C], in try-except
- try-catch keyword [C], try-except keyword [C]
ms.assetid: f76db9d1-fc78-417f-b71f-18e545fc01c3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9896e8a348a70ff6e27342f53f627097ef15dfa8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="try-except-statement-c"></a>Istruzione try-except (C)
**Sezione specifica Microsoft**  
  
 L'istruzione **try-except** è un'estensione Microsoft per il linguaggio C che consente alle applicazioni di ottenere il controllo di un programma quando si verificano eventi che generalmente terminano l'esecuzione. Tali eventi vengono chiamati eccezioni e il meccanismo che tratta le eccezioni viene chiamato gestione delle eccezioni strutturate.  
  
 Le eccezioni possono essere basate sull'hardware o sul software. Anche quando le applicazioni non possono completamente recuperare le eccezioni hardware o software, la gestione delle eccezioni strutturata consente di visualizzare informazioni sugli errori e intercettare lo stato interno dell'applicazione per diagnosticare il problema. Ciò è particolarmente utile per i problemi saltuari che non possono essere riprodotti facilmente.  
  
## <a name="syntax"></a>Sintassi  
 *try-except-statement*:  
 **__try**  *compound-statement*  
  
 **__except (**  *espressione*  **)**  *compound-statement*  
  
 L'istruzione composta dopo la clausola `__try` è la sezione protetta. L'istruzione composta dopo la clausola `__except` è il gestore dell'eccezione. Il gestore specifica un set di azioni da intraprendere se viene generata un'eccezione durante l'esecuzione della sezione protetta. L'esecuzione procede nel modo seguente:  
  
1.  La sezione protetta viene eseguita.  
  
2.  Se non si verifica alcuna eccezione durante l'esecuzione della sezione protetta, l'esecuzione continuerà nell'istruzione dopo la clausola `__except`.  
  
3.  Se si verifica un'eccezione durante l'esecuzione della sezione protetta o nelle routine chiamate dalla sezione protetta, l'espressione `__except` viene valutata e il valore restituito determina come viene gestita l'eccezione. Sono disponibili tre valori:  
  
     `EXCEPTION_CONTINUE_SEARCH` L'eccezione non viene riconosciuta. Continuare la ricerca dello stack per un gestore, prima per contenere le istruzioni **try-except**, quindi per i gestori con la precedenza successiva più elevata.  
  
     `EXCEPTION_CONTINUE_EXECUTION` L'eccezione viene riconosciuta ma viene ignorata. Continuare l'esecuzione nel punto in cui si è verificata l'eccezione.  
  
     `EXCEPTION_EXECUTE_HANDLER` L'eccezione viene riconosciuta. Trasferire il controllo al gestore eccezioni eseguendo l'istruzione composta `__except`, quindi continuare l'esecuzione nel punto in cui si è verificata l'eccezione.  
  
 Poiché l'espressione `__except` viene valutata come un'espressione C, è limitata a un singolo valore, l'operatore di espressione condizionale o l'operatore virgola. Se è necessaria un'elaborazione più estesa, l'espressione può chiamare una routine che restituisce uno dei tre valori sopra elencati.  
  
> [!NOTE]
>  La gestione strutturata delle eccezioni funziona con i file di origine C e C++. Tuttavia, non è progettato in particolare per C++. È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C++. Inoltre, il meccanismo di gestione delle eccezioni di C++ è molto più flessibile, in quanto è in grado di gestire eccezioni di qualsiasi tipo.  
  
> [!NOTE]
>  Per i programmi C++, è necessario utilizzare la gestione delle eccezioni C++ anziché la gestione delle eccezioni strutturata. Per altre informazioni, vedere [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md) in *Riferimenti al linguaggio C++*.  
  
 Ogni routine in un'applicazione può essere associata al proprio gestore eccezioni. L'espressione `__except` viene eseguita nell'ambito del corpo `__try`. Ciò significa che ha accesso a tutte le variabili locali dichiarate lì.  
  
 La parola chiave `__leave` è valida all'interno di un blocco di istruzioni **try-except**. L'effetto di `__leave` è il passaggio alla fine del blocco **try-except**. L'esecuzione riprende dopo la fine del gestore eccezioni. Sebbene per ottenere lo stesso risultato possa essere utilizzata un'istruzione `goto`, un'istruzione `goto` causa la rimozione dello stack. L'istruzione `__leave` è più efficiente perché non comporta la rimozione dello stack.  
  
 L'uscita da un'istruzione **try-except** usando la funzione di runtime `longjmp` viene considerata una terminazione anomala. Il passaggio a un'istruzione `__try` non è un'operazione valida, mentre uscire da un'istruzione è consentito. Il gestore di eccezioni non viene chiamato se un processo viene terminato nel corso dell'esecuzione di un'istruzione **try-except**.  
  
## <a name="example"></a>Esempio  
 Di seguito è riportato un esempio di un gestore eccezioni e di un gestore di terminazione. Per altre informazioni sui gestori di terminazione, vedere [Istruzione try-finally](../c-language/try-finally-statement-c.md).  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Istruzione try-except](../cpp/try-except-statement.md)