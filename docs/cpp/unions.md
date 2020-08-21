---
title: union
description: Una descrizione del union class tipo e della parola chiave C++ standard, l'utilizzo e le restrizioni.
ms.date: 08/18/2020
f1_keywords:
- union_cpp
helpviewer_keywords:
- class type [C++], union as
- union keyword [C++]
ms.assetid: 25c4e219-fcbb-4b7b-9b64-83f3252a92ca
no-loc:
- union
- struct
- enum
- class
- static
ms.openlocfilehash: a4dc07df5e7858dffe62478509ee1d8dc759ce96
ms.sourcegitcommit: f1752bf90b4f869633a859ace85439ca19e208b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/21/2020
ms.locfileid: "88722180"
---
# `union`

> [!NOTE]
> In C++ 17 e versioni successive, `std::variant` class è un'alternativa indipendente dai tipi per un oggetto union .

Un **`union`** è un tipo definito dall'utente in cui tutti i membri condividono la stessa posizione di memoria. Questa definizione indica che in un determinato momento, un union oggetto non può contenere più di un oggetto dall'elenco di membri. Significa anche che, indipendentemente dal numero di membri a union , viene sempre utilizzata solo una quantità di memoria sufficiente per archiviare il membro più grande.

Un oggetto union può essere utile per conservare la memoria quando sono presenti molti oggetti e memoria limitata. Tuttavia, per un oggetto è union necessario prestare particolare attenzione all'uso corretto. L'utente è responsabile di assicurarsi di accedere sempre allo stesso membro assegnato. Se uno o più tipi di membro hanno una con struct o non semplice, è necessario scrivere codice aggiuntivo per eseguire in modo esplicito il struct degrado e l'eliminazione di tale membro. Prima di utilizzare un union , valutare se il problema che si sta tentando di risolvere possa essere espresso meglio utilizzando una base class e tipi derivati class .

## <a name="syntax"></a>Sintassi

> **`union`***`tag`* <sub>consenso esplicito</sub> **`{`** *`member-list`***`};`**

### <a name="parameters"></a>Parametri

*`tag`*<br/>
Nome del tipo assegnato a union .

*`member-list`*<br/>
Membri che union può contenere.

## <a name="declare-a-no-locunion"></a>Dichiarare un union

Iniziare la dichiarazione di un oggetto union usando la **`union`** parola chiave e racchiudere l'elenco dei membri tra parentesi graffe:

```cpp
// declaring_a_union.cpp
union RecordType    // Declare a simple union type
{
    char   ch;
    int    i;
    long   l;
    float  f;
    double d;
    int *int_ptr;
};

int main()
{
    RecordType t;
    t.i = 5; // t holds an int
    t.f = 7.25; // t now holds a float
}
```

## <a name="use-a-no-locunion"></a>Usa un union

Nell'esempio precedente, il codice che accede union a deve stabilire quale membro possiede i dati. La soluzione più comune a questo problema è detta *discriminata union *. Racchiude l'oggetto union in un oggetto struct e include un enum membro che indica il tipo di membro attualmente archiviato in union . 'esempio seguente mostra il modello di base:

```cpp
#include <queue>

using namespace std;

enum class WeatherDataType
{
    Temperature, Wind
};

struct TempData
{
    int StationId;
    time_t time;
    double current;
    double max;
    double min;
};

struct WindData
{
    int StationId;
    time_t time;
    int speed;
    short direction;
};

struct Input
{
    WeatherDataType type;
    union
    {
        TempData temp;
        WindData wind;
    };
};

// Functions that are specific to data types
void Process_Temp(TempData t) {}
void Process_Wind(WindData w) {}

void Initialize(std::queue<Input>& inputs)
{
    Input first;
    first.type = WeatherDataType::Temperature;
    first.temp = { 101, 1418855664, 91.8, 108.5, 67.2 };
    inputs.push(first);

    Input second;
    second.type = WeatherDataType::Wind;
    second.wind = { 204, 1418859354, 14, 27 };
    inputs.push(second);
}

int main(int argc, char* argv[])
{
    // Container for all the data records
    queue<Input> inputs;
    Initialize(inputs);
    while (!inputs.empty())
    {
        Input const i = inputs.front();
        switch (i.type)
        {
        case WeatherDataType::Temperature:
            Process_Temp(i.temp);
            break;
        case WeatherDataType::Wind:
            Process_Wind(i.wind);
            break;
        default:
            break;
        }
        inputs.pop();

    }
    return 0;
}
```

Nell'esempio precedente, l'oggetto union in `Input` struct non ha un nome, quindi è denominato *Anonimo* union . È possibile accedere direttamente ai relativi membri come se fossero membri di struct . Per ulteriori informazioni sull'utilizzo di un oggetto anonimo union , vedere la [sezione union anonima](#anonymous_unions) .

Nell'esempio precedente viene illustrato un problema che può essere risolto anche usando i class tipi che derivano da una base comune class . È possibile creare un ramo del codice in base al tipo di runtime di ogni oggetto nel contenitore. Il codice potrebbe essere più facile da gestire e comprendere, ma potrebbe anche essere più lento rispetto all'uso di union . Inoltre, con union è possibile archiviare tipi non correlati. Un oggetto union consente di modificare dinamicamente il tipo del valore archiviato senza modificare il tipo della union variabile stessa. Ad esempio, è possibile creare una matrice eterogenea di `MyUnionType` , i cui elementi archiviano valori diversi di tipi diversi.

Nell'esempio è facile usare in modo improprio `Input` struct . Per accedere al membro che include i dati, l'utente deve utilizzare correttamente il discriminatore. È possibile proteggersi da un utilizzo improprio rendendo union **`private`** e fornendo funzioni di accesso speciali, come illustrato nell'esempio successivo.

## <a name="unrestricted-no-locunion-c11"></a>Senza restrizioni union (c++ 11)

In C++ 03 e versioni precedenti, un oggetto union può contenere static membri non dati con un class tipo, a condizione che il tipo non disponga di un utente con struct ORS, de struct ORS o operatori di assegnazione. In C++11 queste restrizioni sono state rimosse. Se si include un membro di questo tipo in union , il compilatore contrassegna automaticamente eventuali funzioni membro speciali che non sono fornite dall'utente come **`deleted`** . Se union è un oggetto anonimo union all'interno di un oggetto class o struct , eventuali funzioni membro speciali di class o struct che non sono specificate dall'utente sono contrassegnate come **`deleted`** . Nell'esempio seguente viene illustrato come gestire questo caso. Uno dei membri di union ha un membro che richiede questo trattamento speciale:

```cpp
// for MyVariant
#include <crtdbg.h>
#include <new>
#include <utility>

// for sample objects and output
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct A
{
    A() = default;
    A(int i, const string& str) : num(i), name(str) {}

    int num;
    string name;
    //...
};

struct B
{
    B() = default;
    B(int i, const string& str) : num(i), name(str) {}

    int num;
    string name;
    vector<int> vec;
    // ...
};

enum class Kind { None, A, B, Integer };

#pragma warning (push)
#pragma warning(disable:4624)
class MyVariant
{
public:
    MyVariant()
        : kind_(Kind::None)
    {
    }

    MyVariant(Kind kind)
        : kind_(kind)
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            new (&a_) A();
            break;
        case Kind::B:
            new (&b_) B();
            break;
        case Kind::Integer:
            i_ = 0;
            break;
        default:
            _ASSERT(false);
            break;
        }
    }

    ~MyVariant()
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            a_.~A();
            break;
        case Kind::B:
            b_.~B();
            break;
        case Kind::Integer:
            break;
        default:
            _ASSERT(false);
            break;
        }
        kind_ = Kind::None;
    }

    MyVariant(const MyVariant& other)
        : kind_(other.kind_)
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            new (&a_) A(other.a_);
            break;
        case Kind::B:
            new (&b_) B(other.b_);
            break;
        case Kind::Integer:
            i_ = other.i_;
            break;
        default:
            _ASSERT(false);
            break;
        }
    }

    MyVariant(MyVariant&& other)
        : kind_(other.kind_)
    {
        switch (kind_)
        {
        case Kind::None:
            break;
        case Kind::A:
            new (&a_) A(move(other.a_));
            break;
        case Kind::B:
            new (&b_) B(move(other.b_));
            break;
        case Kind::Integer:
            i_ = other.i_;
            break;
        default:
            _ASSERT(false);
            break;
        }
        other.kind_ = Kind::None;
    }

    MyVariant& operator=(const MyVariant& other)
    {
        if (&other != this)
        {
            switch (other.kind_)
            {
            case Kind::None:
                this->~MyVariant();
                break;
            case Kind::A:
                *this = other.a_;
                break;
            case Kind::B:
                *this = other.b_;
                break;
            case Kind::Integer:
                *this = other.i_;
                break;
            default:
                _ASSERT(false);
                break;
            }
        }
        return *this;
    }

    MyVariant& operator=(MyVariant&& other)
    {
        _ASSERT(this != &other);
        switch (other.kind_)
        {
        case Kind::None:
            this->~MyVariant();
            break;
        case Kind::A:
            *this = move(other.a_);
            break;
        case Kind::B:
            *this = move(other.b_);
            break;
        case Kind::Integer:
            *this = other.i_;
            break;
        default:
            _ASSERT(false);
            break;
        }
        other.kind_ = Kind::None;
        return *this;
    }

    MyVariant(const A& a)
        : kind_(Kind::A), a_(a)
    {
    }

    MyVariant(A&& a)
        : kind_(Kind::A), a_(move(a))
    {
    }

    MyVariant& operator=(const A& a)
    {
        if (kind_ != Kind::A)
        {
            this->~MyVariant();
            new (this) MyVariant(a);
        }
        else
        {
            a_ = a;
        }
        return *this;
    }

    MyVariant& operator=(A&& a)
    {
        if (kind_ != Kind::A)
        {
            this->~MyVariant();
            new (this) MyVariant(move(a));
        }
        else
        {
            a_ = move(a);
        }
        return *this;
    }

    MyVariant(const B& b)
        : kind_(Kind::B), b_(b)
    {
    }

    MyVariant(B&& b)
        : kind_(Kind::B), b_(move(b))
    {
    }

    MyVariant& operator=(const B& b)
    {
        if (kind_ != Kind::B)
        {
            this->~MyVariant();
            new (this) MyVariant(b);
        }
        else
        {
            b_ = b;
        }
        return *this;
    }

    MyVariant& operator=(B&& b)
    {
        if (kind_ != Kind::B)
        {
            this->~MyVariant();
            new (this) MyVariant(move(b));
        }
        else
        {
            b_ = move(b);
        }
        return *this;
    }

    MyVariant(int i)
        : kind_(Kind::Integer), i_(i)
    {
    }

    MyVariant& operator=(int i)
    {
        if (kind_ != Kind::Integer)
        {
            this->~MyVariant();
            new (this) MyVariant(i);
        }
        else
        {
            i_ = i;
        }
        return *this;
    }

    Kind GetKind() const
    {
        return kind_;
    }

    A& GetA()
    {
        _ASSERT(kind_ == Kind::A);
        return a_;
    }

    const A& GetA() const
    {
        _ASSERT(kind_ == Kind::A);
        return a_;
    }

    B& GetB()
    {
        _ASSERT(kind_ == Kind::B);
        return b_;
    }

    const B& GetB() const
    {
        _ASSERT(kind_ == Kind::B);
        return b_;
    }

    int& GetInteger()
    {
        _ASSERT(kind_ == Kind::Integer);
        return i_;
    }

    const int& GetInteger() const
    {
        _ASSERT(kind_ == Kind::Integer);
        return i_;
    }

private:
    Kind kind_;
    union
    {
        A a_;
        B b_;
        int i_;
    };
};
#pragma warning (pop)

int main()
{
    A a(1, "Hello from A");
    B b(2, "Hello from B");

    MyVariant mv_1 = a;

    cout << "mv_1 = a: " << mv_1.GetA().name << endl;
    mv_1 = b;
    cout << "mv_1 = b: " << mv_1.GetB().name << endl;
    mv_1 = A(3, "hello again from A");
    cout << R"aaa(mv_1 = A(3, "hello again from A"): )aaa" << mv_1.GetA().name << endl;
    mv_1 = 42;
    cout << "mv_1 = 42: " << mv_1.GetInteger() << endl;

    b.vec = { 10,20,30,40,50 };

    mv_1 = move(b);
    cout << "After move, mv_1 = b: vec.size = " << mv_1.GetB().vec.size() << endl;

    cout << endl << "Press a letter" << endl;
    char c;
    cin >> c;
}
```

Un oggetto union non può archiviare un riferimento. Un oggetto union non supporta inoltre l'ereditarietà. Ciò significa che non è possibile usare union come base class o ereditare da un'altra class o avere funzioni virtuali.

## <a name="initialize-a-no-locunion"></a>Inizializzare un union

È possibile dichiarare e inizializzare un oggetto union nella stessa istruzione assegnando un'espressione racchiusa tra parentesi graffe. L'espressione viene valutata e assegnata al primo campo dell'oggetto union .

```cpp
#include <iostream>
using namespace std;

union NumericType
{
    short       iValue;
    long        lValue;
    double      dValue;
};

int main()
{
    union NumericType Values = { 10 };   // iValue = 10
    cout << Values.iValue << endl;
    Values.dValue = 3.1416;
    cout << Values.dValue << endl;
}
/* Output:
10
3.141600
*/
```

`NumericType` union Viene disposta in memoria (concettualmente), come illustrato nella figura seguente.

![Archiviazione dei dati in un tipo numerico::: NO-LOC (Union):::](../cpp/media/vc38ul1.png "Archiviazione dei dati in un NumericType::: NO-LOC (Union):::") <br/>
Archiviazione dei dati in un `NumericType`union

## <a name="anonymous-no-locunion"></a><a name="anonymous_unions"></a> Anonimo union

Un oggetto anonimo union viene dichiarato senza un oggetto *`class-name`* o *`declarator-list`* .

> **`union  {`**  *`member-list`*  **`}`**

I nomi dichiarati in un oggetto anonimo union vengono usati direttamente, come le variabili non membro. Implica che i nomi dichiarati in un anonimo union devono essere univoci nell'ambito circostante.

Un anonimo union è soggetto a queste restrizioni aggiuntive:

- Se dichiarata nell'ambito del file o dello spazio dei nomi, deve anche essere dichiarata come **`static`** .

- Può contenere solo **`public`** membri. **`private`** **`protected`** i membri e in un anonimo union generano errori.

- Non può disporre di funzioni membro.

## <a name="see-also"></a>Vedi anche

[Classi e struct](../cpp/classes-and-structs-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[`class`](../cpp/class-cpp.md)<br/>
[`struct`](../cpp/struct-cpp.md)
