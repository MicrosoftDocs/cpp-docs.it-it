---
title: Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori
description: Il linguaggio C++ moderno supporta stili di programmazione eccezionali rispetto ai codici di errore.
ms.date: 08/24/2020
ms.topic: conceptual
ms.assetid: a6c111d0-24f9-4bbb-997d-3db4569761b7
ms.openlocfilehash: b402c93ea5af3cc7dab418b6dea58446ae300c67
ms.sourcegitcommit: efc8c32205c9d610f40597556273a64306dec15d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/26/2020
ms.locfileid: "88898366"
---
# <a name="modern-c-best-practices-for-exceptions-and-error-handling"></a>Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori

Nel linguaggio C++ moderno, nella maggior parte degli scenari, il modo migliore per segnalare e gestire sia gli errori logici che gli errori di runtime consiste nell'usare le eccezioni. Ciò vale soprattutto quando lo stack potrebbe contenere diverse chiamate di funzione tra la funzione che rileva l'errore e la funzione con il contesto per gestire l'errore. Le eccezioni forniscono un metodo formale e ben definito per il codice che rileva gli errori per passare le informazioni allo stack di chiamate.

## <a name="use-exceptions-for-exceptional-code"></a>Usare eccezioni per codice eccezionale

Gli errori di programma sono spesso divisi in due categorie: errori logici causati da errori di programmazione, ad esempio un errore di "indice non compreso nell'intervallo". E, errori di runtime che esulano dal controllo del programmatore, ad esempio un errore di "servizio di rete non disponibile". Nella programmazione di tipo C e in COM, la segnalazione degli errori viene gestita restituendo un valore che rappresenta un codice di errore o un codice di stato per una funzione specifica oppure impostando una variabile globale che il chiamante può facoltativamente recuperare dopo ogni chiamata di funzione per verificare se sono stati segnalati errori. La programmazione COM, ad esempio, utilizza il valore restituito HRESULT per comunicare gli errori al chiamante. L'API Win32 dispone quindi della `GetLastError` funzione per recuperare l'ultimo errore segnalato dallo stack di chiamate. In entrambi i casi, spetta al chiamante riconoscere il codice e rispondere in modo appropriato. Se il chiamante non gestisce in modo esplicito il codice di errore, il programma potrebbe arrestarsi in modo anomalo senza preavviso. In alternativa, potrebbe continuare a eseguire usando dati non validi e produrre risultati non corretti.

Le eccezioni sono preferibili nel linguaggio C++ moderno per i motivi seguenti:

- Un'eccezione impone la chiamata al codice per riconoscere una condizione di errore e gestirla. Le eccezioni non gestite interrompono l'esecuzione del programma.

- Un'eccezione passa al punto nello stack di chiamate che può gestire l'errore. Le funzioni intermedie possono consentire la propagazione dell'eccezione. Non devono coordinarsi con altri livelli.

- Il meccanismo di rimozione dello stack delle eccezioni Elimina tutti gli oggetti nell'ambito dopo che è stata generata un'eccezione, in base alle regole ben definite.

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

Le eccezioni in C++ sono simili a quelle in linguaggi come C# e Java. Nel **`try`** blocco, se viene *generata* un'eccezione, verrà *rilevata* dal primo blocco associato il **`catch`** cui tipo corrisponde a quello dell'eccezione. In altre parole, l'esecuzione passa dall' **`throw`** istruzione all' **`catch`** istruzione. Se non viene trovato alcun blocco catch utilizzabile, `std::terminate` viene richiamato e il programma viene chiuso. In C++, è possibile che venga generato qualsiasi tipo; Tuttavia, si consiglia di generare un tipo che deriva direttamente o indirettamente da `std::exception` . Nell'esempio precedente, il tipo di eccezione, [`invalid_argument`](../standard-library/invalid-argument-class.md) , è definito nella libreria standard nel file di [`<stdexcept>`](../standard-library/stdexcept.md) intestazione. C++ non fornisce o richiede un **`finally`** blocco per assicurarsi che tutte le risorse vengano rilasciate se viene generata un'eccezione. Il linguaggio di inizializzazione della risorsa (RAII), che utilizza i puntatori intelligenti, fornisce la funzionalità necessaria per la pulizia delle risorse. Per altre informazioni, vedere [How to: Design for Exception Safety](how-to-design-for-exception-safety.md). Per informazioni sul meccanismo di rimozione dello stack C++, vedere [eccezioni e rimozione dello stack](exceptions-and-stack-unwinding-in-cpp.md).

## <a name="basic-guidelines"></a>Linee guida di base

Una gestione affidabile degli errori è impegnativa in qualsiasi linguaggio di programmazione. Sebbene le eccezioni forniscano diverse funzionalità che supportano una gestione efficace degli errori, non possono eseguire tutte le operazioni per l'utente. Per sfruttare i vantaggi del meccanismo di eccezione, tenere presenti le eccezioni durante la progettazione del codice.

- Utilizzare le asserzioni per verificare la presenza di errori che non devono mai verificarsi. Utilizzare le eccezioni per verificare la presenza di errori che potrebbero verificarsi, ad esempio, errori di convalida dell'input sui parametri delle funzioni pubbliche. Per ulteriori informazioni, vedere la sezione [eccezioni e asserzioni](#exceptions_versus_assertions) .

- Usare le eccezioni quando il codice che gestisce l'errore è separato dal codice che rileva l'errore da una o più chiamate di funzione. Valutare se usare invece i codici di errore nei cicli critici per le prestazioni, quando il codice che gestisce l'errore è strettamente associato al codice che lo rileva.

- Per ogni funzione che potrebbe generare o propagare un'eccezione, fornire una delle tre garanzie di eccezione: la garanzia sicura, la garanzia di base o la garanzia nothrow (noexcept). Per altre informazioni, vedere [How to: Design for Exception Safety](how-to-design-for-exception-safety.md).

- Genera eccezioni per valore, le intercetta per riferimento. Non rilevare ciò che non è possibile gestire.

- Non usare le specifiche di eccezione, deprecate in C++ 11. Per ulteriori informazioni, vedere le [specifiche di eccezione `noexcept` e](#exception_specifications_and_noexcept) la sezione.

- Usare i tipi di eccezione della libreria standard quando si applicano. Derivare i tipi di eccezione personalizzati dalla gerarchia di [ `exception` classi](../standard-library/exception-class.md) .

- Non consentire eccezioni per l'escape da distruttori o funzioni di deallocazione della memoria.

## <a name="exceptions-and-performance"></a>Eccezioni e prestazioni

Se non viene generata alcuna eccezione, il meccanismo di eccezione comporta un costo minimo delle prestazioni. Se viene generata un'eccezione, il costo dell'attraversamento e della rimozione dello stack è approssimativamente paragonabile al costo di una chiamata di funzione. Sono necessarie strutture di dati aggiuntive per tenere traccia dello stack di chiamate dopo l'immissione di un **`try`** blocco e sono necessarie altre istruzioni per rimuovere lo stack se viene generata un'eccezione. Tuttavia, nella maggior parte degli scenari, il costo delle prestazioni e del footprint di memoria non è significativo. L'effetto negativo delle eccezioni sulle prestazioni è probabilmente significativo solo per i sistemi con vincoli di memoria. In alternativa, nei cicli critici per le prestazioni, in cui è probabile che si verifichi un errore regolarmente ed esiste un accoppiamento stretto tra il codice per gestirlo e il codice che lo segnala. In ogni caso, è impossibile capire il costo effettivo delle eccezioni senza profilatura e misurazione. Anche in questi rari casi, quando il costo è significativo, è possibile ponderarlo rispetto alla maggiore correttezza, alla facilità di gestione e ad altri vantaggi offerti da un criterio di eccezione ben progettato.

## <a name="exceptions-versus-assertions"></a><a name="exceptions_versus_assertions"></a> Eccezioni e asserzioni

Le eccezioni e le asserzioni sono due meccanismi distinti per il rilevamento degli errori di run-time in un programma. Usare le `assert` istruzioni per verificare le condizioni durante lo sviluppo che non devono mai essere true se tutto il codice è corretto. Non è possibile gestire tale errore usando un'eccezione, perché l'errore indica che è necessario correggere un elemento nel codice. Non rappresenta una condizione da cui il programma deve eseguire il ripristino in fase di esecuzione. Un `assert` Arresta l'esecuzione in corrispondenza dell'istruzione in modo che sia possibile controllare lo stato del programma nel debugger. Un'eccezione continua l'esecuzione dal primo gestore catch appropriato. Utilizzare le eccezioni per controllare le condizioni di errore che possono verificarsi in fase di esecuzione anche se il codice è corretto, ad esempio, "file non trovato" o "memoria insufficiente". Le eccezioni possono gestire queste condizioni, anche se il ripristino restituisce semplicemente un messaggio a un log e termina il programma. Controllare sempre gli argomenti per le funzioni pubbliche usando le eccezioni. Anche se la funzione è priva di errori, è possibile che non si disponga del controllo completo sugli argomenti che possono essere passati da un utente.

## <a name="c-exceptions-versus-windows-seh-exceptions"></a>Eccezioni C++ rispetto alle eccezioni SEH di Windows

I programmi C e C++ possono usare il meccanismo di gestione delle eccezioni strutturate (SEH) nel sistema operativo Windows. I concetti in SEH sono simili a quelli delle eccezioni C++, ad eccezione del fatto che SEH usa i **`__try`** **`__except`** **`__finally`** costrutti, e invece di **`try`** e **`catch`** . Nel compilatore Microsoft C++ (MSVC), le eccezioni C++ sono implementate per SEH. Tuttavia, quando si scrive codice C++, usare la sintassi delle eccezioni C++.

Per ulteriori informazioni su SEH, vedere [gestione delle eccezioni strutturata (C/C++)](structured-exception-handling-c-cpp.md).

## <a name="exception-specifications-and-noexcept"></a><a name="exception_specifications_and_noexcept"></a> Specifiche di eccezione e `noexcept`

Le specifiche di eccezione sono state introdotte in C++ come metodo per specificare le eccezioni che una funzione può generare. Tuttavia, le specifiche di eccezione si sono rivelate problematiche in pratica e sono deprecate nello standard Draft di C++ 11. Si consiglia di non utilizzare **`throw`** le specifiche di eccezione, ad eccezione di `throw()` , che indica che la funzione non consente l'escape di eccezioni. Se è necessario utilizzare le specifiche di eccezione del modulo deprecato `throw( type-name )` , il supporto per MSVC è limitato. Per ulteriori informazioni, vedere [specifiche di eccezione (throw)](exception-specifications-throw-cpp.md). L' **`noexcept`** identificatore è stato introdotto in c++ 11 come alternativa preferita a `throw()` .

## <a name="see-also"></a>Vedere anche

[Procedura: interfaccia tra codice eccezionale e non eccezionale](../cpp/how-to-interface-between-exceptional-and-non-exceptional-code.md)<br/>
[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
