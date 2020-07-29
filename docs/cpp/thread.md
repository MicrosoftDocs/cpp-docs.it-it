---
title: thread
ms.date: 05/07/2019
f1_keywords:
- thread_cpp
helpviewer_keywords:
- thread local storage (TLS)
- thread __declspec keyword
- TLS (thread local storage), compiler implementation
- __declspec keyword [C++], thread
ms.assetid: 667f2a77-6d1f-4b41-bee8-05e67324fab8
ms.openlocfilehash: 13e6d45642c08a97c06d7099b83e632501267310
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225813"
---
# <a name="thread"></a>thread

**Specifico di Microsoft**

Il **`thread`** modificatore di classe di archiviazione esteso viene usato per dichiarare una variabile thread-local. Per l'equivalente portatile in C++ 11 e versioni successive, usare l'identificatore di classe di archiviazione [thread_local](../cpp/storage-classes-cpp.md#thread_local) per il codice portabile. In Windows **`thread_local`** viene implementato con **`__declspec(thread)`** .

## <a name="syntax"></a>Sintassi

**`__declspec(thread)`***dichiaratore*

## <a name="remarks"></a>Osservazioni

L'archiviazione thread-local (TLS, Thread Local Storage) rappresenta il meccanismo mediante il quale ogni processo multithread alloca lo spazio di archiviazione per i dati specifici del thread. Nei programmi multithread standard, i dati vengono condivisi da tutti i thread di un determinato processo, mentre l'archiviazione thread-local è il meccanismo che consente di allocare i dati per singoli thread. Per una descrizione completa dei thread, vedere [multithreading](../parallel/multithreading-support-for-older-code-visual-cpp.md).

Le dichiarazioni delle variabili locali di thread devono usare la [sintassi degli attributi estesa](../cpp/declspec.md) e la **`__declspec`** parola chiave con la **`thread`** parola chiave. Nel codice seguente, ad esempio, viene dichiarata una variabile locale di thread di tipo integer e quindi inizializzata con un valore:

```cpp
__declspec( thread ) int tls_i = 1;
```

Quando si usano variabili locali di thread nelle librerie caricate in modo dinamico, è necessario tenere presenti i fattori che possono causare la mancata inizializzazione di una variabile locale di thread:

1. Se la variabile viene inizializzata con una chiamata di funzione (inclusi i costruttori), questa funzione verrà chiamata solo per il thread che ha causato il caricamento del file binario/DLL nel processo e per i thread avviati dopo il caricamento della DLL binaria. Le funzioni di inizializzazione non vengono chiamate per nessun altro thread che era già in esecuzione quando è stata caricata la DLL. L'inizializzazione dinamica si verifica nella chiamata DllMain per DLL_THREAD_ATTACH, ma la DLL non ottiene mai tale messaggio se la DLL non è presente nel processo all'avvio del thread.

1. Le variabili locali di thread inizializzate in modo statico con valori costanti vengono in genere inizializzate correttamente su tutti i thread. Tuttavia, a partire dal 2017 dicembre il compilatore Microsoft C++ presenta un problema di conformità noto, in base al quale le **`constexpr`** variabili ricevono la dinamica piuttosto che l'inizializzazione statica.

   Nota: entrambi questi problemi dovrebbero essere corretti negli aggiornamenti futuri del compilatore.

Inoltre, è necessario osservare queste linee guida quando si dichiarano variabili e oggetti thread-local:

- È possibile applicare l' **`thread`** attributo solo a dichiarazioni e definizioni di classi e dati; **`thread`** non può essere utilizzato in dichiarazioni di funzione o definizioni.

- È possibile specificare l' **`thread`** attributo solo per gli elementi di dati con durata di archiviazione statica. Sono inclusi gli oggetti dati globali ( **`static`** e **`extern`** ), gli oggetti statici locali e i membri dati statici delle classi. Non è possibile dichiarare oggetti dati automatici con l' **`thread`** attributo.

- È necessario utilizzare l' **`thread`** attributo per la dichiarazione e la definizione di un oggetto thread-local, indipendentemente dal fatto che la dichiarazione e la definizione si verifichino nello stesso file o in file separati.

- Non è possibile usare l' **`thread`** attributo come modificatore di tipo.

- Poiché la dichiarazione di oggetti che utilizzano l' **`thread`** attributo è consentita, questi due esempi sono semanticamente equivalenti:

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

- Il linguaggio C standard consente l'inizializzazione di un oggetto o di una variabile con un'espressione che include un riferimento a se stessa, ma solo per oggetti non statici. Sebbene C++ consenta in genere l'inizializzazione dinamica di un oggetto con un'espressione che include un riferimento a se stessa, questo tipo di inizializzazione non è consentito con gli oggetti thread-local. Ad esempio:

   ```cpp
   // declspec_thread_3.cpp
   // compile with: /LD
   #define Thread __declspec( thread )
   int j = j;   // Okay in C++; C error
   Thread int tls_i = sizeof( tls_i );   // Okay in C and C++
   ```

   Un' **`sizeof`** espressione che include l'oggetto in fase di inizializzazione non costituisce un riferimento a se stessa ed è consentita in C e C++.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Archiviazione thread-local (TLS)](../parallel/thread-local-storage-tls.md)
