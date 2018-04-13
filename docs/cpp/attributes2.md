---
title: Gli attributi Standard di C++ | Documenti Microsoft
ms.custom: 
ms.date: 03/28/2017
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: language-reference
ms.assetid: 748340d9-8abf-4940-b0a0-91b6156a3ff8
caps.latest.revision: "11"
manager: ghogen
ms.openlocfilehash: d2dcce6b0e289588c426792a334ee4ec38d1ab5f
ms.sourcegitcommit: ca2f94dfd015e0098a6eaf5c793ec532f1c97de1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2017
---
# <a name="attributes-in-c"></a>Attributi in C++

Lo Standard C++ definisce un set di attributi e consente inoltre di definire i propri attributi (all'interno di uno spazio dei nomi specifici del fornitore), i fornitori di compilatori, ma i compilatori devono riconosce solo gli attributi definiti nello standard.

In alcuni casi, gli attributi standard si sovrappongono con i parametri specifici del compilatore declspec. In Visual C++, è possibile utilizzare il `[[deprecated]]` attributo anziché `declspec(deprecated)` e l'attributo viene riconosciuto da qualsiasi compilatore conforme. Per tutti gli altri parametri declspec, ad esempio dllimport e dllexport, non è disponibile come ancora alcun equivalente di attributo in modo, è necessario continuare a utilizzare la sintassi declspec. Gli attributi non influiscono sul sistema di tipi e non cambiano il significato di un programma. Compilatori di ignorano i valori di attributo che non riconoscono.

**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): nell'ambito di un elenco di attributi, è possibile specificare lo spazio dei nomi di tutti i nomi con un singolo `using` introducer:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## <a name="c-standard-attributes"></a>Attributi Standard di C++

In C++ 11, gli attributi forniscono un modo standardizzato di annotare i costrutti C++ con informazioni aggiuntive che non possono essere specifici del fornitore (incluse, ma non solo a classi, funzioni, variabili e i blocchi). Un compilatore può usare queste informazioni per generare i messaggi informativi o di applicare una logica speciale quando la compilazione del codice con attributo. Il compilatore ignora tutti gli attributi che non riconosce, il che significa che non è possibile definire attributi personalizzati utilizzando questa sintassi. Gli attributi siano racchiusi tra doppie parentesi quadre:

```cpp
[[deprecated]]
void Foo(int);
```

Attributi che rappresentano un'alternativa alle estensioni specifiche del fornitore, ad esempio le direttive #pragma, __declspec() (Visual C++), standard o &#95; &#95; attributo &#95; &#95; (GNU). Tuttavia, è necessario comunque utilizzare i costrutti specifici del fornitore per la maggior parte dei casi. Lo standard attualmente specifica gli attributi seguenti che dovrebbe riconoscere un compilatore conforme:

- `[[noreturn]]`Specifica che una funzione non restituisce mai; in altre parole genera sempre un'eccezione. Il compilatore può modificare le regole di compilazione per `[[noreturn]]` entità.

- `[[carries_dependency]]`Specifica che la funzione propaga dipendenza dei dati rispetto alla sincronizzazione dei thread di ordinamento. L'attributo può essere applicato a uno o più parametri, per specificare che l'argomento passato comporta una dipendenza nel corpo della funzione. L'attributo può essere applicato alla funzione stessa, per specificare che il valore restituito contiene una dipendenza dalla funzione. Il compilatore può usare queste informazioni per generare il codice più efficiente.

- `[[deprecated]]`**Visual Studio 2015 e versioni successiva:** specifica che una funzione non deve essere utilizzato e potrebbe non essere disponibile nelle future versioni di un'interfaccia di raccolta. Il compilatore può usare per generare un messaggio informativo quando il codice client tenta di chiamare la funzione. Può essere applicato alla dichiarazione di una classe, un nome di typedef, una variabile, un membro dati non statici, una funzione, uno spazio dei nomi, un'enumerazione, un enumeratore o una specializzazione di modello.  

- `[[fallthrough]]`**2017 e versioni successiva di visual Studio:** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)) il `[[fallthrough]]` attributo può essere utilizzato nel contesto di [passare](switch-statement-cpp.md) istruzioni come hint per la compilatore (o chiunque legga il codice) che deve essere il comportamento di fallthrough. Il compilatore Visual C++ attualmente non avvisa in caso di fallthrough comportamento, in modo da questo attributo non è il comportamento del compilatore alcun effetto.

- `[[nodiscard]]`**Visual Studio 2017 15.3 e versioni successive:** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)) specifica che un valore restituito dalla funzione non deve essere eliminato. Genera avviso C4834, come illustrato in questo esempio:

   ```cpp
   [[nodiscard]]
   int foo(int i) { return i * i; }

   int main()
   {
       foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
       return 0;
   }
   ```

- `[[maybe_unused]]`**Visual Studio 2017 15.3 e versioni successive:** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)) specifica che una variabile, funzione, classe, typedef, specializzazione di modello, enum o membro dati non statici può intenzionalmente non può essere utilizzato. Il compilatore non un avviso quando lo si contrassegna un'entità `[[maybe_unused]]` non viene utilizzato. Un'entità che viene dichiarata senza l'attributo può essere ridichiarata in un secondo momento con l'attributo e viceversa. Un'entità è considerata contrassegnati dopo la prima dichiarazione che è contrassegnato come viene analizzato e per il resto della traduzione dell'unità di conversione corrente.

## <a name="microsoft-specific-attributes"></a>Attributi specifici di Microsoft

- `[[gsl::suppress(rules)]]`Questo attributo specifica Microsoft viene utilizzato per l'eliminazione di avvisi da programmi che applicano [linee guida per il supporto della libreria (GSL)](https://github.com/Microsoft/GSL) regole nel codice. Ad esempio, si consideri il frammento di codice:

    ```cpp
    void main()
    {
        int arr[10]; // GSL warning 26494 will be fired
        int* p = arr; // GSL warning 26485 will be fired
        [[gsl::suppress(bounds.1)]] // This attribute suppresses Bounds rule #1
        {
            int* q = p + 1; // GSL warning 26481 suppressed
            p = q--; // GSL warning 26481 suppressed
        }
    }
    ```

   L'esempio genera questi avvisi:

   - 26494 (tipo di regola 5: sempre inizializzare un oggetto.)

   - 26485 (limiti regola 3: alcuna matrice di decadimento puntatore.)

   - 26481 (limiti regola 1: non utilizzare l'aritmetica dei puntatori. Utilizzare intervallo.)

   I primi due avvisi attivano quando si compila questo codice con lo strumento di analisi codice CppCoreCheck installati e attivati. Ma il terzo avviso non viene attivato a causa dell'attributo. È possibile eliminare l'intero profilo limiti scrivendo [[gsl::suppress(bounds)]] senza includere un numero specifico di regola. Le indicazioni di base C++ sono progettate per semplificare la scrittura di codice migliore e più sicuro. L'attributo Elimina semplifica disattivare gli avvisi quando essi non sono richieste.
