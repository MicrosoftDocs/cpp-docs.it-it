---
title: "Istruzione try-finally | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__try"
  - "__leave_cpp"
  - "__leave"
  - "__finally_cpp"
  - "__try_cpp"
  - "__finally"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__finally (parola chiave) [C++]"
  - "__finally (parola chiave) [C++], try-finally (sintassi delle istruzioni)"
  - "__leave (parola chiave) [C++]"
  - "__leave (parola chiave) [C++], try-finally (istruzione)"
  - "__try (parola chiave) [C++]"
  - "gestione eccezioni strutturata, try...finally"
  - "try-catch (parola chiave) [C++], try-finally (parola chiave)"
  - "try-finally (parola chiave) [C++]"
ms.assetid: 826e0347-ddfe-4f6e-a7bc-0398e0edc7c2
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Istruzione try-finally
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Nella sintassi riportata di seguito viene descritta l'istruzione `try-finally`.  
  
```  
__try {  
   // guarded code  
}  
__finally {  
   // termination code  
}  
```  
  
## Grammatica  
 *try\-finally\-statement*:  
 `__try` *compound\-statement*  
  
 `__finally` *compound\-statement*  
  
 L'istruzione `try-finally` è un'estensione Microsoft dei linguaggi C e C\+\+ che consente alle applicazioni di destinazione di garantire l'esecuzione del codice di pulizia quando l'esecuzione di un blocco di codice viene interrotta.  La pulizia è costituita da attività quali la deallocazione della memoria, la chiusura dei file e il rilascio di handle di file.  L'istruzione `try-finally` è particolarmente utile per le routine che presentano vari punti in cui viene eseguito un controllo per verificare la presenza di un errore che potrebbe causare la restituzione prematura dalla routine.  
  
 Per informazioni correlate e un esempio di codice, vedere la pagina relativa all'[istruzione try\-excep](../cpp/try-except-statement.md).  Per ulteriori informazioni sulla gestione delle eccezioni strutturata in generale, vedere la pagina relativa alla [gestione delle eccezioni strutturata](../cpp/structured-exception-handling-c-cpp.md).  Per ulteriori informazioni sulla gestione delle eccezioni nelle applicazioni gestite, vedere [Gestione delle eccezioni in \/clr](../windows/exception-handling-cpp-component-extensions.md).  
  
> [!NOTE]
>  La gestione eccezioni strutturata funziona con i file Win32 per i file di origine C\+\+ e C.  Tuttavia, non è progettato in particolare per C\+\+.  È possibile garantire maggiore portabilità del codice tramite la gestione delle eccezioni C\+\+.  Inoltre, la gestione eccezioni C\+\+ è più flessibile, in quanto può gestire le eccezioni di qualsiasi tipo.  Per i programmi C\+\+, si consiglia di utilizzare il meccanismo di gestione delle eccezioni C\+\+ \(istruzioni [try, catch e throw](../cpp/try-throw-and-catch-statements-cpp.md)\).  
  
 L'istruzione composta dopo la clausola `__try` è la sezione protetta.  L'istruzione composta dopo la clausola `__finally` è il gestore terminazioni.  Il gestore specifica un set di azioni che vengono eseguite quando la sezione protetta viene terminata, indipendentemente dal fatto che tale sezione venga terminata da un'eccezione \(terminazione anomala\) o da un passaggio standard \(terminazione normale\).  
  
 Il controllo raggiunge un'istruzione `__try` tramite l'esecuzione sequenziale semplice \(passaggio\).  Quando il controllo entra in `__try`, il relativo gestore collegato diventa attivo.  Se il flusso di controllo raggiunge la fine del blocco try, l'esecuzione continua come segue:  
  
1.  Il gestore terminazioni viene richiamato.  
  
2.  Al termine dell'esecuzione del gestore terminazioni, l'esecuzione continua dopo l'istruzione `__finally`.  Indipendentemente da come la sezione protetta viene terminata, ad esempio tramite un'istruzione `goto` all'esterno del corpo protetto o un'istruzione `return`\), il gestore di terminazione viene eseguito prima "`before`" che il flusso di controllo venga spostato all'esterno della sezione protetta.  
  
     Un'istruzione **\_\_finally**  non blocca la ricerca di un gestore di eccezioni appropriato.  
  
 Se si verifica un'eccezione nel blocco `__try`, il sistema operativo deve trovare un gestore per l'eccezione. In caso contrario, il programma avrà esito negativo.  Se viene trovato un gestore, vengono eseguiti tutti i blocchi `__finally` e l'esecuzione viene ripresa nel gestore.  
  
 Si supponga ad esempio che una serie di chiamate di funzione colleghi la funzione A alla funzione D, come illustrato di seguito.  Ogni funzione dispone di un gestore di terminazione.  Se un'eccezione viene generata nella funzione D e gestita in A, i gestori di terminazione, man mano che il sistema rimuove lo stack, vengono chiamati nell'ordine seguente: D, C, B.  
  
 ![Esecuzione dell'ordine di terminazione gestore](../cpp/media/vc38cx1.png "vc38CX1")  
Ordine di terminazione esecuzione del gestore  
  
> [!NOTE]
>  Il comportamento di try\-finally è diverso da alcuni altri linguaggi che supportano l'utilizzo di **finally**, ad esempio C\#.  Per un singolo blocco `__try` è possibile specificare `__finally` o `__except`, ma non entrambi.  Se entrambi devono essere utilizzati insieme, un'istruzione try\-except deve racchiudere l'istruzione try\-finally interna.  Sono diverse anche le regole che specificano quando viene eseguito ciascun blocco.  
  
## La parola chiave \_\_leave  
 La parola chiave `__leave` è valida solo nella sezione protetta di un'istruzione `try-finally` e consente di passare alla fine della sezione protetta.  L'esecuzione continua con la prima istruzione nel gestore di terminazione.  
  
 Un'istruzione `goto` può inoltre eseguire un salto dalla sezione protetta, ma comporta una riduzione delle prestazioni perché richiama la rimozione dello stack.  L'istruzione `__leave` è più efficiente perché non provoca la rimozione dello stack.  
  
## Terminazione anomala  
 L'uscita da un'istruzione `try-finally` utilizzando la funzione di runtime [longjmp](../c-runtime-library/reference/longjmp.md) viene considerata una terminazione anomala.  Il passaggio a un'istruzione `__try` non è un'operazione valida, mentre uscire da un'istruzione è consentito.  Devono essere eseguite tutte le istruzioni `__finally` attive tra il punto di partenza \(terminazione normale del blocco `__try`\) e la destinazione \(il blocco `__except` che gestisce l'eccezione\).  Si tratta di una rimozione locale.  
  
 Se un blocco **try** viene per una ragione qualsiasi terminato in anticipo, includendo un salto dal blocco, il sistema esegue il blocco **finally** associato come parte del processo di rimozione dello stack.  In questi casi, la funzione [AbnormalTermination](http://msdn.microsoft.com/library/windows/desktop/ms679265) restituisce TRUE se viene chiamata dall'interno del blocco **finally**; in caso contrario, restituisce FALSE.  
  
 Il gestore di terminazione non viene chiamato se un processo viene terminato nel corso dell'esecuzione di un'istruzione `try-finally`.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Scrittura di un gestore di terminazione](../cpp/writing-a-termination-handler.md)   
 [Gestione strutturata delle eccezioni](../cpp/structured-exception-handling-c-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Termination\-Handler Syntax](http://msdn.microsoft.com/library/windows/desktop/ms681393)