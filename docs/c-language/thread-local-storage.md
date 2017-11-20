---
title: Archiviazione thread-local | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- thread-local variables
- TLS (thread local storage)
- thread storage-class attribute
- thread-local storage
- storage, thread local storage
ms.assetid: a0f1b109-c953-4079-aa10-e47f5483173d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 46aaf6677a779ada2457814aecba5c84a59e1f1c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="thread-local-storage"></a>archiviazione thread-local
**Sezione specifica Microsoft**  
  
 L'archiviazione thread-local (TLS, Thread-Local Storage) è il meccanismo attraverso il quale ogni thread in un dato processo multithread alloca lo spazio di archiviazione per i dati specifici dei thread. Nei programmi multithread standard, i dati vengono condivisi da tutti i thread di un determinato processo, mentre l'archiviazione thread-local è il meccanismo che consente di allocare i dati per singoli thread. Per una trattazione completa dei thread, vedere [Processes and Threads](http://msdn.microsoft.com/library/windows/desktop/ms684841) (Processi e thread) in [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)].  
  
 Il linguaggio C Microsoft include l'attributo esteso di classe di archiviazione, thread, che viene usato con la parola chiave __declspec per dichiarare una variabile thread-local. Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:  
  
```  
__declspec( thread ) int tls_i = 1;  
```  
  
 Nella dichiarazione di variabili thread-local associate in modo statico, è necessario attenersi a queste linee guida.  
  
-   L'attributo **__declspec(thread)** può interferire con il [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL**.**  
  
-   È possibile applicare l'attributo thread solo a dichiarazioni e definizioni di dati. Non può essere utilizzato per dichiarare o definire funzioni. Il codice seguente, ad esempio, genera un errore di compilazione:  
  
    ```  
    #define Thread   __declspec( thread )  
    Thread void func();      /* Error */  
    ```  
  
-   È possibile specificare l'attributo thread solo per elementi di dati con durata di archiviazione statica. Ciò include i dati globali, statici ed extern, e i dati statici locali. Non è possibile dichiarare dati automatici con l'attributo thread. Il codice seguente, ad esempio, genera errori di compilazione:  
  
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
  
-   È necessario utilizzare l'attributo thread per la dichiarazione e la definizione di dati locali di thread, che la definizione e la dichiarazione si verificano nello stesso file o in file separati. Il codice seguente genera ad esempio un errore:  
  
    ```  
    #define Thread   __declspec( thread )  
    extern int tls_i;     /* This generates an error, because the   */  
    int Thread tls_i;     /* declaration and the definition differ. */  
    ```  
  
-   L'attributo thread non può essere utilizzato come modificatore di tipo. Il codice seguente, ad esempio, genera un errore di compilazione:  
  
    ```  
    char *ch __declspec( thread );      /* Error */  
    ```  
  
-   L'indirizzo di una variabile locale di thread non è considerato costante, così come qualsiasi espressione che contenga tale indirizzo. Ciò significa che non è possibile utilizzare l'indirizzo di una variabile locale di thread come inizializzatore di un puntatore. Il codice seguente, ad esempio, viene contrassegnato come errore dal compilatore:  
  
    ```  
    #define Thread   __declspec( thread )  
    Thread int tls_i;  
    int *p = &tls_i;      /* Error */  
    ```  
  
-   Il linguaggio C consente di inizializzare una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti di tipo non statico. Ad esempio:  
  
    ```  
    #define Thread   __declspec( thread )  
    Thread int tls_i = tls_i;             /* Error */  
    int j = j;                            /* Error */  
    Thread int tls_i = sizeof( tls_i )    /* Okay  */  
    ```  
  
     Tenere presente che un'espressione sizeof che include la variabile in fase di inizializzazione non rappresenta un riferimento a se stessa ed è consentita.  
  
-   L'attributo **__declspec(thread)** può interferire con il [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL**.**  
  
 Per altre informazioni sull'uso dell'attributo thread, vedere [Multithreading Topics](../parallel/multithreading-support-for-older-code-visual-cpp.md) (Argomenti relativi al multithreading).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi di classi di archiviazione estesi C](../c-language/c-extended-storage-class-attributes.md)