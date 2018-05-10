---
title: Scrittura di un programma multithread Win32 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- thread stacks [C++]
- resources [C++], multithreading
- stacks [C++]
- shared resources [C++]
- threading [C++], sharing common resources
- multithreading [C++], thread stacks
- multithreading [C++], sharing common resources
- mutual exclusion [C++]
- communications [C++], between threads
- mutex [C++]
- threading [C++], thread stacks
ms.assetid: 1415f47d-417f-4f42-949b-946fb28aab0e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2d88add7830316ae192a728f9c9ff10320657eaf
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="writing-a-multithreaded-win32-program"></a>Scrittura di un programma multithread Win32
Quando si scrive un programma con più thread, è necessario coordinare il comportamento e [l'uso delle risorse del programma](#_core_sharing_common_resources_between_threads). È inoltre necessario assicurarsi che ogni thread riceva [il proprio stack](#_core_thread_stacks).  
  
##  <a name="_core_sharing_common_resources_between_threads"></a> Condivisione di risorse comuni tra thread  
  
> [!NOTE]
>  Per informazioni analoghe dal punto di vista MFC, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md) e [Multithreading: quando utilizzare le classi di sincronizzazione](../parallel/multithreading-when-to-use-the-synchronization-classes.md).  
  
 Ogni thread dispone di un proprio stack e registra la propria copia della CPU. Altre risorse, quali file, i dati statici e della memoria dell'heap, vengono condivisi da tutti i thread nel processo. È necessario sincronizzare i thread utilizzano queste risorse comuni. Win32 fornisce diversi metodi per sincronizzare le risorse, inclusi i semafori, sezioni critiche, eventi e i mutex.  
  
 Quando più thread accedono ai dati statici, è necessario fornire il programma per i conflitti di risorse possibili. Si consideri un programma in cui un thread aggiorna una struttura di dati statici contenente *x*,*y* coordinate per gli elementi da visualizzare da un altro thread. Se il thread di aggiornamento modifica il *x* coordinare e viene interrotto prima può cambiare il *y* coordinate, il thread di visualizzazione che venga eseguito prima il *y* coordinata è aggiornato. L'elemento verrà visualizzato nella posizione errata. È possibile evitare questo problema utilizzando i semafori per controllare l'accesso alla struttura.  
  
 Un mutex (abbreviazione di *Mutual*registrazione accesso utenti *ex*exclusion) è una soluzione di comunicazione tra thread o processi in esecuzione in modo asincrono una da altra. Questa comunicazione viene in genere utilizzata per coordinare le attività di più thread o processi, in genere controllando l'accesso a una risorsa condivisa tramite il blocco e sblocco della risorsa. Per risolvere il problema *x*,*y* problema di aggiornamento delle coordinate, il thread di aggiornamento acquisisce un mutex che indica che la struttura dei dati è in uso prima di eseguire l'aggiornamento. , Il mutex dopo le coordinate fosse state elaborate. Il thread di visualizzazione deve attendere di essere crittografato prima di aggiornare la visualizzazione del mutex. Questo processo di attesa per un mutex è spesso definito blocco su un mutex, perché il processo è bloccato e non può continuare fino al rilascio del mutex.  
  
 Nel programma Bounce illustrato in [Sample Multithread C Program](../parallel/sample-multithread-c-program.md) Usa un mutex denominato `ScreenMutex` per coordinare gli aggiornamenti dello schermo. Ogni volta che uno dei thread di visualizzazione è pronto per la scrittura sullo schermo, viene chiamato **WaitForSingleObject** con l'handle per `ScreenMutex` e costante **infinito** per indicare che il  **WaitForSingleObject** sul mutex e timeout non deve bloccare la chiamata. Se `ScreenMutex` è deselezionata, la funzione di attesa definisce il mutex, in modo che altri thread non interferiscano con la visualizzazione e continua l'esecuzione del thread. In caso contrario, il thread si blocca fino al rilascio del mutex. Quando il thread ha completato l'aggiornamento della visualizzazione, viene rilasciato il mutex chiamando **ReleaseMutex**.  
  
 Schermata Visualizza e i dati statici sono solo due delle risorse che richiedono un'attenta gestione. Ad esempio, il programma potrebbe essere più thread accedono allo stesso file. Poiché un altro thread potrebbe avere spostato il puntatore del file, ogni thread deve reimpostare il puntatore del file prima di lettura o scrittura. Inoltre, ogni thread deve assicurarsi che non si è interrotto tra il momento in cui che posiziona il puntatore e l'ora in cui che accede al file. Questi thread devono utilizzare un semaforo per coordinare l'accesso al file facendo precedere ogni accesso al file con **WaitForSingleObject** e **ReleaseMutex** chiamate. L'esempio di codice seguente illustra questa tecnica:  
  
```  
HANDLE    hIOMutex= CreateMutex (NULL, FALSE, NULL);  
  
WaitForSingleObject( hIOMutex, INFINITE );  
fseek( fp, desired_position, 0L );  
fwrite( data, sizeof( data ), 1, fp );  
ReleaseMutex( hIOMutex);  
```  
  
##  <a name="_core_thread_stacks"></a> Stack di thread  
 Tutto lo spazio dello stack predefinito di un'applicazione viene allocato per il primo thread di esecuzione, è noto come thread 1. Di conseguenza, è necessario specificare la quantità di memoria da allocare per uno stack separato per ogni thread aggiuntivo il programma è necessario. Il sistema operativo alloca spazio dello stack aggiuntive per il thread, se necessario, ma è necessario specificare un valore predefinito.  
  
 Il primo argomento di `_beginthread` chiamata è un puntatore al **BounceProc** funzione che esegue il thread. Il secondo argomento specifica la dimensione predefinita per il thread. L'ultimo argomento è un numero di ID che viene passato a **BounceProc**. **BounceProc** Usa il numero di ID per il seeding del generatore di numeri caso e per selezionare l'attributo color del thread e carattere da visualizzare.  
  
 I thread che chiama la libreria di run-time C e l'API Win32 devono consentire di sufficiente spazio dello stack per la libreria e funzioni API chiamate. C `printf` funzione richiede più di 500 byte di spazio dello stack e deve disporre di 2 KB di spazio nello stack, quando si chiama una routine dell'API Win32.  
  
 Poiché ogni thread dispone di un proprio stack, è possibile evitare potenziali conflitti rispetto agli elementi di dati come dati statici minimo possibile. Progettare il programma di utilizzare le variabili dello stack automatico per tutti i dati che possono essere privati a un thread. Le uniche variabili globali nel programma Bounce sono mutex oppure variabili che rimangano invariati dopo l'inizializzazione.  
  
 Win32 fornisce inoltre l'archiviazione Thread-Local (TLS) per archiviare i dati per ogni thread. Per ulteriori informazioni, vedere [Thread Local Storage (TLS)](../parallel/thread-local-storage-tls.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)