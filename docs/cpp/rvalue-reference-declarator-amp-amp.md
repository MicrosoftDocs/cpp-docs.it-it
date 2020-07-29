---
title: Dichiaratore di riferimento rvalue:&amp;&amp;
ms.date: 11/04/2016
f1_keywords:
- '&&'
helpviewer_keywords:
- '&& rvalue reference declarator'
ms.assetid: eab0ce3a-c5a3-4992-aa70-6a8ab1f7491d
ms.openlocfilehash: 65eec84447043b89ff94b77b7aed22b1b06f58e3
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227101"
---
# <a name="rvalue-reference-declarator-ampamp"></a>Dichiaratore di riferimento rvalue:&amp;&amp;

Contiene un riferimento a un'espressione rvalue.

## <a name="syntax"></a>Sintassi

```
type-id && cast-expression
```

## <a name="remarks"></a>Osservazioni

I riferimenti rvalue consentono di distinguere un lvalue da un rvalue. I riferimenti lvalue e rvalue sono sintatticamente e semanticamente simili, ma seguono regole in qualche modo diverse. Per ulteriori informazioni su lvalue e rvalues, vedere [lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md). Per ulteriori informazioni sui riferimenti lvalue, vedere [dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md).

Nelle sezioni seguenti viene descritto come i riferimenti rvalue supportano l'implementazione della *semantica di spostamento* e l' *avanzamento perfetto*.

## <a name="move-semantics"></a>Semantica di spostamento

I riferimenti rvalue supportano l'implementazione della *semantica di spostamento*, che può aumentare significativamente le prestazioni delle applicazioni. La semantica di spostamento consente di scrivere codice per il trasferimento delle risorse (ad esempio memoria allocata in modo dinamico) da un oggetto a un altro. La semantica di spostamento funziona in quanto consente il trasferimento delle risorse da oggetti temporanei a cui non è possibile fare riferimento in un altro punto del programma.

Per implementare la semantica di spostamento, in genere si fornisce un *costruttore di spostamento* e facoltativamente un operatore di assegnazione di spostamento (**operator =**) alla classe. Nelle operazioni di copia e assegnazione le cui origini sono valori rvalue viene automaticamente utilizzata la semantica di spostamento. A differenza di un costruttore di copia predefinito, il compilatore non fornisce un costruttore di spostamento predefinito. Per ulteriori informazioni su come scrivere un costruttore di spostamento e su come utilizzarlo nell'applicazione, vedere costruttori di spostamento [e operatori di assegnazione di spostamento (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md).

È inoltre possibile sottoporre a overload funzioni e operatori comuni per sfruttare la semantica di spostamento. Visual Studio 2010 introduce la semantica di spostamento nella libreria standard C++. Ad esempio, la classe `string` implementa le operazioni che eseguono la semantica di spostamento. Si consideri l'esempio seguente in cui vengono concatenate diverse stringhe e viene visualizzato il risultato:

```cpp
// string_concatenation.cpp
// compile with: /EHsc
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s = string("h") + "e" + "ll" + "o";
   cout << s << endl;
}
```

Prima di Visual Studio 2010, ogni chiamata a **operator +** alloca e restituisce un nuovo `string` oggetto temporaneo (rvalue). **operator +** non può aggiungere una stringa all'altra perché non sa se le stringhe di origine sono lvalue o RValues. Se le stringhe di origine sono entrambe lvalue, è possibile che a esse venga fatto riferimento in un altro punto del programma e pertanto non devono essere modificate. Utilizzando i riferimenti rvalue, **operator +** può essere modificato per eseguire rvalues, a cui non è possibile fare riferimento in altre parti del programma. Quindi, **operator +** può ora accodare una stringa a un'altra. Ciò può ridurre notevolmente il numero delle allocazioni di memoria dinamica che devono essere eseguite dalla classe `string`. Per ulteriori informazioni sulla `string` classe, vedere [basic_string Class](../standard-library/basic-string-class.md).

La semantica di spostamento è utile anche quando il compilatore non può utilizzare l'ottimizzazione del valore restituito (RVO) o l'ottimizzazione del valore restituito denominato (NRVO). In questi casi, il compilatore chiama il costruttore di spostamento se è definito dal tipo.

Per comprendere meglio la semantica di spostamento, si consideri l'esempio dell'inserimento di un elemento in un oggetto `vector`. Se la capacità dell'oggetto `vector` viene superata, tale oggetto `vector` dovrà allocare di nuovo la memoria per i relativi elementi, quindi copiare ogni elemento in un'altra posizione di memoria per creare spazio per l'elemento inserito. Quando viene eseguita la copia di un elemento tramite un'operazione di inserimento, viene creato un nuovo elemento, viene chiamato il costruttore di copia per copiare i dati dall'elemento precedente nel nuovo elemento, quindi viene eliminato l'elemento precedente. La semantica di spostamento consente di spostare gli oggetti direttamente senza dover effettuare le dispendiose operazioni di allocazione della memoria e di copia.

Per sfruttare i vantaggi della semantica di spostamento nell'esempio `vector`, è possibile scrivere un costruttore di spostamento per spostare i dati da un oggetto a un altro.

Per ulteriori informazioni sull'introduzione della semantica di spostamento nella libreria standard C++ in Visual Studio 2010, vedere la pagina relativa alla [libreria standard c++](../standard-library/cpp-standard-library-reference.md).

## <a name="perfect-forwarding"></a>Inoltro perfetto

L'inoltro perfetto riduce la necessità delle funzioni sottoposte a overload e consente di evitare il problema di inoltro. Il *problema di inoltramento* può verificarsi quando si scrive una funzione generica che accetta riferimenti come parametri e passa (o *Inoltra*) questi parametri a un'altra funzione. Ad esempio, se la funzione generica accetta un parametro di tipo `const T&`, la funzione chiamata non può modificare il valore di tale parametro. Se la funzione generica accetta un parametro di tipo `T&`, non sarà possibile chiamare tale funzione utilizzando un rvalue, ad esempio un oggetto temporaneo o un valore letterale Integer.

In genere, per risolvere questo problema, è necessario fornire versioni sottoposte a overload della funzione generica che accettano `T&` e `const T&` per ogni parametro. Di conseguenza, il numero delle funzioni sottoposte a overload aumenta in modo esponenziale con il numero di parametri. I riferimenti rvalue consentono di scrivere una versione di una funzione che accetta argomenti arbitrari e li inoltra a un'altra funzione come se l'altra funzione fosse stata chiamata direttamente.

Si consideri l'esempio seguente in cui vengono dichiarati quattro tipi, `W`, `X`, `Y` e `Z`. Il costruttore per ogni tipo accetta una combinazione diversa di **`const`** riferimenti e non **`const`** lvalue come parametri.

```cpp
struct W
{
   W(int&, int&) {}
};

struct X
{
   X(const int&, int&) {}
};

struct Y
{
   Y(int&, const int&) {}
};

struct Z
{
   Z(const int&, const int&) {}
};
```

Si supponga di voler scrivere una funzione generica che genera oggetti. Nell'esempio riportato di seguito viene illustrato un modo per la scrittura di questa funzione:

```cpp
template <typename T, typename A1, typename A2>
T* factory(A1& a1, A2& a2)
{
   return new T(a1, a2);
}
```

Nell'esempio seguente viene illustrata una chiamata valida alla funzione `factory`:

```cpp
int a = 4, b = 5;
W* pw = factory<W>(a, b);
```

Tuttavia, l'esempio seguente non contiene una chiamata valida alla funzione `factory` perché `factory` accetta come parametri i riferimenti lvalue modificabili, ma viene chiamata utilizzando i valori rvalue:

```cpp
Z* pz = factory<Z>(2, 2);
```

In genere, per risolvere questo problema, è necessario creare una versione sottoposta a overload della funzione `factory` per ogni combinazione di `A&` e parametri `const A&`. I riferimenti rvalue consentono di scrivere una versione della funzione `factory`, come illustrato nell'esempio seguente:

```cpp
template <typename T, typename A1, typename A2>
T* factory(A1&& a1, A2&& a2)
{
   return new T(std::forward<A1>(a1), std::forward<A2>(a2));
}
```

In questo esempio vengono utilizzati i riferimenti rvalue come parametri della funzione `factory`. Lo scopo della funzione [std:: inoltr](../standard-library/utility-functions.md#forward) è di inviare i parametri della funzione Factory al costruttore della classe modello.

Nell'esempio seguente viene illustrata la funzione `main` che utilizza la funzione `factory` modificata per creare istanze delle classi `W`, `X`, `Y` e `Z`. La funzione `factory` modificata inoltra i relativi parametri (valori lvalue o rvalue) al costruttore della classe appropriato.

```cpp
int main()
{
   int a = 4, b = 5;
   W* pw = factory<W>(a, b);
   X* px = factory<X>(2, b);
   Y* py = factory<Y>(a, 2);
   Z* pz = factory<Z>(2, 2);

   delete pw;
   delete px;
   delete py;
   delete pz;
}
```

## <a name="additional-properties-of-rvalue-references"></a>Proprietà aggiuntive dei riferimenti rvalue

**È possibile eseguire l'overload di una funzione che accetta un riferimento lvalue e un riferimento rvalue.**

Eseguendo l'overload di una funzione per eseguire un **`const`** riferimento lvalue o un riferimento rvalue, è possibile scrivere codice che distingue tra gli oggetti non modificabili (lvalue) e i valori temporanei modificabili (RValues). È possibile passare un oggetto a una funzione che accetta un riferimento rvalue a meno che l'oggetto non sia contrassegnato come **`const`** . Nell'esempio seguente viene illustrata la funzione `f`, che viene sottoposta a overload per accettare un riferimento lvalue e un riferimento rvalue. La funzione `main` chiama `f` con i valori lvalue e un valore rvalue.

```cpp
// reference-overload.cpp
// Compile with: /EHsc
#include <iostream>
using namespace std;

// A class that contains a memory resource.
class MemoryBlock
{
   // TODO: Add resources for the class here.
};

void f(const MemoryBlock&)
{
   cout << "In f(const MemoryBlock&). This version cannot modify the parameter." << endl;
}

void f(MemoryBlock&&)
{
   cout << "In f(MemoryBlock&&). This version can modify the parameter." << endl;
}

int main()
{
   MemoryBlock block;
   f(block);
   f(MemoryBlock());
}
```

Nell'esempio viene prodotto l'output seguente:

```Output
In f(const MemoryBlock&). This version cannot modify the parameter.
In f(MemoryBlock&&). This version can modify the parameter.
```

In questo esempio, la prima chiamata a `f` passa una variabile locale (un lvalue) come argomento. La seconda chiamata a `f` passa un oggetto temporaneo come argomento. Poiché non può essere fatto riferimento all'oggetto temporaneo in un altro punto del programma, la chiamata viene associata alla versione sottoposta a overload di `f` che accetta un riferimento rvalue, ovvero può modificare l'oggetto.

**Il compilatore considera un riferimento rvalue denominato come lvalue e un riferimento rvalue senza nome come rvalue.**

Quando si scrive una funzione che accetta un riferimento rvalue come parametro, tale parametro viene considerato come lvalue nel corpo della funzione. Il compilatore considera un riferimento rvalue denominato come lvalue poiché è possibile fare riferimento a un oggetto denominato da varie parti di un programma. Sarebbe pericoloso consentire a più parti di un programma di modificare o rimuovere risorse da tale oggetto. Ad esempio, se più parti di un programma tentano di trasferire risorse dallo stesso oggetto, solo la prima parte trasferirà la risorsa correttamente.

Nell'esempio seguente viene illustrata la funzione `g`, che viene sottoposta a overload per accettare un riferimento lvalue e un riferimento rvalue. La funzione `f` accetta un riferimento rvalue come parametro (un riferimento rvalue denominato) e restituisce un riferimento rvalue (un riferimento rvalue senza nome). Nella chiamata a `g` da `f`, la risoluzione dell'overload seleziona la versione `g` che accetta un riferimento lvalue poiché il corpo di `f` considera il parametro come lvalue. Nella chiamata a `g` da `main`, la risoluzione dell'overload seleziona la versione di `g` che accetta un riferimento rvalue poiché `f` restituisce un riferimento rvalue.

```cpp
// named-reference.cpp
// Compile with: /EHsc
#include <iostream>
using namespace std;

// A class that contains a memory resource.
class MemoryBlock
{
   // TODO: Add resources for the class here.
};

void g(const MemoryBlock&)
{
   cout << "In g(const MemoryBlock&)." << endl;
}

void g(MemoryBlock&&)
{
   cout << "In g(MemoryBlock&&)." << endl;
}

MemoryBlock&& f(MemoryBlock&& block)
{
   g(block);
   return move(block);
}

int main()
{
   g(f(MemoryBlock()));
}
```

Nell'esempio viene prodotto l'output seguente:

```cpp
In g(const MemoryBlock&).
In g(MemoryBlock&&).
```

In questo esempio la funzione `main` passa un rvalue a `f`. Il corpo di `f` tratta il parametro denominato come un lvalue. La chiamata da `f` a `g` associa il parametro a un riferimento lvalue (la prima versione sottoposta a overload di `g`).

- **È possibile eseguire il cast di un lvalue a un riferimento rvalue.**

La funzione della libreria standard C++ [std:: Move](../standard-library/utility-functions.md#move) consente di convertire un oggetto in un riferimento rvalue a tale oggetto. In alternativa, è possibile usare la **`static_cast`** parola chiave per eseguire il cast di un lvalue a un riferimento rvalue, come illustrato nell'esempio seguente:

```cpp
// cast-reference.cpp
// Compile with: /EHsc
#include <iostream>
using namespace std;

// A class that contains a memory resource.
class MemoryBlock
{
   // TODO: Add resources for the class here.
};

void g(const MemoryBlock&)
{
   cout << "In g(const MemoryBlock&)." << endl;
}

void g(MemoryBlock&&)
{
   cout << "In g(MemoryBlock&&)." << endl;
}

int main()
{
   MemoryBlock block;
   g(block);
   g(static_cast<MemoryBlock&&>(block));
}
```

Nell'esempio viene prodotto l'output seguente:

```cpp
In g(const MemoryBlock&).
In g(MemoryBlock&&).
```

**I modelli di funzione deducono i tipi di argomento di modello, quindi utilizzano le regole di compressione dei riferimenti.**

È normale scrivere un modello di funzione che passa (o *Inoltra*) i parametri a un'altra funzione. È importante capire come funziona la deduzione del tipo di modello per i modelli di funzioni che accettano i riferimenti rvalue.

Se l'argomento della funzione è un rvalue, il compilatore deduce che l'argomento sia un riferimento rvalue. Ad esempio, se si passa un riferimento rvalue a un oggetto di tipo `X` a una funzione di modello che accetta il tipo `T&&` come parametro, la deduzione dell'argomento di modello deduce che `T` sia `X`. Pertanto, il parametro ha il tipo `X&&`. Se l'argomento della funzione è un lvalue o **`const`** lvalue, il compilatore deduce che il tipo sia un riferimento lvalue o un **`const`** riferimento lvalue di tale tipo.

Nell'esempio seguente viene dichiarato un modello di struttura, quindi ne viene definita la specializzazione per diversi tipi di riferimento. La funzione `print_type_and_value` accetta un riferimento rvalue come parametro e lo inoltra alla versione specializzata appropriata del metodo `S::print`. La funzione `main` illustra i vari modi di chiamare il metodo `S::print`.

```cpp
// template-type-deduction.cpp
// Compile with: /EHsc
#include <iostream>
#include <string>
using namespace std;

template<typename T> struct S;

// The following structures specialize S by
// lvalue reference (T&), const lvalue reference (const T&),
// rvalue reference (T&&), and const rvalue reference (const T&&).
// Each structure provides a print method that prints the type of
// the structure and its parameter.

template<typename T> struct S<T&> {
   static void print(T& t)
   {
      cout << "print<T&>: " << t << endl;
   }
};

template<typename T> struct S<const T&> {
   static void print(const T& t)
   {
      cout << "print<const T&>: " << t << endl;
   }
};

template<typename T> struct S<T&&> {
   static void print(T&& t)
   {
      cout << "print<T&&>: " << t << endl;
   }
};

template<typename T> struct S<const T&&> {
   static void print(const T&& t)
   {
      cout << "print<const T&&>: " << t << endl;
   }
};

// This function forwards its parameter to a specialized
// version of the S type.
template <typename T> void print_type_and_value(T&& t)
{
   S<T&&>::print(std::forward<T>(t));
}

// This function returns the constant string "fourth".
const string fourth() { return string("fourth"); }

int main()
{
   // The following call resolves to:
   // print_type_and_value<string&>(string& && t)
   // Which collapses to:
   // print_type_and_value<string&>(string& t)
   string s1("first");
   print_type_and_value(s1);

   // The following call resolves to:
   // print_type_and_value<const string&>(const string& && t)
   // Which collapses to:
   // print_type_and_value<const string&>(const string& t)
   const string s2("second");
   print_type_and_value(s2);

   // The following call resolves to:
   // print_type_and_value<string&&>(string&& t)
   print_type_and_value(string("third"));

   // The following call resolves to:
   // print_type_and_value<const string&&>(const string&& t)
   print_type_and_value(fourth());
}
```

Nell'esempio viene prodotto l'output seguente:

```cpp
print<T&>: first
print<const T&>: second
print<T&&>: third
print<const T&&>: fourth
```

Per risolvere ogni chiamata alla funzione `print_type_and_value`, il compilatore esegue in primo luogo la deduzione degli argomenti di modello. Il compilatore applica le regole di compressione dei riferimenti quando sostituisce gli argomenti del modello dedotti con i tipi di parametro. Ad esempio, passando la variabile locale `s1` alla funzione `print_type_and_value` il compilatore genererà la seguente firma funzione:

```cpp
print_type_and_value<string&>(string& && t)
```

Il compilatore utilizza le regole di compressione dei riferimenti per ridurre la firma a quanto segue:

```cpp
print_type_and_value<string&>(string& t)
```

Questa versione della funzione `print_type_and_value` inoltra quindi il relativo parametro alla versione specializzata corretta del metodo `S::print`.

Nella tabella seguente vengono riepilogate le regole di compressione dei riferimenti per la deduzione del tipo di argomento del modello:

|||
|-|-|
|Tipo espanso|Tipo compresso|
|`T& &`|`T&`|
|`T& &&`|`T&`|
|`T&& &`|`T&`|
|`T&& &&`|`T&&`|

La deduzione dell'argomento di modello è un elemento importante dell'implementazione dell'inoltro perfetto. La sezione Inoltro perfetto, presentata in precedenza in questo argomento, descrive l'inoltro perfetto più dettagliatamente.

## <a name="summary"></a>Riepilogo

I riferimenti rvalue distinguono gli lvalue dagli rvalue. Consentono di migliorare le prestazioni delle applicazioni eliminando la necessità di allocazioni di memoria e operazioni di copia non necessarie. Consentono inoltre di scrivere una versione di una funzione che accetta argomenti arbitrari e li inoltra a un'altra funzione come se l'altra funzione fosse stata chiamata direttamente.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Dichiaratore di riferimento lvalue: &](../cpp/lvalue-reference-declarator-amp.md)<br/>
[Lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md)<br/>
[Costruttori di spostamento e operatori di assegnazione di spostamento (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md)<br/>
[Libreria standard C++](../standard-library/cpp-standard-library-reference.md)
