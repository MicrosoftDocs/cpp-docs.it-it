---
title: Ellissi e modelli Variadic
ms.date: 11/04/2016
ms.assetid: f20967d9-c967-4fd2-b902-2bb1d5ed87e3
ms.openlocfilehash: 8326a6b9e75db6adc37a68aa5d5741b004d27d30
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82031524"
---
# <a name="ellipsis-and-variadic-templates"></a>Ellissi e modelli Variadic

In questo articolo viene illustrato come`...`utilizzare i farlipsis ( ) con i modelli variadic di C. I puntine hanno avuto molti usi in C e C . Questi includono elenchi di argomenti variabili per le funzioni. La `printf()` funzione della libreria di runtime C è uno degli esempi più noti.

Un *modello variadic* è un modello di classe o funzione che supporta un numero arbitrario di argomenti. Questo meccanismo è particolarmente utile per gli sviluppatori di librerie di C, perché è possibile applicarlo sia ai modelli di classe che ai modelli di funzione e quindi fornire un'ampia gamma di funzionalità e flessibilità indipendenti dai tipi e non banali.

## <a name="syntax"></a>Sintassi

I ellissi vengono utilizzati in due modi dai modelli variadic. A sinistra del nome del parametro, indica un *pacchetto*di parametri e a destra del nome del parametro espande i pacchetti di parametri in nomi separati.

Ecco un esempio di base della sintassi di definizione di classe modello variadic:Here's a basic example of *variadic template class* definition syntax:

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

Si noti che in questo articolo viene utilizzata la convenzione illustrata nel primo esempio (i puntini di sospensione sono associati a `typename`).

Negli esempi precedenti, *Arguments* è un pacchetto di parametri. La `classname` classe può accettare un numero variabile di argomenti, come in questi esempi:The class can accept a variable number of arguments, as in these examples:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
vtclass<long, std::vector<int>, std::string> vtinstance4;
```

Utilizzando una definizione di classe modello variadic, è anche possibile richiedere almeno un parametro:By using a variadic template class definition, you can also require at least one parameter:

```cpp
template <typename First, typename... Rest> class classname;
```

Ecco un esempio di base della sintassi delle funzioni di modello variadic:Here's a basic example of *variadic template function* syntax:

```cpp
template <typename... Arguments> returntype functionname(Arguments... args);
```

Il pacchetto di parametri *Arguments* viene quindi espanso per l'utilizzo, come illustrato nella sezione successiva, **Informazioni sui modelli variadic**.

Sono possibili altre forme di sintassi delle funzioni di modello variadiche, tra cui, ma non solo, questi esempi:

```cpp
template <typename... Arguments> returntype functionname(Arguments&... args);
template <typename... Arguments> returntype functionname(Arguments&&... args);
template <typename... Arguments> returntype functionname(Arguments*... args);
```

Sono consentiti anche gli identificatori come **const:**

```cpp
template <typename... Arguments> returntype functionname(const Arguments&... args);
```

Come per le definizioni di classe modello variadic, è possibile creare funzioni che richiedono almeno un parametro:As with variadic template class definitions, you can make functions that require at least one parameter:

```cpp
template <typename First, typename... Rest> returntype functionname(const First& first, const Rest&... args);
```

I modelli Variadic utilizzano l'operatore `sizeof...()` (non correlato all'operatore precedente): `sizeof()`

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

In precedenza, in questo articolo viene descritto il posizionamento dei puntini di sospensione che definisce i pacchetti e espansioni di parametri con il significato seguente: "a sinistra del nome del parametro indica un pacchetto di parametro e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti". Questo è tecnicamente vero, ma può confondere nella conversione in codice. Prendere in considerazione:

- In un template-parameter-list (`template <parameter-list>`), `typename...` viene introdotto un pacchetto di parametri di modello.

- In una parameter-declaration-clause (`func(parameter-list)`), i puntini di sospensione di "livello superiore" introducono un pacchetto di parametri di funzione e il posizionamento dei puntini di sospensione è importante:

    ```cpp
    // v1 is NOT a function parameter pack:
    template <typename... Types> void func1(std::vector<Types...> v1);

    // v2 IS a function parameter pack:
    template <typename... Types> void func2(std::vector<Types>... v2);
    ```

- Quando i puntini di sospensione sono presenti subito dopo un nome di parametro, si ottiene un'espansione del pacchetto di parametri.

## <a name="example"></a>Esempio

Un buon modo per illustrare il meccanismo di funzione del modello variadic `printf`consiste nell'utilizzarlo in una riscrittura di alcune delle funzionalità di :

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
> La maggior parte delle implementazioni che incorporano funzioni di modello variadic utilizzano la ricorsione di qualche forma, ma è leggermente diversa dalla ricorsione tradizionale.  La ricorsione tradizionale comporta una funzione che chiama se stessa utilizzando la stessa firma. (Può essere sottoposto a overload o basato su modelli, ma la stessa firma viene scelta ogni volta.) La ricorsione variadic comporta la chiamata di un modello di funzione variadic utilizzando diversi (quasi sempre diminuendo) numeri di argomenti e quindi stampando una firma diversa ogni volta. È ancora necessario un "caso di base", ma la natura della ricorsione è diversa.
