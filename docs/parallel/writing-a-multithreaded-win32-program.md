---
title: Scrittura di un programma multithread Win32 | Microsoft Docs
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
ms.openlocfilehash: 266bb7aa664489ee23c39554ebc91d1f99336f7e
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42541422"
---
# <a name="writing-a-multithreaded-win32-program"></a>Scrittura di un programma multithread Win32
Quando si scrive un programma a thread multipli, è necessario coordinare il comportamento e [l'uso delle risorse del programma](#_core_sharing_common_resources_between_threads). È anche necessario assicurarsi che ogni thread riceve [il proprio stack](#_core_thread_stacks).  
  
##  <a name="_core_sharing_common_resources_between_threads"></a> Condivisione di risorse comuni tra i thread  
  
> [!NOTE]
>  Per informazioni analoghe dal punto di vista di MFC, vedere [Multithreading: suggerimenti sulla programmazione](../parallel/multithreading-programming-tips.md) e [Multithreading: quando usare le classi di sincronizzazione](../parallel/multithreading-when-to-use-the-synchronization-classes.md).  
  
Ogni thread dispone di un proprio stack e registra la propria copia della CPU. Altre risorse, ad esempio file, i dati statici e della memoria dell'heap, vengono condivisi da tutti i thread nel processo. È necessario sincronizzare i thread che utilizzano le risorse comuni. Win32 offre diversi modi per sincronizzare le risorse, inclusi i semafori, sezioni critiche, gli eventi e i mutex.  
  
Quando più thread accedono ai dati statici, il programma deve fornire per i conflitti di risorse possibili. Si consideri un programma in cui un thread aggiorna una struttura di dati statici che contiene *x*,*y* coordinate per gli elementi da visualizzare da un altro thread. Se il thread di aggiornamento viene modificato il *x* coordinare e viene interrotto prima può cambiare il *y* coordinate, il thread di visualizzazione che venga eseguito prima il *y* coordinata è aggiornato. L'elemento verrà visualizzato in una posizione non valida. È possibile evitare questo problema usando i semafori per controllare l'accesso alla struttura.  
  
Un mutex (abbreviazione di *Mutual*ual *ex*exclusion) è una soluzione di comunicazione tra thread o processi in esecuzione in modo asincrono una da altra. Questa comunicazione viene in genere usata per coordinare le attività di più thread o processi, in genere controllando l'accesso a una risorsa condivisa tramite il blocco e sblocco della risorsa. Per risolvere il problema *x*,*y* problema di aggiornamento delle coordinate, il thread di aggiornamento imposta un mutex per indicare che la struttura dei dati è in uso prima di eseguire l'aggiornamento. , Il mutex dopo che erano state elaborate entrambe le coordinate. Il thread di visualizzazione deve attendere per il mutex essere chiari prima di aggiornare la visualizzazione. Questo processo di attesa di un mutex viene spesso definito il blocco su un mutex perché il processo è bloccato e non può continuare fino a quando non cancella il mutex.  
  
Il programma di Bounce. c illustrato nella [C programma Multithread di esempio](../parallel/sample-multithread-c-program.md) Usa un mutex denominato `ScreenMutex` per coordinare gli aggiornamenti della schermata. Ogni volta che uno dei thread visualizzato è pronto per scrivere nella schermata di chiama `WaitForSingleObject` con l'handle `ScreenMutex` e la costante INFINITE per indicare che il `WaitForSingleObject` chiamata deve bloccare il mutex e verifica il timeout. Se `ScreenMutex` è evidente, la funzione di attesa definisce il mutex in modo che altri thread non può interferire con la visualizzazione e continua l'esecuzione del thread. In caso contrario, il thread si blocca fino a quando non cancella il mutex. Quando il thread ha completato l'aggiornamento della visualizzazione, il mutex viene rilasciato tramite una chiamata `ReleaseMutex`.  
  
Viene visualizzato sullo schermo e dati statici sono solo due delle risorse che richiedono una gestione accurata. Ad esempio, il programma potrebbe avere più thread accesso al file stesso. Poiché un altro thread potrà avere spostato il puntatore del file, ogni thread deve reimpostare il puntatore del file prima della lettura o scrittura. Inoltre, ogni thread necessario assicurarsi che non è interrotto tra il momento in cui che posiziona il puntatore e l'ora in cui che accede al file. Questi thread devono usare un semaforo per coordinare l'accesso al file facendo precedere ogni accesso al file con `WaitForSingleObject` e `ReleaseMutex` chiamate. L'esempio di codice seguente illustra questa tecnica:  
  
```  
HANDLE    hIOMutex= CreateMutex (NULL, FALSE, NULL);  
  
WaitForSingleObject( hIOMutex, INFINITE );  
fseek( fp, desired_position, 0L );  
fwrite( data, sizeof( data ), 1, fp );  
ReleaseMutex( hIOMutex);  
```  
  
##  <a name="_core_thread_stacks"></a> Stack di thread  
 
Tutti gli spazi di un'applicazione predefinita dello stack viene allocato per il primo thread di esecuzione, che è noto come il thread 1. Di conseguenza, è necessario specificare la quantità di memoria da allocare per uno stack separato per ogni thread aggiuntivo, il programma deve. Il sistema operativo alloca spazio aggiuntivo dello stack del thread, se necessario, ma è necessario specificare un valore predefinito.  
  
Il primo argomento in di `_beginthread` chiamata è un puntatore al `BounceProc` funzione che esegue il thread. Il secondo argomento specifica le dimensioni predefinite dello stack del thread. L'ultimo argomento è un numero di ID che viene passato a `BounceProc`. `BounceProc` Usa il numero di ID per il seeding del generatore di numeri casuali e per selezionare l'attributo color del thread e carattere da visualizzare.  
  
Thread che effettuano chiamate alla libreria di runtime di C o all'API Win32 deve consentire spazio dello stack sufficiente per la libreria e chiamano le funzioni dell'API. C `printf` funzione richiede più di 500 byte di spazio dello stack e si deve avere 2 KB di spazio dello stack disponibile durante la chiamata di routine dell'API Win32.  
  
Poiché ogni thread ha un proprio stack, è possibile evitare potenziali conflitti rispetto agli elementi di dati, usando come quantità ridotta di dati statici come possibili. Progettare il programma da usare le variabili dello stack automatici per tutti i dati che possono essere privati a un thread. Le uniche variabili globali nel programma di Bounce. c sono i mutex o le variabili che mai modificati dopo l'inizializzazione.  
  
Win32 offre inoltre archiviazione Thread-Local (TLS) per archiviare i dati per ogni thread. Per altre informazioni, vedere [Thread Local Storage (TLS)](../parallel/thread-local-storage-tls.md).  
  
## <a name="see-also"></a>Vedere anche  
 
[Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)