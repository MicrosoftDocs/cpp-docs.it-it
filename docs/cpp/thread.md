---
title: "thread | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "thread"
  - "thread_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], thread"
  - "thread __declspec (parola chiave)"
  - "archiviazione locale di thread (TLS)"
  - "TLS (archiviazione locale di thread), implementazione del compilatore"
ms.assetid: 667f2a77-6d1f-4b41-bee8-05e67324fab8
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Il modificatore di classe di archiviazione esteso **thread** viene usato per dichiarare una variabile locale di thread.  Per l'equivalente portabile in C\+\+11, usare l'identificatore di classi di archiviazione [thread\_local](../cpp/storage-classes-cpp.md#thread_local).  
  
## Sintassi  
  
```  
  
__declspec( thread ) declarator  
```  
  
## Note  
 L'archiviazione locale di thread \(TLS, Thread Local Storage\) rappresenta il meccanismo mediante il quale ogni processo multithread alloca lo spazio di archiviazione per i dati specifici del thread.  Nei programmi multithread standard, i dati vengono condivisi da tutti i thread di un determinato processo, mentre l'archiviazione locale di thread è il meccanismo che consente di allocare i dati per thread.  Per informazioni complete sui thread, vedere [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
 Le dichiarazioni delle variabili locali di thread devono usare la [sintassi degli attributi estesa](../cpp/declspec.md) e la parola chiave `__declspec` con la parola chiave **thread**.  Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:  
  
```  
__declspec( thread ) int tls_i = 1;  
```  
  
 È necessario tenere presenti queste linee guida quando si dichiarano gli oggetti e le variabili locali di thread:  
  
-   È possibile applicare l'attributo **thread** solo a classi e dichiarazioni e definizioni di dati. **thread** non può essere invece usato per le dichiarazioni o le definizioni delle funzioni.  
  
-   L'attributo **thread** può interferire con il [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL**.**.  
  
-   È possibile che nei sistemi XP `thread` non funzioni correttamente se una DLL usa dati \_\_declspec\(thread\) e viene caricata dinamicamente tramite LoadLibrary.  
  
-   È possibile specificare l'attributo **thread** solo per elementi di dati con durata di archiviazione statica.  Sono inclusi gli oggetti di dati globali \(sia **statici** che `extern`\), gli oggetti statici locali e i membri di dati statici delle classi.  Non è possibile dichiarare oggetti di dati automatici con l'attributo **thread**.  
  
-   È necessario usare l'attributo **thread** per la dichiarazione e la definizione di un oggetto locale di thread, indipendentemente dal fatto che la definizione e la dichiarazione si verificano nello stesso file o in file separati.  
  
-   L'attributo **thread** non può essere usato come modificatore di tipo.  
  
-   Poiché la dichiarazione di oggetti che usano l'attributo **thread** è consentita, i due esempi seguenti sono equivalenti dal punto di vista semantico:  
  
    ```  
    // declspec_thread_2.cpp  
    // compile with: /LD  
    __declspec( thread ) class B {  
    public:  
       int data;  
    } BObject;   // BObject declared thread local.  
  
    class B2 {  
    public:  
       int data;  
    };  
    __declspec( thread ) B2 BObject2;   // BObject2 declared thread local.  
    ```  
  
-   Il linguaggio C standard consente di inizializzare un oggetto o una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti con estensione non statica.  Sebbene il linguaggio C\+\+ consenta in genere l'inizializzazione dinamica di un oggetto con un'espressione che include un riferimento a se stessa, questo tipo di inizializzazione non è consentito con gli oggetti locali di thread.  Ad esempio:  
  
    ```  
    // declspec_thread_3.cpp  
    // compile with: /LD  
    #define Thread __declspec( thread )  
    int j = j;   // Okay in C++; C error  
    Thread int tls_i = sizeof( tls_i );   // Okay in C and C++  
    ```  
  
     Tenere presente che un'espressione `sizeof` che include l'oggetto in fase di inizializzazione non è un riferimento a se stessa ed è consentita sia in C che in C\+\+.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Archiviazione locale di thread \(TLS\)](../parallel/thread-local-storage-tls.md)