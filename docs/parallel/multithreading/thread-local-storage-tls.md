---
title: "Archiviazione locale di thread (TLS) | Microsoft Docs"
ms.custom: ""
ms.date: "12/09/2016"
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
  - "multithreading [C++], archiviazione locale di thread"
  - "archiviazione di dati specifici di thread"
  - "attributo thread"
  - "archiviazione locale di thread [C++]"
  - "threading [C++], archiviazione locale di thread"
  - "TLS [C++]"
ms.assetid: 80801907-d792-45ca-b776-df0cf2e9f197
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Archiviazione locale di thread (TLS)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'archiviazione locale di thread è il metodo attraverso il quale ogni thread incluso in un processo multithreading specifico può allocare posizioni in cui archiviare dati specifici del thread.  I dati specifici del thread associati dinamicamente \(in fase di esecuzione\) sono supportati tramite le API TLS \([TlsAlloc](assetId:///TlsAlloc?qualifyHint=False&autoUpgrade=True), [TlsGetValue](assetId:///TlsGetValue?qualifyHint=False&autoUpgrade=True), [TlsSetValue](assetId:///TlsSetValue?qualifyHint=False&autoUpgrade=True) e [TlsFree](assetId:///TlsFree?qualifyHint=False&autoUpgrade=True)\).  Per altre informazioni sul modo in cui l'archiviazione locale di thread viene implementata in Windows, vedere [Archiviazione locale di thread \(Windows\)](https://msdn.microsoft.com/it-it/library/windows/desktop/ms686749\(v=vs.85\).aspx).  Win32 e il compilatore  Visual C\+\+ supportano ora dati specifici dei thread associati staticamente \(in fase di caricamento\) oltre all'implementazione delle API esistente.  
  
##  <a name="_core_compiler_implementation_for_tls"></a> Implementazione del compilatore per l'archiviazione locale di thread  
 **C\+\+11:**  l'identificatore della classe di archiviazione `thread_local` è l'opzione consigliata per specificare l'archiviazione locale di thread per oggetti e membri di classe.  Per altre informazioni, vedere [Classi di archiviazione \(C\+\+\)](../../cpp/storage-classes-cpp.md#thread_local).  
  
 Visual C\+\+ fornisce anche un attributo specifico di Microsoft, [thread](../../cpp/thread.md), come modificatore delle classi di archiviazione estese.  Usare la parola chiave `__declspec` per dichiarare una variabile **thread**.  Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:  
  
```  
__declspec( thread ) int tls_i = 1;  
```  
  
## Regole e limitazioni  
 Le linee guida seguenti devono essere osservate quando si dichiarano variabili e oggetti thread\-local associati staticamente.  Queste linee guida si applicano sia a [thread](../../cpp/thread.md) sia, per la maggior parte, a [thread\_local](../../cpp/storage-classes-cpp.md#thread_local):  
  
-   L'attributo `thread` può essere applicato solo a dichiarazioni e definizioni di classe e dati.  Non può essere utilizzato per dichiarare o definire funzioni.  Il codice seguente, ad esempio, genera un errore di compilazione:  
  
    ```  
  
    __declspec( thread )void func();     // This will generate an error.  
    ```  
  
-   Il modificatore `thread` può essere specificato solo in elementi di dati con estensione `static`.  Sono inclusi gli oggetti dati globali \(sia `static` sia `extern`\), gli oggetti statici locali e i membri dati statici di classi C\+\+.  Non è possibile dichiarare oggetti dati automatici con l'attributo `thread`.  Il codice seguente genera errori del compilatore:  
  
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
  
-   Le dichiarazioni e la definizione di un oggetto thread\-local devono tutte specificare l'attributo `thread`.  Il codice seguente genera ad esempio un errore:  
  
    ```  
    #define Thread  __declspec( thread )  
    extern int tls_i;        // This will generate an error, since the  
    int __declspec( thread )tls_i;        // declaration and definition differ.  
    ```  
  
-   Non è possibile usare l'attributo `thread` come modificatore di tipo.  Il codice seguente, ad esempio, genera un errore di compilazione:  
  
    ```  
    char __declspec( thread ) *ch;        // Error  
    ```  
  
-   Poiché la dichiarazione di oggetti C\+\+ che usano l'attributo `thread` è consentita, i due esempi seguenti sono equivalenti dal punto di vista semantico:  
  
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
  
-   L'indirizzo di un oggetto thread\-local non viene considerato costante e qualsiasi espressione che include tale indirizzo non viene considerata un'espressione costante.  Nel linguaggio C standard l'effetto di questo comportamento consiste nell'impedire l'uso dell'indirizzo di una variabile thread\-local come inizializzatore per un oggetto o un puntatore.  Ad esempio, il codice seguente viene contrassegnato come errore dal compilatore C:  
  
    ```  
  
    __declspec( thread )int tls_i;  
    int *p = &tls_i;       //This will generate an error in C.  
    ```  
  
     Questa restrizione non si applica a C\+\+.  Poiché C\+\+ permette l'inizializzazione dinamica di tutti gli oggetti, è possibile inizializzare un oggetto usando un'espressione che usa l'indirizzo di una variabile thread\-local.  Questa operazione viene eseguita proprio come la costruzione di oggetti thread\-local.  Ad esempio, il codice mostrato sopra non genera un errore quando viene compilato come file di origine C\+\+.  Si noti che l'indirizzo di una variabile thread\-local è valido solo se il thread in cui è stato recuperato l'indirizzo esiste ancora.  
  
-   Il linguaggio C standard permette l'inizializzazione di un oggetto o una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti con estensione non statica.  Benché C\+\+ permetta in genere l'inizializzazione dinamica degli oggetti con un'espressione che include un riferimento a se stessa, questo tipo di inizializzazione non è consentito con oggetti thread\-local.  Ad esempio:  
  
    ```  
    __declspec( thread )int tls_i = tls_i;                // Error in C and C++   
    int j = j;                               // OK in C++, error in C  
    __declspec( thread )int tls_i = sizeof( tls_i )       // Legal in C and C++  
    ```  
  
     Tenere presente che un'espressione `sizeof` che include l'oggetto in fase di inizializzazione non rappresenta un riferimento a se stessa ed è consentita sia in C sia in C\+\+.  
  
     C\+\+ non permette l'inizializzazione dinamica dei dati di thread a causa di possibili miglioramenti futuri correlati alla funzionalità di archiviazione locale di thread.  
  
-   Nei sistemi operativi Windows precedenti a [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] `__declspec`\( thread \) presenta alcune limitazioni.  Se una DLL dichiara dati o oggetti come `__declspec`\( thread \), può provocare un errore di protezione se viene caricata in modo dinamico.  Una volta caricata la DLL con [LoadLibrary](http://msdn.microsoft.com/library/windows/desktop/ms684175), viene restituito un errore di sistema ogni volta che il codice fa riferimento ai dati `__declspec`\( thread \).  Poiché lo spazio delle variabili globali per un thread viene allocato in fase di esecuzione, le dimensioni di questo spazio sono basate sul calcolo dei requisiti dell'applicazione sommati ai requisiti di tutte le DLL collegate staticamente.  Quando si usa `LoadLibrary`, non è possibile estendere questo spazio per permettere le variabili thread\-local dichiarate con `__declspec`\( thread \).  Usare le API TLS, come [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801), nella DLL per allocare l'archiviazione locale di thread se la DLL può essere caricata con `LoadLibrary`.  
  
## Vedere anche  
 [Multithreading con C e Win32](../../parallel/multithreading-with-c-and-win32.md)   
 [Regole e limitazioni per TLS](../../misc/rules-and-limitations-for-tls.md)