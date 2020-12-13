---
description: 'Altre informazioni su: 1. Introduzione'
title: 1. Introduzione
ms.date: 01/16/2019
ms.assetid: c42e72bc-0e31-4b1c-b670-cd82673c0c5a
ms.openlocfilehash: d9b7374668b8a5cfa4b6ab6771362dac8bdfe14c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149721"
---
# <a name="1-introduction"></a>1. Introduzione

Questo documento specifica una raccolta di direttive del compilatore, funzioni di libreria e variabili di ambiente che è possibile usare per specificare il parallelismo della memoria condivisa nei programmi C e C++. La funzionalità descritta in questo documento è collettivamente nota come *API (Application Program Interface) OpenMP C/C++*. L'obiettivo di questa specifica è fornire un modello per la programmazione parallela che consente a un programma di essere portabile in architetture con memoria condivisa di fornitori diversi. I compilatori di molti fornitori supportano l'API OpenMP C/C++. Ulteriori informazioni su OpenMP, inclusa l' *interfaccia del programma applicativa FORTRAN OpenMP*, sono disponibili nel seguente sito Web:

[https://www.openmp.org](https://www.openmp.org)

Le direttive, le funzioni di libreria e le variabili di ambiente definite in questo documento consentono di creare e gestire programmi paralleli consentendo al contempo la portabilità. Le direttive estendono il modello di programmazione sequenziale C e C++ con costrutti SPMD (Single Program Multiple Data), costrutti di condivisione del lavoro e costrutti di sincronizzazione. Supportano anche la condivisione e la privatizzazione dei dati. I compilatori che supportano l'API OpenMP C e C++ includono un'opzione della riga di comando per il compilatore che attiva e consente l'interpretazione di tutte le direttive del compilatore OpenMP.

## <a name="11-scope"></a>1.1 Ambito

Questa specifica copre solo la parallelizzazione diretta dall'utente, in cui si definiscono in modo esplicito le azioni che il compilatore e il sistema di runtime intraprendono per eseguire il programma in parallelo. Le implementazioni OpenMP C e C++ non sono necessarie per verificare la presenza di dipendenze, conflitti, deadlock, race condition o altri problemi che comportano un'esecuzione errata del programma. L'utente è responsabile di garantire che l'applicazione che usa i costrutti dell'API OpenMP C e C++ venga eseguita correttamente. Le direttive e la parallelizzazione automatica generate dal compilatore al compilatore per supportare tale parallelizzazione non sono descritte in questo documento.

## <a name="12-definition-of-terms"></a>1,2 definizione dei termini

In questo documento vengono utilizzati i termini seguenti:

- barrier

  Un punto di sincronizzazione che deve raggiungere tutti i thread di un team.  Ogni thread resta in attesa fino a quando tutti i thread del team arrivano a questo punto. Esistono barriere esplicite identificate dalle direttive e dagli ostacoli impliciti creati dall'implementazione.

- costrutto

  Un costrutto è un'istruzione. È costituito da una direttiva, seguita da un blocco strutturato. Alcune direttive non fanno parte di un costrutto. (Vedere *OpenMP-Directive* nell' [Appendice C](c-openmp-c-and-cpp-grammar.md)).

- direttiva

  C o C++ `#pragma` seguito dall' `omp` identificatore, da un altro testo e da una nuova riga. La direttiva specifica il comportamento del programma.

- extent dinamico

  Tutte le istruzioni nell' *extent lessicale*, più qualsiasi istruzione all'interno di una funzione eseguita come risultato dell'esecuzione di istruzioni all'interno dell'extent lessicale. Un extent dinamico è definito anche *area*.

- extent lessicale

  Istruzioni contenute in un *blocco strutturato*.

- thread master

  Thread che crea un team quando viene immessa un' *area parallela* .

- area parallela

  Istruzioni che si associano a un costrutto parallelo OpenMP e possono essere eseguite da molti thread.

- private

  Una variabile privata assegna un nome a un blocco di archiviazione univoco per il thread che effettua il riferimento. Esistono diversi modi per specificare che una variabile è privata, ovvero una definizione in un'area parallela, una `threadprivate` direttiva, `private` una `firstprivate` clausola,, `lastprivate` o o `reduction` l'utilizzo della variabile come variabile di **`for`** controllo del ciclo in un **`for`** ciclo immediatamente successivo a `for` una `parallel for` direttiva o.

- region

  Extent dinamico.

- area seriale

  Istruzioni eseguite solo dal *thread master* al di fuori dell'extent dinamico di qualsiasi *area parallela*.

- serialize

  Per eseguire un costrutto parallelo con:

  - team di thread costituito da un solo thread (ovvero il thread master per il costrutto parallelo),

  - ordine seriale di esecuzione per le istruzioni all'interno del blocco strutturato (lo stesso ordine in cui si trovava se il blocco non faceva parte di un costrutto parallelo) e

  - Nessun effetto sul valore restituito da `omp_in_parallel()` (oltre agli effetti dei costrutti paralleli annidati).

- shared

  Una variabile condivisa assegna un nome a un singolo blocco di archiviazione. Anche tutti i thread di un team che accedono a questa variabile accedono a questo singolo blocco di archiviazione.

- blocco strutturato

  Un blocco strutturato è un'istruzione (Single o compound) con una singola voce e una singola uscita. Se è presente un salto all'interno o all'esterno di un'istruzione, l'istruzione è un blocco strutturato. Questa regola include una chiamata a `longjmp` (3C) o l'utilizzo di `throw` , anche se `exit` è consentita una chiamata a. Se l'esecuzione inizia sempre all'apertura `{` e termina sempre alla chiusura `}` , un'istruzione composta è un blocco strutturato. Un'istruzione di espressione, un'istruzione di selezione, un'istruzione di iterazione o **`try`** un blocco è un blocco strutturato se l'istruzione composta corrispondente ottenuta mediante la relativa inclusione in `{` e `}` sarebbe un blocco strutturato. Un'istruzione Jump, un'istruzione con etichetta o un'istruzione di dichiarazione non è un blocco strutturato.

- team

  Uno o più thread cooperano nell'esecuzione di un costrutto.

- thread

  Entità di esecuzione con un flusso seriale di controllo, un set di variabili private e l'accesso a variabili condivise.

- Variabile

  Identificatore, qualificato facoltativamente in base ai nomi degli spazi dei nomi, che assegna un nome a un oggetto.

## <a name="13-execution-model"></a>modello di esecuzione 1,3

OpenMP utilizza il modello fork-join dell'esecuzione parallela. Sebbene questo modello fork-join possa essere utile per la risoluzione di vari problemi, è adattato per applicazioni di grandi dimensioni basate su matrici. OpenMP è progettato per supportare programmi che vengono eseguiti correttamente sia come programmi paralleli (molti thread di esecuzione che da una libreria di supporto OpenMP completa). È anche per i programmi che vengono eseguiti correttamente come programmi sequenziali (direttive ignorate e una semplice libreria stub OpenMP). Tuttavia, è possibile e consentire lo sviluppo di un programma che non si comporti correttamente quando viene eseguito in sequenza. Inoltre, diversi gradi di parallelismo possono produrre risultati numerici diversi a causa delle modifiche apportate all'associazione di operazioni numeriche. Una riduzione di aggiunta seriale, ad esempio, può avere un modello diverso di associazioni di addizione rispetto a una riduzione parallela. Queste associazioni diverse possono modificare i risultati dell'aggiunta a virgola mobile.

Un programma scritto con l'API OpenMP C/C++ inizia l'esecuzione come un singolo thread di esecuzione denominato *thread master*. Il thread master viene eseguito in un'area seriale fino a quando non viene rilevato il primo costrutto parallelo. Nell'API OpenMP C/C++ la `parallel` direttiva costituisce un costrutto parallelo. Quando viene rilevato un costrutto parallelo, il thread master crea un team di thread e il master diventa il master del team. Ogni thread del team esegue le istruzioni nell'ambito dinamico di un'area parallela, ad eccezione dei costrutti di condivisione del lavoro. Tutti i thread del team devono rilevare costrutti di condivisione del lavoro nello stesso ordine e uno o più thread eseguono le istruzioni all'interno del blocco strutturato associato. La barriera implicita alla fine di un costrutto di condivisione del lavoro senza una `nowait` clausola viene eseguita da tutti i thread del team.

Se un thread modifica un oggetto condiviso, influiscono non solo sul proprio ambiente di esecuzione, ma anche sugli altri thread del programma. È garantito che la modifica sia completa, dal punto di vista di un altro thread, al successivo punto di sequenza (come definito nella lingua di base) solo se l'oggetto è dichiarato come volatile. In caso contrario, la modifica è garantita per essere completata dopo il primo thread di modifica. Gli altri thread, o simultaneamente, visualizzano una `flush` direttiva che specifica l'oggetto (in modo implicito o esplicito). Quando le `flush` direttive che sono implicite da altre direttive OpenMP non garantiscono l'ordinamento corretto degli effetti collaterali, è responsabilità del programmatore fornire direttive esplicite aggiuntive `flush` .

Al completamento del costrutto parallelo, i thread del team si sincronizzano in una barriera implicita e solo il thread master continua l'esecuzione. È possibile specificare un numero qualsiasi di costrutti paralleli in un singolo programma. Di conseguenza, un programma può creare un fork e partecipare più volte durante l'esecuzione.

L'API OpenMP C/C++ consente ai programmatori di utilizzare le direttive nelle funzioni chiamate dall'interno di costrutti paralleli. Le direttive che non vengono visualizzate nell'ambito lessicale di un costrutto parallelo ma che possono trovarsi nell'extent dinamico sono denominate direttive *orfane* . Con le direttive orfane, i programmatori possono eseguire parti principali del programma in parallelo, con modifiche minime al programma sequenziale. Con questa funzionalità, è possibile codificare costrutti paralleli ai livelli superiori dell'albero delle chiamate del programma e utilizzare le direttive per controllare l'esecuzione in una qualsiasi delle funzioni chiamate.

Le chiamate non sincronizzate alle funzioni di output C e C++ che scrivono nello stesso file possono produrre output in cui i dati scritti da thread diversi vengono visualizzati in ordine non deterministico. Analogamente, le chiamate non sincronizzate alle funzioni di input che leggono dallo stesso file possono leggere i dati in ordine non deterministico. Uso non sincronizzato di I/O, in modo che ogni thread acceda a un altro file, produce gli stessi risultati dell'esecuzione seriale delle funzioni di I/O.

## <a name="14-compliance"></a>1.4 Conformità

Un'implementazione dell'API OpenMP C/C++ è *conforme a OpenMP* se riconosce e conserva la semantica di tutti gli elementi di questa specifica, come indicato nei capitoli 1, 2, 3, 4 e Appendice C. le appendici A, B, D, e e F sono solo a scopo informativo e non fanno parte della specifica. Le implementazioni che includono solo un subset dell'API non sono conformi a OpenMP.

L'API OpenMP C e C++ è un'estensione del linguaggio di base supportato da un'implementazione di. Se il linguaggio di base non supporta un costrutto di linguaggio o un'estensione visualizzata in questo documento, l'implementazione OpenMP non è necessaria per supportarla.

Tutte le funzioni di libreria standard C e C++ e le funzioni predefinite, ovvero le funzioni di cui il compilatore ha una conoscenza specifica, devono essere thread-safe. L'utilizzo non sincronizzato di funzioni thread-safe da parte di thread diversi in un'area parallela non produce un comportamento non definito. Tuttavia, il comportamento potrebbe non essere uguale a quello di un'area seriale. Una funzione di generazione di numeri casuali è un esempio.

L'API OpenMP C/C++ specifica che determinate funzionalità sono *definite dall'implementazione.* Per definire e documentare il proprio comportamento in questi casi, è necessaria un'implementazione di OpenMP conforme. Per un elenco dei comportamenti definiti dall'implementazione, vedere [Appendice E](e-implementation-defined-behaviors-in-openmp-c-cpp.md).

## <a name="15-normative-references"></a>1,5 riferimenti normativi

- ISO/IEC 9899:1999, *Information Technology-linguaggi di programmazione-C*. Questa specifica dell'API OpenMP si riferisce a ISO/IEC 9899:1999 come C99.

- ISO/IEC 9899:1990, *Information Technology-linguaggi di programmazione-C*. Questa specifica dell'API OpenMP si riferisce a ISO/IEC 9899:1990 come C90.

- ISO/IEC 14882:1998, *Information Technology-linguaggi di programmazione-C++*. Questa specifica dell'API OpenMP si riferisce a ISO/IEC 14882:1998 come C++.

Se questa specifica dell'API OpenMP fa riferimento a C, viene fatto riferimento al linguaggio di base supportato dall'implementazione di.

## <a name="16-organization"></a>1.6 Organizzazione

- [Funzioni della libreria di runtime](3-run-time-library-functions.md)
- [Variabili di ambiente](4-environment-variables.md)
- [Comportamenti definiti dall'implementazione in OpenMP C/C++](e-implementation-defined-behaviors-in-openmp-c-cpp.md)
- [Nuove funzionalità di OpenMP C/C++ versione 2,0](f-new-features-and-clarifications-in-version-2-0.md)
