---
title: Errori ed eccezioni (C++ moderno) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a6c111d0-24f9-4bbb-997d-3db4569761b7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 94a9e75770e822c89ea65a745a2fca491f175d95
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34569862"
---
# <a name="errors-and-exception-handling-modern-c"></a>Gestione di errori ed eccezioni (C++ moderno)
Nel linguaggio C++ moderno, nella maggior parte degli scenari, la modalità preferita per i report e la gestione di errori logici e errori di runtime è utilizzare eccezioni. Ciò vale soprattutto quando lo stack potrebbe contenere più chiamate di funzione tra la funzione che rileva l'errore e la funzione che ha il contesto in grado di gestirlo. Eccezioni forniscono un modo formale, ben definito per il codice che rileva gli errori per passare le informazioni sullo stack.  
  
 Gli errori del programma sono divisi in due categorie: errori di logica che sono causati da programmazione errori, ad esempio, un errore "indice non compreso nell'intervallo" e gli errori di runtime che sono sotto il controllo del programmatore, ad esempio, un "servizio di rete non disponibile" errore. Nella programmazione C e in COM, segnalazione errori viene gestita tramite la restituzione di un valore che rappresenta un codice di errore o un codice di stato per una determinata funzione o impostando una variabile globale che il chiamante può recuperare facoltativamente dopo ogni chiamata di funzione per visualizzare Se sono stati segnalati errori. Ad esempio, la programmazione COM viene utilizzato il valore restituito HRESULT per comunicare gli errori al chiamante e l'API Win32 svolge la funzione GetLastError per recuperare l'ultimo errore segnalato dallo stack di chiamate. In entrambi i casi, è il chiamante deve riconoscere il codice e rispondere in modo appropriato. Se il chiamante non gestisce in modo esplicito il codice di errore, il programma potrebbe arrestarsi in modo anomalo senza alcun avviso o continuare a eseguire con i dati non validi e produrre risultati non corretti.  
  
 Le eccezioni sono da preferire nel linguaggio C++ moderno per i motivi seguenti:  
  
-   Un'eccezione forza il codice chiamante per riconoscere una condizione di errore e di gestirlo. Le eccezioni non gestite arrestano l'esecuzione del programma.  
  
-   Un'eccezione passa al punto nello stack di chiamate in grado di gestire l'errore. Funzioni Intermediate possono consentire l'eccezione di propagazione. Non hanno coordinarsi con gli altri livelli.  
  
-   Il meccanismo di rimozione dello stack delle eccezioni Elimina tutti gli oggetti nell'ambito in base alle regole ben definite dopo che viene generata un'eccezione.  
  
-   Un'eccezione consente una netta separazione tra il codice che rileva l'errore e il codice che gestisce l'errore.  
  
 Nell'esempio seguente viene semplificato Mostra la sintassi necessaria per generare e intercettare eccezioni in C++.  
  
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
      if(c > numeric_limits<char>::max())  
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
  
 Eccezioni in C++ sono simili a quelle in linguaggi come c# e Java. Nel `try` blocco, se un'eccezione *generata* sarà *rilevata* dal primo associata `catch` blocco il cui tipo corrisponde a quello dell'eccezione. In altre parole, l'esecuzione passa dal `throw` istruzione per il `catch` istruzione. Se non viene trovato alcun blocco catch utilizzabile, `std::terminate` viene richiamato e il programma viene chiuso. In C++, qualsiasi tipo può essere generato; Tuttavia, è consigliabile che si genera un tipo che deriva direttamente o indirettamente da `std::exception`. Nell'esempio precedente, il tipo di eccezione [invalid_argument](../standard-library/invalid-argument-class.md), viene definito nella libreria standard nel [ \<stdexcept >](../standard-library/stdexcept.md) file di intestazione. C++ non fornisce e non richiede un `finally` blocco per assicurarsi che tutte le risorse vengono rilasciate se viene generata un'eccezione. L'acquisizione della risorsa è linguaggio di inizializzazione (RAII), che utilizza i puntatori intelligenti, offre le funzionalità necessarie per la pulizia delle risorse. Per ulteriori informazioni, vedere [come: progettazione di sicurezza dell'eccezione](../cpp/how-to-design-for-exception-safety.md). Per informazioni sul meccanismo di rimozione dello stack C++, vedere [eccezioni e rimozione dello Stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md).  
  
## <a name="basic-guidelines"></a>Linee guida di base  
 Gestione degli errori affidabile è complesso in qualsiasi linguaggio di programmazione. Anche se le eccezioni forniscono numerose funzionalità che supportano la gestione degli errori valida, essi non è possibile non tutto il lavoro. Per comprendere i vantaggi del meccanismo di eccezione, tenere presenti le eccezioni in fase di progettazione del codice.  
  
-   Utilizzare le asserzioni per verificare la presenza di errori che non dovrebbero mai verificarsi. Utilizzare le eccezioni per controllare gli errori che potrebbero verificarsi, ad esempio, errori di convalida dell'input per i parametri di funzioni pubbliche. Per ulteriori informazioni, vedere la sezione intitolata **vs eccezioni. Asserzioni**.  
  
-   Utilizzare le eccezioni quando il codice che gestisce l'errore potrebbe essere separato dal codice che rileva l'errore da uno o più chiamate di funzione corrispondente. Considerare la possibilità di utilizzare i codici di errore nei cicli critiche per le prestazioni quando il codice che gestisce l'errore è strettamente associata al codice che rileva. 
  
-   Per ogni funzione che potrebbe generare un'eccezione di propagarsi, fornire uno di tre garanzie di eccezioni: garanzia solida, la garanzia di base o la garanzia nothrow (noexcept). Per ulteriori informazioni, vedere [come: progettazione di sicurezza dell'eccezione](../cpp/how-to-design-for-exception-safety.md).  
  
-   Generate eccezioni per valore e intercettarle per riferimento. Non è possibile intercettare non è possibile gestire. 
  
-   Non usare specifiche di eccezione, sono deprecate in C++ 11. Per ulteriori informazioni, vedere la sezione intitolata **specifiche di eccezione e noexcept**.  
  
-   Utilizzare i tipi di eccezione della libreria standard quando si applicano. Derivare da tipi di eccezione personalizzata di [classe exception](../standard-library/exception-class.md) gerarchia.  
  
-   Non consentire eccezioni evitare i distruttori o funzioni di deallocazione di memoria.  
  
## <a name="exceptions-and-performance"></a>Eccezioni e prestazioni  
 Il meccanismo delle eccezioni è ridotto al minimo sulle prestazioni se viene generata alcuna eccezione. Se viene generata un'eccezione, il costo dell'attraversamento dello stack e la rimozione è approssimativamente paragonabile al costo di una chiamata di funzione. Strutture di dati aggiuntive sono necessarie per tenere traccia dello stack di chiamate dopo un `try` blocco viene immesso, e istruzioni aggiuntive sono necessarie per la rimozione dello stack se viene generata un'eccezione. Tuttavia, nella maggior parte degli scenari, il costo delle prestazioni e footprint di memoria non è significativo. Effetti negativi di eccezioni sulle prestazioni sono probabile che sia significativo solo nei sistemi molto memoria vincolata, o in prestazioni critiche cicli in cui è probabile che si verificano regolarmente un errore e il codice da gestire è strettamente al codice che segnala. In ogni caso, è possibile conoscere il costo effettivo delle eccezioni senza analisi e la misurazione. Anche nei rari casi quando il costo è significativo, si può pesare contro la correttezza maggiore, più facile manutenibilità e altri vantaggi forniti da un criterio di eccezione ben progettata.  
  
## <a name="exceptions-vs-assertions"></a>Eccezioni e asserzioni  
 Eccezioni e le asserzioni sono due distinti meccanismi per il rilevamento di errori di run-time in un programma. Utilizzare le asserzioni per verificare le condizioni durante lo sviluppo che non deve mai essere true se tutto il codice sia corretto. Nessun punto di gestione di tale errore utilizzando un'eccezione poiché l'errore indica che un elemento nel codice deve essere risolto e non rappresenta una condizione che il programma deve recuperare in fase di esecuzione. Un'istruzione assert interrompe l'esecuzione in corrispondenza dell'istruzione in modo da poter controllare lo stato del programma nel debugger. un'eccezione continua l'esecuzione dal primo gestore catch appropriata. Utilizzare le eccezioni per controllare le condizioni di errore che potrebbero verificarsi in fase di esecuzione anche se il codice sia corretto, ad esempio, "file non trovato" o "memoria esaurita." È possibile per il ripristino da queste condizioni, anche se il ripristino solo genera un messaggio in un log e il programma verrà terminato. Verificare sempre gli argomenti alle funzioni pubbliche dall'utilizzo delle eccezioni. Anche se la funzione è privo di errori, potrebbe non essere il controllo completo su argomenti che un utente può passare ad esso.  
  
## <a name="c-exceptions-versus-windows-seh-exceptions"></a>Eccezioni C++ e le eccezioni SEH Windows  
 I programmi C e C++ è possono utilizzare il meccanismo (SEH) nel sistema operativo Windows strutturata delle eccezioni. I concetti di gestione delle eccezioni Strutturata simili a quelle delle eccezioni C++, ad eccezione del fatto che utilizza SEH il `__try`, `__except`, e `__finally` costruisce anziché `try` e `catch`. In Visual C++, le eccezioni C++ vengono implementate per la gestione delle eccezioni Strutturata. Tuttavia, quando si scrive codice C++, utilizzare la sintassi di eccezione C++.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni Strutturata, vedere [strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md).  
  
## <a name="exception-specifications-and-noexcept"></a>Specifiche di eccezione e noexcept  
 Le specifiche di eccezione sono stati introdotti in C++ come un modo per specificare le eccezioni che potrebbe generare una funzione. Tuttavia, le specifiche di eccezione dimostrato problematiche in pratica, sono deprecate e nello standard C++ 11 bozza. È consigliabile non utilizzare le specifiche di eccezione, ad eccezione di `throw()`, che indica che la funzione non consente eccezioni di escape. Se è necessario utilizzare le specifiche di eccezione del tipo `throw(` *tipo*`)`, tenere presente che Visual C++ si allontana dallo standard in determinati modi. Per ulteriori informazioni, vedere [specifiche di eccezioni (generazione)](../cpp/exception-specifications-throw-cpp.md). Il `noexcept` identificatore è stato introdotto in C++ 11 come alternativa migliore alla `throw()`.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: interfaccia tra codice eccezionale e Non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)   
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
