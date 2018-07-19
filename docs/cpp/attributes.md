---
title: Gli attributi Standard C++ | Microsoft Docs
ms.custom: ''
ms.date: 03/28/2017
ms.topic: language-reference
ms.assetid: 748340d9-8abf-4940-b0a0-91b6156a3ff8
ms.openlocfilehash: 4a7ddcd7a83c64fe160d06d9b8ae378874e7518c
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37940677"
---
# <a name="attributes-in-c"></a>Attributi in C++

Lo Standard C++ definisce un set di attributi e inoltre consente ai fornitori di compilatore definiscono attributi specifici (all'interno di uno spazio dei nomi specifici del fornitore), ma i compilatori devono riconoscere solo gli attributi definiti nello standard.

In alcuni casi, gli attributi standard si sovrappongono con i parametri specifici del compilatore declspec. In Visual C++, è possibile usare la `[[deprecated]]` attributo anziché `declspec(deprecated)` e l'attributo viene riconosciuto dal compilatore qualsiasi conforme allo standard. Per tutti gli altri parametri declspec, ad esempio dllimport e dllexport, non è come ancora alcun attributo equivalente in modo che è necessario continuare a usare la sintassi declspec. Gli attributi non influiscono sul sistema di tipi e non modificano il significato di un programma. Compilatori di ignorano i valori di attributo che non riconosce.

**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): nell'ambito di un elenco di attributi, è possibile specificare lo spazio dei nomi di tutti i nomi con un singolo **usando** introducer:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## <a name="c-standard-attributes"></a>Attributi Standard C++

In c++11, gli attributi forniscono un modo standardizzato per annotare i costrutti C++ con informazioni aggiuntive che potrebbero non essere specifici del fornitore (inclusi ma non limitatamente a classi, funzioni, variabili e i blocchi). Un compilatore può usare queste informazioni per generare i messaggi informativi o applicare una logica speciale quando si compila il codice con attributo. Il compilatore ignora tutti gli attributi che non riconosce, il che significa che non è possibile definire i propri attributi personalizzati usando questa sintassi. Gli attributi siano racchiusi tra doppie parentesi quadre:

```cpp
[[deprecated]]
void Foo(int);
```

Attributi che rappresentano un'alternativa standardizzata alle estensioni specifiche del fornitore, ad esempio direttive #pragma, elencandone (Visual C++), o &#95; &#95;attributo&#95; &#95; (GNU). Tuttavia, è necessario usare i costrutti specifici del fornitore per la maggior parte degli scopi. Attualmente, lo standard specifica gli attributi seguenti che dovrebbe riconoscere un compilatore conforme:

- `[[noreturn]]` Specifica che una funzione non restituisce mai; in altre parole genera sempre un'eccezione. Il compilatore può modificare le regole di compilazione per `[[noreturn]]` entità.

- `[[carries_dependency]]` Specifica che la funzione propaga dipendenza dei dati rispetto alla sincronizzazione dei thread di ordinamento. L'attributo può essere applicato a uno o più parametri, per specificare che l'argomento passato comporta una dipendenza nel corpo della funzione. L'attributo può essere applicato alla funzione stessa, per specificare che il valore restituito contiene una dipendenza dalla funzione. Il compilatore può usare queste informazioni per generare il codice più efficiente.

- `[[deprecated]]` **Visual Studio 2015 e versioni successiva:** specifica che una funzione non deve essere usato e potrebbero non presente nelle versioni future di un'interfaccia di raccolta. Il compilatore può usare per generare un messaggio informativo quando il codice client prova a chiamare la funzione. Può essere applicato alla dichiarazione di una classe, un nome di typedef, una variabile, un membro dati non statico, una funzione, uno spazio dei nomi, un'enumerazione, un enumeratore o una specializzazione di modello.  

- `[[fallthrough]]` **Visual Studio 2017 e versioni successiva:** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)) le `[[fallthrough]]` attributo può essere utilizzato nel contesto del [passare](switch-statement-cpp.md) istruzioni suggerire al compilatore (o chiunque legga il codice) che il comportamento del fallthrough è previsto. Il compilatore Visual C++ attualmente non avvisa in caso di fallthrough comportamento, in modo che questo attributo non ha un comportamento del compilatore alcun effetto.

- `[[nodiscard]]` **Visual Studio 2017 versione 15.3 e versioni successive:** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)) specifica che un valore restituito dalla funzione non può essere eliminato. Genera avviso di C4834, come illustrato in questo esempio:

   ```cpp
   [[nodiscard]]
   int foo(int i) { return i * i; }

   int main()
   {
       foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
       return 0;
   }
   ```

- `[[maybe_unused]]` **Visual Studio 2017 versione 15.3 e versioni successive:** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)) specifica che una variabile, funzione, classe, (typedef), membro dati non statici, enum o specializzazione di modello intenzionalmente non può essere utilizzata. Il compilatore non avvisa quando un'entità contrassegnata `[[maybe_unused]]` non viene utilizzato. Un'entità a cui viene dichiarata senza l'attributo può essere ridichiarata in un secondo momento con l'attributo e viceversa. Un'entità viene considerata contrassegnato dopo la prima dichiarazione contrassegnata viene analizzato e per il resto della traduzione dell'unità di conversione corrente.

## <a name="microsoft-specific-attributes"></a>Attributi specifici di Microsoft

- `[[gsl::suppress(rules)]]` Questo attributo specifica Microsoft viene usato per non visualizzare avvisi da correttori che impongono [linee guida per il supporto della libreria (GSL)](https://github.com/Microsoft/GSL) regole nel codice. Ad esempio, consideriamo questo frammento di codice:

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

   - 26494 (tipo di regola 5: inizializzare sempre un oggetto.)

   - 26485 (limiti regola 3: Nessun impatto della matrice sul puntatore.)

   - 26481 (limiti Rule 1: non usare l'aritmetica dei puntatori. Usare span.)

   I primi due avvisi vengono attivati quando si compila questo codice con lo strumento di analisi codice CppCoreCheck installato e attivato. Ma il terzo avviso non viene attivato a causa dell'attributo. È possibile eliminare l'intero profilo limiti scrivendo [[gsl::suppress(bounds)]] senza includere un numero di regole specifici. Linee guida di base di C++ sono progettate per consentono di scrivere codice migliore e più sicuro. L'attributo suppress semplifica disattivare gli avvisi quando non volevano.
