---
description: 'Altre informazioni su: modelli (C++)'
title: Modelli (C++)
ms.date: 12/27/2019
f1_keywords:
- template_cpp
helpviewer_keywords:
- templates, C++
- templates [C++]
ms.assetid: 90fcc14a-2092-47af-9d2e-dba26d25b872
ms.openlocfilehash: 14de4372502748c4d622e8739cad82b78a55daa9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164757"
---
# <a name="templates-c"></a>Modelli (C++)

I modelli rappresentano la base per la programmazione generica in C++. Come linguaggio fortemente tipizzato, C++ richiede che tutte le variabili abbiano un tipo specifico, dichiarato in modo esplicito dal programmatore o dedotto dal compilatore. Tuttavia, molte strutture di dati e algoritmi si assomigliano indipendentemente dal tipo su cui operano. I modelli consentono di definire le operazioni di una classe o di una funzione e consentono all'utente di specificare i tipi concreti in cui tali operazioni devono essere utilizzate.

## <a name="defining-and-using-templates"></a>Definizione e utilizzo di modelli

Un modello è un costrutto che genera un tipo o una funzione ordinaria in fase di compilazione in base agli argomenti forniti dall'utente per i parametri del modello. Ad esempio, è possibile definire un modello di funzione analogo al seguente:

```cpp
template <typename T>
T minimum(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

Il codice precedente descrive un modello per una funzione generica con un solo parametro di tipo *T*, il cui valore restituito e i parametri di chiamata (LHS e RHS) sono tutti di questo tipo. È possibile assegnare un nome a un parametro di tipo, ma, per convenzione, le lettere maiuscole e minuscole vengono usate più di frequente. *T* è un parametro di modello. la **`typename`** parola chiave indica che questo parametro è un segnaposto per un tipo. Quando la funzione viene chiamata, il compilatore sostituisce ogni istanza di `T` con l'argomento di tipo concreto specificato dall'utente o dedotto dal compilatore. Il processo in cui il compilatore genera una classe o una funzione da un modello viene definito  *creazione di un'istanza del modello*. `minimum<int>` creazione di un'istanza del modello `minimum<T>` .

Altrove, un utente può dichiarare un'istanza del modello specializzata per int. Si supponga che get_a () e get_b () siano funzioni che restituiscono un valore int:

```cpp
int a = get_a();
int b = get_b();
int i = minimum<int>(a, b);
```

Tuttavia, poiché si tratta di un modello di funzione e il compilatore può dedurre il tipo di `T` dagli argomenti *a* e *b*, è possibile chiamarlo esattamente come una funzione ordinaria:

```cpp
int i = minimum(a, b);
```

Quando il compilatore rileva l'ultima istruzione, viene generata una nuova funzione in cui ogni occorrenza di *T* nel modello viene sostituita con **`int`** :

```cpp
int minimum(const int& lhs, const int& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

Le regole per il modo in cui il compilatore esegue la deduzione dei tipi nei modelli di funzione sono basate sulle regole per le funzioni normali. Per altre informazioni, vedere [risoluzione dell'overload di chiamate a modelli di funzione](../cpp/overload-resolution-of-function-template-calls.md).

## <a name="type-parameters"></a><a id="type_parameters"></a> Parametri di tipo

Nel `minimum` modello precedente si noti che il parametro di tipo *T* non è qualificato in alcun modo finché non viene usato nei parametri della chiamata di funzione, in cui vengono aggiunti i qualificatori const e Reference.

Non esiste un limite pratico al numero di parametri di tipo. Separare più parametri per virgole:

```cpp
template <typename T, typename U, typename V> class Foo{};
```

La parola chiave **`class`** equivale a **`typename`** in questo contesto. È possibile esprimere l'esempio precedente come:

```cpp
template <class T, class U, class V> class Foo{};
```

È possibile usare l'operatore con i puntini di sospensione (...) per definire un modello che accetta un numero arbitrario di zero o più parametri di tipo:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
```

Qualsiasi tipo incorporato o definito dall'utente può essere utilizzato come argomento di tipo. Ad esempio, è possibile usare [std:: Vector](../standard-library/vector-class.md) nella libreria standard per archiviare le variabili di tipo **`int`** , **`double`** , [std:: String](../standard-library/basic-string-class.md), `MyClass` , **`const`** `MyClass` *, `MyClass&` e così via. La restrizione principale quando si usano i modelli è che un argomento di tipo deve supportare qualsiasi operazione applicata ai parametri di tipo. Ad esempio, se si chiama `minimum` using `MyClass` come in questo esempio:

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

Verrà generato un errore del compilatore perché non `MyClass` fornisce un overload per l' **<** operatore.

Non esiste alcun requisito intrinseco che gli argomenti di tipo per un particolare modello appartengano alla stessa gerarchia di oggetti, anche se è possibile definire un modello che impone tale restrizione. È possibile combinare tecniche orientate a oggetti con i modelli; ad esempio, è possibile archiviare un * derivato in un vettore \<Base\*> .    Si noti che gli argomenti devono essere puntatori

```cpp
vector<MyClass*> vec;
   MyDerived d(3, L"back again", time(0));
   vec.push_back(&d);

   // or more realistically:
   vector<shared_ptr<MyClass>> vec2;
   vec2.push_back(make_shared<MyDerived>());
```

I requisiti di base che `std::vector` e altri contenitori della libreria standard impongono sugli elementi di `T` sono che `T` possono essere copiabili e copy-costruibile.

## <a name="non-type-parameters"></a>Parametri non di tipo

A differenza dei tipi generici in altri linguaggi, ad esempio C# e Java, i modelli C++ supportano i *parametri non di tipo*, detti anche parametri di valore. Ad esempio, è possibile fornire un valore integrale costante per specificare la lunghezza di una matrice, come in questo esempio simile alla classe [std:: Array](../standard-library/array-class-stl.md) nella libreria standard:

```cpp
template<typename T, size_t L>
class MyArray
{
    T arr[L];
public:
    MyArray() { ... }
};
```

Si noti la sintassi nella dichiarazione di modello. Il `size_t` valore viene passato come argomento di modello in fase di compilazione e deve essere **`const`** o un' **`constexpr`** espressione. Che verrà utilizzato come segue:

```cpp
MyArray<MyClass*, 10> arr;
```

Altri tipi di valori, inclusi i puntatori e i riferimenti, possono essere passati come parametri non di tipo. Ad esempio, è possibile passare un puntatore a una funzione o a un oggetto funzione per personalizzare un'operazione all'interno del codice del modello.

### <a name="type-deduction-for-non-type-template-parameters"></a>Deduzione del tipo per i parametri di modello non di tipo

In Visual Studio 2017 e versioni successive, in modalità **/std: c++ 17** il compilatore deduce il tipo di un argomento di modello non di tipo dichiarato con **`auto`** :

```cpp
template <auto x> constexpr auto constant = x;

auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char
```

## <a name="templates-as-template-parameters"></a><a id="template_parameters"></a> Modelli come parametri di modello

Un modello può essere un parametro di modello. In questo esempio MyClass2 ha due parametri di modello: un parametro TypeName *T* e un parametro di modello *arr*:

```cpp
template<typename T, template<typename U, int I> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
    U u; //Error. U not in scope
};
```

Poiché il parametro *arr* non ha un corpo, i nomi dei parametri non sono necessari. In realtà, è un errore fare riferimento ai nomi di parametro di classe o typeName di *arr* dall'interno del corpo di `MyClass2` . Per questo motivo, è possibile omettere i nomi dei parametri di tipo di  *arr*, come illustrato nell'esempio seguente:

```cpp
template<typename T, template<typename, int> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
};
```

## <a name="default-template-arguments"></a>Argomenti di modello predefiniti

I modelli di classe e di funzione possono avere argomenti predefiniti. Quando un modello ha un argomento predefinito, è possibile lasciarlo non specificato quando lo si usa. Ad esempio, il modello std:: Vector presenta un argomento predefinito per l'allocatore:

```cpp
template <class T, class Allocator = allocator<T>> class vector;
```

Nella maggior parte dei casi la classe std:: allocator predefinita è accettabile, quindi si usa un vettore simile al seguente:

```cpp
vector<int> myInts;
```

Tuttavia, se necessario, è possibile specificare un allocatore personalizzato come il seguente:

```cpp
vector<int, MyAllocator> ints;
```

Per più argomenti di modello, tutti gli argomenti dopo il primo argomento predefinito devono avere argomenti predefiniti.

Quando si usa un modello i cui parametri sono tutti impostati come predefiniti, usare parentesi uncinate vuote:

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

In alcuni casi, non è possibile o auspicabile che un modello definisca esattamente lo stesso codice per qualsiasi tipo. È possibile, ad esempio, definire un percorso del codice da eseguire solo se l'argomento di tipo è un puntatore o un oggetto std:: wstring o un tipo derivato da una particolare classe di base.  In questi casi è possibile definire una *specializzazione* del modello per quel particolare tipo. Quando un utente crea un'istanza del modello con tale tipo, il compilatore usa la specializzazione per generare la classe e per tutti gli altri tipi il compilatore sceglie il modello più generale. Specializzazioni in cui tutti i parametri sono specializzati sono *specializzazioni complete*. Se solo alcuni dei parametri sono specializzati, viene definita *specializzazione parziale*.

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

Per altre informazioni, vedere [specializzazione del modello](../cpp/template-specialization-cpp.md).
