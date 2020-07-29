---
title: Attributi in C++
ms.date: 05/06/2019
ms.assetid: 748340d9-8abf-4940-b0a0-91b6156a3ff8
ms.openlocfilehash: efdc62e2343135aee483520f633bac99519455b4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229207"
---
# <a name="attributes-in-c"></a>Attributi in C++

Lo standard C++ definisce un set di attributi e consente ai fornitori del compilatore di definire i propri attributi (in uno spazio dei nomi specifico del fornitore), ma i compilatori sono necessari per riconoscere solo gli attributi definiti nello standard.

In alcuni casi, gli attributi standard si sovrappongono con i parametri declspec specifici del compilatore. In Visual C++, è possibile utilizzare l' `[[deprecated]]` attributo anziché utilizzare `declspec(deprecated)` e l'attributo sarà riconosciuto da qualsiasi compilatore conforme. Per tutti gli altri parametri declspec, ad esempio dllimport e dllexport, esiste ancora un attributo equivalente, quindi è necessario continuare a usare la sintassi declspec. Gli attributi non influiscono sul sistema dei tipi e non modificano il significato di un programma. I compilatori ignorano i valori di attributo che non riconoscono.

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): nell'ambito di un elenco di attributi, è possibile specificare lo spazio dei nomi per tutti i nomi con un unico **`using`** introduttore:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## <a name="c-standard-attributes"></a>Attributi standard C++

In C++ 11 gli attributi forniscono un metodo standardizzato per annotare i costrutti C++ (inclusi ma non limitati a classi, funzioni, variabili e blocchi) con informazioni aggiuntive che possono o meno essere specifiche del fornitore. Un compilatore può utilizzare queste informazioni per generare messaggi informativi o per applicare la logica speciale quando si compila il codice con attributi. Il compilatore ignora tutti gli attributi non riconosciuti, il che significa che non è possibile definire attributi personalizzati utilizzando questa sintassi. Gli attributi sono racchiusi tra parentesi quadre doppie:

```cpp
[[deprecated]]
void Foo(int);
```

Gli attributi rappresentano un'alternativa standardizzata alle estensioni specifiche del fornitore, ad esempio direttive #pragma, __declspec () (Visual C++) o &#95;&#95;attribute&#95;&#95;  (GNU). Per la maggior parte degli scopi, tuttavia, sarà comunque necessario usare i costrutti specifici del fornitore. Attualmente, lo standard specifica gli attributi seguenti che devono essere riconosciuti da un compilatore conforme:

- `[[noreturn]]`Specifica che una funzione non restituisce mai; in altre parole, genera sempre un'eccezione. Il compilatore può modificare le regole di compilazione per le `[[noreturn]]` entità.

- `[[carries_dependency]]`Specifica che la funzione propaga l'ordinamento delle dipendenze dei dati rispetto alla sincronizzazione dei thread. L'attributo può essere applicato a uno o più parametri, per specificare che l'argomento passato trasporta una dipendenza nel corpo della funzione. L'attributo può essere applicato alla funzione stessa, per specificare che il valore restituito trasporta una dipendenza dalla funzione. Il compilatore può utilizzare queste informazioni per generare codice più efficiente.

- `[[deprecated]]`**Visual Studio 2015 e versioni successive:** Specifica che una funzione non deve essere utilizzata e potrebbe non esistere nelle versioni future di un'interfaccia di libreria. Il compilatore può utilizzare questo oggetto per generare un messaggio informativo quando il codice client tenta di chiamare la funzione. Può essere applicato alla dichiarazione di una classe, un nome di typedef, una variabile, un membro dati non statico, una funzione, uno spazio dei nomi, un'enumerazione, un enumeratore o una specializzazione del modello.

- `[[fallthrough]]`**Visual Studio 2017 e versioni successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) l' `[[fallthrough]]` attributo può essere usato nel contesto di istruzioni [Switch](switch-statement-cpp.md) come hint per il compilatore (o chiunque legga il codice) a cui è destinato il comportamento di FallThrough. Il compilatore Microsoft C++ non avverte attualmente il comportamento del FallThrough, pertanto questo attributo non ha alcun effetto sul comportamento del compilatore.

- `[[nodiscard]]`**Visual Studio 2017 versione 15,3 e successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) specifica che il valore restituito di una funzione non deve essere rimosso. Genera l'avviso C4834, come illustrato nell'esempio seguente:

    ```cpp
    [[nodiscard]]
    int foo(int i) { return i * i; }

    int main()
    {
        foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
        return 0;
    }
    ```

- `[[maybe_unused]]`**Visual Studio 2017 versione 15,3 e successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) specifica che una variabile, una funzione, una classe, typedef, un membro dati non statico, un'enumerazione o una specializzazione del modello possono intenzionalmente non essere usati. Il compilatore non avvisa quando un'entità contrassegnata `[[maybe_unused]]` non viene utilizzata. Un'entità dichiarata senza l'attributo può essere ridichiarata in un secondo momento con l'attributo e viceversa. Un'entità viene considerata contrassegnata dopo la prima dichiarazione contrassegnata come analizzata e per il resto della conversione dell'unità di conversione corrente.

## <a name="microsoft-specific-attributes"></a>Attributi specifici di Microsoft

- `[[gsl::suppress(rules)]]`Questo attributo specifico di Microsoft viene utilizzato per l'eliminazione degli avvisi dai controlli che applicano le regole [GSL (Guidelines Support Library)](https://github.com/Microsoft/GSL) nel codice. Ad esempio, si consideri il frammento di codice seguente:

    ```cpp
    int main()
    {
        int arr[10]; // GSL warning C26494 will be fired
        int* p = arr; // GSL warning C26485 will be fired
        [[gsl::suppress(bounds.1)]] // This attribute suppresses Bounds rule #1
        {
            int* q = p + 1; // GSL warning C26481 suppressed
            p = q--; // GSL warning C26481 suppressed
        }
    }
    ```

  L'esempio genera gli avvisi seguenti:

  - 26494 (regola di tipo 5: inizializzare sempre un oggetto).

  - 26485 (regola dei limiti 3: nessuna matrice al decadimento del puntatore).

  - 26481 (regola dei limiti 1: non usare l'aritmetica dei puntatori. In alternativa, utilizzare Span.)

  I primi due avvisi vengono generati quando si compila questo codice con lo strumento di analisi del codice CppCoreCheck installato e attivato. Ma il terzo avviso non viene attivato a causa dell'attributo. È possibile eliminare l'intero profilo dei limiti scrivendo [[GSL:: Elimina (Bounds)]] senza includere un numero di regola specifico. I Linee guida di base di C++ sono progettati per semplificare la scrittura di codice migliore e sicuro. L'attributo Elimina rende più semplice disattivare gli avvisi quando non sono desiderati.
  