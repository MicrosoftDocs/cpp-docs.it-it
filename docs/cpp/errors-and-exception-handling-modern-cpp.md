---
title: Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: a6c111d0-24f9-4bbb-997d-3db4569761b7
ms.openlocfilehash: 6995867813bfb65848f179cb56b358de68fa63f2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227530"
---
# <a name="modern-c-best-practices-for-exceptions-and-error-handling"></a>Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori

Nel linguaggio C++ moderno, nella maggior parte degli scenari, il modo migliore per segnalare e gestire sia gli errori logici che gli errori di runtime consiste nell'usare le eccezioni. Ciò vale soprattutto quando lo stack potrebbe contenere diverse chiamate di funzione tra la funzione che rileva l'errore e la funzione con il contesto per conoscerne la modalità di gestione. Le eccezioni forniscono un metodo formale e ben definito per il codice che rileva gli errori per passare le informazioni allo stack di chiamate.

Gli errori di programma sono in genere divisi in due categorie: errori logici causati da errori di programmazione, ad esempio un errore di "indice non compreso nell'intervallo" ed errori di runtime che esulano dal controllo del programmatore, ad esempio un errore di "servizio di rete non disponibile". Nella programmazione di tipo C e in COM, la segnalazione degli errori viene gestita restituendo un valore che rappresenta un codice di errore o un codice di stato per una funzione specifica oppure impostando una variabile globale che il chiamante può facoltativamente recuperare dopo ogni chiamata di funzione per verificare se sono stati segnalati errori. La programmazione COM, ad esempio, utilizza il valore restituito HRESULT per comunicare gli errori al chiamante e l'API Win32 dispone della funzione GetLastError per recuperare l'ultimo errore segnalato dallo stack di chiamate. In entrambi i casi, spetta al chiamante riconoscere il codice e rispondere in modo appropriato. Se il chiamante non gestisce in modo esplicito il codice di errore, il programma potrebbe arrestarsi in modo anomalo senza preavviso oppure continuare a eseguire con dati non validi e produrre risultati non corretti.

Le eccezioni sono preferibili nel linguaggio C++ moderno per i motivi seguenti:

- Un'eccezione impone la chiamata al codice per riconoscere una condizione di errore e gestirla. Le eccezioni non gestite interrompono l'esecuzione del programma.

- Un'eccezione passa al punto nello stack di chiamate che può gestire l'errore. Le funzioni intermedie possono consentire la propagazione dell'eccezione. Non devono coordinarsi con altri livelli.

- Il meccanismo di rimozione dello stack delle eccezioni Elimina tutti gli oggetti nell'ambito secondo le regole ben definite dopo che è stata generata un'eccezione.

- Un'eccezione consente una netta separazione tra il codice che rileva l'errore e il codice che gestisce l'errore.

Nell'esempio semplificato riportato di seguito viene illustrata la sintassi necessaria per generare e intercettare le eccezioni in C++.

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

Le eccezioni in C++ sono simili a quelle di linguaggi come C# e Java. Nel **`try`** blocco, se viene *generata* un'eccezione, verrà *rilevata* dal primo blocco associato il **`catch`** cui tipo corrisponde a quello dell'eccezione. In altre parole, l'esecuzione passa dall' **`throw`** istruzione all' **`catch`** istruzione. Se non viene trovato alcun blocco catch utilizzabile, `std::terminate` viene richiamato e il programma viene chiuso. In C++, è possibile che venga generato qualsiasi tipo; Tuttavia, si consiglia di generare un tipo che deriva direttamente o indirettamente da `std::exception` . Nell'esempio precedente, il tipo di eccezione, [invalid_argument](../standard-library/invalid-argument-class.md), viene definito nella libreria standard nel file di [\<stdexcept>](../standard-library/stdexcept.md) intestazione. C++ non fornisce e non richiede un blocco **finally** per assicurarsi che tutte le risorse vengano rilasciate se viene generata un'eccezione. Il linguaggio di inizializzazione della risorsa (RAII), che utilizza i puntatori intelligenti, fornisce la funzionalità necessaria per la pulizia delle risorse. Per altre informazioni, vedere [How to: Design for Exception Safety](how-to-design-for-exception-safety.md). Per informazioni sul meccanismo di rimozione dello stack C++, vedere [eccezioni e rimozione dello stack](exceptions-and-stack-unwinding-in-cpp.md).

## <a name="basic-guidelines"></a>Linee guida di base

Una gestione affidabile degli errori è impegnativa in qualsiasi linguaggio di programmazione. Sebbene le eccezioni forniscano diverse funzionalità che supportano una gestione efficace degli errori, non possono eseguire tutte le operazioni per l'utente. Per sfruttare i vantaggi del meccanismo di eccezione, tenere presenti le eccezioni durante la progettazione del codice.

- Utilizzare le asserzioni per verificare la presenza di errori che non devono mai verificarsi. Utilizzare le eccezioni per verificare la presenza di errori che potrebbero verificarsi, ad esempio, errori di convalida dell'input sui parametri delle funzioni pubbliche. Per ulteriori informazioni, vedere la sezione eccezioni e **asserzioni**.

- Usare le eccezioni quando il codice che gestisce l'errore potrebbe essere separato dal codice che rileva l'errore da una o più chiamate di funzione. Valutare se usare i codici di errore in cicli critici per le prestazioni quando il codice che gestisce l'errore è strettamente collegato al codice che lo rileva.

- Per ogni funzione che potrebbe generare o propagare un'eccezione, fornire una delle tre garanzie di eccezione: la garanzia sicura, la garanzia di base o la garanzia nothrow (noexcept). Per altre informazioni, vedere [How to: Design for Exception Safety](how-to-design-for-exception-safety.md).

- Genera eccezioni per valore, le intercetta per riferimento. Non rilevare ciò che non è possibile gestire.

- Non usare le specifiche di eccezione, deprecate in C++ 11. Per ulteriori informazioni, vedere la sezione specifica delle **eccezioni e noexcept**.

- Usare i tipi di eccezione della libreria standard quando si applicano. Derivare i tipi di eccezione personalizzati dalla gerarchia della [classe Exception](../standard-library/exception-class.md) .

- Non consentire eccezioni per l'escape da distruttori o funzioni di deallocazione della memoria.

## <a name="exceptions-and-performance"></a>Eccezioni e prestazioni

Se non viene generata alcuna eccezione, il meccanismo di eccezione presenta un costo minimo per le prestazioni. Se viene generata un'eccezione, il costo dell'attraversamento e della rimozione dello stack è approssimativamente paragonabile al costo di una chiamata di funzione. Sono necessarie strutture di dati aggiuntive per tenere traccia dello stack di chiamate dopo l'immissione di un **`try`** blocco e sono necessarie altre istruzioni per rimuovere lo stack se viene generata un'eccezione. Tuttavia, nella maggior parte degli scenari, il costo delle prestazioni e del footprint di memoria non è significativo. L'effetto negativo delle eccezioni sulle prestazioni può essere significativo solo in sistemi molto vincolati alla memoria o in cicli critici per le prestazioni, in cui è probabile che si verifichi un errore regolarmente e che il codice per gestirlo sia strettamente associato al codice che lo segnala. In ogni caso, è impossibile capire il costo effettivo delle eccezioni senza profilatura e misurazione. Anche in questi rari casi, quando il costo è significativo, è possibile ponderarlo rispetto alla maggiore correttezza, alla facilità di gestione e ad altri vantaggi offerti da un criterio di eccezione ben progettato.

## <a name="exceptions-vs-assertions"></a>Confronto tra eccezioni e asserzioni

Le eccezioni e le asserzioni sono due meccanismi distinti per il rilevamento degli errori di run-time in un programma. Usare le asserzioni per verificare le condizioni durante lo sviluppo che non devono mai essere true se tutto il codice è corretto. Non esiste alcun punto per gestire tale errore usando un'eccezione perché l'errore indica che è necessario correggere un elemento nel codice e non rappresenta una condizione che il programma deve ripristinare in fase di esecuzione. Un'asserzione arresta l'esecuzione in corrispondenza dell'istruzione in modo che sia possibile controllare lo stato del programma nel debugger. un'eccezione continua l'esecuzione dal primo gestore catch appropriato. Utilizzare le eccezioni per controllare le condizioni di errore che possono verificarsi in fase di esecuzione anche se il codice è corretto, ad esempio, "file non trovato" o "memoria insufficiente". È possibile che si desideri eseguire il ripristino in base a queste condizioni, anche se il ripristino restituisce solo un messaggio a un log e termina il programma. Controllare sempre gli argomenti per le funzioni pubbliche usando le eccezioni. Anche se la funzione è priva di errori, è possibile che non si disponga del controllo completo sugli argomenti che possono essere passati da un utente.

## <a name="c-exceptions-versus-windows-seh-exceptions"></a>Eccezioni C++ rispetto alle eccezioni SEH di Windows

I programmi C e C++ possono usare il meccanismo di gestione delle eccezioni strutturate (SEH) nel sistema operativo Windows. I concetti in SEH sono simili a quelli delle eccezioni C++, ad eccezione del fatto **__try**che SEH usa i **`__except`** costrutti __try, e **`__finally`** invece di **`try`** e **`catch`** . Nel compilatore Microsoft C++ (MSVC), le eccezioni C++ sono implementate per SEH. Tuttavia, quando si scrive codice C++, usare la sintassi delle eccezioni C++.

Per ulteriori informazioni su SEH, vedere [gestione delle eccezioni strutturata (C/C++)](structured-exception-handling-c-cpp.md).

## <a name="exception-specifications-and-noexcept"></a>Specifiche di eccezione e noexcept

Le specifiche di eccezione sono state introdotte in C++ come metodo per specificare le eccezioni che una funzione può generare. Tuttavia, le specifiche di eccezione si sono rivelate problematiche in pratica e sono deprecate nello standard Draft di C++ 11. Si consiglia di non utilizzare le specifiche di eccezione, ad eccezione di `throw()` , che indica che la funzione non consente l'escape di eccezioni. Se è necessario utilizzare le specifiche di eccezione del `throw(` *tipo*di tipo `)` , tenere presente che MSVC si ripartisce dallo standard in determinati modi. Per ulteriori informazioni, vedere [specifiche di eccezione (throw)](exception-specifications-throw-cpp.md). L' **`noexcept`** identificatore è stato introdotto in c++ 11 come alternativa preferita a `throw()` .

## <a name="see-also"></a>Vedere anche

[Procedura: interfaccia tra codice eccezionale e non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)<br/>
[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
