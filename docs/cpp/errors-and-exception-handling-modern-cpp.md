---
title: "Gestione di errori ed eccezioni (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a6c111d0-24f9-4bbb-997d-3db4569761b7
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Gestione di errori ed eccezioni (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nel linguaggio C++ moderno, nella maggior parte degli scenari, la modalità preferita per segnalare e gestire gli errori logici sia gli errori di runtime è utilizzare le eccezioni. Ciò vale soprattutto quando lo stack potrebbe contenere più chiamate di funzione tra la funzione che viene rilevato l'errore e la funzione che ha il contesto di sapere come gestirla. Le eccezioni rappresentano un modo formale e ben definito per il codice che rileva gli errori per passare le informazioni nello stack di chiamate.  
  
 Gli errori dei programmi sono in genere suddivisi in due categorie: errori di logica che sono causati da errori di programmazione, ad esempio, un errore "indice fuori intervallo" e gli errori di runtime che sono sotto il controllo del programmatore, ad esempio, un errore "servizio non disponibile di rete". Nella programmazione in stile C e in COM, segnalazione errori vengono gestita tramite la restituzione di un valore che rappresenta un codice di stato per una determinata funzione o un codice di errore oppure impostando una variabile globale che il chiamante può recuperare facoltativamente dopo ogni chiamata di funzione per verificare se sono stati segnalati errori. Ad esempio, la programmazione COM utilizza il valore restituito HRESULT per comunicare gli errori al chiamante e l'API Win32 svolge la funzione GetLastError per recuperare l'ultimo errore che è stato segnalato dallo stack di chiamate. In entrambi i casi, spetta al chiamante per riconoscere il codice e rispondere in modo appropriato. Se il chiamante non gestisce in modo esplicito il codice di errore, il programma potrebbe bloccarsi senza alcun avviso o continuare a eseguire con dati errati e produrre risultati non corretti.  
  
 Le eccezioni vengono preferite nel linguaggio C++ moderno per i motivi seguenti:  
  
-   Un'eccezione impone al codice chiamante di riconoscere una condizione di errore e di gestirlo. Le eccezioni non gestite arrestare l'esecuzione del programma.  
  
-   Un'eccezione passa al punto nello stack di chiamate in grado di gestire l'errore. Funzioni intermedi possono consentire l'eccezione propagazione. Non devono coordinare con altri livelli.  
  
-   Il meccanismo di rimozione dello stack eccezione Elimina tutti gli oggetti nell'ambito in base alle regole ben definite dopo che viene generata un'eccezione.  
  
-   Un'eccezione consente una netta separazione tra il codice che rileva l'errore e il codice che gestisce l'errore.  
  
 Nell'esempio semplificato seguente mostra la sintassi necessaria per generare e intercettare le eccezioni in C++.  
  
```cpp  
  
#include <stdexcept>  
#include <limits>  
#include <iostream>  
  
using namespace std;  
class MyClass  
{  
public:  
   void MyFunc(char c)  
   {  
      if(c < numeric_limits<char>::max())  
         throw invalid_argument("MyFunc argument too large.");  
      //...  
   }  
};  
  
int main()  
{  
   try  
   {  
      MyFunc(256); //cause an exception to throw  
   }  
  
   catch(invalid_argument& e)  
   {  
      cerr << e.what() << endl;  
      return -1;  
   }  
   //...  
   return 0;  
}  
  
```  
  
 Eccezioni in C++ sono simili a quelle in linguaggi quali c# e Java. Nel `try` blocco, se un'eccezione *generata* sarà *rilevata* dal primo associata `catch` blocco il cui tipo corrisponde a quello dell'eccezione. In altre parole, l'esecuzione passa dal `throw` dell'istruzione di `catch` istruzione. Se viene rilevato alcun blocco catch utilizzabile, `std::terminate` viene richiamato e il programma viene chiuso. In C++, qualsiasi tipo può essere generato; Tuttavia, è consigliabile che si genera un tipo che deriva direttamente o indirettamente da `std::exception`. Nell'esempio precedente, il tipo di eccezione, [invalid_argument](../standard-library/invalid-argument-class.md), definita nella libreria standard nel [\< stdexcept>](../standard-library/stdexcept.md) file di intestazione. C++ non fornisce e non richiede un `finally` blocco per assicurarsi che tutte le risorse vengano rilasciate se viene generata un'eccezione. L'acquisizione delle risorse è linguaggio inizializzazione (RAII), che utilizza i puntatori intelligenti, offre le funzionalità necessarie per la pulizia delle risorse. Per ulteriori informazioni, vedere [procedura: progettare la sicurezza di eccezione del](../cpp/how-to-design-for-exception-safety.md). Per informazioni sul meccanismo di rimozione dello stack C++, vedere [eccezioni e rimozione dello Stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md).  
  
## <a name="basic-guidelines"></a>Linee guida di base  
 Gestione degli errori affidabile è problematico in qualsiasi linguaggio di programmazione. Anche se le eccezioni forniscono numerose funzionalità che supportano la gestione degli errori buona, essi non è in grado non tutto il lavoro. Per sfruttare i vantaggi del meccanismo di eccezione, tenere presenti le eccezioni in fase di progettazione del codice.  
  
-   Utilizzare le asserzioni per verificare la presenza di errori che non devono mai verificarsi. Utilizzare le eccezioni per controllare gli errori che potrebbero verificarsi, ad esempio, errori di convalida dell'input per i parametri di funzioni pubbliche. Per ulteriori informazioni, vedere la sezione intitolata **vs eccezioni. Asserzioni**.  
  
-   Utilizzare le eccezioni quando il codice che gestisce l'errore potrebbe essere separato dal codice che rileva l'errore da uno o più chiamate di funzione corrispondente. Considerare la possibilità di utilizzare i codici di errore nei cicli critiche per le prestazioni quando il codice che gestisce l'errore è strettamente collegato al codice che rileva. Per ulteriori informazioni sui casi di non utilizzare le eccezioni, vedere [(NOTINBUILD) quando non utilizzare eccezioni](http://msdn.microsoft.com/it-it/e810df8b-2217-4e81-bae5-02f0a69f1346).  
  
-   Per ogni funzione che potrebbe generare o propaga un'eccezione, fornire uno di tre garanzie di eccezioni: la garanzia solida, la garanzia di base o la garanzia nothrow (noexcept). Per ulteriori informazioni, vedere [procedura: progettare la sicurezza di eccezione del](../cpp/how-to-design-for-exception-safety.md).  
  
-   Generate eccezioni per valore e intercettarle per riferimento. Non si rilevano non è possibile gestire. Per ulteriori informazioni, vedere [(NOTINBUILD) linee guida per la generazione e intercettazione di eccezioni (C++)](http://msdn.microsoft.com/it-it/0a9b0a3a-64c5-43f5-a080-fca69b89e839).  
  
-   Non usare specifiche di eccezione, che sono deprecate in C++ 11. Per ulteriori informazioni, vedere la sezione intitolata **specifiche di eccezione e noexcept**.  
  
-   Utilizzare i tipi di eccezione della libreria standard quando si applicano. Derivazione di tipi di eccezione personalizzata dalla [classe eccezione](../standard-library/exception-class1.md) gerarchia. Per ulteriori informazioni, vedere [(NOTINBUILD) procedura: utilizzare gli oggetti eccezione della libreria Standard](http://msdn.microsoft.com/it-it/ad1fb785-ed4e-4d94-8e84-964353aed7b6).  
  
-   Non consentire eccezioni evitare i distruttori o funzioni di deallocazione di memoria.  
  
## <a name="exceptions-and-performance"></a>Eccezioni e prestazioni  
 Il meccanismo delle eccezioni è ridotto al minimo sulle prestazioni se viene generata alcuna eccezione. Se viene generata un'eccezione, il costo dell'attraversamento dello stack e la rimozione è approssimativamente paragonabili al costo di una chiamata di funzione. Strutture di dati aggiuntivi sono necessarie per tenere traccia dello stack di chiamate dopo un `try` blocco viene immesso, e istruzioni aggiuntive sono necessarie per rimuovere lo stack, se viene generata un'eccezione. Tuttavia, nella maggior parte degli scenari, il costo delle prestazioni e footprint di memoria non è significativo. Effetti negativi delle eccezioni sulle prestazioni sono probabile che sia significativa solo nei sistemi molto memoria vincolata, o in prestazioni critiche cicli in cui è probabile che si verificano regolarmente un errore e il codice per risolvere il problema è strettamente collegato al codice che segnala. In ogni caso, è possibile conoscere il costo effettivo delle eccezioni senza profiling e la misurazione. Anche nei rari casi quando il costo è significativo, è possibile pesare contro la correttezza maggiore, più facile manutenibilità e altri vantaggi forniti da un criterio di eccezione ben progettata.  
  
## <a name="exceptions-vs-assertions"></a>Eccezioni e le asserzioni  
 Eccezioni e le asserzioni vengono distinti due meccanismi per il rilevamento di errori di run-time in un programma. Utilizzare le asserzioni per verificare le condizioni in fase di sviluppo che non deve essere true se tutto il codice è corretto. Nessun punto di gestione l'errore utilizzando un'eccezione poiché l'errore indica che un elemento nel codice deve essere risolto e non rappresenta una condizione che il programma deve recuperare in fase di esecuzione. Un'istruzione assert interrompe l'esecuzione in corrispondenza dell'istruzione in modo che è possibile controllare lo stato del programma nel debugger. un'eccezione continua l'esecuzione dal primo gestore catch appropriata. Utilizzare le eccezioni per controllare le condizioni di errore che potrebbero verificarsi in fase di esecuzione anche se il codice sia corretto, ad esempio, "file non trovato" o "memoria esaurita." Si desidera ripristinare da queste condizioni, anche se il ripristino appena viene generato un messaggio a un registro e il programma verrà terminato. Controllare sempre gli argomenti per le funzioni pubbliche dall'utilizzo delle eccezioni. Anche se la funzione è privo di errori, si potrebbe non disporre il controllo completo sugli argomenti che un utente può passare a esso.  
  
## <a name="c-exceptions-versus-windows-seh-exceptions"></a>Eccezioni C++ e le eccezioni SEH di Windows  
 I programmi C e C++ è possono utilizzare il meccanismo (SEH) nel sistema operativo Windows di gestione delle eccezioni strutturata. I concetti presentati in SEH simili a quelle delle eccezioni C++, ad eccezione del fatto che utilizza SEH il `__try`, `__except`, e `__finally` costruisce anziché `try` e `catch`. In Visual C++, le eccezioni C++ sono implementate per SEH. Tuttavia, quando si scrive codice C++, utilizzare la sintassi di eccezione C++.  
  
 Per ulteriori informazioni su SEH, vedere [gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md).  
  
## <a name="exception-specifications-and-noexcept"></a>Noexcept e specifiche di eccezione  
 Specifiche di eccezione sono stati introdotti in C++ consente di specificare le eccezioni che potrebbe generare una funzione. Tuttavia, le specifiche di eccezione si è rivelato problematiche in pratica e sono deprecate in C++ 11 bozza di standard. Si consiglia di non utilizzare le specifiche di eccezione, ad eccezione di `throw()`, che indica che l'eccezione non consente eccezioni di escape. Se è necessario utilizzare le specifiche di eccezione del tipo `throw(`*tipo*`)`, tenere presente che [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] si allontana dallo standard in determinati modi. Per ulteriori informazioni, vedere [specifiche di eccezione (generano)](../cpp/exception-specifications-throw-cpp.md). Il `noexcept` identificatore è stato introdotto in C++ 11 come l'alternativa migliore alla `throw()`.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: interfaccia tra codice eccezionale e Non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)   
 [Bentornati su C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria Standard C++](../standard-library/cpp-standard-library-reference.md)