---
title: Puntini di sospensione e modelli variadic
ms.date: 11/04/2016
ms.assetid: f20967d9-c967-4fd2-b902-2bb1d5ed87e3
ms.openlocfilehash: e916dac40355f4397ef4846c0edf568c60b7d3dd
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221627"
---
# <a name="ellipsis-and-variadic-templates"></a>Puntini di sospensione e modelli variadic

Questo articolo illustra come usare i puntini di sospensione ( `...` ) con i modelli C++ Variadic. I puntini di sospensione hanno avuto molti usi in C e C++. Sono inclusi gli elenchi di argomenti variabili per le funzioni. La `printf()` funzione della libreria di runtime C è uno degli esempi più noti.

Un *modello Variadic* è un modello di classe o di funzione che supporta un numero arbitrario di argomenti. Questo meccanismo è particolarmente utile per gli sviluppatori di librerie C++ perché può essere applicato sia ai modelli di classe che ai modelli di funzione e quindi offre un'ampia gamma di funzionalità e flessibilità indipendenti dai tipi e non semplici.

## <a name="syntax"></a>Sintassi

I puntini di sospensione vengono usati in due modi per i modelli variadic. A sinistra del nome del parametro, significa un *pacchetto di parametri*e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti.

Di seguito è riportato un esempio di base della sintassi di definizione della *classe modello Variadic* :

```cpp
template<typename... Arguments> class classname;
```

Per i pacchetti e le espansioni di parametri, è possibile aggiungere uno spazio attorno ai puntini di sospensione, in base alle preferenze, come illustrato negli esempi seguenti:

```cpp
template<typename ...Arguments> class classname;
```

Oppure:

```cpp
template<typename ... Arguments> class classname;
```

Si noti che questo articolo usa la convenzione illustrata nel primo esempio (i puntini di sospensione sono collegati a **`typename`** ).

Negli esempi precedenti, *arguments* è un pacchetto di parametri. La classe `classname` può accettare un numero variabile di argomenti, come negli esempi seguenti:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
vtclass<long, std::vector<int>, std::string> vtinstance4;
```

Utilizzando una definizione di classe modello Variadic, è anche possibile richiedere almeno un parametro:

```cpp
template <typename First, typename... Rest> class classname;
```

Di seguito è riportato un esempio di base della sintassi della *funzione modello Variadic* :

```cpp
template <typename... Arguments> returntype functionname(Arguments... args);
```

Il pacchetto di parametri *arguments* viene quindi espanso per l'uso, come illustrato nella sezione successiva, **informazioni sui modelli di Variadic**.

Sono possibili altre forme della sintassi della funzione di modello Variadic, inclusi, ma non limitati, gli esempi seguenti:

```cpp
template <typename... Arguments> returntype functionname(Arguments&... args);
template <typename... Arguments> returntype functionname(Arguments&&... args);
template <typename... Arguments> returntype functionname(Arguments*... args);
```

**`const`** Sono consentiti anche gli identificatori come:

```cpp
template <typename... Arguments> returntype functionname(const Arguments&... args);
```

Come per le definizioni delle classi modello Variadic, è possibile creare funzioni che richiedono almeno un parametro:

```cpp
template <typename First, typename... Rest> returntype functionname(const First& first, const Rest&... args);
```

I modelli variadic usano l' `sizeof...()` operatore (non correlato all' `sizeof()` operatore precedente):

```cpp
template<typename... Arguments>
void tfunc(const Arguments&... args)
{
    constexpr auto numargs{ sizeof...(Arguments) };

    X xobj[numargs]; // array of some previously defined type X

    helper_func(xobj, args...);
}
```

## <a name="more-about-ellipsis-placement"></a>Ulteriori informazioni sulla posizione dei puntini di sospensione

In precedenza, in questo articolo viene descritto il posizionamento dei puntini di sospensione che definisce i pacchetti e espansioni di parametri con il significato seguente: "a sinistra del nome del parametro indica un pacchetto di parametro e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti". Questo è tecnicamente vero, ma può confondere nella conversione in codice. Tenere in considerazione:

- In un template-parameter-list ( `template <parameter-list>` ) `typename...` introduce un pacchetto di parametri di modello.

- In una clausola parameter-declaration-( `func(parameter-list)` ), i puntini di sospensione di primo livello introducono un pacchetto di parametri di funzione e il posizionamento dei puntini di sospensione è importante:

    ```cpp
    // v1 is NOT a function parameter pack:
    template <typename... Types> void func1(std::vector<Types...> v1);

    // v2 IS a function parameter pack:
    template <typename... Types> void func2(std::vector<Types>... v2);
    ```

- Quando i puntini di sospensione sono presenti subito dopo un nome di parametro, si ottiene un'espansione del pacchetto di parametri.

## <a name="example"></a>Esempio

Un modo efficace per illustrare il meccanismo della funzione del modello Variadic consiste nell'usarlo in una riscrittura di alcune delle funzionalità di `printf` :

```cpp
#include <iostream>

using namespace std;

void print() {
    cout << endl;
}

template <typename T> void print(const T& t) {
    cout << t << endl;
}

template <typename First, typename... Rest> void print(const First& first, const Rest&... rest) {
    cout << first << ", ";
    print(rest...); // recursive call using pack expansion syntax
}

int main()
{
    print(); // calls first overload, outputting only a newline
    print(1); // calls second overload

    // these call the third overload, the variadic template,
    // which uses recursion as needed.
    print(10, 20);
    print(100, 200, 300);
    print("first", 2, "third", 3.14159);
}
```

## <a name="output"></a>Output

```Output
1
10, 20
100, 200, 300
first, 2, third, 3.14159
```

> [!NOTE]
> La maggior parte delle implementazioni che incorporano funzioni del modello Variadic usa la ricorsione di un form, ma è leggermente diversa dalla ricorsione tradizionale.  La ricorsione tradizionale prevede una funzione che chiama se stessa usando la stessa firma. (Potrebbe essere sovraccarico o basato su modelli, ma ogni volta viene scelta la stessa firma). La ricorsione Variadic prevede la chiamata di un modello di funzione Variadic usando numeri di argomenti diversi (quasi sempre decrescenti) e, di conseguenza, una firma diversa ogni volta. È ancora necessario un "case di base", ma la natura della ricorsione è diversa.
