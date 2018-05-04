---
title: thread | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- thread_cpp
dev_langs:
- C++
helpviewer_keywords:
- thread local storage (TLS)
- thread __declspec keyword
- TLS (thread local storage), compiler implementation
- __declspec keyword [C++], thread
ms.assetid: 667f2a77-6d1f-4b41-bee8-05e67324fab8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d0f456d217119020f5683a58560283a1ff08ac75
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="thread"></a>thread

**Sezione specifica Microsoft**

Il **thread** modificatore di classe di archiviazione estesi viene utilizzato per dichiarare una variabile locale di thread. Per il computer portatile equivalente in C++ 11 e versioni successivo, utilizzare il [thread_local](../cpp/storage-classes-cpp.md#thread_local) identificatore classe di archiviazione per codice portabile. In Windows **thread_local** è implementato con **declspec**.

## <a name="syntax"></a>Sintassi

> **declspec (thread)** *dichiaratore*  

## <a name="remarks"></a>Note

L'archiviazione thread-local (TLS, Thread Local Storage) rappresenta il meccanismo mediante il quale ogni processo multithread alloca lo spazio di archiviazione per i dati specifici del thread. Nei programmi multithread standard, i dati vengono condivisi da tutti i thread di un determinato processo, mentre l'archiviazione thread-local è il meccanismo che consente di allocare i dati per singoli thread. Per una descrizione completa dei thread, vedere [Multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Le dichiarazioni di variabili thread-local devono usare [sintassi degli attributi estesa](../cpp/declspec.md) e `__declspec` parola chiave with il **thread** (parola chiave). Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:

```cpp
__declspec( thread ) int tls_i = 1;
```

Quando si utilizzano variabili di thread locali delle librerie a caricamento dinamico, è necessario tenere in considerazione i fattori che possono causare una variabile locale di thread non venga inizializzato correttamente:

1. Se la variabile viene inizializzata con una chiamata di funzione (inclusi i costruttori), questa funzione verrà chiamata solo per il thread che ha causato il binario/DLL da caricare nel processo e per tali thread avviati dopo che è stata caricata il file binario o DLL. Le funzioni di inizializzazione non vengono chiamate per qualsiasi altro thread che era già in esecuzione quando la DLL è stata caricata. L'inizializzazione dinamica avviene la chiamata di funzione DllMain per DLL_THREAD_ATTACH, ma la DLL mai Ottiene se la DLL non è nel processo quando il thread inizia da messaggi.

1. Le variabili locali del thread che vengono inizializzate in modo statico con valori costanti vengono in genere inizializzate correttamente in tutti i thread. Tuttavia, a partire da dicembre 2017 è un problema noto di conformità del compilatore Microsoft Visual C++ in base al quale le variabili constexpr ricevano dinamica anziché l'inizializzazione statica.

   Nota: Entrambi questi problemi devono essere corretti in futuro gli aggiornamenti del compilatore.

Inoltre, è necessario rispettare queste linee guida quando si dichiarano variabili e oggetti thread-local:

- È possibile applicare il **thread** attributo solo alla classe e le dichiarazioni di dati e definizioni. **thread** non può essere utilizzato in definizioni o dichiarazioni di funzione.

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

- Il linguaggio C standard consente di inizializzare un oggetto o una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti con estensione non statica. Sebbene il linguaggio C++ consenta in genere l'inizializzazione dinamica di un oggetto con un'espressione che include un riferimento a se stessa, questo tipo di inizializzazione non è consentito con gli oggetti thread-local. Ad esempio:

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
