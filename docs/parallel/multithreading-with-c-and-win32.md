---
title: Multithreading con C e Win32
ms.date: 08/09/2019
helpviewer_keywords:
- Windows API [C++], multithreading
- multithreading [C++], C and Win32
- Visual C, multithreading
- Win32 applications [C++], multithreading
- threading [C++], C and Win32
- Win32 [C++], multithreading
- threading [C]
ms.assetid: 67cdc99e-1ad9-452b-a042-ed246b70040e
ms.openlocfilehash: 20f405cfee4d4fc18ce33bc511310e3bd3ee1bf6
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511839"
---
# <a name="multithreading-with-c-and-win32"></a>Multithreading con C e Win32

Microsoft C/C++ Compiler (MSVC) fornisce il supporto per la creazione di applicazioni multithread. Provare a usare più di un thread se l'applicazione deve eseguire operazioni costose che potrebbero causare la mancata risposta dell'interfaccia utente.

Con MSVC sono disponibili diversi modi per programmare con più thread: È possibile utilizzare C++/WinRT e la libreria Windows Runtime, la libreria MFC (Microsoft Foundation Class), C++/CLI e il Runtime .NET oppure la libreria di runtime C e l'API Win32. Questo articolo riguarda il multithreading in C. Per un esempio di codice, vedere il [programma multithread di esempio in C](sample-multithread-c-program.md).

## <a name="multithread-programs"></a>Programmi multithread

Un thread è fondamentalmente un percorso di esecuzione attraverso un programma. È anche la più piccola unità di esecuzione pianificata da Win32. Un thread è costituito da uno stack, dallo stato dei registri della CPU e da una voce nell'elenco di esecuzione dell'utilità di pianificazione di sistema. Ogni thread condivide tutte le risorse del processo.

Un processo è costituito da uno o più thread e dal codice, dai dati e da altre risorse di un programma in memoria. Le risorse tipiche del programma sono file aperti, semafori e memoria allocata in modo dinamico. Un programma viene eseguito quando l'utilità di pianificazione del sistema assegna un controllo di esecuzione dei thread. L'utilità di pianificazione determina i thread da eseguire e il momento in cui devono essere eseguiti. I thread con priorità più bassa potrebbero dover attendere mentre i thread con priorità più alta completano le attività. Nei computer multiprocessore l'utilità di pianificazione può spostare singoli thread in processori diversi per bilanciare il carico della CPU.

Ogni thread in un processo opera in modo indipendente. A meno che non vengano visualizzati tra loro, i thread vengono eseguiti singolarmente e non sono consapevoli degli altri thread in un processo. I thread che condividono risorse comuni, tuttavia, devono coordinare il proprio lavoro usando i semafori o un altro metodo di comunicazione interprocesso. Per ulteriori informazioni sulla sincronizzazione dei thread, vedere [scrittura di un programma multithread Win32](#writing-a-multithreaded-win32-program).

## <a name="library-support-for-multithreading"></a>Supporto della libreria per il multithreading

Tutte le versioni di CRT supportano ora il multithreading, fatta eccezione per le versioni non bloccanti di alcune funzioni. Per altre informazioni, vedere [prestazioni delle librerie multithread](../c-runtime-library/multithreaded-libraries-performance.md). Per informazioni sulle versioni di CRT disponibili per il collegamento con il codice, vedere la pagina relativa alle [funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).

## <a name="include-files-for-multithreading"></a>File di inclusione per il multithreading

I file di inclusione CRT standard dichiarano le funzioni della libreria di runtime C quando sono implementate nelle librerie. Se le opzioni del compilatore specificano le convenzioni di chiamata [__fastcall o __vectorcall](../build/reference/gd-gr-gv-gz-calling-convention.md) , il compilatore presuppone che tutte le funzioni vengano chiamate con la convenzione di chiamata Register. Le funzioni della libreria di runtime utilizzano la convenzione di chiamata C e le dichiarazioni nei file di inclusione standard indicano al compilatore di generare riferimenti esterni corretti a tali funzioni.

## <a name="crt-functions-for-thread-control"></a>Funzioni CRT per il controllo dei thread

Tutti i programmi Win32 hanno almeno un thread. Qualsiasi thread può creare thread aggiuntivi. Un thread può completare il proprio lavoro rapidamente e quindi terminare oppure può rimanere attivo per la durata del programma.

Le librerie CRT forniscono le funzioni seguenti per la creazione e la terminazione di thread: [_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md), [_endthread e _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md).

Le `_beginthread` funzioni `_beginthreadex` e creano un nuovo thread e restituiscono un identificatore del thread se l'operazione ha esito positivo. Il thread termina automaticamente se viene completata l'esecuzione. In alternativa, può terminare se stesso con una chiamata `_endthread` a `_endthreadex`o.

> [!NOTE]
> Se si chiamano routine della fase di esecuzione del linguaggio C da un programma compilato con Libcmt. lib, è necessario avviare i thread `_beginthread` con `_beginthreadex` la funzione o. Non usare le funzioni `ExitThread` Win32 e. `CreateThread` L' `SuspendThread` uso di può causare un deadlock quando più di un thread è bloccato in attesa che il thread sospeso completi l'accesso a una struttura dei dati di runtime del linguaggio C.

###  <a name="_core_the__beginthread_function"></a>Funzioni _beginthread e _beginthreadex

Le `_beginthread` funzioni `_beginthreadex` e creano un nuovo thread. Un thread condivide il codice e i segmenti di dati di un processo con altri thread nel processo, ma ha i propri valori di registro univoci, lo spazio dello stack e l'indirizzo di istruzione corrente. Il sistema concede tempo alla CPU per ogni thread, in modo che tutti i thread in un processo possano essere eseguiti contemporaneamente.

`_beginthread`e `_beginthreadex` sono simili alla funzione [CreateThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createthread) nell'API Win32, ma presentano le differenze seguenti:

- Inizializzano alcune variabili della libreria di runtime C. Questo è importante solo se si usa la libreria di runtime del linguaggio C nei thread.

- `CreateThread`consente di fornire il controllo sugli attributi di sicurezza. È possibile utilizzare questa funzione per avviare un thread in stato Suspended.

`_beginthread`e `_beginthreadex` restituiscono un handle al nuovo thread in caso di esito positivo o un codice di errore se si è verificato un errore.

###  <a name="_core_the__endthread_function"></a>Funzioni _endthread e _endthreadex

La funzione [_endthread](../c-runtime-library/reference/endthread-endthreadex.md) termina un thread creato da `_beginthread` (e allo stesso modo, `_endthreadex` termina un thread creato da `_beginthreadex`). I thread terminano automaticamente al termine. `_endthread`e `_endthreadex` sono utili per la terminazione condizionale all'interno di un thread. Un thread dedicato all'elaborazione delle comunicazioni, ad esempio, può uscire se non è in grado di ottenere il controllo della porta di comunicazione.

## <a name="writing-a-multithreaded-win32-program"></a>Scrittura di un programma multithread Win32

Quando si scrive un programma con più thread, è necessario coordinarne il comportamento e [l'uso delle risorse del programma](#_core_sharing_common_resources_between_threads). Assicurarsi inoltre che ogni thread riceva [il proprio stack](#_core_thread_stacks).

### <a name="_core_sharing_common_resources_between_threads"></a>Condivisione di risorse comuni tra thread

> [!NOTE]
> Per una discussione simile dal punto di vista di MFC, vedere [multithreading: Suggerimenti](multithreading-programming-tips.md) per la [programmazione e multithreading: Quando utilizzare le classi](multithreading-when-to-use-the-synchronization-classes.md)di sincronizzazione.

Ogni thread ha un proprio stack e una propria copia dei registri della CPU. Altre risorse, ad esempio file, dati statici e memoria heap, sono condivise da tutti i thread nel processo. I thread che usano queste risorse comuni devono essere sincronizzati. Win32 offre diversi modi per sincronizzare le risorse, inclusi i semafori, le sezioni critiche, gli eventi e i mutex.

Quando più thread accedono a dati statici, il programma deve fornire i possibili conflitti di risorse. Si consideri un programma in cui un thread aggiorna una struttura di dati statica che contiene le coordinate *x*,*y* per gli elementi che devono essere visualizzati da un altro thread. Se il thread di aggiornamento modifica la coordinata *x* e viene interrotto prima di poter modificare la coordinata *y* , il thread di visualizzazione potrebbe essere pianificato prima dell'aggiornamento della coordinata *y* . L'elemento viene visualizzato nel percorso errato. È possibile evitare questo problema usando i semafori per controllare l'accesso alla struttura.

Un mutex (short per *Mut*registrazione accesso utenti *ex*Clausura) è un modo per comunicare tra thread o processi che vengono eseguiti in modo asincrono l'uno dall'altro. Questa comunicazione può essere usata per coordinare le attività di più thread o processi, in genere controllando l'accesso a una risorsa condivisa bloccando e sbloccando la risorsa. Per risolvere questoproblema di aggiornamento delle coordinate*y* , il thread di aggiornamento imposta un mutex che indica che la struttura dei dati è in uso prima di eseguire l'aggiornamento. Il mutex verrà cancellato dopo l'elaborazione di entrambe le coordinate. Il thread di visualizzazione deve attendere la cancellazione del mutex prima di aggiornare la visualizzazione. Questo processo di attesa di un mutex viene spesso definito *blocco* su un mutex, perché il processo è bloccato e non può continuare finché il mutex non viene cancellato.

Il programma Bounce. c illustrato nel [programma multithread c di esempio](sample-multithread-c-program.md) usa un mutex denominato `ScreenMutex` per coordinare gli aggiornamenti dello schermo. Ogni volta che uno dei thread di visualizzazione è pronto per la scrittura sullo schermo, viene `WaitForSingleObject` chiamato con l'handle `ScreenMutex` a e costante infinito per indicare che `WaitForSingleObject` la chiamata dovrebbe bloccarsi sul mutex e non il timeout. Se `ScreenMutex` è chiaro, la funzione wait imposta il mutex in modo che gli altri thread non possano interferire con la visualizzazione e continuino l'esecuzione del thread. In caso contrario, il thread si blocca fino a quando il mutex non viene cancellato. Quando il thread completa l'aggiornamento della visualizzazione, rilascia il mutex chiamando `ReleaseMutex`.

Gli schermi e i dati statici sono solo due delle risorse che richiedono una gestione attenta. Ad esempio, il programma potrebbe avere più thread che accedono allo stesso file. Poiché un altro thread potrebbe aver spostato il puntatore del file, ogni thread deve reimpostare il puntatore del file prima di leggerlo o scriverlo. Ogni thread deve inoltre assicurarsi che non venga interrotto tra il momento in cui posiziona il puntatore e l'ora di accesso al file. Questi thread devono usare un semaforo per coordinare l'accesso al file racchiudendo ogni accesso ai file `WaitForSingleObject` con `ReleaseMutex` e chiama. Questa tecnica è illustrata nell'esempio di codice seguente:

```C
HANDLE    hIOMutex = CreateMutex (NULL, FALSE, NULL);

WaitForSingleObject( hIOMutex, INFINITE );
fseek( fp, desired_position, 0L );
fwrite( data, sizeof( data ), 1, fp );
ReleaseMutex( hIOMutex);
```

### <a name="_core_thread_stacks"></a>Stack di thread

Tutto lo spazio dello stack predefinito di un'applicazione viene allocato al primo thread di esecuzione, noto come thread 1. Di conseguenza, è necessario specificare la quantità di memoria da allocare per uno stack separato per ogni thread aggiuntivo necessario per il programma. Il sistema operativo alloca ulteriore spazio dello stack per il thread, se necessario, ma è necessario specificare un valore predefinito.

Il primo argomento nella `_beginthread` chiamata è un puntatore `BounceProc` alla funzione che esegue i thread. Il secondo argomento specifica le dimensioni predefinite dello stack per il thread. L'ultimo argomento è un numero ID passato a `BounceProc`. `BounceProc`Usa il numero ID per inizializzare il generatore di numeri casuali e per selezionare l'attributo color del thread e il carattere di visualizzazione.

I thread che effettuano chiamate alla libreria di runtime del linguaggio C o all'API Win32 devono consentire spazio dello stack sufficiente per la libreria e le funzioni API che chiamano. Per la `printf` funzione C sono necessari più di 500 byte di spazio dello stack ed è necessario avere a disposizione 2K byte di spazio dello stack per la chiamata delle routine dell'API Win32.

Poiché ogni thread dispone di un proprio stack, è possibile evitare potenziali collisioni sugli elementi di dati utilizzando come minimo i dati statici possibili. Progettare il programma in modo da usare le variabili dello stack automatico per tutti i dati che possono essere privati per un thread. Le uniche variabili globali nel programma Bounce. c sono mutex o variabili che non cambiano mai dopo l'inizializzazione.

Win32 fornisce anche l'archiviazione locale di thread (TLS) per archiviare i dati per thread. Per altre informazioni, vedere [archiviazione locale di thread (TLS)](thread-local-storage-tls.md).

## <a name="avoiding-problem-areas-with-multithread-programs"></a>Suggerimenti per evitare problemi relativi ai programmi multithread

Esistono diversi problemi che possono verificarsi durante la creazione, il collegamento o l'esecuzione di un programma multithread C. Alcuni dei problemi più comuni sono descritti nella tabella seguente. Per una discussione simile dal punto di vista di MFC, vedere [multithreading: Suggerimenti](multithreading-programming-tips.md)per la programmazione.

|Problema|Probabile motivo|
|-------------|--------------------|
|Viene visualizzata una finestra di messaggio in cui viene indicato che il programma ha causato una violazione di protezione.|Molti errori di programmazione Win32 causano violazioni della protezione. Una causa comune di violazioni della protezione è l'assegnazione indiretta dei dati a puntatori null. Poiché il programma tenta di accedere alla memoria che non vi appartiene, viene generata una violazione di protezione.<br /><br /> Un modo semplice per rilevare la causa di una violazione di protezione è compilare il programma con le informazioni di debug e quindi eseguirlo tramite il debugger nell'ambiente Visual Studio. Quando si verifica l'errore di protezione, Windows trasferisce il controllo al debugger e il cursore viene posizionato sulla riga che ha causato il problema.|
|Il programma genera numerosi errori di compilazione e collegamento.|È possibile eliminare molti problemi potenziali impostando il livello di avviso del compilatore su uno dei valori più elevati e ascoltando i messaggi di avviso. Utilizzando le opzioni del livello di avviso di livello 3 o 4, è possibile rilevare le conversioni di dati non intenzionali, i prototipi di funzione mancanti e l'utilizzo di funzionalità non ANSI.|

## <a name="see-also"></a>Vedere anche

[Supporto del multithreading per il codice precedente C++(Visual)](multithreading-support-for-older-code-visual-cpp.md)\
[Programma multithread di esempio in C](sample-multithread-c-program.md)\
[Archiviazione thread-local (TLS)](thread-local-storage-tls.md)\
[Operazioni di concorrenza e asincrone con C++/WinRT](/windows/uwp/cpp-and-winrt-apis/concurrency)\
[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
