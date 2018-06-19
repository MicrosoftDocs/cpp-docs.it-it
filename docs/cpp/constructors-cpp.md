---
title: Costruttori (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 04/06/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- constructors [C++]
- objects [C++], creating
- instance constructors
ms.assetid: 3e9f7211-313a-4a92-9584-337452e061a9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d34dff9c04491c25b2babfd4e7f0574bf7c6c609
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32418125"
---
# <a name="constructors-c"></a>Costruttori (C++)

Per personalizzare come membri di classe vengono inizializzati, o per richiamare funzioni quando viene creato un oggetto della classe, definire un *costruttore*. Ha nome uguale a quello della classe e non restituisce alcun valore. È possibile definire costruttori di overload tante necessità per personalizzare l'inizializzazione in vari modi. In genere, i costruttori avere accessibilità pubblica in modo che il codice esterno alla gerarchia di ereditarietà o di definizione di classe può creare oggetti della classe. Ma è anche possibile dichiarare un costruttore come **protetto** oppure **privata**.

I costruttori possono facoltativamente accettare un membro elenco init. Questo è un modo più efficiente per inizializzare i membri di classe rispetto all'assegnazione di valori nel corpo del costruttore. Nell'esempio seguente viene illustrata una classe `Box` con tre costruttori di overload. Le ultime due utilizzino elenchi di inizializzazione membro:

```cpp

class Box {
public:
    // Default constructor
    Box() {}

    // Initalize a Box with equal dimensions (i.e. a cube)
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

Quando si dichiara un'istanza di una classe, il compilatore sceglie quale costruttore da richiamare in base alle regole di risoluzione dell'overload:

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

- I costruttori possono essere dichiarati come **inline**, [esplicita](#explicit_constructors), **friend** oppure [constexpr](#constexpr_constructors).
- Un costruttore può inizializzare un oggetto che è stato dichiarato come **const**, **volatile** oppure **const volatile**. L'oggetto diventa **const** dopo il completamento di costruttore.
- Per definire un costruttore in un file di implementazione, assegnargli un nome completo come con qualsiasi altra funzione membro: `Box::Box(){...}`.

## <a name="member_init_list"></a> Elenchi di inizializzatori di membro

Un costruttore può facoltativamente avere un elenco di inizializzatori di membro, che inizializza i membri di classe prima dell'esecuzione del corpo del costruttore. (Si noti che un elenco di inizializzatori di membro non è la stessa cosa come un *elenco di inizializzatori* di tipo [std:: initializer_list\<T >](../standard-library/initializer-list-class.md).)

Utilizzando un elenco di inizializzatori di membro è preferibile assegnazione di valori nel corpo del costruttore perché direttamente Inizializza il membro. Nell'esempio seguente mostra l'inizializzatore di membro di elenco è costituito da tutti i **identifier(argument)** espressioni dopo i due punti:

```cpp
  
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
```

L'identificatore deve fare riferimento a un membro di classe. viene inizializzato con il valore dell'argomento. L'argomento può essere uno dei parametri del costruttore, una chiamata di funzione o un [std:: initializer_list\<T >](../standard-library/initializer-list-class.md). 

**const** membri e i membri del tipo di riferimento devono essere inizializzati nell'elenco di inizializzatori di membro.

Chiamate a costruttori di classe di base con parametri prevedere nell'elenco di inizializzatori per garantire che la classe di base è completamente inizializzata prima dell'esecuzione del costruttore derivato.

## <a name="default_constructors"></a> Costruttori predefiniti

 *Costruttori predefiniti* in genere essere priva di parametri, ma possono avere parametri con valori predefiniti.

```cpp
class Box {
public:
    Box() { /*perform any required default initialization steps*/}

    // All params have default values
    Box (int w = 1, int l = 1, int h = 1): m_width(w), m_height(h), m_length(l){}
...
}
```

I costruttori predefiniti sono una del [funzioni membro speciali](special-member-functions.md). Se non vengono dichiarati costruttori in una classe, il compilatore fornisce implicita **inline** costruttore predefinito.

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

Se Usa un costruttore predefinito implicito, prestare attenzione inizializzare i membri nella definizione della classe, come illustrato nell'esempio precedente. Senza tali inizializzatori, membri sarebbe non inizializzati e la chiamata Volume() produrrebbe un valore garbage. In generale, è buona norma per inizializzare i membri in questo modo, anche quando non si basa su un costruttore predefinito implicito.

È possibile impedire al compilatore di generare un costruttore predefinito implicito è possibile che lo definisce come [eliminato](#explicitly_defaulted_and_deleted_constructors):

```cpp

    // Default constructor
    Box() = delete;

```

Verrà definito un costruttore predefinito generato dal compilatore come eliminato se i membri di classe non può essere costruita predefinita. Ad esempio, tutti i membri del tipo di classe e i relativi membri di tipo classe, devono avere un costruttore predefinito e i distruttori che sono accessibili. Digitare tutti i membri di dati di riferimento, nonché come **const** i membri devono avere un inizializzatore di membro predefinito.

Quando si chiama un costruttore predefinito generato dal compilatore e provare a utilizzare le parentesi, viene generato un avviso:

```cpp
class myclass{};
int main(){
myclass mc();     // warning C4930: prototyped function not called (was a variable definition intended?)
}
```

Di seguito è riportato un esempio del problema 'Most Vexing Parse'. Poiché l'espressione di esempio può essere interpretata come dichiarazione di una funzione o come chiamata di un costruttore predefinito e dal momento che i parser C++ favoriscono le dichiarazioni rispetto ad altri elementi, tale espressione viene considerata come una dichiarazione di funzione. Per ulteriori informazioni, vedere [Most Vexing Parse](http://en.wikipedia.org/wiki/Most_vexing_parse).

Se vengono dichiarati costruttori non predefiniti, il compilatore non fornisce un costruttore predefinito:

```cpp
class Box {
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height){}
};
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

Tuttavia, è possibile utilizzare un set di elenchi di inizializzatori per inizializzare una matrice di oggetti finestra:

```cpp
Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
```

Per altre informazioni, vedere [inizializzatori](initializers.md).

## <a name="copy_and_move_constructors"></a> Costruttori di copia

Un *costruttore di copia* Inizializza un oggetto copiando i valori del membro da un oggetto dello stesso tipo. Se i membri di classe sono tutti i tipi semplici, ad esempio valori scalari, il costruttore di copia generato dal compilatore è sufficiente e non è necessaria definire la propria. Se la classe richiede l'inizializzazione più complesso, è necessario implementare un costruttore di copia personalizzata. Ad esempio, se un membro di classe è un puntatore quindi è necessario definire un costruttore di copia per allocare nuova memoria e copiare i valori dall'oggetto di altro a cui punta. Il costruttore di copia generato dal compilatore copia semplicemente il puntatore, in modo che il nuovo puntatore ancora punti di altra posizione di memoria.

Un costruttore di copia può avere una di queste firme:

```cpp

    Box(Box& other); // Avoid if possible--allows modification of other.
    Box(const Box& other);
    Box(volatile Box& other);
    Box(volatile const Box& other);

    // Additional parameters OK if they have default values
    Box(Box& other, int i = 42, string label = "Box");
```

Quando si definisce un costruttore di copia, è necessario definire anche un operatore di assegnazione di copia (=). Per altre informazioni, vedere [assegnazione](assignment.md) e [costruttori di copia e operatori di assegnazione di copia](copy-constructors-and-copy-assignment-operators-cpp.md).

È possibile impedire l'oggetto definendo il costruttore di copia come eliminati non verranno copiati:

```cpp
    Box (const Box& other) = delete;
```

Tentativo di copiare l'oggetto genera l'errore *C2280: tentativo di fare riferimento a una funzione eliminata*.

## <a name="move_constructors"></a> Costruttori di spostamento
Un *costruttore di spostamento* è una funzione membro speciale che consente di spostare la proprietà dei dati di un oggetto esistente a una nuova variabile senza copiare i dati originali. Assume un riferimento rvalue come primo parametro e i parametri aggiuntivi devono avere i valori predefiniti. I costruttori di spostamento possono significativamente aumentare l'efficienza del programma quando si passano intorno a oggetti di grandi dimensioni. Un costruttore di spostamento accetta un riferimento rvalue come primo parametro. Qualsiasi altro parametro deve avere i valori predefiniti.

```cpp
Box(Box&& other);
```

Il compilatore sceglie un costruttore di spostamento in determinate situazioni in cui l'oggetto viene inizializzata da un altro oggetto dello stesso tipo che sta per essere eliminato definitivamente e non necessita più risorse. Nell'esempio seguente viene illustrato un caso quando un costruttore di spostamento è selezionato per la risoluzione dell'overload. La variabile *casella* restituito da get_Box() è un *xvalue* (valore in scadenza) che sta per uscire dall'ambito. Per fornire la motivazione per questo esempio, assegnare casella un vettore di grandi dimensioni di stringhe che rappresentano il relativo contenuto. Piuttosto che copia il vettore e le relative stringhe, il costruttore di spostamento "ruba" il valore in scadenza "casella" in modo che il vettore ora a cui appartiene il nuovo oggetto. La chiamata a `std::move` è tutto ciò che è necessario perché entrambi `vector` e `string` classi implementano propri costruttori di spostamento.

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
    void Get_Contents()
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
    b2.Get_Contents(); // Prove that we have all the values

    char ch;
    cin >> ch; // keep window open
    return 0;
}


```

Se una classe non definisce un costruttore di spostamento, il compilatore genera un implicita, se è presente alcun costruttore di copia dichiarati dall'utente, l'operatore di assegnazione di copia, operatore di assegnazione di spostamento o distruttore. Se non è definito alcun costruttore di spostamento esplicita o implicita, le operazioni che in caso contrario, utilizzare un costruttore di spostamento utilizzano il costruttore di copia. Se una classe dichiara un costruttore di spostamento o l'operatore di assegnazione di spostamento, viene definito il costruttore di copia dichiarato in modo implicito come eliminato.

Viene definito un costruttore di spostamento dichiarata in modo implicito come eliminato se un distruttore non dispongono di membri che sono tipi di classe o il compilatore non è possibile determinare quale costruttore usare per l'operazione di spostamento.

Per ulteriori informazioni su come scrivere un costruttore di spostamento non semplice, vedere [costruttori di spostamento e operatori di assegnazione di spostamento (C++)](../cpp/move-constructors-and-move-assignment-operators-cpp.md).

## <a name="explicitly_defaulted_and_deleted_constructors"></a> Costruttori eliminati e impostati in modo esplicito

È possibile in modo esplicito *predefinito* costruttori di copia, costruttori predefiniti, costruttori di spostamento, operatori di assegnazione di copiare, spostare gli operatori di assegnazione e i distruttori. È possibile in modo esplicito *eliminare* tutte le funzioni membro speciali.

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

Per ulteriori informazioni, vedere [in modo esplicito impostate come predefinite e funzioni eliminate](../cpp/explicitly-defaulted-and-deleted-functions.md).

## <a name="constexpr_constructors"></a> costruttori constexpr

Un costruttore può essere dichiarato come [constexpr](constexpr-cpp.md) se

- è uno dichiarati come impostate come predefinite, altrimenti soddisfa tutte le condizioni relative [funzioni constexpr](constexpr-cpp.md#constexpr_functions) in genere;
- la classe non dispone di alcun classi base virtuali;
- ognuno dei parametri è un [tipo di valore letterale](trivial-standard-layout-and-pod-types.md#literal_types);
- il corpo non è un blocco try di funzione;
- tutti i membri dati non statici e gli oggetti secondari di classe di base vengono inizializzati;
- Se la classe (a) un'unione con membri variant oppure (b) dispone di unioni anonime, solo uno dei membri dell'unioni è inizializzato;
- ogni membro dati non statici del tipo di classe e tutti gli oggetti secondari di classe di base dispongono di un costruttore constexpr


## <a name="init_list_constructors"></a> Costruttori di elenco di inizializzatori

Se un costruttore accetta un [std:: initializer_list\<T\> ](../standard-library/initializer-list-class.md) come relativo parametro e gli altri parametri avere argomenti predefiniti, tale costruttore verrà selezionato nella risoluzione dell'overload quando la classe è creare un'istanza tramite inizializzazione diretta. È possibile utilizzare initializer_list per inizializzare un membro che lo supportano. Si supponga ad esempio la classe di finestra (illustrata in precedenza) è un `std::vector<string>` membro **m_contents**. È possibile fornire un costruttore analogo al seguente:

```cpp
    Box(initializer_list<string> list, int w = 0, int h = 0, int l = 0)
        : m_contents(list), m_width(w), m_height(h), m_length(l)
{}
```

E quindi creare gli oggetti di finestra simile al seguente:

```cpp
    Box b{ "apples", "oranges", "pears" }; // or ...
    Box b2(initializer_list<string> { "bread", "cheese", "wine" }, 2, 4, 6);
```

## <a name="explicit_constructors"></a> Costruttori espliciti

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

Queste conversioni possono risultare utili in alcuni casi, ma provocano più spesso errori poco evidenti ma gravi nel codice. Come regola generale, è consigliabile usare la **esplicita** parola chiave in un costruttore (e operatori definiti dall'utente) per evitare questo tipo di conversione implicita del tipo:

```cpp

explicit Box(int size): m_width(size), m_length(size), m_height(size){}
```

Quando il costruttore è esplicito, questa riga provoca un errore del compilatore: `ShippingOrder so(42, 10.8);`.  Per ulteriori informazioni, vedere [conversioni dei tipi definiti dall'utente](../cpp/user-defined-type-conversions-cpp.md).

## <a name="order_of_construction"></a> Ordine di costruzione

Di seguito è indicato l'ordine in base al quale un costruttore esegue le attività.

1. Chiama i costruttori delle classi base e dei membri nell'ordine di dichiarazione.

2. Se la classe è derivata dalle classi base virtuali, inizializza i puntatori di base virtuali dell'oggetto.

3. Se la classe dispone di funzioni virtuali o le eredita, inizializza i puntatori a funzioni virtuali dell'oggetto. I puntatori a funzioni virtuali puntano alla tabella delle funzioni virtuali della classe per consentire la corretta associazione delle chiamate di funzioni virtuali al codice.

4. Esegue il codice nel corpo della funzione.

L'esempio seguente illustra l'ordine in cui vengono chiamati i costruttori di classi base e di membri in un costruttore per una classe derivata. Prima di tutto, viene chiamato il costruttore base, quindi i membri della classe base vengono inizializzati nell'ordine in cui vengono visualizzati nella dichiarazione di classe e infine viene chiamato il costruttore derivato.

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

```output
Contained1 ctor
Contained2 ctor
BaseContainer ctor
Contained3 ctor
DerivedContainer ctor
```

Un costruttore di classi derivate chiama sempre un costruttore di classi base, in modo da poter usare le classi base completamente costruite prima che vengano completate eventuali operazioni aggiuntive. I costruttori di classi base vengono chiamati in ordine di derivazione, ad esempio se ClassA è derivata da ClassB, che è a sua volta derivata da ClassC, viene chiamato per primo il costruttore di ClassC, quindi il costruttore di ClassB e infine il costruttore di ClassA.

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

1. Gli oggetti classe base e membro vengono eliminati in modo permanente nell'ordine inverso rispetto alla dichiarazione.

1. Se il costruttore non è delegante, tutti i membri e gli oggetti di classe base completamente costruiti vengono eliminati in modo permanente. Tuttavia, poiché l'oggetto stesso non viene costruito completamente, il distruttore non viene eseguito.

### <a name="constructors-for-classes-that-have-multiple-inheritance"></a>Costruttori di classi con ereditarietà multipla

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

```output

BaseClass1 ctor
BaseClass2 ctor
BaseClass3 ctor
DerivedClass ctor

```

## <a name="virtual_functions_in_constructors"></a> Funzioni virtuali nei costruttori

È consigliabile prestare attenzione quando si chiamano le funzioni virtuali nei costruttori. Poiché il costruttore della classe base viene sempre richiamato prima del costruttore della classe derivata, la funzione chiamata nel costruttore base è la versione della classe base, non quella della classe derivata. Nell'esempio seguente, la costruzione di una classe `DerivedClass` fa in modo che l'implementazione di `BaseClass` da parte della classe `print_it()` venga eseguita prima che il costruttore della classe `DerivedClass` determini l'esecuzione dell'implementazione di `DerivedClass` da parte della classe `print_it()`:

```cpp
#include <iostream>
using namespace std;

class BaseClass{
public:
    BaseClass(){
        print_it();
    }
    virtual void print_it() {
        cout << "BaseClass print_it" << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    DerivedClass() {
        print_it();
    }
    virtual void print_it(){
        cout << "Derived Class print_it" << endl;
    }
};

int main() {

    DerivedClass dc;
}
```

Di seguito viene riportato l'output:

```output
BaseClass print_it
Derived Class print_it
```

## <a name="delegating_constructors"></a> Delega dei costruttori

Oggetto *costruttore delegante* chiama un costruttore diverso nella stessa classe per eseguire le attività di inizializzazione. Ciò è utile quando si dispongono di più costruttori che dispongono di eseguire operazioni simili. È possibile scrivere la logica principale in un costruttore e richiamare dagli altri. Nell'esempio seguente semplice, Box(int) delega il lavoro a Box(int,int,int):

```cpp
class Box {
public:
    // Default constructor
    Box() {}

    // Initalize a Box with equal dimensions (i.e. a cube)
    Box(int i) :  Box(i, i, i);  // delegating constructor
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height)
    {}
    //... rest of class as before
};
```


L'oggetto creato dai costruttori viene completamente inizializzato non appena viene completato un costruttore. Per ulteriori informazioni, vedere [inizializzazione uniforme e costruttori deleganti](../cpp/uniform-initialization-and-delegating-constructors.md).

## <a name="inheriting_constructors"></a> Eredità costruttori (c++11)

Una classe derivata può ereditare i costruttori da una classe base diretta usando una dichiarazione using, come illustrato nell'esempio seguente:

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

L'istruzione using porta nell'ambito tutti i costruttori dalla classe base, ad eccezione di quelli che hanno una firma identica ai costruttori disponibili nella classe derivata. In genere, è consigliabile usare i costruttori ereditanti quando la classe derivata non dichiara nuovi membri dati o nuovi costruttori.

Un modello di classe può ereditare tutti i costruttori da un argomento tipo, se tale tipo specifica una classe base:

```cpp
template< typename T >
class Derived : T {
    using T::T;   // declare the constructors from T
    // ...
};

```

Una classe di derivazione non può ereditare da più classi base, se tali classi base hanno costruttori con firma identica.

## <a name="constructors_in_composite_classes"></a> Costruttori e classi composite

Le classi che contengono membri di tipo classe sono note come *classi composite*. Quando viene creato un membro di tipo classe di una classe composita, il costruttore viene chiamato prima del costruttore della classe. Quando una classe contenuta è priva di un costruttore predefinito, è necessario usare un elenco di inizializzazione nel costruttore della classe composita. Nell'esempio precedente relativo a `StorageBox`, se si modifica il tipo della variabile membro `m_label` in una nuova classe `Label`, è necessario chiamare il costruttore della classe base e inizializzare la variabile `m_label` nel costruttore `StorageBox`:

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