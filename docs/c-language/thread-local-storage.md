---
title: "Archiviazione locale di thread | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "archiviazione, archiviazione locale di thread"
  - "attributo di classe di archiviazione di thread"
  - "archiviazione locale di thread"
  - "variabili locali di thread"
  - "TLS (archiviazione locale di thread)"
ms.assetid: a0f1b109-c953-4079-aa10-e47f5483173d
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Archiviazione locale di thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 L'archiviazione locale di thread \(TLS, Thread\-Local Storage\) è il meccanismo attraverso il quale ogni thread in un dato processo multithread alloca lo spazio di archiviazione per i dati specifici dei thread.  Nei programmi multithread standard, i dati vengono condivisi da tutti i thread di un determinato processo, mentre l'archiviazione locale di thread è il meccanismo che consente di allocare i dati per thread.  Per una descrizione completa dei thread, vedere [Processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms684841) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  
  
 Il linguaggio C Microsoft include l'attributo esteso di classe di archiviazione, thread, che viene utilizzato con la parola chiave \_\_declspec per dichiarare una variabile di thread locale.  Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:  
  
```  
__declspec( thread ) int tls_i = 1;  
```  
  
 Nella dichiarazione di variabili locali di thread associate in modo statico, è necessario attenersi a queste linee guida.  
  
-   L'attributo **\_\_declspec\(thread\)** può interferire con il [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL**.**.  
  
-   È possibile applicare l'attributo thread solo a dichiarazioni e definizioni di dati.  Non può essere utilizzato per dichiarare o definire funzioni.  Il codice seguente, ad esempio, genera un errore di compilazione:  
  
    ```  
    #define Thread   __declspec( thread )  
    Thread void func();      /* Error */  
    ```  
  
-   È possibile specificare l'attributo thread solo per elementi di dati con durata di archiviazione statica.  Ciò include i dati globali, statici ed extern, e i dati statici locali.  Non è possibile dichiarare dati automatici con l'attributo thread.  Il codice seguente, ad esempio, genera errori di compilazione:  
  
    ```  
    #define Thread   __declspec( thread )  
    void func1()  
    {  
        Thread int tls_i;            /* Error */  
    }  
  
    int func2( Thread int tls_i )    /* Error */  
    {  
       return tls_i;  
    }  
    ```  
  
-   È necessario utilizzare l'attributo thread per la dichiarazione e la definizione di dati locali di thread, che la definizione e la dichiarazione si verificano nello stesso file o in file separati.  Il codice seguente genera ad esempio un errore:  
  
    ```  
    #define Thread   __declspec( thread )  
    extern int tls_i;     /* This generates an error, because the   */  
    int Thread tls_i;     /* declaration and the definition differ. */  
    ```  
  
-   L'attributo thread non può essere utilizzato come modificatore di tipo.  Il codice seguente, ad esempio, genera un errore di compilazione:  
  
    ```  
    char *ch __declspec( thread );      /* Error */  
    ```  
  
-   L'indirizzo di una variabile locale di thread non è considerato costante, così come qualsiasi espressione che contenga tale indirizzo.  Ciò significa che non è possibile utilizzare l'indirizzo di una variabile locale di thread come inizializzatore di un puntatore.  Il codice seguente, ad esempio, viene contrassegnato come errore dal compilatore:  
  
    ```  
    #define Thread   __declspec( thread )  
    Thread int tls_i;  
    int *p = &tls_i;      /* Error */  
    ```  
  
-   Il linguaggio C consente di inizializzare una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti di tipo non statico.  Ad esempio:  
  
    ```  
    #define Thread   __declspec( thread )  
    Thread int tls_i = tls_i;             /* Error */  
    int j = j;                            /* Error */  
    Thread int tls_i = sizeof( tls_i )    /* Okay  */  
    ```  
  
     Tenere presente che un'espressione sizeof che include la variabile in fase di inizializzazione non rappresenta un riferimento a se stessa ed è consentita.  
  
-   L'attributo **\_\_declspec\(thread\)** può interferire con il [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL**.**.  
  
 Per ulteriori informazioni sull'utilizzo dell'attributo thread, vedere [Argomenti relativi al multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)