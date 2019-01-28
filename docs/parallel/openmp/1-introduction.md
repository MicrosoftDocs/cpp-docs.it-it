---
title: 1. Introduzione
ms.date: 01/16/2019
ms.assetid: c42e72bc-0e31-4b1c-b670-cd82673c0c5a
ms.openlocfilehash: 8c735408bdf9f9a13693bd0ad25df185bb1db42a
ms.sourcegitcommit: 382e247c0f1b4cb7c2dab837b8b6fdff24bff47a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/28/2019
ms.locfileid: "55087275"
---
# <a name="1-introduction"></a>1. Introduzione

Questo documento specifica una raccolta di direttive del compilatore, le funzioni della libreria e le variabili di ambiente che è possibile usare per specificare il parallelismo di memoria condivisa nei programmi C e C++. Le funzionalità descritte in questo documento sono note come le *OpenMP C/C++ dell'interfaccia API (Application Program)*. L'obiettivo di questa specifica è fornire un modello di programmazione parallela che consente a un programma per garantire la portabilità tra le architetture di memoria condivisa di fornitori diversi. I compilatori da molti fornitori supportano l'API di OpenMP C/C++. Ulteriori informazioni su OpenMP, tra cui il *OpenMP Fortran Application Program Interface*, sono disponibili nel sito web seguente:

[https://www.openmp.org](https://www.openmp.org)

Le direttive, le funzioni della libreria e variabili di ambiente definite in questo documento consentono di creare e gestire i programmi paralleli, consentendo la portabilità. Le direttive di estendono i C e C++ sequenza modello di programmazione con singolo programma di che costrutti di più dati (SPMD), i costrutti di condivisione del lavoro e costrutti di sincronizzazione. Supportano inoltre la condivisione e privatizzazione dei dati. I compilatori che supportano il OpenMP C e C++ API includono un'opzione della riga di comando del compilatore che viene attivato e consente l'interpretazione di tutte le direttive del compilatore OpenMP.

## <a name="11-scope"></a>1.1 Ambito

Questa specifica descrive solo gestito dall'utente la parallelizzazione, in cui definire in modo esplicito le azioni che il compilatore e sistema di runtime necessari per eseguire il programma in parallelo. Le implementazioni di OpenMP C e C++ non è necessarie verificare la presenza di dipendenze, è in conflitto, deadlock, le race condition o altri problemi che comportano l'esecuzione del programma non corretto. Si è responsabile di garantire che l'applicazione usando i costrutti OpenMP C e C++ API viene eseguita correttamente. Generato dal compilatore la parallelizzazione automatica e nelle direttive del compilatore per semplificare questo tipo parallelizzazione non sono trattate in questo documento.

## <a name="12-definition-of-terms"></a>1.2 definizione dei termini

In questo documento vengono usati i termini seguenti:

- barrier

  Un punto di sincronizzazione che devono raggiungere tutti i thread in un team.  Ogni thread attende che tutti i thread del team di arrivano a questo punto. Sono disponibili le barriere esplicitare identificate da direttive e le barriere implicite create dall'implementazione.

- construct

  Un costrutto è un'istruzione. È costituito da una direttiva, seguito da un blocco strutturato. Alcune direttive non fanno parte di un costrutto. (Vedere *direttive openmp* nelle [appendice C](c-openmp-c-and-cpp-grammar.md)).

- direttiva

  Una C o C++ `#pragma` aggiungendo il `omp` identificatore, altro testo e una nuova riga. La direttiva specifica il comportamento del programma.

- extent dinamica

  Tutte le istruzioni di *lessicale extent*, oltre a qualsiasi istruzione all'interno di una funzione che viene eseguita come risultato l'esecuzione di istruzioni entro l'ambito lessicale. Un extent dinamico è detta anche un *regione*.

- ambito lessicale

  Istruzioni lessicalmente acquisito all'interno di un *blocco strutturato*.

- thread master

  Il thread che crea un team quando una *area parallela* viene immesso.

- area parallela

  Istruzioni che eseguire l'associazione a un costrutto parallelo OpenMP e possono essere eseguite da più thread.

- private

  Una variabile privata denomina un blocco di memoria che è univoco per il thread che effettua il riferimento. Esistono diversi modi per specificare che una variabile è privata: una definizione all'interno di un'area parallela, un `threadprivate` direttiva, una `private`, `firstprivate`, `lastprivate`, o `reduction` clausola oppure Usa la variabile come un `for`ciclo la variabile di controllo in una `for` ciclo immediatamente dopo una `for` o `parallel for` direttiva.

- area

  Un extent dinamico.

- area seriale

  Le istruzioni eseguite solo per il *master thread* di fuori l'ambito dinamico di qualsiasi *area parallela*.

- Serializzare

  Per eseguire un costrutto parallelo con:

  - un team di thread costituito da un solo thread (ovvero il thread principale per tale costrutto parallelo),

  - seriale ordine di esecuzione per le istruzioni all'interno del blocco strutturato (lo stesso ordine come se il blocco non facesse parte di un costrutto parallelo), e

  - Nessun effetto sul valore restituito da `omp_in_parallel()` (oltre gli effetti di qualsiasi costrutti paralleli annidati).

- shared

  Una variabile condivisa denomina un singolo blocco di archiviazione. Tutti i thread in un team che accedono a questa variabile anche accedano a questo blocco singolo di archiviazione.

- blocco strutturato

  Un blocco strutturato è un'istruzione (singola o composta) con una singola voce e una singola chiusura. Se è presente un collegamento interno o all'esterno di un'istruzione, tale istruzione è un blocco strutturato. (Questa regola include una chiamata a `longjmp`(3C) o l'utilizzo di `throw`, anche se una chiamata a `exit` è consentita.) Se l'esecuzione sempre inizia in corrispondenza dell'apertura `{` e termina sempre con la chiusura `}`, un'istruzione composta è un blocco strutturato. Un'istruzione di espressione, l'istruzione di selezione, l'istruzione di iterazione, oppure `try` blocco viene un blocco strutturato se l'istruzione composta corrispondente ottenuto includendolo nel `{` e `}` sarebbe un blocco strutturato. Un'istruzione di salto, l'istruzione con etichetta o istruzione di dichiarazione non è un blocco strutturato.

- Team

  Uno o più thread cooperano l'esecuzione di un costrutto.

- thread

  Un'entità di esecuzione con un flusso di controllo seriale, un set di variabili private e l'accesso alle variabili condivise.

- variabile

  Un identificatore, essere qualificato facoltativamente con spazi dei nomi, che denomina un oggetto.

## <a name="13-execution-model"></a>1.3 modello di esecuzione

OpenMP Usa il modello fork-join di esecuzione parallela. Sebbene questo modello fork-join può essere utile per risolvere vari problemi, è ottimizzata per applicazioni basate su matrici di grandi dimensioni. OpenMP è progettato per supportare i programmi che vengano eseguite correttamente entrambe come programmi paralleli (libreria di supporto di molti thread di esecuzione e un OpenMP completo). È anche per i programmi che eseguono programmi correttamente come sequenziali (una semplice libreria di stub di OpenMP e direttive ignorate). Tuttavia, è possibile e la possibilità di sviluppare un programma che non si comporta correttamente quando eseguita in modo sequenziale. Inoltre, diversi gradi di parallelismo possono comportare risultati numerici diversi a causa delle modifiche nell'associazione di operazioni numeriche. Ad esempio, una riduzione di addizione seriale abbia un motivo diverso delle associazioni di aggiunta a una riduzione parallela. Queste associazioni diverse possono modificare i risultati dell'addizione a virgola mobile.

Un programma scritto con l'API C/C++ OpenMP inizia l'esecuzione come un singolo thread di esecuzione denominato il *master thread*. Il thread principale viene eseguito in un'area seriale finché non viene rilevato un costrutto parallelo prima. Nell'API OpenMP C/C++, il `parallel` direttiva costituisce un costrutto parallelo. Quando viene rilevato un costrutto parallelo, il thread principale crea un team di thread, mentre il master diventa master del team. Ogni thread del team esegue le istruzioni dell'extent dinamica di un'area parallela, fatta eccezione per i costrutti di condivisione del lavoro. Tutti i thread del team devono rilevare costrutti di condivisione lavoro nello stesso ordine e uno o più thread esegue le istruzioni all'interno del blocco strutturato associato. La barriera in cui è inclusa la fine di un costrutto di condivisione del lavoro senza un `nowait` clausola viene eseguita da tutti i thread del team.

Se un thread viene modificato un oggetto condiviso, influisce non solo il proprio ambiente di esecuzione, ma anche quelli di altri thread nel programma. La modifica è garantita a essere completati, dal punto di vista di un altro thread, in corrispondenza del punto di sequenza successivo (come definito nella lingua di base) solo se l'oggetto viene dichiarato per essere volatile. In caso contrario, la modifica viene garantita completa dopo la modifica di un thread prima di tutto. Vedere gli altri thread quindi (o contemporaneamente) un `flush` direttiva che specifica l'oggetto (in modo implicito o esplicito). Quando la `flush` direttive che sono previste dall'altre direttive OpenMP non garantiscono l'ordinamento corretto degli effetti collaterali, è compito del programmatore per fornire aggiuntive, esplicite `flush` direttive.

Al termine di un costrutto parallelo, sincronizzare i thread del team in una barriera implicita e continua l'esecuzione solo il thread master. In un unico programma, è possibile specificare un numero qualsiasi di costrutti paralleli. Di conseguenza, un programma potrebbe fork e join più volte durante l'esecuzione.

L'API di OpenMP C/C++ consente ai programmatori di utilizzare le direttive nelle funzioni chiamate all'interno di costrutti paralleli. Le direttive che non vengono visualizzati nell'ambito lessicale di un costrutto parallelo, ma i punti più soggetti dell'extent dinamici vengono chiamate *orfani* direttive. Con direttive orfane, i programmatori possono eseguire fasi principali del proprio programma in parallelo, apportando solo modifiche minime al programma sequenza. Con questa funzionalità, è possibile costrutti paralleli nei livelli superiore della struttura di chiamata del programma di codice e usare le direttive per controllare l'esecuzione in una delle funzioni chiamate.

Le funzioni che scrivono nello stesso file possono comportare output in cui i dati scritti da thread diversi vengono visualizzati in ordine non deterministico di output non sincronizzate le chiamate a C e C++. Analogamente, non sincronizzate le chiamate a funzioni che leggono da nello stesso file di input possono leggere i dati in ordine non deterministica. Uso non sincronizzata dei / o, in modo che ogni thread accede a un altro file, produce gli stessi risultati di esecuzione seriale di funzioni dei / o.

## <a name="14-compliance"></a>1.4 Conformità

È un'implementazione dell'API OpenMP C/C++ *OpenMP conformi* se che riconosce e consente di mantenere la semantica di tutti gli elementi di questa specifica, come illustrato nei capitoli 1, 2, 3, 4, e appendice C. appendici A, B, D, E e F per informazioni solo a scopo e non fanno parte della specifica. Le implementazioni che includono solo un subset dell'API non sono compatibili con OpenMP.

Il OpenMP C e C++ API è un'estensione del linguaggio di base che è supportato da un'implementazione. Se la lingua di base non supporta un costrutto di linguaggio o un'estensione che viene visualizzato in questo documento, l'implementazione di OpenMP non è necessario che lo supporta.

Tutte le funzioni della libreria standard C e C++ e funzioni predefinite (vale a dire, le funzioni di cui il compilatore dispone di conoscenze specifiche) deve essere thread-safe. Non sincronizzato uso delle funzioni thread-safe da thread diversi all'interno di un'area parallela non produce un comportamento indefinito. Tuttavia, il comportamento potrebbe non essere le stesse di una regione seriale. (Una funzione di generazione di numeri casuali è riportato un esempio).

L'API di OpenMP C/C++ specifica che determinati comportamenti *definito dall'implementazione.* Un'implementazione conforme OpenMP è necessaria definire e documentare il proprio comportamento in questi casi. Per un elenco di comportamenti definiti dall'implementazione, vedere [appendice](e-implementation-defined-behaviors-in-openmp-c-cpp.md).

## <a name="15-normative-references"></a>1.5 riferimenti alle normative

- ISO/IEC 9899:1999, *informazioni tecnologia - linguaggi di programmazione - C*. Questa specifica API OpenMP fa riferimento a ISO/IEC 9899:1999 come C99.

- 9899:1990, ISO/IEC *informazioni tecnologia - linguaggi di programmazione - C*. Questa specifica API OpenMP fa riferimento a ISO/IEC 9899:1990 come C90.

- 14882:1998, ISO/IEC *C++ tecnologia - linguaggi di programmazione - informazioni*. Questa specifica API OpenMP fa riferimento a ISO/IEC 14882:1998 come C++.

In questa specifica API OpenMP fa riferimento a C, viene fatto riferimento al linguaggio di base supportato dall'implementazione.

## <a name="16-organization"></a>1.6 Organizzazione

- [Funzioni della libreria run-time](3-run-time-library-functions.md)
- [Variabili di ambiente](4-environment-variables.md)
- [Comportamenti definiti dall'implementazione in OpenMP C/C++](e-implementation-defined-behaviors-in-openmp-c-cpp.md)
- [Nuove funzionalità in OpenMP C/C++ versione 2.0](f-new-features-and-clarifications-in-version-2-0.md)
