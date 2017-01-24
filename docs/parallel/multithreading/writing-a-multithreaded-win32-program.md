---
title: "Scrittura di un programma multithread Win32 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "comunicazioni [C++], tra thread"
  - "multithreading [C++], condivisione di risorse comuni"
  - "multithreading [C++], stack di thread"
  - "mutex [C++]"
  - "esclusione reciproca [C++]"
  - "risorse [C++], multithreading"
  - "risorse condivise [C++]"
  - "stack [C++]"
  - "thread (stack) [C++]"
  - "threading [C++], condivisione di risorse comuni"
  - "threading [C++], stack di thread"
ms.assetid: 1415f47d-417f-4f42-949b-946fb28aab0e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Scrittura di un programma multithread Win32
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si scrive un programma a thread multipli, è necessario coordinarne il funzionamento con la [condivisione delle risorse del programma](#_core_sharing_common_resources_between_threads).  È inoltre necessario assicurarsi che ogni thread riceva [il proprio stack](#_core_thread_stacks).  
  
##  <a name="_core_sharing_common_resources_between_threads"></a> Condivisione delle risorse comuni tra i thread  
  
> [!NOTE]
>  Per informazioni simili sul punto di vista MFC, vedere [Multithreading: suggerimenti sulla programmazione](../../parallel/multithreading-programming-tips.md) e [Multithreading: quando utilizzare le classi di sincronizzazione](../../parallel/multithreading-when-to-use-the-synchronization-classes.md).  
  
 Ogni thread dispone del proprio stack e della propria copia dei registri della CPU.  Altre risorse, come i file, i dati statici e la memoria dell'heap, sono condivise da tutti i thread del processo.  È necessario che i thread che utilizzano queste risorse comuni siano sincronizzati.  In Win32 vi sono varie modalità di sincronizzazione delle risorse, compresi i semafori, le sezioni critiche, gli eventi e i mutex.  
  
 Quando più thread accedono a dati statici, è necessario che il programma sia in grado di risolvere eventuali conflitti di risorse.  Si consideri un programma in cui un thread aggiorna una struttura di dati statici contenente le coordinate *x*,*y* per gli elementi che devono essere visualizzati da un altro thread.  Se il thread di aggiornamento altera la coordinata *x* e viene interrotto prima che la coordinata *y* venga modificata, è possibile che il thread di visualizzazione venga eseguito prima dell'aggiornamento della coordinata *y*.  L'elemento pertanto verrà visualizzato nella posizione errata.  È possibile evitare il problema utilizzando dei semafori per controllare l'accesso alla struttura.  
  
 Un mutex \(abbreviazione di mutual exclusion, che significa "esclusione reciproca"\) è una soluzione di comunicazione tra thread o processi in esecuzione asincrona.  Tale comunicazione in genere è utilizzata per coordinare le attività di più thread o processi, di solito controllando l'accesso a una risorsa condivisa tramite il blocco e lo sblocco della risorsa stessa.  Per risolvere il problema di aggiornamento delle coordinate *x*,*y*, il thread di aggiornamento acquisisce un mutex per indicare che la struttura di dati è in uso prima di eseguire l'aggiornamento.  Dopo l'elaborazione di entrambe le coordinate, il mutex verrà rilasciato.  È necessario che il thread di visualizzazione attenda la cancellazione del mutex per aggiornare la visualizzazione.  Questo processo di attesa di un mutex viene spesso definito blocco su un mutex, in quanto il processo risulta bloccato e non può continuare fino a quando il mutex non viene rilasciato.  
  
 Nel programma Bounce.c illustrato in [Programma multithread di esempio in linguaggio C](../../parallel/sample-multithread-c-program.md) viene utilizzata un'esclusione reciproca denominata `ScreenMutex` per coordinare gli aggiornamenti dello schermo.  Ogni volta che uno dei thread di visualizzazione è pronto per la scrittura sullo schermo, viene chiamato **WaitForSingleObject** con l'handle per `ScreenMutex` e la costante **INFINITE** per indicare che la chiamata a **WaitForSingleObject** deve bloccarsi sul mutex e non in base a un timeout.  Se `ScreenMutex` è libero, il mutex viene impostato dalla funzione di attesa in modo che gli altri thread non interferiscano con la visualizzazione e l'esecuzione del thread continua.  In caso contrario, il thread resta bloccato fino al rilascio del mutex.  Quando il thread ha completato l'aggiornamento della visualizzazione, il mutex viene rilasciato mediante la chiamata a **ReleaseMutex**.  
  
 Le visualizzazioni su schermo e i dati statici sono solo due delle risorse che richiedono una gestione particolarmente attenta.  Nel programma, ad esempio, potrebbero essere presenti più thread che accedono allo stesso file.  Poiché un altro thread potrebbe avere spostato il puntatore del file, è necessario che ogni thread reimposti il puntatore del file prima di qualsiasi operazione di lettura o scrittura.  Inoltre, è necessario assicurarsi che un thread non venga interrotto tra il momento del posizionamento del puntatore e quello dell'accesso al file.  In questo caso,è consigliabile l'utilizzo di un semaforo per coordinare l'accesso al file facendo precedere ogni accesso al file da una chiamata a **WaitForSingleObject** e facendolo seguire da una chiamata a **ReleaseMutex**.  Questa tecnica viene illustrata nell'esempio di codice riportato di seguito.  
  
```  
HANDLE    hIOMutex= CreateMutex (NULL, FALSE, NULL);  
  
WaitForSingleObject( hIOMutex, INFINITE );  
fseek( fp, desired_position, 0L );  
fwrite( data, sizeof( data ), 1, fp );  
ReleaseMutex( hIOMutex);  
```  
  
##  <a name="_core_thread_stacks"></a> Gli stack dei thread  
 Tutto lo spazio di stack predefinito di un'applicazione è allocato al primo thread di esecuzione, definito thread 1.  È pertanto necessario specificare quanta memoria allocare per uno stack separato per ogni thread aggiuntivo richiesto dal programma.  Se necessario, il sistema può assegnare al thread ulteriore spazio di stack, ma è necessario specificare un valore predefinito.  
  
 Il primo argomento della chiamata a `_beginthread` è un puntatore alla funzione **BounceProc** che esegue i thread.  Il secondo argomento specifica la dimensione predefinita dello stack per il thread.  L'ultimo argomento è un numero ID passato a **BounceProc**.  Questo ID viene utilizzato da **BounceProc** per avviare il generatore di numeri casuali e per selezionare l'attributo relativo al colore e il carattere di visualizzazione del thread.  
  
 È necessario che i thread che chiamano la libreria di runtime del linguaggio C o l'API Win32 dispongano di uno spazio di stack sufficiente per la libreria e per le funzioni API chiamate.  La funzione `printf` del linguaggio C richiede uno spazio di stack di oltre 500 byte ed è necessario disporre di 2 KB di spazio nello stack quando si chiamano le routine dell'API Win32.  
  
 Poiché ogni thread dispone di un proprio stack, è possibile evitare potenziali collisioni tra elementi di dati utilizzando la minor quantità possibile di dati statici.  Si consiglia di progettare il programma in modo che vengano utilizzate le variabili automatiche di stack per tutti i dati che possono essere privati rispetto a un thread.  Le uniche variabili globali del programma Bounce.c sono mutex oppure variabili che non vengono modificate dopo l'inizializzazione.  
  
 Win32 include inoltre la memoria locale di thread \(TLS, Thread\-Local Storage\) per l'archiviazione dei dati in base al thread.  Per ulteriori informazioni, vedere [Archiviazione locale di thread \(TLS\)](../../parallel/thread-local-storage-tls.md).  
  
## Vedere anche  
 [Multithreading con C e Win32](../../parallel/multithreading-with-c-and-win32.md)