---
title: Modelli (C++)
ms.date: 12/27/2019
f1_keywords:
- template_cpp
helpviewer_keywords:
- templates, C++
- templates [C++]
ms.assetid: 90fcc14a-2092-47af-9d2e-dba26d25b872
ms.openlocfilehash: e47f00c7e387974c7d1756cf3ee3865f892e6951
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032343"
---
# <a name="templates-c"></a>Modelli (C++)

I modelli sono la base per la programmazione generica in C. Come un linguaggio fortemente tipizzato, c'è richiede che tutte le variabili abbiano un tipo specifico, dichiarato in modo esplicito dal programmatore o dedotto dal compilatore. Tuttavia, molte strutture di dati e algoritmi hanno lo stesso aspetto indipendentemente dal tipo su cui operano. I modelli consentono di definire le operazioni di una classe o funzione e consentono all'utente di specificare i tipi concreti su cui tali operazioni devono lavorare.

## <a name="defining-and-using-templates"></a>Definizione e utilizzo dei modelli

Un modello è un costrutto che genera un tipo o una funzione ordinaria in fase di compilazione in base ad argomenti forniti dall'utente per i parametri del modello. Ad esempio, è possibile definire un modello di funzione simile al seguente:For example, you can define a function template like this:

```cpp
template <typename T>
T minimum(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

Il codice precedente descrive un modello per una funzione generica con un singolo parametro di tipo *T*, i cui parametri value return e call (lhs e rhs) sono tutti di questo tipo. È possibile assegnare a un parametro di tipo il nome desiderato, ma per convenzione vengono utilizzate più comunemente le singole lettere maiuscole. *T* è un parametro di modello; la parola **chiave typename** indica che questo parametro è un segnaposto per un tipo. Quando viene chiamata la funzione, il `T` compilatore sostituirà ogni istanza di con l'argomento di tipo concreto specificato dall'utente o dedotto dal compilatore. Il processo in cui il compilatore genera una classe o una funzione da un modello viene definito creazione di *istanze*del modello ; `minimum<int>` è un'istanza del `minimum<T>`modello .

Altrove, un utente può dichiarare un'istanza del modello specializzata per int. Si supponga che get_a() e get_b() siano funzioni che restituiscono un int:

```cpp
int a = get_a();
int b = get_b();
int i = minimum<int>(a, b);
```

Tuttavia, poiché si tratta di un modello di `T` funzione e il compilatore può dedurre il tipo di dagli argomenti *a* e *b*, è possibile chiamarlo come una funzione ordinaria:

```cpp
int i = minimum(a, b);
```

Quando il compilatore rileva l'ultima istruzione, genera una nuova funzione in cui ogni occorrenza di *T* nel modello viene sostituita con **int**:

```cpp
int minimum(const int& lhs, const int& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

Le regole per la modalità di esecuzione del tipo da parte del compilatore nei modelli di funzione si basano sulle regole per le funzioni ordinarie. Per ulteriori informazioni, vedere [Risoluzione dell'overload delle chiamate ai modelli di funzione](../cpp/overload-resolution-of-function-template-calls.md).

## <a name="type-parameters"></a><a id="type_parameters"></a>Parametri di tipo

Nel `minimum` modello precedente, si noti che il parametro di tipo *T* non è qualificato in alcun modo fino a quando non viene utilizzato nei parametri di chiamata di funzione, in cui vengono aggiunti i qualificatori const e reference.

Non esiste un limite pratico al numero di parametri di tipo. Separare più parametri con virgole:

```cpp
template <typename T, typename U, typename V> class Foo{};
```

La **parola** chiave class è equivalente a **typename** in questo contesto. È possibile esprimere l'esempio precedente come:

```cpp
template <class T, class U, class V> class Foo{};
```

È possibile utilizzare l'operatore con i lipsie (...) per definire un modello che accetta un numero arbitrario di zero o più parametri di tipo:You can use the ellipsis operator (...) to define a template that takes an arbitrary number of zero or more type parameters:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
```

Qualsiasi tipo predefinito o definito dall'utente può essere utilizzato come argomento di tipo. Ad esempio, è possibile utilizzare [std::vector](../standard-library/vector-class.md) nella Libreria standard per archiviare variabili di `MyClass`tipo **int**, **double**, [std::string](../standard-library/basic-string-class.md), **const** `MyClass` `MyClass&`e così via. La restrizione principale quando si utilizzano i modelli è che un argomento di tipo deve supportare tutte le operazioni applicate ai parametri di tipo. Ad esempio, se `minimum` `MyClass` chiamiamo usando come in questo esempio:For example, if we call using as in this example:

```cpp
class MyClass
{
public:
    int num;
    std::wstring description;
};

int main()
{
    MyClass mc1 {1, L"hello"};
    MyClass mc2 {2, L"goodbye"};
    auto result = minimum(mc1, mc2); // Error! C2678
}
```

Verrà generato un errore `MyClass` del compilatore perché **<** non fornisce un overload per l'operatore.

Non vi è alcun requisito intrinseco che gli argomenti di tipo per un particolare modello appartengano tutti alla stessa gerarchia di oggetti, anche se è possibile definire un modello che applica tale restrizione. È possibile combinare tecniche orientate agli oggetti con i modelli; ad esempio, è possibile memorizzare\<un\* Derived in un vettore Base>.    Si noti che gli argomenti devono essere puntatori

```cpp
vector<MyClass*> vec;
   MyDerived d(3, L"back again", time(0));
   vec.push_back(&d);

   // or more realistically:
   vector<shared_ptr<MyClass>> vec2;
   vec2.push_back(make_shared<MyDerived>());
```

I requisiti `std::vector` di base che e altri `T` contenitori di libreria standard impongono agli elementi di è che sono a seconda della `T` copia e costruibili in copia.

## <a name="non-type-parameters"></a>Parametri non di tipo

A differenza dei tipi generici in altri linguaggi, ad esempio in C e Java, i modelli di C, supportano i parametri non di *tipo,* denominati anche parametri di valore. Ad esempio, è possibile fornire un valore integrale costante per specificare la lunghezza di una matrice, come con questo esempio simile alla classe std::array nella libreria standard:For example, you can provide a constant integral value to specify the length of an array, as with this example that is similar to the [std::array](../standard-library/array-class-stl.md) class in the Standard Library:

```cpp
template<typename T, size_t L>
class MyArray
{
    T arr[L];
public:
    MyArray() { ... }
};
```

Si noti la sintassi nella dichiarazione di modello. Il `size_t` valore viene passato come argomento di modello in fase di compilazione e deve essere **const** o un'espressione **constexpr.** Si usa in questo modo:

```cpp
MyArray<MyClass*, 10> arr;
```

Altri tipi di valori, inclusi puntatori e riferimenti, possono essere passati come parametri non di tipo. Ad esempio, è possibile passare un puntatore a una funzione o a un oggetto funzione per personalizzare alcune operazioni all'interno del codice del modello.

### <a name="type-deduction-for-non-type-template-parameters"></a>Detrazione del tipo per i parametri di modello non di tipoType deduction for non-type template parameters

In Visual Studio 2017 e versioni successive, in modalità **/std:c'17** il compilatore deduce il tipo di un argomento di modello non di tipo dichiarato con **auto**:

```cpp
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char
```

## <a name="templates-as-template-parameters"></a><a id="template_parameters"></a>Modelli come parametri di modello

Un modello può essere un parametro di modello. In questo esempio, MyClass2 dispone di due parametri di modello: un parametro typename *T* e un parametro di modello *Arr*:

```cpp
template<typename T, template<typename U, int I> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
    U u; //Error. U not in scope
};
```

Poiché il parametro *Arr* stesso non ha alcun corpo, i relativi nomi di parametro non sono necessari. Infatti, è un errore fare riferimento ai nomi dei parametri typename o class di *Arr*dall'interno del corpo di `MyClass2`. Per questo motivo, i nomi dei parametri di tipo di Arr possono essere omessi, come illustrato nell'esempio seguente:For this reason, *Arr's*type parameter names can be omitted, as shown in this example:

```cpp
template<typename T, template<typename, int> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
};
```

## <a name="default-template-arguments"></a>Argomenti di modello predefiniti

I modelli di classe e funzione possono avere argomenti predefiniti. Quando un modello ha un argomento predefinito, è possibile lasciarlo non specificato quando lo si utilizza. Ad esempio, il modello std::vector ha un argomento predefinito per l'allocatore:For example, the std::vector template has a default argument for the allocator:

```cpp
template <class T, class Allocator = allocator<T>> class vector;
```

Nella maggior parte dei casi la classe std::allocator predefinita è accettabile, pertanto si usa un vettore simile al seguente:In most cases the default std::allocator class is acceptable, so you use a vector like this:

```cpp
vector<int> myInts;
```

Ma se necessario è possibile specificare un allocatore personalizzato come questo:

```cpp
vector<int, MyAllocator> ints;
```

Per più argomenti di modello, tutti gli argomenti dopo il primo argomento predefinito devono avere argomenti predefiniti.

Quando si utilizza un modello i cui parametri sono tutti predefiniti, utilizzare parentesi angolari vuote:

```cpp
template<typename A = int, typename B = double>
class Bar
{
    //...
};
...
int main()
{
    Bar<> bar; // use all default type arguments
}
```

## <a name="template-specialization"></a>Specializzazione modello

In alcuni casi, non è possibile o auspicabile che un modello definisca esattamente lo stesso codice per qualsiasi tipo. Ad esempio, è possibile definire un percorso di codice da eseguire solo se l'argomento di tipo è un puntatore, un std::wstring o un tipo derivato da una particolare classe base.  In questi casi è possibile definire una *specializzazione* del modello per quel particolare tipo. Quando un utente crea un'istanza del modello con tale tipo, il compilatore utilizza la specializzazione per generare la classe e per tutti gli altri tipi, il compilatore sceglie il modello più generale. Le specializzazioni in cui tutti i parametri sono specializzati sono *specializzazioni complete.* Se solo alcuni dei parametri sono specializzati, viene chiamato *una specializzazione parziale*.

```cpp
template <typename K, typename V>
class MyMap{/*...*/};

// partial specialization for string keys
template<typename V>
class MyMap<string, V> {/*...*/};
...
MyMap<int, MyClass> classes; // uses original template
MyMap<string, MyClass> classes2; // uses the partial specialization
```

Un modello può avere un numero qualsiasi di specializzazioni, purché ogni parametro di tipo specializzato sia univoco. Solo i modelli di classe possono essere parzialmente specializzati. Tutte le specializzazioni complete e parziali di un modello devono essere dichiarate nello stesso spazio dei nomi del modello originale.

Per ulteriori informazioni, vedere [Specializzazione dei modelli](../cpp/template-specialization-cpp.md).
