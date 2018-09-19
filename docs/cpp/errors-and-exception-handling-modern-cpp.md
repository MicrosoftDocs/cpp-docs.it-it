---
title: Errori ed eccezioni (C++ moderno) | Microsoft Docs
ms.custom: ''
ms.date: 09/17/2018
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
ms.openlocfilehash: 86d041c5ba3770cdd39c03a8ea9b2346e6cefb90
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46100422"
---
# <a name="errors-and-exception-handling-modern-c"></a>Gestione di errori ed eccezioni (C++ moderno)

Nel linguaggio C++ moderno, nella maggior parte degli scenari, il modo migliore per segnalare e gestire gli errori logici ed errori di runtime consiste nell'utilizzare le eccezioni. Ciò è particolarmente vero quando lo stack potrebbe contenere diverse chiamate di funzione tra la funzione che rileva l'errore e la funzione con il contesto per sapere come gestirlo. Le eccezioni forniscono un modo convenzionale e ben definito per il codice che rileva gli errori per passare le informazioni nello stack di chiamate.

Gli errori dei programmi sono in genere suddivisi in due categorie: errori logici causati da errori di programmazione, ad esempio, un errore "indice fuori intervallo" e gli errori di runtime che esulano dal programmatore, ad esempio, un "servizio di rete non disponibile" errore. Nella programmazione c e in COM, segnalazione errori è gestita restituendo un valore che rappresenta un codice di errore o un codice di stato per una determinata funzione, o impostando una variabile globale che il chiamante può recuperare dopo ogni chiamata di funzione per visualizzare Se sono stati segnalati errori. Ad esempio, la programmazione COM utilizza il valore restituito HRESULT per comunicare gli errori al chiamante e l'API Win32 ha la funzione GetLastError per recuperare l'ultimo errore che è stato segnalato dallo stack di chiamate. In entrambi i casi, spetta al chiamante di riconoscere il codice e di rispondervi in modo appropriato. Se il chiamante non gestisce in modo esplicito il codice di errore, il programma potrebbe arrestarsi in modo anomalo senza avviso o continuare a eseguire con i dati errati e produrre risultati non corretti.

Le eccezioni sono preferibili nel linguaggio C++ moderno per i motivi seguenti:

- Un'eccezione forza il codice chiamante per riconoscere una condizione di errore e gestirla. Le eccezioni non gestite arrestare l'esecuzione del programma.

- Un'eccezione passa al punto nello stack di chiamate che possono gestire l'errore. Le funzioni intermedie possono consentire l'eccezione di propagazione. Essi non è necessario coordinarsi con altri livelli.

- Dopo che viene generata un'eccezione, il meccanismo di rimozione dello stack eccezione Elimina tutti gli oggetti nell'ambito in base alle regole ben definite.

- Un'eccezione consente una netta separazione tra il codice che rileva l'errore e il codice che gestisce l'errore.

Nell'esempio semplificato seguente mostra la sintassi necessaria per generare e rilevare eccezioni in C++.

```cpp

#include <stdexcept>
#include <limits>
#include <iostream>

using namespace std;

void MyFunc(int c)
{
    if (c > numeric_limits< char> ::max())
        throw invalid_argument("MyFunc argument too large.");
    //...
}

int main()
{
    try
    {
        MyFunc(256); //cause an exception to throw
    }

    catch (invalid_argument& e)
    {
        cerr << e.what() << endl;
        return -1;
    }
    //...
    return 0;
}

```

Le eccezioni in C++ sono simili a quelle in linguaggi quali c# e Java. Nel **provare** bloccare, se è un'eccezione *generata* sarà *intercettata* dal primo associati **catch** blocchi il cui tipo corrisponde a quello del eccezione. In altre parole, l'esecuzione passa dal **throw** istruzione per il **catch** istruzione. Se non viene trovato alcun blocco catch, `std::terminate` viene richiamato e il programma viene chiuso. In C++, qualsiasi tipo può essere generato; Tuttavia, è consigliabile che si genera un tipo che deriva direttamente o indirettamente da `std::exception`. Nell'esempio precedente, il tipo di eccezione [invalid_argument](../standard-library/invalid-argument-class.md), viene definito nella libreria standard nel [ \<stdexcept >](../standard-library/stdexcept.md) file di intestazione. C++ non fornisce e non richiede, una **infine** blocchi per assicurarsi che tutte le risorse vengano rilasciate se viene generata un'eccezione. L'acquisizione della risorsa è l'espressione idiomatica initialization (RAII), che utilizza i puntatori intelligenti, fornisce la funzionalità richiesta per la pulizia delle risorse. Per altre informazioni, vedere [procedura: progettare la sicurezza di eccezione del](../cpp/how-to-design-for-exception-safety.md). Per informazioni sul meccanismo di rimozione dello stack C++, vedere [eccezioni e rimozione dello Stack](../cpp/exceptions-and-stack-unwinding-in-cpp.md).

## <a name="basic-guidelines"></a>Linee guida di base

Gestione degli errori affidabile è impegnativa in qualsiasi linguaggio di programmazione. Sebbene le eccezioni forniscano numerose funzionalità che supportano efficace degli errori, non possono eseguire tutte le operazioni per l'utente. Per sfruttare i vantaggi del meccanismo di eccezione, tenere presenti le eccezioni durante la progettazione del codice.

- Utilizzare le asserzioni per verificare la presenza di errori che non dovrebbero mai verificarsi. Utilizzare le eccezioni per controllare gli errori che potrebbero verificarsi, ad esempio, gli errori di convalida dell'input per i parametri delle funzioni pubbliche. Per altre informazioni, vedere la sezione intitolata **confronto tra eccezioni e. Asserzioni**.

- Utilizzare le eccezioni quando il codice che gestisce l'errore potrebbe essere separato dal codice che rileva l'errore da uno o più chiamate alle funzioni. Valutare se usare invece i codici di errore nei cicli critiche per le prestazioni quando il codice che gestisce l'errore è strettamente collegato al codice che lo rileva.

- Per ogni funzione che potrebbe generare o propagare un'eccezione, specificare una delle tre garanzie di eccezione: la garanzia forte, la garanzia di base o la garanzia nothrow (noexcept). Per altre informazioni, vedere [procedura: progettare la sicurezza di eccezione del](../cpp/how-to-design-for-exception-safety.md).

- Generare eccezioni per valore e intercettarle per riferimento. Non rilevare ciò che è possibile gestire.

- Non usare le specifiche di eccezione, deprecate in c++11. Per altre informazioni, vedere la sezione intitolata **specifiche di eccezione e noexcept**.

- Usare tipi di eccezione della libreria standard quando si applicano. Derivazione di tipi di eccezione personalizzata dal [classe exception](../standard-library/exception-class.md) gerarchia.

- Non consentire le eccezioni eseguire l'escape dei distruttori o funzioni di deallocazione di memoria.

## <a name="exceptions-and-performance"></a>Eccezioni e prestazioni

Il meccanismo delle eccezioni ha un costo se viene generata alcuna eccezione minimo sulle prestazioni. Se viene generata un'eccezione, il costo dell'attraversamento e della rimozione è approssimativamente paragonabile al costo di una chiamata di funzione. Strutture di dati aggiuntive sono necessarie per tenere traccia dello stack di chiamate dopo una **provare** blocco viene immesso, e istruzioni aggiuntive sono necessarie per rimuovere lo stack se viene generata un'eccezione. Tuttavia, nella maggior parte degli scenari, il costo delle prestazioni e footprint di memoria non è significativo. L'effetto negativo delle eccezioni sulle prestazioni è probabile che sia significativo solo nei sistemi con memoria molto limitata o nelle prestazioni critiche cicli in cui è probabile che si verificano regolarmente un errore e il codice per gestirlo è strettamente collegato al codice che lo segnala. In ogni caso, è possibile conoscere il costo effettivo delle eccezioni senza la profilatura e misurazione. Anche nei rari casi quando il costo è significativo, è possibile valutarlo rispetto alla maggiore precisione, alla manutenibilità più semplice e altri vantaggi forniti da un criterio di eccezione progettati correttamente.

## <a name="exceptions-vs-assertions"></a>Eccezioni e asserzioni

Le eccezioni e le asserzioni sono due distinti meccanismi per il rilevamento di errori di run-time in un programma. Utilizzare le asserzioni per verificare le condizioni durante lo sviluppo che non dovrebbe mai essere true se tutto il codice sia corretto. È inutile nel gestire tale errore utilizzando un'eccezione perché l'errore indica che qualcosa nel codice deve essere corretto e non rappresenta una condizione che il programma deve recuperare in fase di esecuzione. Un'asserzione arresta l'esecuzione in corrispondenza dell'istruzione in modo che sia possibile esaminare lo stato del programma nel debugger; un'eccezione continua l'esecuzione dal primo gestore catch appropriato. Utilizzare le eccezioni per controllare le condizioni di errore che potrebbero verificarsi in fase di esecuzione, anche se il codice sia corretto, ad esempio, "file non trovato" o "memoria insufficiente". È possibile recuperare da queste condizioni, anche se il ripristino solo genera un messaggio in un log e il programma verrà terminato. Verificare sempre gli argomenti alle funzioni pubbliche utilizzando le eccezioni. Anche se la funzione è privo di errori, potrebbe non essere controllo completo sugli argomenti che un utente può passare a esso.

## <a name="c-exceptions-versus-windows-seh-exceptions"></a>Eccezioni C++ ed eccezioni SEH Windows

Programmi C e C++ possono utilizzare il meccanismo (SEH) nel sistema operativo Windows di gestione strutturata delle eccezioni. I concetti in SEH sono simili a quelli nelle eccezioni in C++, ad eccezione del fatto che SEH utilizza il **try**, **except**, e **finally** costruisce anziché **provare** e **catch**. In Visual C++, le eccezioni C++ vengono implementate per SEH. Tuttavia, quando si scrive codice C++, usare la sintassi di eccezione C++.

Per altre informazioni sulla gestione delle eccezioni Strutturata, vedere [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md).

## <a name="exception-specifications-and-noexcept"></a>Le specifiche di eccezione e noexcept

Le specifiche di eccezione sono introdotte in C++ che consente di specificare le eccezioni che potrebbe generare una funzione. Tuttavia, le specifiche di eccezione sono risultate problematiche nella pratica e sono deprecate nello standard c++11 bozza. È consigliabile non utilizzare le specifiche di eccezione, ad eccezione di `throw()`, che indica che la funzione non consente eccezioni eseguire l'escape. Se è necessario usare le specifiche di eccezione del tipo `throw(` *tipo*`)`, tenere presente che Visual C++ si allontana dallo standard in determinati modi. Per altre informazioni, vedere [specifiche di eccezioni (generazione)](../cpp/exception-specifications-throw-cpp.md). Il `noexcept` identificatore è stato introdotto in c++11 come l'alternativa consigliata a `throw()`.

## <a name="see-also"></a>Vedere anche

[Procedura: Interfaccia tra codice eccezionale e non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)<br/>
[Bentornati a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)<br/>
[Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)