---
title: 'Procedura dettagliata: Uso della classe join per impedire un Deadlock'
ms.date: 04/25/2019
helpviewer_keywords:
- preventing deadlock with joins [Concurrency Runtime]
- deadlock, preventing [Concurrency Runtime]
- non-greedy joins, example
- join class, example
ms.assetid: d791f697-bb93-463e-84bd-5df1651b7446
ms.openlocfilehash: 2f9e0f50866ed0635fbaa4b700dbf522f09458d9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407891"
---
# <a name="walkthrough-using-join-to-prevent-deadlock"></a>Procedura dettagliata: Uso della classe join per impedire un Deadlock

Questo argomento viene utilizzato il problema dei filosofi a cena per illustrare come usare il [Concurrency:: join](../../parallel/concrt/reference/join-class.md) classe per impedire un deadlock nell'applicazione. In un'applicazione software si verifica un *deadlock* quando due o più processi bloccano ognuno una risorsa e attendono entrambi che un altro processo rilasci altre risorse.

Il problema dei filosofi a cena è un esempio specifico del set di problemi che possono verificarsi quando un set di risorse è condiviso tra più processi simultanei generale.

## <a name="prerequisites"></a>Prerequisiti

Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

- [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)

##  <a name="top"></a> Sezioni

Questa procedura dettagliata contiene le sezioni seguenti:

- [Il problema dei filosofi a cena](#problem)

- [Un'implementazione Naive](#deadlock)

- [Uso della classe join per impedire un Deadlock](#solution)

##  <a name="problem"></a> Il problema dei filosofi a cena

Il problema dei filosofi a cena illustra il deadlock si verifica in un'applicazione. In questo problema, cinque filosofi si trovano in una tabella round. Ogni filosofo Alterna meditare e cibo. Ogni filosofo deve condividere un bastoncino con la soluzione vicina a sinistra e un'altra bastoncino con il router adiacente a destra. La figura seguente mostra questo layout.

![Il problema dei filosofi a cena](../../parallel/concrt/media/dining_philosophersproblem.png "il problema dei filosofi a cena")

Per consumare, un filosofo deve avere due bastoncini. Se ogni filosofo ha un solo bastoncino ed è in attesa di un altro, quindi non può consumare alcun filosofo e tutto mancanza di risorse.

[[Torna all'inizio](#top)]

##  <a name="deadlock"></a> Un'implementazione Naive

Nell'esempio seguente viene illustrata un'implementazione di dimensionalità del problema dei filosofi a. Il `philosopher` classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md), consente a ogni filosofo di agire in modo indipendente. L'esempio Usa una matrice condivisa di [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) gli oggetti per concedere a ogni `philosopher` accesso esclusivo a una coppia di bastoncini dell'oggetto.

Per mettere in relazione all'illustrazione, l'implementazione di `philosopher` classe rappresenta uno filosofo. Un `int` variabile rappresenta ogni bastoncino. Il `critical_section` oggetti fungono da contenitori per bastoncini. Il `run` metodo simula il ciclo di vita di filosofo. Il `think` metodo simula l'azione di pensare e `eat` metodo simula l'azione di cibo.

Oggetto `philosopher` oggetto Blocca entrambe `critical_section` gli oggetti per simulare la rimozione di bastoncini dai titolari del prima che chiama il `eat` (metodo). Dopo la chiamata a `eat`, il `philosopher` oggetto restituisce i bastoncini ai contenitori tramite l'impostazione di `critical_section` oggetti nuovamente allo stato sbloccato.

Il `pickup_chopsticks` metodo illustra dove può verificarsi deadlock. Se ogni `philosopher` oggetto accede a uno dei blocchi, quindi no `philosopher` oggetto può continuare perché il blocco di altri è controllato da un altro `philosopher` oggetto.

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

### <a name="code"></a>Codice

[!code-cpp[concrt-philosophers-deadlock#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_1.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `philosophers-deadlock.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc philosophers-deadlock. cpp**

[[Torna all'inizio](#top)]

##  <a name="solution"></a> Uso della classe join per impedire un Deadlock

Questa sezione illustra come usare funzioni di passaggio dei messaggi e buffer di messaggi per eliminare le probabilità di deadlock.

Per correlare questo esempio al precedente, il `philosopher` classe sostituisce ogni `critical_section` oggetto utilizzando un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto e un `join` oggetto. Il `join` oggetto funge da un arbitro che fornisce i bastoncini a filosofo.

Questo esempio Usa la `unbounded_buffer` classe perché quando una destinazione riceve un messaggio da un `unbounded_buffer` dell'oggetto, il messaggio viene rimosso dalla coda di messaggi. In questo modo un `unbounded_buffer` un oggetto contenente un messaggio per indicare che il bastoncino è disponibile. Un `unbounded_buffer` oggetto che non contiene messaggi indica che il bastoncino è in uso.

Questo esempio viene usato un non-greedy `join` dell'oggetto perché un join non greedy assegna a ognuno `philosopher` l'accesso a entrambi i bastoncini dell'oggetto solo quando entrambe `unbounded_buffer` oggetti contengono un messaggio. Join greedy potrebbe non impedire un deadlock perché un join greedy accetta i messaggi non appena diventano disponibili. Deadlock può verificarsi se tutti i greedy `join` oggetti riceva uno dei messaggi ma attesa infinita per gli altri diventi disponibile.

Per altre informazioni sui join greedy e non greedy e le differenze tra i vari tipi di buffer di messaggi, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

#### <a name="to-prevent-deadlock-in-this-example"></a>Per impedire un deadlock in questo esempio

1. Rimuovere il codice seguente dell'esempio.

[!code-cpp[concrt-philosophers-deadlock#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_2.cpp)]

1. Modificare il tipo dei `_left` e `_right` membri dati del `philosopher` classe `unbounded_buffer`.

[!code-cpp[concrt-philosophers-join#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_3.cpp)]

1. Modificare il `philosopher` costruttore abbiano `unbounded_buffer` oggetti come parametri.

[!code-cpp[concrt-philosophers-join#3](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_4.cpp)]

1. Modificare il `pickup_chopsticks` metodo da usare un non-greedy `join` oggetto per ricevere messaggi dai buffer di messaggi per entrambi i bastoncini.

[!code-cpp[concrt-philosophers-join#4](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_5.cpp)]

1. Modificare il `putdown_chopsticks` metodo per rilasciare l'accesso a di bastoncini inviando un messaggio per il buffer di messaggi per entrambi i bastoncini.

[!code-cpp[concrt-philosophers-join#5](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_6.cpp)]

1. Modificare il `run` metodo per archiviare i risultati del `pickup_chopsticks` metodo e passare tali risultati per il `putdown_chopsticks` (metodo).

[!code-cpp[concrt-philosophers-join#6](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_7.cpp)]

1. Modificare la dichiarazione del `chopsticks` di una variabile nel `wmain` funzione come una matrice di `unbounded_buffer` oggetti, ognuno contenente un messaggio.

[!code-cpp[concrt-philosophers-join#7](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_8.cpp)]

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Di seguito è riportato l'esempio completo che usa non greedy `join` oggetti per eliminare il rischio di deadlock.

### <a name="code"></a>Codice

[!code-cpp[concrt-philosophers-join#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_9.cpp)]

### <a name="comments"></a>Commenti

Questo esempio produce il seguente output:

```Output
aristotle ate 50 times.
descartes ate 50 times.
hobbes ate 50 times.
socrates ate 50 times.
plato ate 50 times.
```

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `philosophers-join.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc philosophers-join. cpp**

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)<br/>
[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)
