---
title: 'Procedura dettagliata: Uso della classe join per impedire un deadlock'
ms.date: 04/25/2019
helpviewer_keywords:
- preventing deadlock with joins [Concurrency Runtime]
- deadlock, preventing [Concurrency Runtime]
- non-greedy joins, example
- join class, example
ms.assetid: d791f697-bb93-463e-84bd-5df1651b7446
ms.openlocfilehash: 5bdd6cd81051d224714dd66d4604cbdec4ddb552
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87217883"
---
# <a name="walkthrough-using-join-to-prevent-deadlock"></a>Procedura dettagliata: Uso della classe join per impedire un deadlock

In questo argomento viene utilizzato il problema dei filosofi a cena per illustrare come utilizzare la classe [Concurrency:: join](../../parallel/concrt/reference/join-class.md) per impedire un deadlock nell'applicazione. In un'applicazione software si verifica un *deadlock* quando due o più processi bloccano ognuno una risorsa e attendono entrambi che un altro processo rilasci altre risorse.

Il problema della cucina dei filosofi è un esempio specifico del set generale di problemi che possono verificarsi quando un set di risorse viene condiviso tra più processi simultanei.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Procedura dettagliata: creazione di un'applicazione basata su agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)

- [Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)

- [Strutture dei dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)

## <a name="sections"></a><a name="top"></a>Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Problema dei filosofi a cena](#problem)

- [Implementazione Naive](#deadlock)

- [Utilizzo di join per impedire il deadlock](#solution)

## <a name="the-dining-philosophers-problem"></a><a name="problem"></a>Problema dei filosofi a cena

Il problema dei filosofi a cena illustra il modo in cui si verifica il deadlock in un'applicazione. In questo problema cinque filosofi si siedono a una tabella rotonda. Ogni filosofo si alterna tra pensiero e cibo. Ogni filosofo deve condividere un bastoncino con il vicino a sinistra e un altro bastoncino con il vicino a destra. Nella figura seguente viene illustrato questo layout.

![Problema dei filosofi a cena](../../parallel/concrt/media/dining_philosophersproblem.png "Problema dei filosofi a cena")

Per mangiare, un filosofo deve avere due bastoncini. Se ogni filosofo possiede un solo bastoncino ed è in attesa di un'altra, nessun filosofo può mangiare e morire.

[All'[inizio](#top)]

## <a name="a-nave-implementation"></a><a name="deadlock"></a>Implementazione Naive

Nell'esempio seguente viene illustrata un'implementazione ingenua del problema dei filosofi a cena. La `philosopher` classe, che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md), consente a ciascun filosofo di agire in modo indipendente. Nell'esempio viene utilizzata una matrice condivisa di oggetti [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) per concedere a ogni `philosopher` oggetto l'accesso esclusivo a una coppia di bastoncini.

Per correlare l'implementazione all'illustrazione, la `philosopher` classe rappresenta un filosofo. Una **`int`** variabile rappresenta ogni bastoncino. Gli `critical_section` oggetti vengono usati come titolari su cui si basano i bastoncini. Il `run` Metodo simula la vita del filosofo. Il `think` Metodo simula l'azione di riflessione e il `eat` Metodo simula l'azione di consumo.

Un `philosopher` oggetto blocca entrambi `critical_section` gli oggetti per simulare la rimozione dei bastoncini dai titolari prima di chiamare il `eat` metodo. Dopo la chiamata a `eat` , l' `philosopher` oggetto restituisce i bastoncini ai titolari impostando di `critical_section` nuovo gli oggetti sullo stato sbloccato.

Il `pickup_chopsticks` metodo illustra il punto in cui può verificarsi il deadlock. Se ogni `philosopher` oggetto ottiene l'accesso a uno dei blocchi, nessun `philosopher` oggetto può continuare perché l'altro blocco è controllato da un altro `philosopher` oggetto.

### <a name="example"></a>Esempio

[!code-cpp[concrt-philosophers-deadlock#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_1.cpp)]

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `philosophers-deadlock.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc philosophers-deadlock. cpp**

[All'[inizio](#top)]

## <a name="using-join-to-prevent-deadlock"></a><a name="solution"></a>Utilizzo di join per impedire il deadlock

In questa sezione viene illustrato come utilizzare buffer di messaggi e funzioni di passaggio dei messaggi per eliminare la possibilità di deadlock.

Per correlare questo esempio con quello precedente, la `philosopher` classe sostituisce ogni `critical_section` oggetto usando un oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) e un `join` oggetto. L' `join` oggetto funge da arbitro che fornisce i bastoncini al filosofo.

In questo esempio viene utilizzata la `unbounded_buffer` classe perché quando una destinazione riceve un messaggio da un `unbounded_buffer` oggetto, il messaggio viene rimosso dalla coda di messaggi. Ciò consente `unbounded_buffer` a un oggetto che include un messaggio di indicare che il bastoncino è disponibile. Un `unbounded_buffer` oggetto che non include alcun messaggio indica che è in uso il bastoncino.

Questo esempio usa un oggetto non greedy `join` perché un join non greedy assegna `philosopher` a ogni oggetto l'accesso a entrambi i bastoncini solo quando entrambi `unbounded_buffer` gli oggetti contengono un messaggio. Un join greedy non impedisce il deadlock perché un join greedy accetta messaggi non appena diventano disponibili. È possibile che si verifichi un deadlock se tutti `join` gli oggetti greedy ricevono uno dei messaggi ma attendono sempre che l'altro diventi disponibile.

Per ulteriori informazioni sui join greedy e non greedy e sulle differenze tra i vari tipi di buffer dei messaggi, vedere la pagina relativa ai [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

### <a name="to-prevent-deadlock-in-this-example"></a>Per impedire il deadlock in questo esempio

1. Rimuovere il codice seguente dall'esempio.

[!code-cpp[concrt-philosophers-deadlock#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_2.cpp)]

1. Modificare il tipo dei `_left` `_right` membri dati e della `philosopher` classe in `unbounded_buffer` .

[!code-cpp[concrt-philosophers-join#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_3.cpp)]

1. Modificare il `philosopher` costruttore per assumere `unbounded_buffer` oggetti come parametri.

[!code-cpp[concrt-philosophers-join#3](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_4.cpp)]

1. Modificare il `pickup_chopsticks` metodo per utilizzare un oggetto non greedy `join` per ricevere messaggi dai buffer dei messaggi per entrambi i bastoncini.

[!code-cpp[concrt-philosophers-join#4](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_5.cpp)]

1. Modificare il `putdown_chopsticks` metodo per rilasciare l'accesso ai bastoncini inviando un messaggio ai buffer dei messaggi per entrambi i bastoncini.

[!code-cpp[concrt-philosophers-join#5](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_6.cpp)]

1. Modificare il `run` metodo in modo che contenga i risultati del `pickup_chopsticks` metodo e passare i risultati al `putdown_chopsticks` metodo.

[!code-cpp[concrt-philosophers-join#6](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_7.cpp)]

1. Modificare la dichiarazione della `chopsticks` variabile nella funzione in `wmain` modo che sia una matrice di `unbounded_buffer` oggetti che contengono un solo messaggio.

[!code-cpp[concrt-philosophers-join#7](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_8.cpp)]

### <a name="description"></a>Descrizione

Di seguito viene illustrato l'esempio completo che utilizza oggetti non greedy `join` per eliminare il rischio di deadlock.

### <a name="example"></a>Esempio

[!code-cpp[concrt-philosophers-join#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_9.cpp)]

Questo esempio produce il seguente output:

```Output
aristotle ate 50 times.
descartes ate 50 times.
hobbes ate 50 times.
socrates ate 50 times.
plato ate 50 times.
```

### <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `philosophers-join.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc philosophers-join. cpp**

[All'[inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)<br/>
[Strutture dei dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)
