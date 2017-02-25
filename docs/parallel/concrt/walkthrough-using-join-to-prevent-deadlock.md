---
title: "Procedura dettagliata: Uso della classe join per impedire un deadlock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "impedire deadlock con join [Runtime di concorrenza]"
  - "deadlock, prevenzione [Runtime di concorrenza]"
  - "join non-greedy, esempio"
  - "join (classe), esempio"
ms.assetid: d791f697-bb93-463e-84bd-5df1651b7446
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Procedura dettagliata: Uso della classe join per impedire un deadlock
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene utilizzato il problema dei filosofi a cena per illustrare come utilizzare la classe [concurrency::join](../../parallel/concrt/reference/join-class.md) per impedire un deadlock nell'applicazione.  In un'applicazione software il *deadlock* si verifica quando due o più processi contengono ognuno una risorsa e attendono reciprocamente che l'altro processo rilasci l'altra risorsa.  
  
 Il problema dei filosofi a cena è un esempio specifico del set generale di problemi che si possono verificare quando un set di risorse è condiviso tra più processi simultanei.  
  
## Prerequisiti  
 Prima di iniziare questa procedura dettagliata, leggere gli argomenti seguenti:  
  
-   [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
  
-   [Procedura dettagliata: Creazione di un'applicazione basata sugli agenti](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md)  
  
-   [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
  
-   [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
  
-   [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)  
  
##  <a name="top"></a> Sezioni  
 In questa procedura dettagliata sono contenute le sezioni seguenti:  
  
-   [Problema dei filosofi a cena](#problem)  
  
-   [Implementazione naïve](#deadlock)  
  
-   [Utilizzo della classe join per impedire un deadlock](#solution)  
  
##  <a name="problem"></a> Problema dei filosofi a cena  
 Il problema dei filosofi a cena illustra come si verifica un deadlock in un'applicazione.  In questo problema, cinque filosofi siedono a una tavola rotonda.  I filosofi alternano momenti durante i quali meditare e momenti durante i quali mangiare.  Ogni filosofo deve condividere un bastoncino con il vicino a sinistra e un altro bastoncino con il vicino a destra.  Nella figura seguente viene illustrato questo schema.  
  
 ![Problema dei filosofi a cena](../../parallel/concrt/media/dining_philosophersproblem.png "Dining\_PhilosophersProblem")  
  
 Per mangiare un filosofo deve avere due bastoncini.  Se ogni filosofo ha un solo bastoncino e deve aspettare l'altro bastoncino, nessun filosofo potrà mangiare e tutti morirebbero di fame.  
  
 \[[Top](#top)\]  
  
##  <a name="deadlock"></a> Implementazione naïve  
 Nell'esempio seguente viene illustrata un'implementazione naïve del problema dei filosofi a cena.  La classe `philosopher` che deriva da [concurrency::agent](../../parallel/concrt/reference/agent-class.md) consente a ogni filosofo di agire indipendentemente.  Nell'esempio viene utilizzata una matrice condivisa di oggetti [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md) per concedere a ogni oggetto `philosopher` l'accesso esclusivo a una coppia di bastoncini.  
  
 Per correlare l'implementazione all'illustrazione, la classe `philosopher` rappresenta un solo filosofo.  La variabile `int` rappresenta ogni bastoncino.  Gli oggetti `critical_section` fungono da contenitori per i bastoncini.  Il metodo `run` simula la vita del filosofo.  Il metodo `think` simula l'atto di pensare e il metodo `eat` simula l'atto di mangiare.  
  
 Un oggetto `philosopher` blocca entrambi gli oggetti `critical_section` per simulare la rimozione dei bastoncini dai contenitori prima di chiamare il metodo `eat`.  Dopo la chiamata a `eat`, l'oggetto `philosopher` restituisce i bastoncini ai contenitori impostando di nuovo gli oggetti `critical_section` sullo stato sbloccato.  
  
 Il metodo `pickup_chopsticks` illustra dove si può verificare il deadlock.  Se ogni oggetto `philosopher` può accedere a uno dei blocchi, nessun oggetto `philosopher` potrà continuare poiché l'altro blocco viene controllato da un altro oggetto `philosopher`.  
  
## Esempio  
  
### Descrizione  
  
### Codice  
 [!code-cpp[concrt-philosophers-deadlock#1](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_1.cpp)]  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `philosophers-deadlock.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc philosophers\-deadlock.cpp**  
  
 \[[Top](#top)\]  
  
##  <a name="solution"></a> Utilizzo della classe join per impedire un deadlock  
 In questa sezione viene illustrato come utilizzare i buffer dei messaggi e le funzioni di passaggio dei messaggi per eliminare la possibilità di deadlock.  
  
 Per correlare questo esempio al precedente, la classe `philosopher` sostituisce ogni oggetto `critical_section` utilizzando un oggetto [concurrency::unbounded\_buffer](../Topic/unbounded_buffer%20Class.md) e un oggetto `join`.  L'oggetto `join` funge da arbitro che fornisce i bastoncini al filosofo.  
  
 In questo esempio viene utilizzata la classe `unbounded_buffer` poiché quando una destinazione riceve un messaggio da un oggetto `unbounded_buffer`, il messaggio viene rimosso dalla coda di messaggi.  In questo modo un oggetto `unbounded_buffer` che contiene un messaggio può indicare che è disponibile il bastoncino.  Un oggetto `unbounded_buffer` che non contiene messaggi indica che il bastoncino è in uso.  
  
 In questo esempio viene utilizzato un oggetto `join` non\-greedy poiché un join non\-greedy concede a ogni oggetto `philosopher` l'accesso a entrambi i bastoncini solo quando entrambi gli oggetti `unbounded_buffer` contengono un messaggio.  Un join greedy non impedirebbe un deadlock poiché un join greedy accetta i messaggi non appena diventano disponibili.  Un deadlock può verificarsi se tutti gli oggetti `join` greedy ricevono uno dei messaggi ma attendono all'infinito che l'altro messaggio diventi disponibile.  
  
 Per ulteriori informazioni sui join greedy e non\-greedy e le differenze tra i vari tipi di buffer dei messaggi, vedere [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
#### Per impedire un deadlock in questo esempio  
  
1.  Rimuovere dall'esempio il codice seguente.  
  
     [!code-cpp[concrt-philosophers-deadlock#2](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_2.cpp)]  
  
2.  Modificare il tipo dei membri dati `_left` e `_right` della classe `philosopher` con `unbounded_buffer`.  
  
     [!code-cpp[concrt-philosophers-join#2](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_3.cpp)]  
  
3.  Modificare il costruttore `philosopher` per accettare gli oggetti `unbounded_buffer` come parametri.  
  
     [!code-cpp[concrt-philosophers-join#3](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_4.cpp)]  
  
4.  Modificare il metodo `pickup_chopsticks` in modo da utilizzare un oggetto `join` non\-greedy per ricevere i messaggi dai buffer dei messaggi per entrambi i bastoncini.  
  
     [!code-cpp[concrt-philosophers-join#4](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_5.cpp)]  
  
5.  Modificare il metodo `putdown_chopsticks` per rilasciare l'accesso ai bastoncino inviando un messaggio ai buffer dei messaggi per entrambi i bastoncini.  
  
     [!code-cpp[concrt-philosophers-join#5](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_6.cpp)]  
  
6.  Modificare il metodo `run` per contenere i risultati del metodo `pickup_chopsticks` e passarli al metodo `putdown_chopsticks`.  
  
     [!code-cpp[concrt-philosophers-join#6](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_7.cpp)]  
  
7.  Modificare la dichiarazione della variabile `chopsticks` nella funzione `wmain` per essere una matrice di oggetti `unbounded_buffer` contenente ognuno un messaggio.  
  
     [!code-cpp[concrt-philosophers-join#7](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_8.cpp)]  
  
## Esempio  
  
### Descrizione  
 Di seguito viene illustrato l'esempio completato che utilizza oggetti `join` non\-greedy per eliminare il rischio di deadlock.  
  
### Codice  
 [!code-cpp[concrt-philosophers-join#1](../../parallel/concrt/codesnippet/CPP/walkthrough-using-join-to-prevent-deadlock_9.cpp)]  
  
### Commenti  
 Questo esempio produce l'output che segue.  
  
  **aristotle ate 50 times.**  
**descartes ate 50 times.**  
**hobbes ate 50 times.**  
**socrates ate 50 times.**  
**plato ate 50 times.**   
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `philosophers-join.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc philosophers\-join.cpp**  
  
 \[[Top](#top)\]  
  
## Vedere anche  
 [Procedure dettagliate del runtime di concorrenza](../../parallel/concrt/concurrency-runtime-walkthroughs.md)   
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)