---
title: Modelli (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- template_cpp
dev_langs:
- C++
helpviewer_keywords:
- templates, C++
- templates [C++]
ms.assetid: 90fcc14a-2092-47af-9d2e-dba26d25b872
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 715927893ec07d08ca2f2bd6eefc5f10795d5574
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46083639"
---
# <a name="templates-c"></a>Modelli (C++)

I modelli costituiscono la base per la programmazione generica in C++. Come un linguaggio fortemente tipizzato, C++ richiede che tutte le variabili per presentare un tipo specifico, in modo esplicito dichiarata dal programmatore o dedotto dal compilatore. Tuttavia, molti algoritmi e strutture di dati hanno lo stesso aspetto indipendentemente dal tipo operino su. I modelli permettono di definire le operazioni di una classe o funzione e consentire all'utente di specificare quali concreto i tipi di tali operazioni dovrebbero funzionare in.

## <a name="defining-and-using-templates"></a>Definizione e uso di modelli

Un modello è un costrutto che genera un tipo ordinario o una funzione in fase di compilazione in base agli argomenti fornite dall'utente per i parametri del modello. Ad esempio, è possibile definire un modello di funzione simile al seguente:

```cpp
template <typename T>
T minimum(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

Il codice riportato sopra descrive un modello per una funzione con un solo parametro di tipo generico *T*, il cui valore restituito e parametri (lhs e rhs) chiamata sono tutti questi tipi. È possibile denominare un parametro di tipo tutto ciò che è simile, ma con lettere maiuscolo singolo convenzione utilizzati più frequentemente. *T* è un parametro di modello; gli **typename** parola chiave indica che questo parametro è un segnaposto per un tipo. Quando viene chiamata la funzione, il compilatore sostituisce tutte le istanze di `T` con l'argomento di tipo concreto specificato dall'utente o dedotto dal compilatore. Il processo in cui il compilatore genera una classe o funzione da un modello è detta *istanza del modello*; `minimum<int>` è un'istanza del modello `minimum<T>`.

In un' posizione, un utente può dichiarare un'istanza del modello che è specializzato per int. Si supponga che get_a() e get_b() sono funzioni che restituiscono un valore int:

```cpp
int a = get_a();
int b = get_b();
int i = minimum<int>(a, b);
```

Tuttavia, poiché si tratta di un modello di funzione e il compilatore può dedurre il tipo della `T` dagli argomenti *una* e *b*, è possibile chiamarlo come una funzione comune:

```cpp
int i = minimum(a, b);
```

Quando il compilatore rileva tale istruzione ultimo, genera una nuova funzione nella quale ogni occorrenza di *T* nel modello viene sostituito con **int**:

```cpp
int minimum(const int& lhs, const int& rhs)
{
    return lhs < rhs ? lhs : rhs;
}
```

Le regole per la modalità con cui il compilatore esegue la deduzione del tipo nei modelli di funzione sono basate su regole per le funzioni ordinarie. Per altre informazioni, vedere [Overload Resolution di modello le chiamate di funzione](../cpp/overload-resolution-of-function-template-calls.md).

## <a id="type_parameters"></a> Parametri di tipo

Nel `minimum` modello precedente, si noti che il parametro di tipo *T* non sono qualificati in alcun modo fino a quando non viene usato nei parametri di chiamata di funzione, in cui vengono aggiunti i qualificatori di riferimento const.

Non sono previsti limiti pratici sul numero di parametri di tipo. Separare più parametri con virgole:

```cpp
template <typename T, typename U, typename V> class Foo{};
```

La parola chiave **classe** equivale a **nomeTipo** in questo contesto. È possibile esprimere l'esempio precedente come:

```cpp
template <class T, class U, class V> class Foo{};
```

È possibile usare l'operatore puntini di sospensione (...) per definire un modello che accetta un numero arbitrario di zero o più parametri di tipo:

```cpp
template<typename... Arguments> class vtclass;

vtclass< > vtinstance1;
vtclass<int> vtinstance2;
vtclass<float, bool> vtinstance3;
```

Qualsiasi tipo incorporato o definito dall'utente può essere utilizzato come argomento di tipo. Ad esempio, è possibile usare std:: Vector nella libreria Standard per archiviare valori int, Double, stringhe, MyClass, MyClass const *, MyClass &. La limitazione principale quando si usano i modelli è che un argomento tipo deve supportare le operazioni che vengono applicate ai parametri di tipo. Se, ad esempio, chiamiamo minima utilizzando MyClass come in questo esempio:

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

Verrà generato un errore del compilatore perché MyClass non fornisce un overload per il < operatore.

Non è necessario intrinseco che gli argomenti tipo per qualsiasi modello particolare tutti appartengano alla stessa gerarchia di oggetti, anche se è possibile definire un modello che impone tale restrizione. È possibile combinare le tecniche orientate a oggetti con i modelli. ad esempio, è possibile archiviare un derivato * in un vettore\<Base\*>.    Si noti che gli argomenti devono essere puntatori

```cpp
vector<MyClass*> vec;
   MyDerived d(3, L"back again", time(0));
   vec.push_back(&d);

   // or more realistically:
   vector<shared_ptr<MyClass>> vec2;
   vec2.push_back(make_shared<MyDerived>());
```

Requisiti di base che vettore e gli altri contenitori della libreria standard impongano sugli elementi della `T` è che `T` essere copia costruibile e assegnabile a copia.

## <a name="non-type-parameters"></a>Parametri non di tipo

A differenza dei tipi generici in altri linguaggi come c# e Java, i modelli C++ supportano i parametri non di tipo, anche denominati parametri di valore. Ad esempio, è possibile fornire un valore intero costante per specificare la lunghezza della matrice, come in questo esempio che è simile alla classe std:: Array nella libreria Standard:

```cpp
template<typename T, size_t L>
class MyArray
{
    T arr[L];
public:
    MyArray() { ... }
};
```

Si noti la sintassi della dichiarazione di modello. Il valore size_t viene passato come argomento di modello in fase di compilazione e deve essere costante o un'espressione constexpr. Usarlo nel modo seguente:

```cpp
MyArray<MyClass*, 10> arr;
```

Altri tipi di valori inclusi puntatori e riferimenti possono essere passati come parametri non di tipo. Ad esempio, è possibile passare un puntatore a una funzione o un oggetto funzione per personalizzare alcune operazioni all'interno di codice del modello.

## <a id="template_parameters"></a> Modelli come parametri di modello

Un modello può essere un parametro di modello. In questo esempio MyClass2 presenta due parametri di modello: un parametro typename *T* e un parametro di modello *Arr*:

```cpp
template<typename T, template<typename U, int I> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
    U u; //Error. U not in scope
};
```

Poiché il *Arr* parametro stesso non ha un corpo, non sono necessari i nomi di parametro. In effetti, è possibile fare riferimento a *Arr*di nomi di parametro di typename o una classe dall'interno del corpo della `MyClass2`. Per questo motivo *Arr*di nomi di parametro di tipo possono essere omesso, come illustrato in questo esempio:

```cpp
template<typename T, template<typename, int> class Arr>
class MyClass2
{
    T t; //OK
    Arr<T, 10> a;
};
```

## <a name="default-template-arguments"></a>Argomenti di modello predefiniti

I modelli di classe e funzione possono avere argomenti predefiniti. Quando un modello dispone di un argomento predefinito che è possibile lasciare non specificato quando si usa. Ad esempio, il modello di std:: Vector include un argomento predefinito per l'allocatore:

```cpp
template <class T, class Allocator = allocator<T>> class vector;
```

Nella maggior parte dei casi la classe di std:: allocator predefinita è accettabile, in modo da utilizzare un vettore simile al seguente:

```cpp
vector<int> myInts;
```

Ma se necessario è possibile specificare un allocatore personalizzato simile al seguente:

```cpp
vector<int, MyAllocator> ints;
```

Per più argomenti di modello, tutti gli argomenti dopo il primo argomento predefinito devono avere argomenti predefiniti.

Quando si usa un modello di cui i parametri vengono automaticamente impostati, utilizzare parentesi acute vuote:

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

In alcuni casi, non è possibile né auspicabile per un modello definire esattamente lo stesso codice per qualsiasi tipo. Ad esempio, può essere necessario definire un percorso di codice deve essere eseguito solo se l'argomento tipo è un puntatore o un std:: wstring o un tipo derivato da una determinata classe di base.  In questi casi è possibile definire un *specializzazione* del modello di quel determinato tipo. Quando un utente crea un'istanza del modello con tale tipo, il compilatore Usa la specializzazione per generare la classe e per tutti gli altri tipi, il compilatore sceglie il modello più generale. Sono specializzazioni in cui tutti i parametri sono specializzati *completare le specializzazioni*. Se solo alcuni dei parametri sono specializzati, bensì una *specializzazione parziale*.

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

Un modello può avere un numero qualsiasi di specializzazioni, purché sia univoca ogni parametro di tipo specializzato. Solo i modelli di classe possono essere parzialmente specializzati. Tutte le specializzazioni parziali e completate di un modello devono essere dichiarate nello spazio dei nomi stesso come il modello originale.

Per altre informazioni, vedere [specializzazione modello](../cpp/template-specialization-cpp.md).