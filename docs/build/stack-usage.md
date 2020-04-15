---
title: Uso dello stack x64
ms.date: 12/17/2018
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
ms.openlocfilehash: b598c33fbdd56630ca3e5ef0da551f38a73baa26
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335538"
---
# <a name="x64-stack-usage"></a>Uso dello stack x64

Tutta la memoria oltre l'indirizzo corrente di RSP è considerata volatile: il sistema operativo, o un debugger, può sovrascrivere questa memoria durante una sessione di debug dell'utente o un gestore di interrupt. Pertanto, RSP deve essere sempre impostato prima di tentare di leggere o scrivere valori in uno stack frame.

In questa sezione viene illustrata l'allocazione dello spazio dello stack per le variabili locali e **l'intrinseco alloca.**

## <a name="stack-allocation"></a>Allocazione nello stack

Il prologo di una funzione è responsabile dell'allocazione dello spazio dello stack per le variabili locali, i registri salvati, i parametri dello stack e i parametri di registro.

L'area dei parametri si trova sempre `alloca` nella parte inferiore dello stack (anche se viene utilizzata), in modo che sia sempre adiacente all'indirizzo di ritorno durante qualsiasi chiamata di funzione. Contiene almeno quattro voci, ma sempre spazio sufficiente per contenere tutti i parametri necessari per qualsiasi funzione che può essere chiamata. Si noti che lo spazio viene sempre allocato per i parametri di registro, anche se i parametri stessi non sono mai ospitati nello stack; un chiamato è garantito che lo spazio è stato allocato per tutti i suoi parametri. Gli indirizzi iniziali sono necessari per gli argomenti del registro, pertanto è disponibile un'area contigua nel caso in cui la funzione chiamata debba accettare l'indirizzo dell'elenco di argomenti (va_list) o di un singolo argomento. Quest'area fornisce anche una comoda posizione per salvare gli argomenti di registro durante l'esecuzione del thunk e come opzione di debug (ad esempio, rende gli argomenti facili da trovare durante il debug se sono archiviati nei loro indirizzi di casa nel codice di prologo). Anche se la funzione chiamata ha meno di 4 parametri, queste 4 posizioni dello stack sono effettivamente di proprietà della funzione chiamata e possono essere utilizzate dalla funzione chiamata per altri scopi oltre al salvataggio dei valori di registro dei parametri.  Pertanto il chiamante non può salvare le informazioni in questa area dello stack in una chiamata di funzione.

Se lo spazio`alloca`viene allocato dinamicamente ( ) in una funzione, è necessario utilizzare un registro non volatile come puntatore a i frame per contrassegnare la base della parte fissa dello stack e tale registro deve essere salvato e inizializzato nel prologo. Si noti che quando `alloca` viene utilizzato, le chiamate allo stesso destinatario della chiamata dallo stesso chiamante possono avere indirizzi di casa diversi per i relativi parametri di registro.

Lo stack verrà sempre mantenuto allineato a 16 byte, ad eccezione del prologo (ad esempio, dopo il push dell'indirizzo di ritorno) e tranne dove indicato nei tipi di [funzione](#function-types) per una determinata classe di funzioni frame.

Di seguito è riportato un esempio del layout dello stack in cui la funzione A chiama una funzione non foglia B. Il prologo della funzione A ha già allocato spazio per tutti i parametri di registro e stack richiesti da B nella parte inferiore dello stack. La chiamata inserisce l'indirizzo di ritorno e il prolog di B alloca spazio per le variabili locali, i registri non volatili e lo spazio necessario per chiamare le funzioni. Se B `alloca`utilizza , lo spazio viene allocato tra l'area di salvataggio del registro locale/variabile non volatile e l'area dello stack dei parametri.

![Esempio di conversione AMD](../build/media/vcamd_conv_ex_5.png "Esempio di conversione AMD")

Quando la funzione B chiama un'altra funzione, l'indirizzo di ritorno viene inserito appena sotto l'indirizzo di casa per RCX.

## <a name="dynamic-parameter-stack-area-construction"></a>Costruzione dell'area dello stack di parametri dinamici

Se viene utilizzato un puntatore ai frame, l'opzione esiste per creare dinamicamente l'area dello stack di parametri. Questa operazione non viene attualmente eseguita nel compilatore x64.

## <a name="function-types"></a>Tipi di funzione

Ci sono fondamentalmente due tipi di funzioni. Una funzione che richiede uno stack frame viene chiamata *funzione frame*. Una funzione che non richiede uno stack frame viene chiamata *funzione foglia*.

Una funzione frame è una funzione che alloca spazio dello stack, chiama altre funzioni, salva i registri non volatili o utilizza la gestione delle eccezioni. Richiede anche una voce della tabella delle funzioni. Una funzione frame richiede un prologo e un epilogo. Una funzione frame può allocare dinamicamente lo spazio dello stack e può utilizzare un puntatore ai frame. Una funzione frame ha tutte le funzionalità di questo standard di chiamata a sua disposizione.

Se una funzione frame non chiama un'altra funzione, non è necessario allineare lo stack (a cui viene fatto riferimento in Section [Stack Allocation](#stack-allocation)).

Una funzione foglia è una funzione che non richiede una voce della tabella delle funzioni. Non può apportare modifiche ai registri non volatili, incluso RSP, il che significa che non può chiamare alcuna funzione o allocare spazio dello stack. È consentito lasciare lo stack non allineato durante l'esecuzione.

## <a name="malloc-alignment"></a>allineamento malloc

[malloc](../c-runtime-library/reference/malloc.md) è garantito per restituire la memoria che è opportunamente allineato per l'archiviazione di qualsiasi oggetto che ha un allineamento fondamentale e che potrebbe rientrare nella quantità di memoria allocata. Un *allineamento fondamentale* è un allineamento minore o uguale al tracciato più grande supportato dall'implementazione senza una specifica di allineamento. (In Visual C, questo è l'allineamento `double`necessario per un , o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Ad esempio, un'allocazione a quattro byte verrebbe allineata su un limite che supporta qualsiasi oggetto a quattro byte o più piccolo.

Visual C, ovvero i tipi con *allineamento esteso*, noti anche come tipi *sovraallineati.* Ad esempio, i [__m128](../cpp/m128.md) tipi `__m256`SSE __m128 e e `__declspec(align( n ))` `n` i tipi dichiarati utilizzando where è maggiore di 8, hanno un allineamento esteso. L'allineamento della memoria su un contorno adatto a un `malloc`oggetto che richiede un allineamento esteso non è garantito da . Per allocare memoria per tipi sovraallineati, utilizzare [_aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) e le funzioni correlate.

## <a name="alloca"></a>alloca

[_alloca](../c-runtime-library/reference/alloca.md) deve essere allineato a 16 byte e inoltre necessario per utilizzare un puntatore ai frame.

Lo stack allocato deve includere spazio dopo di esso per i parametri delle funzioni chiamate successivamente, come descritto in [Allocazione dello stack](#stack-allocation).

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)<br/>
[Allineare](../cpp/align-cpp.md)<br/>
[__declspec](../cpp/declspec.md)
