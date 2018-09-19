---
title: Ellissi e modelli Variadic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: f20967d9-c967-4fd2-b902-2bb1d5ed87e3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 509ff98082edfad8fc48b3e1eaf6c3d4b4e6ad48
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46090477"
---
# <a name="ellipses-and-variadic-templates"></a>Ellissi e modelli variadic

Questo articolo illustra come usare i puntini di sospensione (`...`) con i modelli variadic di C++. I puntini di sospensione è stato usato in diversi modi in C e C++. Ad esempio elenchi di argomenti variabili per le funzioni. Il `printf()` funzione dalla libreria di Runtime C è uno degli esempi più noti.

Oggetto *modello variadic* è un modello di classe o funzione che supporta un numero arbitrario di argomenti. Questo meccanismo è particolarmente utile per gli sviluppatori di librerie C++ perché è possibile applicarla a entrambi i modelli di classe e i modelli di funzione e in tal modo forniscono un'ampia gamma di funzionalità complesse e indipendenti dai tipi e flessibilità.

## <a name="syntax"></a>Sintassi

I puntini di sospensione viene usato in due modi da diversi modelli variadic. A sinistra del nome del parametro indica un *pacchetto di parametri*, e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti.

Ecco un esempio di base *classe di modello variadic* sintassi di definizione:

```cpp
template<typename... Arguments> class classname;
```

Per i pacchetti e le espansioni di parametri, è possibile aggiungere uno spazio attorno ai puntini di sospensione, in base alle preferenze, come illustrato negli esempi seguenti:

```cpp
template<typename ...Arguments> class classname;
```

oppure:

```cpp
template<typename ... Arguments> class classname;
```

Si noti che in questo articolo viene utilizzata la convenzione illustrata nel primo esempio (i puntini di sospensione sono associati a `typename`).

Negli esempi precedenti, *argomenti* è un pacchetto di parametri. La classe `classname` può accettare un numero variabile di argomenti, come in questi esempi:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
vtclass<long, std::vector<int>, std::string> vtinstance4;
```

Usando una definizione di classe modello variadic, è anche possibile richiedere almeno un parametro:

```cpp
template <typename First, typename... Rest> class classname;
```

Ecco un esempio di base *funzione di modello variadic* sintassi:

```cpp
template <typename... Arguments> returntype functionname(Arguments... args);
```

Il *argomenti* pacchetto di parametri viene quindi espanso per l'uso, come illustrato nella sezione successiva **informazioni sui modelli di variadic**.

Sono possibili altre forme di sintassi della funzione modello variadic, tra cui, senza limitazioni, questi esempi:

```cpp
template <typename... Arguments> returntype functionname(Arguments&... args);
template <typename... Arguments> returntype functionname(Arguments&&... args);
template <typename... Arguments> returntype functionname(Arguments*... args);
```

Gli identificatori come **const** sono inoltre consentite:

```cpp
template <typename... Arguments> returntype functionname(const Arguments&... args);
```

Come le definizioni di classi modello variadic, è possibile creare funzioni che richiedono almeno un parametro:

```cpp
template <typename First, typename... Rest> returntype functionname(const First& first, const Rest&... args);
```

I modelli Variadic utilizzano le `sizeof...()` operatore (non correlato al meno recente `sizeof()` operator):

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

In precedenza, in questo articolo viene descritto il posizionamento dei puntini di sospensione che definisce i pacchetti e espansioni di parametri con il significato seguente: "a sinistra del nome del parametro indica un pacchetto di parametro e a destra del nome del parametro espande i pacchetti di parametri in nomi distinti". Questo è tecnicamente vero, ma può confondere nella conversione in codice. Tenere presente quanto segue:

- In un elenco di parametri di modello (`template <parameter-list>`), `typename...` introduce un pacchetto di parametri di modello.

- In una clausola di dichiarazione di parametro (`func(parameter-list)`), un "livello superiore" puntini di sospensione introduce un pacchetto di parametri di funzione e il posizionamento dei puntini è importante:

    ```cpp
    // v1 is NOT a function parameter pack:
    template <typename... Types> void func1(std::vector<Types...> v1);

    // v2 IS a function parameter pack:
    template <typename... Types> void func2(std::vector<Types>... v2);
    ```

- Quando i puntini di sospensione sono presenti subito dopo un nome di parametro, si ottiene un'espansione del pacchetto di parametri.

## <a name="example"></a>Esempio

Un buon metodo per illustrare il meccanismo variadic della funzione modello è utilizzarlo nella riscrittura di alcune delle funzionalità di `printf`:

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
>  La maggior parte delle implementazioni che includono funzioni variadic del modello usano la ricorsione di qualche tipo, ma è leggermente diversa dalla ricorsione tradizionale.  La ricorsione tradizionale include una funzione chiamata al metodo di stesso usando la stessa firma. (Potrebbe essere in overload o basata su modelli, ma ogni volta viene scelta la stessa firma). La ricorsione Variadic prevede la chiamata a un modello di funzione variadic utilizzando numeri (quasi sempre decrescenti) diversi di argomenti e quindi scegliendo una firma diversa ogni volta. Un "case di base" è ancora necessaria, ma la natura della ricorsione è differente.