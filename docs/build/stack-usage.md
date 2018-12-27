---
title: x64 dello stack dell'utilizzo
ms.date: 12/17/2018
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
ms.openlocfilehash: 3318a3512f83e242496454ffa2dc4aa8d26e1fc3
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53627319"
---
# <a name="x64-stack-usage"></a>x64 dello stack dell'utilizzo

Tutta la memoria oltre l'indirizzo corrente di RSP viene considerata volatile: Il sistema operativo o un debugger, può sovrascrivere questa memoria durante una sessione di debug utente o un gestore di interrupt. Di conseguenza, RSP deve sempre essere impostato prima di tentare di leggere o scrivere valori in uno stack frame.

Questa sezione vengono illustrati l'allocazione di spazio dello stack per le variabili locali e il **alloca** intrinseco.

## <a name="stack-allocation"></a>Allocazione nello stack

Prologo di una funzione è responsabile dell'allocazione di spazio dello stack per le variabili locali, registri salvati, stack di parametri e registrare i parametri.

L'area dei parametri è sempre nella parte inferiore dello stack (anche se `alloca` viene usato), in modo che sarà sempre adiacente per l'indirizzo del mittente durante qualsiasi chiamata di funzione. Contiene almeno quattro voci, ma sempre spazio sufficiente per contenere tutti i parametri necessari per qualsiasi funzione che può essere chiamato. Si noti che lo spazio viene sempre allocato per i parametri del registro, anche se tali parametri non vengono mai trasferiti nello stack. un oggetto chiamato è garantito che sia stato allocato spazio per tutti i relativi parametri. Gli indirizzi personali sono necessari per gli argomenti dei registri in modo che un'area contigua è disponibile nel caso in cui la funzione chiamata deve accettare l'indirizzo dell'elenco di argomenti (va_list) o un argomento singolo. Quest'area include inoltre un modo pratico per salvare gli argomenti di registro durante l'esecuzione del thunk e come opzione di debug (ad esempio, rende gli argomenti facili da trovare durante il debug se sono memorizzate nei relativi indirizzi iniziali nel codice di prologo). Anche se la funzione chiamata dispone di meno di 4 parametri, questi 4 posizioni dello stack sono di proprietà in modo efficace dalla funzione chiamata e possono essere usate dalla funzione chiamata per altri scopi oltre il salvataggio di parametro dei valori di registro.  In questo modo il chiamante non può salvare informazioni in quest'area dello stack in una chiamata di funzione.

Se lo spazio viene allocato in modo dinamico (`alloca`) in una funzione, quindi un registro non volatile deve essere usato come puntatore ai frame per contrassegnare la base della parte fissa dello stack e che deve essere salvata e inizializzata nel prologo della registrazione. Si noti che quando `alloca` viene usato, chiamate allo stesso chiamato dallo stesso chiamante abbia indirizzi iniziali differenti per i parametri del registro.

Lo stack verrà sempre mantenuto a 16 byte allineati, tranne che all'interno del prologo (ad esempio, dopo che viene inserito l'indirizzo del mittente) e dove indicato nel [tipi di funzione](#function-types) per una determinata classe di funzioni di frame.

Di seguito è riportato un esempio di layout dello stack di chiamate di funzione A una non-foglia funzionano where prologo di una funzione a B. è già allocato spazio per tutti i parametri di register e stack richiesti da B nella parte inferiore dello stack. La chiamata inserisce l'indirizzo del mittente e prologo del B alloca spazio per le variabili locali, i registri non volatili e lo spazio necessario per chiamare le funzioni. Se B utilizza `alloca`, lo spazio viene allocato tra il registro/non volatile di variabile locale Salva area e l'area dello stack del parametro.

![Esempio di conversione AMD](../build/media/vcamd_conv_ex_5.png "esempio di conversione AMD")

Quando la funzione B chiama un'altra funzione, l'indirizzo del mittente è inserito sotto l'indirizzo dell'abitazione di RCX.

## <a name="dynamic-parameter-stack-area-construction"></a>Costruzione di area dello stack di parametri dinamici

Se viene usato un puntatore ai frame, l'opzione di creare dinamicamente l'area dello stack del parametro. Questa operazione non viene attualmente eseguita x64 compilatore.

## <a name="function-types"></a>Tipi di funzione

Esistono essenzialmente due tipi di funzioni. Viene chiamata una funzione che richiede uno stack frame una *frame funzione*. Viene chiamata una funzione che non richiede uno stack frame una *foglia funzione*.

Una funzione di frame è una funzione che alloca lo spazio dello stack, chiama altre funzioni, consente di salvare i registri non volatili o Usa la gestione delle eccezioni. Richiede inoltre una voce della tabella (funzione). Una funzione di frame richiede un prologo e da un epilogo. Una funzione di frame in modo dinamico può allocare lo spazio dello stack e può usare un puntatore ai frame. Una funzione di frame ha le funzionalità complete di questa chiamata standard a sua disposizione.

Se una funzione di frame non chiama un'altra funzione, non è necessario per l'allineamento dello stack (fa riferimento nella sezione [allocazione nello Stack](#stack-allocation)).

Una funzione foglia è quello che non richiede una voce della tabella (funzione). È possibile apportare modifiche a tutti i registri non volatili, tra cui RSP, che significa che non può chiamare le funzioni o allocare lo spazio dello stack. È consentito per lasciare non allineati dello stack durante l'esecuzione.

## <a name="malloc-alignment"></a>allineamento malloc

[malloc](../c-runtime-library/reference/malloc.md) garantisce la restituzione di memoria allineata in modo adeguato per archiviare qualsiasi oggetto con un allineamento fondamentale e che possa adattarsi alla quantità di memoria allocata. Oggetto *allineamento fondamentale* è un tipo di allineamento minore o uguale al massimo allineamento supportato dall'implementazione senza una specifica di allineamento. (In Visual C++, si tratta dell'allineamento richiesto per un `double`, o 8 byte. Nel codice destinato a piattaforme a 64 bit, è 16 byte.) Ad esempio, un'allocazione a quattro byte vengono allineata in base a un limite supporta qualsiasi oggetto a quattro byte o più piccolo.

Visual C++ supporta i tipi che hanno *allineamento esteso*, che sono anche dette *sovrallineati* tipi. Ad esempio, i tipi SSE [__m128](../cpp/m128.md) e `__m256`e i tipi dichiarati utilizzando `__declspec(align( n ))` in cui `n` è maggiore di 8, presentano un allineamento esteso. Allineamento della memoria in base a un limite è appropriato per un oggetto che richiede l'allineamento esteso non è garantito da `malloc`. Per allocare memoria per i tipi sovrallineati, utilizzare [aligned_malloc](../c-runtime-library/reference/aligned-malloc.md) e funzioni correlate.

## <a name="alloca"></a>alloca

[alloca](../c-runtime-library/reference/alloca.md) deve essere 16 byte allineato e inoltre necessari per utilizzare un puntatore ai frame.

Lo stack viene allocato deve includere uno spazio dopo di esso per i parametri delle funzioni chiamate successivamente, come descritto nella [allocazione nello Stack](#stack-allocation).

## <a name="see-also"></a>Vedere anche

[x64 convenzioni del software](../build/x64-software-conventions.md)<br/>
[align](../cpp/align-cpp.md)<br/>
[__declspec](../cpp/declspec.md)