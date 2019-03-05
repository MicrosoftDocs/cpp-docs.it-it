---
title: Archiviazione thread-local (TLS)
ms.date: 11/04/2016
helpviewer_keywords:
- multithreading [C++], Thread Local Storage
- TLS [C++]
- threading [C++], Thread Local Storage
- storing thread-specific data
- thread attribute
- Thread Local Storage [C++]
ms.assetid: 80801907-d792-45ca-b776-df0cf2e9f197
ms.openlocfilehash: f5a75f7964b0291a980b22d36e7ce6a0a87d3dc3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293459"
---
# <a name="thread-local-storage-tls"></a>Archiviazione thread-local (TLS)

L'archiviazione thread-local è il metodo attraverso il quale ogni thread incluso in un processo multithreading specifico può allocare posizioni in cui archiviare dati specifici del thread. In modo dinamico (run-time) con associazione a dati specifici di thread sono supportati tramite le API TLS ([TlsAlloc](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsalloc).  Win32 e il compilatore  Visual C++ supportano ora dati specifici dei thread associati staticamente (in fase di caricamento) oltre all'implementazione delle API esistente.

##  <a name="_core_compiler_implementation_for_tls"></a> Implementazione del compilatore per TLS

**C++11:**  Il `thread_local` identificatore classe di archiviazione è il modo consigliato per specificare l'archiviazione thread-local per gli oggetti e membri delle classi. Per altre informazioni, vedere [classi di archiviazione (C++)](../cpp/storage-classes-cpp.md).

Visual C++ fornisce anche un attributo specifico di Microsoft [thread](../cpp/thread.md), come modificatore di classe di archiviazione estese. Usare la **declspec** parola chiave per dichiarare un **thread** variabile. Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:

```
__declspec( thread ) int tls_i = 1;
```

## <a name="rules-and-limitations"></a>Regole e limitazioni

Le linee guida seguenti devono essere osservate quando si dichiarano variabili e oggetti thread-local associati staticamente. Queste indicazioni si applicano sia a [thread](../cpp/thread.md)nonché per la maggior parte a [thread_local](../cpp/storage-classes-cpp.md):

- Il **thread** attributo può essere applicato solo a definizioni e dichiarazioni di classe e i dati. Non può essere utilizzato per dichiarare o definire funzioni. Il codice seguente, ad esempio, genera un errore di compilazione:

    ```
    __declspec( thread )void func();     // This will generate an error.
    ```

- Il **thread** modificatore può essere specificato solo per elementi di dati con **statico** extent. Ciò include gli oggetti dati globali (entrambe **statici** e **extern**), gli oggetti statici locali e i membri dati statici di classi C++. Impossibile dichiarare gli oggetti dati automatici con il **thread** attributo. Il codice seguente genera errori del compilatore:

    ```
    void func1()
    {
        __declspec( thread )int tls_i;            // This will generate an error.
    }

    int func2(__declspec( thread )int tls_i )    // This will generate an error.
    {
        return tls_i;
    }
    ```

- Le dichiarazioni e la definizione di un thread oggetto-local deve tutte specificare il **thread** attributo. Il codice seguente genera ad esempio un errore:

    ```
    #define Thread  __declspec( thread )
    extern int tls_i;        // This will generate an error, since the
    int __declspec( thread )tls_i;        // declaration and definition differ.
    ```

- Il **thread** attributo non può essere utilizzato come modificatore di tipo. Il codice seguente, ad esempio, genera un errore di compilazione:

    ```
    char __declspec( thread ) *ch;        // Error
    ```

- Poiché la dichiarazione di oggetti C++ che usano il **thread** l'attributo è consentito, i due esempi seguenti sono semanticamente equivalenti:

    ```
    __declspec( thread ) class B
    {
    // Code
    } BObject;  // OK--BObject is declared thread local.

    class B
    {
    // Code
    };
    __declspec( thread ) B BObject;  // OK--BObject is declared thread local.
    ```

- L'indirizzo di un oggetto thread-local non viene considerato costante e qualsiasi espressione che include tale indirizzo non viene considerata un'espressione costante. Nel linguaggio C standard l'effetto di questo comportamento consiste nell'impedire l'uso dell'indirizzo di una variabile thread-local come inizializzatore per un oggetto o un puntatore. Ad esempio, il codice seguente viene contrassegnato come errore dal compilatore C:

    ```
    __declspec( thread )int tls_i;
    int *p = &tls_i;       //This will generate an error in C.
    ```

   Questa restrizione non si applica a C++. Poiché C++ permette l'inizializzazione dinamica di tutti gli oggetti, è possibile inizializzare un oggetto usando un'espressione che usa l'indirizzo di una variabile thread-local. Questa operazione viene eseguita proprio come la costruzione di oggetti thread-local. Ad esempio, il codice mostrato sopra non genera un errore quando viene compilato come file di origine C++. Si noti che l'indirizzo di una variabile thread-local è valido solo se il thread in cui è stato recuperato l'indirizzo esiste ancora.

- Il linguaggio C standard permette l'inizializzazione di un oggetto o una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti con estensione non statica. Benché C++ permetta in genere l'inizializzazione dinamica degli oggetti con un'espressione che include un riferimento a se stessa, questo tipo di inizializzazione non è consentito con oggetti thread-local. Ad esempio:

    ```
    __declspec( thread )int tls_i = tls_i;                // Error in C and C++
    int j = j;                               // OK in C++, error in C
    __declspec( thread )int tls_i = sizeof( tls_i )       // Legal in C and C++
    ```

   Tenere presente che un'espressione `sizeof` che include l'oggetto in fase di inizializzazione non rappresenta un riferimento a se stessa ed è consentita sia in C sia in C++.

   C++ non consente l'inizializzazione dinamica dei dati di thread a causa di possibili miglioramenti futuri correlati alla funzionalità di archiviazione thread-local.

- Nei sistemi operativi Windows prima di Windows Vista, `__declspec`(thread) presenta alcune limitazioni. Se una DLL dichiara dati o oggetti come `__declspec`( thread ), può provocare un errore di protezione se viene caricata in modo dinamico. Dopo che la DLL viene caricata con [LoadLibrary](/windows/desktop/api/libloaderapi/nf-libloaderapi-loadlibrarya), viene generato un errore di sistema ogni volta che il codice fa riferimento il `__declspec`dati (thread). Poiché lo spazio delle variabili globali per un thread viene allocato in fase di esecuzione, le dimensioni di questo spazio sono basate sul calcolo dei requisiti dell'applicazione sommati ai requisiti di tutte le DLL collegate staticamente. Quando si usa `LoadLibrary`, non è possibile estendere questo spazio per permettere le variabili thread-local dichiarate con `__declspec`( thread ). Usare le API TLS, ad esempio [TlsAlloc](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-tlsalloc), nella DLL per allocare TLS se la DLL può essere caricata con `LoadLibrary`.

## <a name="see-also"></a>Vedere anche

[Multithreading con C e Win32](multithreading-with-c-and-win32.md)
