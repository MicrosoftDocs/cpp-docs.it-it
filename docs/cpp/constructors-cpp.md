---
title: Costruttori (C++)
ms.date: 12/27/2019
helpviewer_keywords:
- constructors [C++]
- objects [C++], creating
- instance constructors
ms.assetid: 3e9f7211-313a-4a92-9584-337452e061a9
ms.openlocfilehash: f5340f2e56a367734293d661d9d89eb0db522fd2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842052"
---
# <a name="constructors-c"></a>Costruttori (C++)

Per personalizzare la modalità di inizializzazione dei membri della classe o per richiamare funzioni quando viene creato un oggetto della classe, definire un *Costruttore*. Ha nome uguale a quello della classe e non restituisce alcun valore. È possibile definire tutti i costruttori di overload necessari per personalizzare l'inizializzazione in diversi modi. In genere, i costruttori hanno accessibilità pubblica, in modo che il codice al di fuori della definizione della classe o della gerarchia di ereditarietà possa creare oggetti della classe. Tuttavia, è anche possibile dichiarare un costruttore come **`protected`** o **`private`** .

I costruttori possono facoltativamente prendere un elenco di inizializzazione del membro. Si tratta di un modo più efficiente per inizializzare i membri della classe rispetto all'assegnazione di valori nel corpo del costruttore. Nell'esempio seguente viene illustrata una classe `Box` con tre costruttori di overload. Gli ultimi due elenchi use member init:

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

Quando si dichiara un'istanza di una classe, il compilatore sceglie il costruttore da richiamare in base alle regole di risoluzione dell'overload:

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

- I costruttori possono essere dichiarati come **`inline`** , [Explicit](#explicit_constructors) **`friend`** o [constExpr](#constexpr_constructors).
- Un costruttore può inizializzare un oggetto dichiarato come **`const`** **`volatile`** o **`const volatile`** . L'oggetto diventa **`const`** dopo il completamento del costruttore.
- Per definire un costruttore in un file di implementazione, assegnargli un nome completo come con qualsiasi altra funzione membro: `Box::Box(){...}` .

## <a name="member-initializer-lists"></a><a name="member_init_list"></a> Elenchi di inizializzatori di membri

Un costruttore può facoltativamente avere un elenco di inizializzatori di membri che Inizializza i membri della classe prima dell'esecuzione del corpo del costruttore. Si noti che un elenco di inizializzatori di membro non corrisponde a un *elenco di inizializzatori* di tipo [std: \<T> : initializer_list](../standard-library/initializer-list-class.md).

È preferibile usare un elenco di inizializzatori di membri rispetto all'assegnazione di valori nel corpo del costruttore, in quanto Inizializza direttamente il membro. Nell'esempio seguente viene illustrato l'elenco di inizializzatori di membro costituito da tutte le espressioni dell' **identificatore (argomento)** dopo i due punti:

```cpp
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
```

L'identificatore deve fare riferimento a un membro di classe; viene inizializzata con il valore dell'argomento. L'argomento può essere uno dei parametri del costruttore, una chiamata di funzione o un [std:: \<T> initializer_list](../standard-library/initializer-list-class.md).

**`const`** i membri e i membri del tipo di riferimento devono essere inizializzati nell'elenco di inizializzatori di membri.

Le chiamate ai costruttori della classe base con parametri devono essere apportate nell'elenco di inizializzatori per assicurarsi che la classe base sia completamente inizializzata prima dell'esecuzione del costruttore derivato.

## <a name="default-constructors"></a><a name="default_constructors"></a> Costruttori predefiniti

I *costruttori predefiniti* in genere non hanno parametri, ma possono avere parametri con valori predefiniti.

```cpp
class Box {
public:
    Box() { /*perform any required default initialization steps*/}

    // All params have default values
    Box (int w = 1, int l = 1, int h = 1): m_width(w), m_height(h), m_length(l){}
...
}
```

I costruttori predefiniti sono una delle [funzioni membro speciali](special-member-functions.md). Se in una classe non sono dichiarati costruttori, il compilatore fornisce un **`inline`** costruttore predefinito implicito.

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

Se si fa affidamento su un costruttore predefinito implicito, assicurarsi di inizializzare i membri nella definizione della classe, come illustrato nell'esempio precedente. Senza tali inizializzatori, i membri verrebbero non inizializzati e la chiamata del volume () produrrebbe un valore di Garbage Collection. In generale, è consigliabile inizializzare i membri in questo modo anche quando non si basano su un costruttore predefinito implicito.

È possibile impedire al compilatore di generare un costruttore predefinito implicito definendolo come [eliminato](#explicitly_defaulted_and_deleted_constructors):

```cpp
    // Default constructor
    Box() = delete;
```

Un costruttore predefinito generato dal compilatore verrà definito come eliminato se i membri di una classe non sono costruibile predefiniti. Ad esempio, tutti i membri del tipo di classe e i membri del tipo di classe devono avere un costruttore predefinito e i distruttori accessibili. Tutti i membri dati del tipo di riferimento, nonché **`const`** i membri devono avere un inizializzatore di membro predefinito.

Quando si chiama un costruttore predefinito generato dal compilatore e si tenta di usare le parentesi, viene generato un avviso:

```cpp
class myclass{};
int main(){
myclass mc();     // warning C4930: prototyped function not called (was a variable definition intended?)
}
```

Di seguito è riportato un esempio del problema 'Most Vexing Parse'. Poiché l'espressione di esempio può essere interpretata come dichiarazione di una funzione o come chiamata di un costruttore predefinito e dal momento che i parser C++ favoriscono le dichiarazioni rispetto ad altri elementi, tale espressione viene considerata come una dichiarazione di funzione. Per ulteriori informazioni, vedere [la maggior parte dell'analisi vexing](https://en.wikipedia.org/wiki/Most_vexing_parse).

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

Tuttavia, è possibile usare un set di elenchi di inizializzatori per inizializzare una matrice di oggetti Box:

```cpp
Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
```

Per ulteriori informazioni, vedere [inizializzatori](initializers.md).

## <a name="copy-constructors"></a><a name="copy_and_move_constructors"></a> Costruttori di copia

Un *costruttore di copia* Inizializza un oggetto copiando i valori dei membri da un oggetto dello stesso tipo. Se i membri della classe sono tutti tipi semplici, ad esempio valori scalari, il costruttore di copia generato dal compilatore è sufficiente e non è necessario definirne di propri. Se la classe richiede un'inizializzazione più complessa, è necessario implementare un costruttore di copia personalizzato. Ad esempio, se un membro di una classe è un puntatore, è necessario definire un costruttore di copia per allocare la nuova memoria e copiare i valori dall'altro oggetto a cui si fa riferimento. Il costruttore di copia generato dal compilatore semplicemente copia il puntatore, in modo che il nuovo puntatore punti ancora alla posizione di memoria dell'altro.

Un costruttore di copia può avere una delle seguenti firme:

```cpp
    Box(Box& other); // Avoid if possible--allows modification of other.
    Box(const Box& other);
    Box(volatile Box& other);
    Box(volatile const Box& other);

    // Additional parameters OK if they have default values
    Box(Box& other, int i = 42, string label = "Box");
```

Quando si definisce un costruttore di copia, è necessario definire anche un operatore di assegnazione di copia (=). Per altre informazioni, vedere costruttori di [assegnazione](assignment.md) e di [copia e operatori di assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md).

È possibile impedire che l'oggetto venga copiato definendo il costruttore di copia come eliminato:

```cpp
    Box (const Box& other) = delete;
```

Il tentativo di copiare l'oggetto genera l'errore *C2280: tentativo di fare riferimento a una funzione eliminata*.

## <a name="move-constructors"></a><a name="move_constructors"></a> Costruttori di spostamento

Un *costruttore di spostamento* è una funzione membro speciale che sposta la proprietà dei dati di un oggetto esistente in una nuova variabile senza copiare i dati originali. Accetta un riferimento rvalue come primo parametro e tutti i parametri aggiuntivi devono avere valori predefiniti. I costruttori di spostamento possono aumentare significativamente l'efficienza del programma quando passano oggetti di grandi dimensioni.

```cpp
Box(Box&& other);
```

Il compilatore sceglie un costruttore di spostamento in determinate situazioni in cui l'oggetto viene inizializzato da un altro oggetto dello stesso tipo che sta per essere eliminato definitivamente e che non necessita più delle relative risorse. Nell'esempio seguente viene illustrato un caso in cui un costruttore di spostamento è selezionato dalla risoluzione dell'overload. Nel costruttore che chiama `get_Box()` , il valore restituito è un *xValue* (valore di scadenza). Non viene assegnato ad alcuna variabile e pertanto sta per uscire dall'ambito. Per fornire la motivazione di questo esempio, è possibile assegnare a Box un vettore di stringhe di grandi dimensioni che ne rappresenta il contenuto. Invece di copiare il vettore e le relative stringhe, il costruttore di spostamento "lo sottrae" dalla "casella" del valore in scadenza, in modo che il vettore ora appartenga al nuovo oggetto. La chiamata a `std::move` è sufficiente perché entrambe le `vector` `string` classi e implementano i propri costruttori di spostamento.

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

Se una classe non definisce un costruttore di spostamento, il compilatore genera una implicita se non sono presenti costruttori di copia, operatori di assegnazione di copia, operatori di assegnazione di spostamento o distruttori dichiarati dall'utente. Se non è definito alcun costruttore di spostamento esplicito o implicito, le operazioni che altrimenti utilizzerebbe un costruttore di spostamento utilizzeranno invece il costruttore di copia. Se una classe dichiara un costruttore di spostamento o un operatore di assegnazione di spostamento, il costruttore di copia dichiarato in modo implicito viene definito come eliminato.

Un costruttore di spostamento dichiarato in modo implicito viene definito come eliminato se i membri che sono tipi di classe non dispongono di un distruttore o il compilatore non è in grado di determinare il costruttore da usare per l'operazione di spostamento.

Per altre informazioni su come scrivere un costruttore di spostamento non semplice, vedere [costruttori di spostamento e operatori di assegnazione di spostamento (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md).

## <a name="explicitly-defaulted-and-deleted-constructors"></a><a name="explicitly_defaulted_and_deleted_constructors"></a> Costruttori predefiniti ed eliminati in modo esplicito

È possibile impostare in modo esplicito costruttori di copia *predefiniti* , costruttori predefiniti, costruttori di spostamento, operatori di assegnazione di copia, operatori di assegnazione di spostamento e distruttori. È possibile *eliminare* in modo esplicito tutte le funzioni membro speciali.

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

Per ulteriori informazioni, vedere [funzioni impostate in modo esplicito come predefinite ed eliminate](../cpp/explicitly-defaulted-and-deleted-functions.md).

## <a name="constexpr-constructors"></a><a name="constexpr_constructors"></a> costruttori constExpr

Un costruttore può essere dichiarato come [constExpr](constexpr-cpp.md) se

- viene dichiarata come valore predefinito o in caso contrario soddisfa tutte le condizioni per le [funzioni constExpr](constexpr-cpp.md#constexpr_functions) in generale;
- la classe non contiene classi base virtuali.
- ognuno dei parametri è un [tipo letterale](trivial-standard-layout-and-pod-types.md#literal_types).
- il corpo non è un blocco try di funzione.
- vengono inizializzati tutti i membri dati non statici e gli oggetti secondari della classe base.
- Se la classe è (a) un'Unione con membri Variant oppure (b) dispone di unioni anonime, viene inizializzato solo uno dei membri di Unione.
- tutti i membri dati non statici di tipo classe e tutti gli oggetti secondari della classe base hanno un costruttore constExpr

## <a name="initializer-list-constructors"></a><a name="init_list_constructors"></a> Costruttori dell'elenco di inizializzatori

Se un costruttore accetta una classe [std:: \<T\> initializer_list](../standard-library/initializer-list-class.md) come parametro e qualsiasi altro parametro presenta argomenti predefiniti, il costruttore verrà selezionato nella risoluzione dell'overload quando viene creata un'istanza della classe tramite l'inizializzazione diretta. È possibile utilizzare il initializer_list per inizializzare qualsiasi membro che può accettarlo. Si supponga, ad esempio, che la classe Box (mostrata in precedenza) disponga di un `std::vector<string>` membro `m_contents` . È possibile specificare un costruttore analogo al seguente:

```cpp
    Box(initializer_list<string> list, int w = 0, int h = 0, int l = 0)
        : m_contents(list), m_width(w), m_height(h), m_length(l)
{}
```

E quindi creare oggetti casella come il seguente:

```cpp
    Box b{ "apples", "oranges", "pears" }; // or ...
    Box b2(initializer_list<string> { "bread", "cheese", "wine" }, 2, 4, 6);
```

## <a name="explicit-constructors"></a><a name="explicit_constructors"></a> Costruttori espliciti

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

Queste conversioni possono risultare utili in alcuni casi, ma provocano più spesso errori poco evidenti ma gravi nel codice. Come regola generale, è consigliabile usare la **`explicit`** parola chiave in un costruttore e gli operatori definiti dall'utente per evitare questo tipo di conversione implicita di tipi:

```cpp
explicit Box(int size): m_width(size), m_length(size), m_height(size){}
```

Quando il costruttore è esplicito, questa riga provoca un errore del compilatore: `ShippingOrder so(42, 10.8);`.  Per ulteriori informazioni, vedere [conversioni di tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md).

## <a name="order-of-construction"></a><a name="order_of_construction"></a> Ordine di costruzione

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

Di seguito è riportato l'output generato:

```Output
Contained1 ctor
Contained2 ctor
BaseContainer ctor
Contained3 ctor
DerivedContainer ctor
```

Un costruttore di classi derivate chiama sempre un costruttore di classi base, in modo da poter utilizzare le classi base completamente costruite prima che vengano completate eventuali operazioni aggiuntive. I costruttori della classe base vengono chiamati in ordine di derivazione, ad esempio se `ClassA` è derivato da `ClassB` , che è derivato da `ClassC` , il costruttore `ClassC` viene chiamato per primo, quindi il costruttore `ClassB` , quindi `ClassA` il costruttore.

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

## <a name="derived-constructors-and-extended-aggregate-initialization"></a><a name="extended_aggregate"></a> Costruttori derivati e inizializzazione aggregata estesa

Se il costruttore di una classe di base non è pubblico, ma è accessibile a una classe derivata, in modalità **/std: c++ 17** in Visual Studio 2017 e versioni successive non è possibile usare le parentesi graffe vuote per inizializzare un oggetto del tipo derivato.

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

L'esempio seguente illustra il comportamento di C++ 17 in Visual Studio 2017 e versioni successive in modalità **/std: c++ 17** :

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

### <a name="constructors-for-classes-that-have-multiple-inheritance"></a>Costruttori per classi con ereditarietà multipla

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

## <a name="delegating-constructors"></a><a name="delegating_constructors"></a> Delega di costruttori

Un *costruttore delegante* chiama un costruttore diverso nella stessa classe per eseguire alcune operazioni di inizializzazione. Questa operazione è utile quando si dispone di più costruttori che devono eseguire operazioni simili. È possibile scrivere la logica principale in un costruttore e richiamarla da altri. Nell'esempio semplice seguente, Box (int) delega il proprio lavoro a Box (int, int, int):

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

L'oggetto creato dai costruttori viene completamente inizializzato non appena viene completato un costruttore. Per ulteriori informazioni, vedere [delegare costruttori](../cpp/delegating-constructors.md).

## <a name="inheriting-constructors-c11"></a><a name="inheriting_constructors"></a> Costruttori che ereditano (C++ 11)

Una classe derivata può ereditare i costruttori da una classe base diretta usando una **`using`** dichiarazione, come illustrato nell'esempio seguente:

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

**Visual Studio 2017 e versioni successive**: l' **`using`** istruzione nella modalità **/std: c++ 17** riporta nell'ambito tutti i costruttori della classe di base, ad eccezione di quelli che hanno una firma identica ai costruttori nella classe derivata. In genere, è consigliabile usare i costruttori ereditanti quando la classe derivata non dichiara nuovi membri dati o nuovi costruttori. Vedere anche miglioramenti apportati [a Visual Studio 2017 versione 15,7](../overview/cpp-conformance-improvements.md?view=vs-2017#improvements_157).

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

## <a name="constructors-and-composite-classes"></a><a name="constructors_in_composite_classes"></a> Costruttori e classi composite

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

- [Costruttori di copia e operatori di assegnazione copia](copy-constructors-and-copy-assignment-operators-cpp.md)
- [Costruttori di spostamento e operatori di assegnazione spostamento](move-constructors-and-move-assignment-operators-cpp.md)
- [Delega dei costruttori](delegating-constructors.md)

## <a name="see-also"></a>Vedere anche

[Classi e struct](classes-and-structs-cpp.md)
