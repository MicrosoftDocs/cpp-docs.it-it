---
title: 'Procedura dettagliata: Utilizzo di join per impedire un Deadlock | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- preventing deadlock with joins [Concurrency Runtime]
- deadlock, preventing [Concurrency Runtime]
- non-greedy joins, example
- join class, example
ms.assetid: d791f697-bb93-463e-84bd-5df1651b7446
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5deb501cc05c2a771b6e14d5091b1baa95f2f622
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33693344"
---
# <a name="walkthrough-using-join-to-prevent-deadlock"></a>Procedura dettagliata: Uso della classe join per impedire un deadlock
Questo argomento viene utilizzato il problema dei filosofi a cena per illustrare come utilizzare il [Concurrency:: join](../../parallel/concrt/reference/join-class.md) classe per impedire un deadlock nell'applicazione. In un'applicazione software si verifica un *deadlock* quando due o più processi bloccano ognuno una risorsa e attendono entrambi che un altro processo rilasci altre risorse.  
  
 Il problema dei filosofi a cena è un esempio specifico del set generale di problemi che possono verificarsi quando un set di risorse è condiviso tra più processi simultanei.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:  
  
- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
- [Procedura dettagliata: creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)  
  
- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
- [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)  
  
##  <a name="top"></a> Sezioni  
 Questa procedura dettagliata contiene le sezioni seguenti:  
  
- [Il problema dei filosofi a cena](#problem)  
  
- [Un'implementazione Naïve](#deadlock)  
  
- [Uso della classe join per impedire un Deadlock](#solution)  
  
##  <a name="problem"></a> Il problema dei filosofi a cena  
 Il problema dei filosofi a cena illustra il deadlock si verifica in un'applicazione. Questo problema, cinque filosofi siedono una tavola rotonda. Ogni filosofo Alterna attrezzature ed pensiero. Ogni filosofo deve condividere un bastoncino con il router adiacente a sinistra e a un altro bastoncino con il router adiacente a destra. Nella figura seguente viene mostrato il layout.  
  
 ![Il problema dei filosofi offerto](../../parallel/concrt/media/dining_philosophersproblem.png "dining_philosophersproblem")  
  
 Per eat, un filosofo deve avere due bastoncini. Se ogni filosofo ha un solo bastoncino ed è in attesa di un altro, quindi è non possibile eat Nessun filosofo e tutti mancanza di risorse.  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="deadlock"></a> Un'implementazione Naïve  
 Nell'esempio seguente viene illustrata un'implementazione di naïve del problema dei filosofi a cena. Il `philosopher` classe che deriva da [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md), consente a ogni filosofo di agire in modo indipendente. L'esempio utilizza una matrice condivisa di [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) oggetti per concedere a ogni `philosopher` l'accesso esclusivo a una coppia di bastoncini dell'oggetto.  
  
 Per correlare l'implementazione all'illustrazione, la `philosopher` classe rappresenta un solo filosofo. Un `int` variabile rappresenta ogni bastoncino. Il `critical_section` oggetti fungono da contenitori per bastoncini. Il `run` metodo simula il ciclo di vita del filosofo. Il `think` metodo simula l'atto di pensare e `eat` metodo simula l'atto di mangiare.  
  
 A `philosopher` oggetto Blocca entrambi `critical_section` oggetti per simulare la rimozione di bastoncini dai titolari del prima che chiama il `eat` metodo. Dopo la chiamata a `eat`, `philosopher` oggetto restituisce i bastoncini ai contenitori impostando il `critical_section` oggetti nuovamente sullo stato sbloccato.  
  
 Il `pickup_chopsticks` metodo illustra in cui possono verificarsi deadlock. Se ogni `philosopher` oggetto accede a uno dei blocchi, quindi no `philosopher` dell'oggetto può continuare perché l'altro blocco è controllato da un altro `philosopher` oggetto.  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
  
### <a name="code"></a>Codice  
 [!code-cpp[concrt-philosophers-deadlock#1](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_1.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `philosophers-deadlock.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc philosophers-deadlock. cpp**  
  
 [[Torna all'inizio](#top)]  
  
##  <a name="solution"></a> Uso della classe join per impedire un Deadlock  
 In questa sezione viene illustrato come utilizzare funzioni di passaggio dei messaggi e buffer dei messaggi per eliminare la possibilità di deadlock.  
  
 Per correlare questo esempio al precedente, il `philosopher` classe sostituisce ogni `critical_section` oggetto utilizzando un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto e un `join` oggetto. Il `join` oggetto funge da un'analisi che fornisce i bastoncini al filosofo.  
  
 Questo esempio viene utilizzato il `unbounded_buffer` classe perché quando una destinazione riceve un messaggio da un `unbounded_buffer` dell'oggetto, il messaggio viene rimosso dalla coda di messaggi. In questo modo un `unbounded_buffer` oggetto che contiene un messaggio per indicare che il bastoncino è disponibile. Un `unbounded_buffer` oggetto che non contiene messaggi indica che il bastoncino è in uso.  
  
 Questo esempio viene utilizzato un non-greedy `join` oggetto perché un join non-greedy concede a ogni `philosopher` oggetto di accesso a entrambi i bastoncini solo quando entrambi `unbounded_buffer` gli oggetti contengono un messaggio. Un join greedy potrebbe non impedire un deadlock perché un join greedy accetta i messaggi non appena diventano disponibili. Deadlock può verificarsi se tutti greedy `join` oggetti venga visualizzato uno dei due messaggi ma attesa infinita per gli altri diventi disponibile.  
  
 Per ulteriori informazioni sui join greedy e non greedy e le differenze tra i vari tipi di buffer di messaggi, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
#### <a name="to-prevent-deadlock-in-this-example"></a>Per impedire un deadlock in questo esempio  
  
1.  Rimuovere il codice seguente dell'esempio.  
  
 [!code-cpp[concrt-philosophers-deadlock#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_2.cpp)]  
  
2.  Modificare il tipo del `_left` e `_right` membri dati di `philosopher` classe `unbounded_buffer`.  
  
 [!code-cpp[concrt-philosophers-join#2](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_3.cpp)]  
  
3.  Modificare il `philosopher` costruttore abbiano `unbounded_buffer` oggetti come parametri.  
  
 [!code-cpp[concrt-philosophers-join#3](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_4.cpp)]  
  
4.  Modificare il `pickup_chopsticks` metodo da utilizzare un non-greedy `join` oggetto per ricevere messaggi dal buffer dei messaggi per entrambi i bastoncini.  
  
 [!code-cpp[concrt-philosophers-join#4](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_5.cpp)]  
  
5.  Modificare il `putdown_chopsticks` metodo per rilasciare l'accesso per i bastoncini inviando un messaggio per il buffer dei messaggi per entrambi i bastoncini.  
  
 [!code-cpp[concrt-philosophers-join#5](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_6.cpp)]  
  
6.  Modificare il `run` metodo per archiviare i risultati del `pickup_chopsticks` (metodo) e per passare i risultati per il `putdown_chopsticks` metodo.  
  
 [!code-cpp[concrt-philosophers-join#6](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_7.cpp)]  
  
7.  Modificare la dichiarazione del `chopsticks` variabile il `wmain` funzione come una matrice di `unbounded_buffer` gli oggetti che ognuno di un messaggio.  
  
 [!code-cpp[concrt-philosophers-join#7](../../parallel/concrt/codesnippet/cpp/walkthrough-using-join-to-prevent-deadlock_8.cpp)]  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Di seguito è riportato l'esempio completo che usa non-greedy `join` oggetti per eliminare il rischio di deadlock.  
  
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
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `philosophers-join.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc philosophers-join. cpp**  
  
 [[Torna all'inizio](#top)]  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate del Runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)
