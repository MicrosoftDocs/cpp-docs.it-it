---
title: thread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: thread_cpp
dev_langs: C++
helpviewer_keywords:
- thread local storage (TLS)
- thread __declspec keyword
- TLS (thread local storage), compiler implementation
- __declspec keyword [C++], thread
ms.assetid: 667f2a77-6d1f-4b41-bee8-05e67324fab8
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7d81cd7e569cd2baa8ab50b1904fa3ac15b36d0b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="thread"></a>thread

**Sezione specifica Microsoft**  
Il **thread** modificatore di classe di archiviazione estesi viene utilizzato per dichiarare una variabile locale di thread. Per il computer portatile equivalente in C++ 11 e versioni successivo, utilizzare il [thread_local](../cpp/storage-classes-cpp.md#thread_local) identificatore classe di archiviazione.

## <a name="syntax"></a>Sintassi

```
__declspec( thread ) declarator
```

## <a name="remarks"></a>Note

L'archiviazione thread-local (TLS, Thread Local Storage) rappresenta il meccanismo mediante il quale ogni processo multithread alloca lo spazio di archiviazione per i dati specifici del thread. Nei programmi multithread standard, i dati vengono condivisi da tutti i thread di un determinato processo, mentre l'archiviazione thread-local è il meccanismo che consente di allocare i dati per singoli thread. Per una descrizione completa dei thread, vedere [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Le dichiarazioni di variabili thread-local devono usare [sintassi degli attributi estesa](../cpp/declspec.md) e `__declspec` parola chiave with il **thread** (parola chiave). Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:

```cpp
__declspec( thread ) int tls_i = 1;  
```

È necessario tenere presenti queste linee guida quando si dichiarano gli oggetti e le variabili thread-local:

- È possibile applicare il **thread** attributo solo alla classe e le dichiarazioni di dati e definizioni. **thread** non può essere utilizzato in definizioni o dichiarazioni di funzione.

- L'utilizzo del **thread** attributo può interferire con [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL.

- Nei sistemi XP **thread** potrebbe non funzionare correttamente se una DLL Usa dati declspec e viene caricata dinamicamente tramite LoadLibrary.

- È possibile specificare il **thread** attributo solo per elementi di dati con durata di archiviazione statica. Inclusi gli oggetti dati globali (sia **statico** e **extern**), gli oggetti statici locali e i membri dati statici delle classi. È possibile dichiarare oggetti dati automatici con il **thread** attributo.

- È necessario utilizzare il **thread** attributo per la dichiarazione e la definizione di un oggetto locale di thread, se la definizione e la dichiarazione si verificano nello stesso file o in file separati.

- Non è possibile utilizzare il **thread** attributo come modificatore di tipo.

- Poiché la dichiarazione di oggetti che utilizzano il **thread** l'attributo è consentito, questi due esempi sono semanticamente equivalenti:

    ```cpp
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

- Il linguaggio C standard consente di inizializzare un oggetto o una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti con estensione non statica. Sebbene il linguaggio C++ consenta in genere l'inizializzazione dinamica di un oggetto con un'espressione che include un riferimento a se stessa, questo tipo di inizializzazione non è consentito con gli oggetti locali di thread. Ad esempio:

    ```cpp
    // declspec_thread_3.cpp
    // compile with: /LD
    #define Thread __declspec( thread )
    int j = j;   // Okay in C++; C error
    Thread int tls_i = sizeof( tls_i );   // Okay in C and C++
    ```

     Si noti che un **sizeof** espressione che include l'oggetto inizializzato non costituisce un riferimento a se stessa ed è consentita in C e C++.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)  
[Parole chiave](../cpp/keywords-cpp.md)  
[Archiviazione thread-local (TLS)](../parallel/thread-local-storage-tls.md)
