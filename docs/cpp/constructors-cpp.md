---
title: Costruttori (C++)
ms.date: 12/27/2019
helpviewer_keywords:
- constructors [C++]
- objects [C++], creating
- instance constructors
ms.assetid: 3e9f7211-313a-4a92-9584-337452e061a9
ms.openlocfilehash: 4640bcf5f21bbe018a8744a6c5206bdd09509c98
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81749650"
---
# <a name="constructors-c"></a>Costruttori (C++)

Per personalizzare la modalità di inizializzazione dei membri della classe o per richiamare funzioni quando viene creato un oggetto della classe, definire un *costruttore*. Ha nome uguale a quello della classe e non restituisce alcun valore. È possibile definire tutti i costruttori di overload necessari per personalizzare l'inizializzazione in vari modi. In genere, i costruttori hanno accessibilità pubblica in modo che il codice all'esterno della definizione di classe o della gerarchia di ereditarietà possa creare oggetti della classe. Ma è anche possibile dichiarare un costruttore come **protected** o **private**.

I costruttori possono accettare facoltativamente un elenco init di membri. Si tratta di un modo più efficiente per inizializzare i membri della classe rispetto all'assegnazione di valori nel corpo del costruttore. Nell'esempio seguente `Box` viene illustrata una classe con tre costruttori di overload. Gli ultimi due usano i membri init elenchi:

```cpp
class Box {
public:
    // Default constructor
    Box() {}

    // Initialize a Box with equal dimensions (i.e. a cube)
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}

    int Volume() { return m_width * m_length * m_height; }

private:
    // Will have value of 0 when default constructor is called.
    // If we didn't zero-init here, default constructor would
    // leave them uninitialized with garbage values.
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};
```

Quando si dichiara un'istanza di una classe, il compilatore sceglie quale costruttore richiamare in base alle regole di risoluzione dell'overload:When you declare an instance of a class, the compiler chooses which constructor to invoke based on the rules of overload resolution:

```cpp
int main()
{
    Box b; // Calls Box()

    // Using uniform initialization (preferred):
    Box b2 {5}; // Calls Box(int)
    Box b3 {5, 8, 12}; // Calls Box(int, int, int)

    // Using function-style notation:
    Box b4(2, 4, 6); // Calls Box(int, int, int)
}
```

- I costruttori possono essere dichiarati come **inline**, [explicit](#explicit_constructors), **friend** o [constexpr](#constexpr_constructors).
- Un costruttore può inizializzare un oggetto dichiarato come **const**, **volatile** o **const volatile**. L'oggetto diventa **const** dopo il completamento del costruttore.
- Per definire un costruttore in un file di implementazione, `Box::Box(){...}`assegnargli un nome completo come con qualsiasi altra funzione membro: .

## <a name="member-initializer-lists"></a><a name="member_init_list"></a>Elenchi di inizializzatori di membro

Un costruttore può avere facoltativamente un elenco di inizializzatori di membro, che inizializza i membri della classe prima dell'esecuzione del corpo del costruttore. Si noti che un elenco di inizializzatori di membro non equivale a un elenco di *inizializzatori* di tipo [\<std::initializer_list T>](../standard-library/initializer-list-class.md).)

L'utilizzo di un elenco di inizializzatori di membro è preferibile rispetto all'assegnazione di valori nel corpo del costruttore perché inizializza direttamente il membro. Nell'esempio seguente viene illustrato l'elenco di inizializzatori di membro è costituito da tutte le espressioni **identifier(argument)** dopo i due punti:

```cpp
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
```

L'identificatore deve fare riferimento a un membro di classe. viene inizializzato con il valore dell'argomento. L'argomento può essere uno dei parametri del costruttore, una chiamata di funzione o un [oggetto\<std::initializer_list T>](../standard-library/initializer-list-class.md).

I membri **const** e i membri di tipo riferimento devono essere inizializzati nell'elenco di inizializzatori di membro.

Le chiamate ai costruttori di classi base con parametri devono essere effettuate nell'elenco di inizializzatori per garantire che la classe base sia completamente inizializzata prima dell'esecuzione del costruttore derivato.

## <a name="default-constructors"></a><a name="default_constructors"></a>Costruttori predefiniti

*I costruttori predefiniti* in genere non hanno parametri, ma possono avere parametri con valori predefiniti.

```cpp
class Box {
public:
    Box() { /*perform any required default initialization steps*/}

    // All params have default values
    Box (int w = 1, int l = 1, int h = 1): m_width(w), m_height(h), m_length(l){}
...
}
```

I costruttori predefiniti sono una delle [funzioni membro speciali](special-member-functions.md). Se non vengono dichiarati costruttori in una classe, il compilatore fornisce un costruttore predefinito **inline** implicito.

```cpp
#include <iostream>
using namespace std;

class Box {
public:
    int Volume() {return m_width * m_height * m_length;}
private:
    int m_width { 0 };
    int m_height { 0 };
    int m_length { 0 };
};

int main() {
    Box box1; // Invoke compiler-generated constructor
    cout << "box1.Volume: " << box1.Volume() << endl; // Outputs 0
}
```

Se si utilizza un costruttore predefinito implicito, assicurarsi di inizializzare i membri nella definizione della classe, come illustrato nell'esempio precedente. Senza tali inizializzatori, i membri sarebbero non inizializzati e la chiamata Volume() produrrebbe un valore garbage. In generale, è consigliabile inizializzare i membri in questo modo anche quando non si basa su un costruttore predefinito implicito.

È possibile impedire al compilatore di generare un costruttore predefinito implicito definendolo come [eliminato](#explicitly_defaulted_and_deleted_constructors):

```cpp
    // Default constructor
    Box() = delete;
```

Un costruttore predefinito generato dal compilatore verrà definito come eliminato se i membri di classe non sono costruibili per impostazione predefinita. Ad esempio, tutti i membri del tipo di classe e i relativi membri di tipo classe devono avere un costruttore predefinito e distruttori accessibili. Tutti i membri dati di tipo riferimento, nonché i membri **const** devono avere un inizializzatore di membro predefinito.

Quando si chiama un costruttore predefinito generato dal compilatore e si tenta di utilizzare le parentesi, viene generato un avviso:When you call a compiler-generated default constructor and try to use parentheses, a warning is issued:

```cpp
class myclass{};
int main(){
myclass mc();     // warning C4930: prototyped function not called (was a variable definition intended?)
}
```

Di seguito è riportato un esempio del problema 'Most Vexing Parse'. Poiché l'espressione di esempio può essere interpretata come dichiarazione di una funzione o come chiamata di un costruttore predefinito e dal momento che i parser C++ favoriscono le dichiarazioni rispetto ad altri elementi, tale espressione viene considerata come una dichiarazione di funzione. Per ulteriori informazioni, vedere [Analisi più vexing](https://en.wikipedia.org/wiki/Most_vexing_parse).

Se vengono dichiarati costruttori non predefiniti, il compilatore non fornisce un costruttore predefinito:

```cpp
class Box {
public:
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height){}
private:
    int m_width;
    int m_length;
    int m_height;

};

int main(){

    Box box1(1, 2, 3);
    Box box2{ 2, 3, 4 };
    Box box3; // C2512: no appropriate default constructor available
}
```

Se la classe non dispone di un costruttore predefinito, non è possibile costruire una matrice di oggetti di tale classe usando solo la sintassi tra parentesi quadre. Ad esempio, nel caso del blocco di codice precedente, non è possibile dichiarare una matrice di Boxes nel modo seguente:

```cpp
Box boxes[3]; // C2512: no appropriate default constructor available
```

Tuttavia, è possibile utilizzare un set di elenchi di inizializzatori per inizializzare una matrice di Box oggetti:However, you can use a set of initializer lists to initialize an array of Box objects:

```cpp
Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
```

Per ulteriori informazioni, vedere [Inizializzatori](initializers.md).

## <a name="copy-constructors"></a><a name="copy_and_move_constructors"></a>Costruttori di copia

Un *costruttore* di copia inizializza un oggetto copiando i valori dei membri da un oggetto dello stesso tipo. Se i membri della classe sono tutti tipi semplici, ad esempio valori scalari, il costruttore di copia generato dal compilatore è sufficiente e non è necessario definire il proprio. Se la classe richiede un'inizializzazione più complessa, è necessario implementare un costruttore di copia personalizzato. Ad esempio, se un membro di classe è un puntatore, è necessario definire un costruttore di copia per allocare nuova memoria e copiare i valori dall'oggetto a cui punta l'altro. Il costruttore di copia generato dal compilatore copia semplicemente il puntatore, in modo che il nuovo puntatore punti ancora alla posizione di memoria dell'altro.

Un costruttore di copia può avere una di queste firme:A copy constructor may have one of these signatures:

```cpp
    Box(Box& other); // Avoid if possible--allows modification of other.
    Box(const Box& other);
    Box(volatile Box& other);
    Box(volatile const Box& other);

    // Additional parameters OK if they have default values
    Box(Box& other, int i = 42, string label = "Box");
```

Quando si definisce un costruttore di copia, è necessario definire anche un operatore di assegnazione di copia (Sezione ). Per ulteriori informazioni, vedere [Costruttori Assignment](assignment.md) e Copy e operatori di [assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md).

È possibile impedire la copia dell'oggetto definendo il costruttore di copia come eliminato:You can prevent your object from being copied by defining the copy constructor as deleted:

```cpp
    Box (const Box& other) = delete;
```

Il tentativo di copiare l'oggetto genera *l'errore C2280: tentativo di fare riferimento a una funzione eliminata.*

## <a name="move-constructors"></a><a name="move_constructors"></a>Costruttori Move

Un *costruttore* di spostamento è una funzione membro speciale che sposta la proprietà dei dati di un oggetto esistente in una nuova variabile senza copiare i dati originali. Accetta un riferimento rvalue come primo parametro e tutti i parametri aggiuntivi devono avere valori predefiniti. I costruttori di spostamento possono aumentare significativamente l'efficienza del programma quando si passano oggetti di grandi dimensioni.

```cpp
Box(Box&& other);
```

Il compilatore sceglie un costruttore di spostamento in determinate situazioni in cui l'oggetto viene inizializzato da un altro oggetto dello stesso tipo che sta per essere eliminato e non richiede più le relative risorse. Nell'esempio seguente viene illustrato un caso in cui un costruttore di spostamento viene selezionato in base alla risoluzione dell'overload. Nel costruttore `get_Box()`che chiama , il valore restituito è un *valore xvalue* (eXpiring value). Non è assegnato ad alcuna variabile e pertanto sta per uscire dall'ambito. Per fornire la motivazione per questo esempio, diamo Box un grande vettore di stringhe che ne rappresentano il contenuto. Anziché copiare il vettore e le relative stringhe, il costruttore di spostamento "ruba" dal valore in scadenza "box" in modo che il vettore ora appartiene al nuovo oggetto. La chiamata `std::move` a è tutto ciò `string` che è necessario perché sia e `vector` le classi implementano i propri costruttori di spostamento.

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Box {
public:
    Box() { std::cout << "default" << std::endl; }
    Box(int width, int height, int length)
       : m_width(width), m_height(height), m_length(length)
    {
        std::cout << "int,int,int" << std::endl;
    }
    Box(Box& other)
       : m_width(other.m_width), m_height(other.m_height), m_length(other.m_length)
    {
        std::cout << "copy" << std::endl;
    }
    Box(Box&& other) : m_width(other.m_width), m_height(other.m_height), m_length(other.m_length)
    {
        m_contents = std::move(other.m_contents);
        std::cout << "move" << std::endl;
    }
    int Volume() { return m_width * m_height * m_length; }
    void Add_Item(string item) { m_contents.push_back(item); }
    void Print_Contents()
    {
        for (const auto& item : m_contents)
        {
            cout << item << " ";
        }
    }
private:
    int m_width{ 0 };
    int m_height{ 0 };
    int m_length{ 0 };
    vector<string> m_contents;
};

Box get_Box()
{
    Box b(5, 10, 18); // "int,int,int"
    b.Add_Item("Toupee");
    b.Add_Item("Megaphone");
    b.Add_Item("Suit");

    return b;
}

int main()
{
    Box b; // "default"
    Box b1(b); // "copy"
    Box b2(get_Box()); // "move"
    cout << "b2 contents: ";
    b2.Print_Contents(); // Prove that we have all the values

    char ch;
    cin >> ch; // keep window open
    return 0;
}
```

Se una classe non definisce un costruttore di spostamento, il compilatore ne genera uno implicito se non è presente alcun costruttore di copia dichiarato dall'utente, operatore di assegnazione di copia, operatore di assegnazione di spostamento o distruttore. Se non è definito alcun costruttore di spostamento esplicito o implicito, le operazioni che altrimenti utilizzerebbero un costruttore di spostamento utilizzano invece il costruttore di copia. Se una classe dichiara un costruttore di spostamento o un operatore di assegnazione di spostamento, il costruttore di copia dichiarato in modo implicito viene definito come eliminato.

Un costruttore di spostamento dichiarato in modo implicito viene definito come eliminato se tutti i membri che sono tipi di classe non dispongono di un distruttore o il compilatore non è in grado di determinare quale costruttore utilizzare per l'operazione di spostamento.

Per ulteriori informazioni su come scrivere un costruttore di spostamento non semplice, vedere Costruttori di spostamento e Operatori di [assegnazione di spostamento (C](../cpp/move-constructors-and-move-assignment-operators-cpp.md)) .

## <a name="explicitly-defaulted-and-deleted-constructors"></a><a name="explicitly_defaulted_and_deleted_constructors"></a>Costruttori predefiniti ed eliminati in modo esplicitoExplicitly defaulted and deleted constructors

È possibile predefiniti in modo *esplicito* i costruttori di copia, i costruttori predefiniti, i costruttori di spostamento, gli operatori di assegnazione di copia, gli operatori di assegnazione di spostamento e i distruttori. È possibile *eliminare* in modo esplicito tutte le funzioni membro speciali.

```cpp
class Box
{
public:
    Box2() = delete;
    Box2(const Box2& other) = default;
    Box2& operator=(const Box2& other) = default;
    Box2(Box2&& other) = default;
    Box2& operator=(Box2&& other) = default;
    //...
};
```

Per ulteriori informazioni, vedere [Funzioni predefinite ed eliminate in modo esplicito](../cpp/explicitly-defaulted-and-deleted-functions.md).

## <a name="constexpr-constructors"></a><a name="constexpr_constructors"></a>Costruttori constexpr

Un costruttore può essere dichiarato come [constexpr](constexpr-cpp.md) se

- è dichiarato come predefinito o altrimenti soddisfa tutte le condizioni per le [funzioni constexpr](constexpr-cpp.md#constexpr_functions) in generale;
- la classe non dispone di classi base virtuali;
- ognuno dei parametri è un [tipo letterale](trivial-standard-layout-and-pod-types.md#literal_types);
- il corpo non è una funzione try-block;
- tutti i membri dati non statici e gli oggetti secondari della classe base vengono inizializzati;
- se la classe è (a) un'unione con membri variant o (b) ha unioni anonime, viene inizializzato solo uno dei membri dell'unione;
- ogni membro dati non statico di tipo classe e tutti i sub-oggetti della classe base hanno un costruttore constexpr

## <a name="initializer-list-constructors"></a><a name="init_list_constructors"></a>Costruttori dell'elenco di inizializzatori

Se un costruttore accetta un [\<std::initializer_list T\> ](../standard-library/initializer-list-class.md) come parametro e qualsiasi altro parametro dispone di argomenti predefiniti, tale costruttore verrà selezionato nella risoluzione dell'overload quando viene creata un'istanza della classe tramite l'inizializzazione diretta. È possibile utilizzare il initializer_list per inizializzare qualsiasi membro che può accettarlo. Si supponga, ad esempio, che la `std::vector<string>` `m_contents`classe Box (illustrata in precedenza) abbia un membro . È possibile fornire un costruttore simile al seguente:You can provide a constructor like this:

```cpp
    Box(initializer_list<string> list, int w = 0, int h = 0, int l = 0)
        : m_contents(list), m_width(w), m_height(h), m_length(l)
{}
```

E poi creare Box oggetti come questo:

```cpp
    Box b{ "apples", "oranges", "pears" }; // or ...
    Box b2(initializer_list<string> { "bread", "cheese", "wine" }, 2, 4, 6);
```

## <a name="explicit-constructors"></a><a name="explicit_constructors"></a>Costruttori esplicitiExplicit constructors

Se una classe ha un costruttore con un singolo parametro o se tutti i parametri tranne uno hanno un valore predefinito, sarà possibile convertire implicitamente il tipo di parametro nel tipo di classe. Ad esempio, se la classe `Box` ha un costruttore analogo al seguente:

```cpp
Box(int size): m_width(size), m_length(size), m_height(size){}
```

È possibile inizializzare un oggetto Box in modo analogo al seguente:

```cpp
Box b = 42;
```

Oppure passare un valore int a una funzione che accetta Box:

```cpp
class ShippingOrder
{
public:
    ShippingOrder(Box b, double postage) : m_box(b), m_postage(postage){}

private:
    Box m_box;
    double m_postage;
}
//elsewhere...
    ShippingOrder so(42, 10.8);
```

Queste conversioni possono risultare utili in alcuni casi, ma provocano più spesso errori poco evidenti ma gravi nel codice. Come regola generale, è necessario utilizzare la parola chiave explicit in un costruttore (e gli operatori definiti dall'utente) per impedire questo tipo di conversione implicita del tipo:As a general rule, you should use the **explicit** keyword on a constructor (and user-defined operators) to prevent this kind of implicit type conversion:

```cpp
explicit Box(int size): m_width(size), m_length(size), m_height(size){}
```

Quando il costruttore è esplicito, questa riga provoca un errore del compilatore: `ShippingOrder so(42, 10.8);`.  Per ulteriori informazioni, vedere Conversioni di tipi [definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md).

## <a name="order-of-construction"></a><a name="order_of_construction"></a>Ordine di costruzione

Di seguito è indicato l'ordine in base al quale un costruttore esegue le attività.

1. Chiama i costruttori delle classi base e dei membri nell'ordine di dichiarazione.

1. Se la classe è derivata dalle classi base virtuali, inizializza i puntatori di base virtuali dell'oggetto.

1. Se la classe dispone di funzioni virtuali o le eredita, inizializza i puntatori a funzioni virtuali dell'oggetto. I puntatori a funzioni virtuali puntano alla tabella delle funzioni virtuali della classe per consentire la corretta associazione delle chiamate di funzioni virtuali al codice.

1. Esegue il codice nel corpo della funzione.

Nell'esempio seguente viene illustrato l'ordine in cui vengono chiamati i costruttori di classi base e di membri in un costruttore per una classe derivata. Prima di tutto, viene chiamato il costruttore base, quindi i membri della classe base vengono inizializzati nell'ordine in cui vengono visualizzati nella dichiarazione di classe e infine viene chiamato il costruttore derivato.

```cpp
#include <iostream>

using namespace std;

class Contained1 {
public:
    Contained1() { cout << "Contained1 ctor\n"; }
};

class Contained2 {
public:
    Contained2() { cout << "Contained2 ctor\n"; }
};

class Contained3 {
public:
    Contained3() { cout << "Contained3 ctor\n"; }
};

class BaseContainer {
public:
    BaseContainer() { cout << "BaseContainer ctor\n"; }
private:
    Contained1 c1;
    Contained2 c2;
};

class DerivedContainer : public BaseContainer {
public:
    DerivedContainer() : BaseContainer() { cout << "DerivedContainer ctor\n"; }
private:
    Contained3 c3;
};

int main() {
    DerivedContainer dc;
}
```

Di seguito viene riportato l'output:

```Output
Contained1 ctor
Contained2 ctor
BaseContainer ctor
Contained3 ctor
DerivedContainer ctor
```

Un costruttore di classi derivate chiama sempre un costruttore di classi base, in modo da poter utilizzare le classi base completamente costruite prima che vengano completate eventuali operazioni aggiuntive. I costruttori della classe base vengono chiamati in ordine `ClassA` di `ClassB`derivazione, ad `ClassC`esempio `ClassC` se è derivato `ClassB` da , `ClassA` che deriva da , il costruttore viene chiamato prima, quindi il costruttore, quindi il costruttore .

Se una classe base non dispone di un costruttore predefinito, è necessario fornire i parametri del costruttore della classe base nel costruttore della classe derivata:

```cpp
class Box {
public:
    Box(int width, int length, int height){
       m_width = width;
       m_length = length;
       m_height = height;
    }

private:
    int m_width;
    int m_length;
    int m_height;
};

class StorageBox : public Box {
public:
    StorageBox(int width, int length, int height, const string label&) : Box(width, length, height){
        m_label = label;
    }
private:
    string m_label;
};

int main(){

    const string aLabel = "aLabel";
    StorageBox sb(1, 2, 3, aLabel);
}
```

Se un costruttore genera un'eccezione, l'ordine di eliminazione permanente è l'inverso dell'ordine di costruzione:

1. Il codice nel corpo della funzione del costruttore viene rimosso.

1. Gli oggetti classe base e membro vengono eliminati definitivamente nell'ordine inverso rispetto alla dichiarazione.

1. Se il costruttore non è delegante, tutti i membri e gli oggetti di classe base completamente costruiti vengono eliminati definitivamente. Tuttavia, poiché l'oggetto stesso non viene costruito completamente, il distruttore non viene eseguito.

## <a name="derived-constructors-and-extended-aggregate-initialization"></a><a name="extended_aggregate"></a>Costruttori derivati e inizializzazione aggregata estesa

Se il costruttore di una classe base non è pubblico, ma è accessibile a una classe derivata, in modalità **/std:c'17** in Visual Studio 2017 e versioni successive non è possibile utilizzare parentesi graffe vuote per inizializzare un oggetto del tipo derivato.

L'esempio seguente illustra il comportamento conforme di C++14:

```cpp
struct Derived;

struct Base {
    friend struct Derived;
private:
    Base() {}
};

struct Derived : Base {};

Derived d1; // OK. No aggregate init involved.
Derived d2 {}; // OK in C++14: Calls Derived::Derived()
               // which can call Base ctor.
```

In C++17, `Derived` è ora considerato un tipo di aggregazione. Di conseguenza, l'inizializzazione di `Base` tramite il costruttore predefinito privato si verifica direttamente come parte della regola di inizializzazione delle aggregazioni estesa. In precedenza, il costruttore privato `Base` veniva chiamato tramite il costruttore `Derived` e aveva esito positivo a causa della dichiarazione Friend.

Nell'esempio seguente viene illustrato il comportamento di C, 17 in Visual Studio 2017 e versioni successive in modalità **/std:c-17:**

```cpp
struct Derived;

struct Base {
    friend struct Derived;
private:
    Base() {}
};

struct Derived : Base {
    Derived() {} // add user-defined constructor
                 // to call with {} initialization
};

Derived d1; // OK. No aggregate init involved.

Derived d2 {}; // error C2248: 'Base::Base': cannot access
               // private member declared in class 'Base'
```

### <a name="constructors-for-classes-that-have-multiple-inheritance"></a>Costruttori per classi con ereditarietà multiplaConstructors for classes that have multiple inheritance

Se una classe è derivata da più classi base, i costruttori della classe base vengono richiamati nell'ordine in cui sono elencati nella dichiarazione della classe derivata:

```cpp
#include <iostream>
using namespace std;

class BaseClass1 {
public:
    BaseClass1() { cout << "BaseClass1 ctor\n"; }
};
class BaseClass2 {
public:
    BaseClass2() { cout << "BaseClass2 ctor\n"; }
};
class BaseClass3 {
public:
    BaseClass3() { cout << "BaseClass3 ctor\n"; }
};
class DerivedClass : public BaseClass1,
                     public BaseClass2,
                     public BaseClass3
                     {
public:
    DerivedClass() { cout << "DerivedClass ctor\n"; }
};

int main() {
    DerivedClass dc;
}
```

È necessario prevedere il seguente output:

```Output
BaseClass1 ctor
BaseClass2 ctor
BaseClass3 ctor
DerivedClass ctor
```

## <a name="delegating-constructors"></a><a name="delegating_constructors"></a>Delega di costruttoriDelegating constructors

Un *costruttore di delega* chiama un costruttore diverso nella stessa classe per eseguire alcune delle operazioni di inizializzazione. Ciò è utile quando si dispone di più costruttori che tutti devono eseguire operazioni simili. È possibile scrivere la logica principale in un costruttore e richiamarla da altri. Nell'esempio semplice seguente, Box(int) delega il proprio lavoro a Box(int,int,int):

```cpp
class Box {
public:
    // Default constructor
    Box() {}

    // Initialize a Box with equal dimensions (i.e. a cube)
    Box(int i) :  Box(i, i, i);  // delegating constructor
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
    //... rest of class as before
};
```

L'oggetto creato dai costruttori viene completamente inizializzato non appena viene completato un costruttore. Per ulteriori informazioni, vedere [Delegati dei costruttori](../cpp/delegating-constructors.md).

## <a name="inheriting-constructors-c11"></a><a name="inheriting_constructors"></a>Ereditare i costruttori (C

Una classe derivata può ereditare i costruttori da una classe base diretta utilizzando una dichiarazione **using,** come illustrato nell'esempio seguente:A derived class can inherit the constructors from a direct base class by using a using declaration as shown in the following example:

```cpp
#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Base()" << endl; }
    Base(const Base& other) { cout << "Base(Base&)" << endl; }
    explicit Base(int i) : num(i) { cout << "Base(int)" << endl; }
    explicit Base(char c) : letter(c) { cout << "Base(char)" << endl; }

private:
    int num;
    char letter;
};

class Derived : Base
{
public:
    // Inherit all constructors from Base
    using Base::Base;

private:
    // Can't initialize newMember from Base constructors.
    int newMember{ 0 };
};

int main()
{
    cout << "Derived d1(5) calls: ";
    Derived d1(5);
    cout << "Derived d1('c') calls: ";
    Derived d2('c');
    cout << "Derived d3 = d2 calls: " ;
    Derived d3 = d2;
    cout << "Derived d4 calls: ";
    Derived d4;
}

/* Output:
Derived d1(5) calls: Base(int)
Derived d1('c') calls: Base(char)
Derived d3 = d2 calls: Base(Base&)
Derived d4 calls: Base()*/
```

::: moniker range=">=vs-2017"

**Visual Studio 2017 e versioni successive**: l'istruzione **using** in modalità **/std:c'17** inserisce nell'ambito tutti i costruttori della classe base, ad eccezione di quelli che hanno una firma identica ai costruttori nella classe derivata. In genere, è consigliabile usare i costruttori ereditanti quando la classe derivata non dichiara nuovi membri dati o nuovi costruttori. Vedere anche [Miglioramenti in Visual Studio 2017 versione 15.7.](https://docs.microsoft.com/cpp/overview/cpp-conformance-improvements?view=vs-2017#improvements_157)

::: moniker-end

Un modello di classe può ereditare tutti i costruttori da un argomento di tipo, se tale tipo specifica una classe base:

```cpp
template< typename T >
class Derived : T {
    using T::T;   // declare the constructors from T
    // ...
};
```

Una classe di derivazione non può ereditare da più classi base, se tali classi base hanno costruttori con firma identica.

## <a name="constructors-and-composite-classes"></a><a name="constructors_in_composite_classes"></a>Costruttori e classi compositeConstructors and composite classes

Le classi che contengono membri di tipo classe sono note come *classi composite*. Quando viene creato un membro di tipo classe di una classe composita, il costruttore viene chiamato prima del costruttore della classe. Quando una classe contenuta è priva di un costruttore predefinito, è necessario utilizzare un elenco di inizializzazione nel costruttore della classe composita. Nell'esempio precedente relativo a `StorageBox`, se si modifica il tipo della variabile membro `m_label` in una nuova classe `Label`, è necessario chiamare il costruttore della classe base e inizializzare la variabile `m_label` nel costruttore `StorageBox`:

```cpp
class Label {
public:
    Label(const string& name, const string& address) { m_name = name; m_address = address; }
    string m_name;
    string m_address;
};

class StorageBox : public Box {
public:
    StorageBox(int width, int length, int height, Label label)
        : Box(width, length, height), m_label(label){}
private:
    Label m_label;
};

int main(){
// passing a named Label
    Label label1{ "some_name", "some_address" };
    StorageBox sb1(1, 2, 3, label1);

    // passing a temporary label
    StorageBox sb2(3, 4, 5, Label{ "another name", "another address" });

    // passing a temporary label as an initializer list
    StorageBox sb3(1, 2, 3, {"myname", "myaddress"});
}
```

## <a name="in-this-section"></a>Contenuto della sezione

- [Copiare costruttori e operatori di assegnazione di copiaCopy constructors and copy assignment operators](copy-constructors-and-copy-assignment-operators-cpp.md)
- [Spostare costruttori e spostare gli operatori di assegnazioneMove constructors and move assignment operators](move-constructors-and-move-assignment-operators-cpp.md)
- [Delega di costruttoriDelegating constructors](delegating-constructors.md)

## <a name="see-also"></a>Vedere anche

[Classi e struct](classes-and-structs-cpp.md)
