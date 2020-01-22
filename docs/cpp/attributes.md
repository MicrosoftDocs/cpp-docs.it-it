---
title: Attributi inC++
ms.date: 05/06/2019
ms.assetid: 748340d9-8abf-4940-b0a0-91b6156a3ff8
ms.openlocfilehash: 5967974d419299778e4aadaa235ee21c62e16d34
ms.sourcegitcommit: a930a9b47bd95599265d6ba83bb87e46ae748949
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2020
ms.locfileid: "76518296"
---
# <a name="attributes-in-c"></a>Attributi inC++

Lo C++ standard definisce un set di attributi e consente ai fornitori di compilatori di definire i propri attributi (in uno spazio dei nomi specifico del fornitore), ma i compilatori sono necessari per riconoscere solo gli attributi definiti nello standard.

In alcuni casi, gli attributi standard si sovrappongono con i parametri declspec specifici del compilatore. In Visual C++è possibile utilizzare l'attributo `[[deprecated]]` anziché `declspec(deprecated)` e l'attributo sarà riconosciuto da qualsiasi compilatore conforme. Per tutti gli altri parametri declspec, ad esempio dllimport e dllexport, esiste ancora un attributo equivalente, quindi è necessario continuare a usare la sintassi declspec. Gli attributi non influiscono sul sistema dei tipi e non modificano il significato di un programma. I compilatori ignorano i valori di attributo che non riconoscono.

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): nell'ambito di un elenco di attributi, è possibile specificare lo spazio dei nomi per tutti i nomi con **un solo** introduttore:

```cpp
void g() {
    [[using rpr: kernel, target(cpu,gpu)]] // equivalent to [[ rpr::kernel, rpr::target(cpu,gpu) ]]
    do task();
}
```

## <a name="c-standard-attributes"></a>C++Attributi standard

In C++ 11 gli attributi forniscono un metodo standardizzato per annotare i C++ costrutti (inclusi ma non limitati a classi, funzioni, variabili e blocchi) con informazioni aggiuntive che possono o meno essere specifiche del fornitore. Un compilatore può utilizzare queste informazioni per generare messaggi informativi o per applicare la logica speciale quando si compila il codice con attributi. Il compilatore ignora tutti gli attributi non riconosciuti, il che significa che non è possibile definire attributi personalizzati utilizzando questa sintassi. Gli attributi sono racchiusi tra parentesi quadre doppie:

```cpp
[[deprecated]]
void Foo(int);
```

Gli attributi rappresentano un'alternativa standardizzata alle estensioni specifiche del fornitore, ad esempio direttive #pragma, __declspec () C++(Visual) &#95; &#95;o&#95; &#95; Attribute (GNU). Per la maggior parte degli scopi, tuttavia, sarà comunque necessario usare i costrutti specifici del fornitore. Attualmente, lo standard specifica gli attributi seguenti che devono essere riconosciuti da un compilatore conforme:

- `[[noreturn]]` specifica che una funzione non restituisce mai; in altre parole, genera sempre un'eccezione. Il compilatore può modificare le regole di compilazione per le entità `[[noreturn]]`.

- `[[carries_dependency]]` specifica che la funzione propaga l'ordinamento delle dipendenze dei dati rispetto alla sincronizzazione dei thread. L'attributo può essere applicato a uno o più parametri, per specificare che l'argomento passato trasporta una dipendenza nel corpo della funzione. L'attributo può essere applicato alla funzione stessa, per specificare che il valore restituito trasporta una dipendenza dalla funzione. Il compilatore può utilizzare queste informazioni per generare codice più efficiente.

- `[[deprecated]]` **Visual Studio 2015 e versioni successive:** specifica che una funzione non deve essere usata e potrebbe non esistere nelle versioni future di un'interfaccia di libreria. Il compilatore può utilizzare questo oggetto per generare un messaggio informativo quando il codice client tenta di chiamare la funzione. Può essere applicato alla dichiarazione di una classe, un nome di typedef, una variabile, un membro dati non statico, una funzione, uno spazio dei nomi, un'enumerazione, un enumeratore o una specializzazione del modello.

- `[[fallthrough]]` **Visual Studio 2017 e versioni successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) l'attributo `[[fallthrough]]` può essere usato nel contesto di istruzioni [Switch](switch-statement-cpp.md) come hint per il compilatore (o chiunque legga il codice) a cui è destinato il comportamento di FallThrough. Il compilatore C++ Microsoft non avverte attualmente il comportamento del FallThrough, pertanto questo attributo non ha alcun effetto sul comportamento del compilatore.

- `[[nodiscard]]` **Visual Studio 2017 versione 15,3 e successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) specifica che il valore restituito di una funzione non deve essere rimosso. Genera l'avviso C4834, come illustrato nell'esempio seguente:

    ```cpp
    [[nodiscard]]
    int foo(int i) { return i * i; }

    int main()
    {
        foo(42); //warning C4834: discarding return value of function with 'nodiscard' attribute
        return 0;
    }
    ```

- `[[maybe_unused]]` **Visual Studio 2017 versione 15,3 e successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)) specifica che una variabile, una funzione, una classe, typedef, un membro dati non statico, un'enumerazione o una specializzazione del modello possono intenzionalmente non essere usati. Il compilatore non avvisa quando un'entità contrassegnata come `[[maybe_unused]]` non viene utilizzata. Un'entità dichiarata senza l'attributo può essere ridichiarata in un secondo momento con l'attributo e viceversa. Un'entità viene considerata contrassegnata dopo la prima dichiarazione contrassegnata come analizzata e per il resto della conversione dell'unità di conversione corrente.

## <a name="microsoft-specific-attributes"></a>Attributi specifici di Microsoft

- `[[gsl::suppress(rules)]]` questo attributo specifico di Microsoft viene utilizzato per l'eliminazione degli avvisi dai controlli che impongono le regole della [libreria GSL (Guidelines Support Library)](https://github.com/Microsoft/GSL) nel codice. Ad esempio, si consideri il frammento di codice seguente:

    ```cpp
    int main()
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

  L'esempio genera gli avvisi seguenti:

  - 26494 (regola di tipo 5: inizializzare sempre un oggetto).

  - 26485 (regola dei limiti 3: nessuna matrice al decadimento del puntatore).

  - 26481 (regola dei limiti 1: non usare l'aritmetica dei puntatori. In alternativa, utilizzare Span.)

  I primi due avvisi vengono generati quando si compila questo codice con lo strumento di analisi del codice CppCoreCheck installato e attivato. Ma il terzo avviso non viene attivato a causa dell'attributo. È possibile eliminare l'intero profilo dei limiti scrivendo [[GSL:: Elimina (Bounds)]] senza includere un numero di regola specifico. Le C++ linee guida di base sono progettate per semplificare la scrittura di codice migliore e sicuro. L'attributo Elimina rende più semplice disattivare gli avvisi quando non sono desiderati.
  