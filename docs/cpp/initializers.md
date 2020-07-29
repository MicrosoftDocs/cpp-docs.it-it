---
title: Inizializzatori
ms.date: 07/29/2019
description: Come inizializzare classi, struct, matrici e tipi fondamentali in C++.
helpviewer_keywords:
- arrays [C++], array-element initializers
- aggregate initializers [C++]
ms.assetid: ce301ed8-aa1c-47b2-bb39-9f0541b4af85
ms.openlocfilehash: 98b0c07db8eb10aa47830c9926c6ebcdc3f12dcb
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227439"
---
# <a name="initializers"></a>Inizializzatori

Un inizializzatore specifica il valore iniziale di una variabile. È possibile inizializzare le variabili nei contesti seguenti:

- Nella definizione di una variabile:

    ```cpp
    int i = 3;
    Point p1{ 1, 2 };
    ```

- Come uno dei parametri di una funzione:

    ```cpp
    set_point(Point{ 5, 6 });
    ```

- Come valore restituito di una funzione:

    ```cpp
    Point get_new_point(int x, int y) { return { x, y }; }
    Point get_new_point(int x, int y) { return Point{ x, y }; }
    ```

Gli inizializzatori possono assumere le forme seguenti:

- Un'espressione (o un elenco di espressioni separato da virgole) tra parentesi:

    ```cpp
    Point p1(1, 2);
    ```

- Un segno di uguale seguito da un'espressione:

    ```cpp
    string s = "hello";
    ```

- Un elenco di inizializzatori tra parentesi graffe. L'elenco può essere vuoto o può essere costituito da un set di elenchi, come illustrato nell'esempio seguente:

    ```cpp
    struct Point{
        int x;
        int y;
    };
    class PointConsumer{
    public:
        void set_point(Point p){};
        void set_points(initializer_list<Point> my_list){};
    };
    int main() {
        PointConsumer pc{};
        pc.set_point({});
        pc.set_point({ 3, 4 });
        pc.set_points({ { 3, 4 }, { 5, 6 } });
    }
    ```

## <a name="kinds-of-initialization"></a>Tipi di inizializzazione

Sono disponibili diversi tipi di inizializzazione, che possono verificarsi in diversi momenti dell'esecuzione del programma. Tipi diversi di inizializzazione non si escludono reciprocamente, ad esempio l'inizializzazione elenco può attivare l'inizializzazione valore e in altre circostanze attivare l'inizializzazione aggregata.

### <a name="zero-initialization"></a>Inizializzazione zero

L'inizializzazione zero è l'impostazione di una variabile su un valore zero convertito implicitamente nel tipo:

- Le variabili numeriche vengono inizializzate su 0 o 0,0 oppure 0,0000000000 e così via.

- Le variabili char vengono inizializzate in `'\0'` .

- I puntatori vengono inizializzati in **`nullptr`** .

- I membri di matrici, classi [Pod](../standard-library/is-pod-class.md) , struct e unioni vengono inizializzati su un valore pari a zero.

L'inizializzazione zero viene eseguita in momenti diversi:

- All'avvio del programma, per tutte le variabili denominate aventi una durata statica. Queste variabili possono essere reinizializzate in un momento successivo.

- Durante l'inizializzazione valore, per i tipi scalari e tipi di classe POD inizializzati tramite parentesi graffe vuote.

- Per le matrici che contengono un solo subset dei relativi membri inizializzati.

Di seguito sono riportati alcuni esempi di inizializzazione zero:

```cpp
struct my_struct{
    int i;
    char c;
};

int i0;              // zero-initialized to 0
int main() {
    static float f1;  // zero-initialized to 0.000000000
    double d{};     // zero-initialized to 0.00000000000000000
    int* ptr{};     // initialized to nullptr
    char s_array[3]{'a', 'b'};  // the third char is initialized to '\0'
    int int_array[5] = { 8, 9, 10 };  // the fourth and fifth ints are initialized to 0
    my_struct a_struct{};   // i = 0, c = '\0'
}
```

### <a name="default-initialization"></a><a name="default_initialization"></a>Inizializzazione predefinita

L'inizializzazione predefinita per classi, struct e unioni è l'inizializzazione con un costruttore predefinito. Il costruttore predefinito può essere chiamato senza un'espressione di inizializzazione o con la **`new`** parola chiave:

```cpp
MyClass mc1;
MyClass* mc3 = new MyClass;
```

Se la classe, lo struct o l'unione non dispone di un costruttore predefinito, viene generato un errore.

Le variabili scalari vengono inizializzate in base alla modalità predefinita quando vengono definite senza un'espressione di inizializzazione. Presentano valori indeterminati.

```cpp
int i1;
float f;
char c;
```

Le matrici vengono inizializzate in base alla modalità predefinita quando vengono definite senza un'espressione di inizializzazione. Quando una matrice viene inizializzata secondo la modalità predefinita, i relativi membri vengono inizializzati secondo la modalità predefinita e presentano valori indeterminati, come illustrato nell'esempio seguente:

```cpp
int int_arr[3];
```

Se i membri della matrice non dispongono di un costruttore predefinito, viene generato un errore.

#### <a name="default-initialization-of-constant-variables"></a>Inizializzazione predefinita di variabili costanti

Le variabili costanti devono essere dichiarate con un inizializzatore. Se sono tipi scalari, viene generato un errore del compilatore, se sono tipi di classe con un costruttore predefinito viene generato un avviso:

```cpp
class MyClass{};
int main() {
    //const int i2;   // compiler error C2734: const object must be initialized if not extern
    //const char c2;  // same error
    const MyClass mc1; // compiler error C4269: 'const automatic data initialized with compiler generated default constructor produces unreliable results
}
```

#### <a name="default-initialization-of-static-variables"></a>Inizializzazione predefinita di variabili statiche

Le variabili statiche dichiarate senza un inizializzatore vengono inizializzate su 0 (convertito implicitamente nel tipo):

```cpp
class MyClass {
private:
    int m_int;
    char m_char;
};

int main() {
    static int int1;       // 0
    static char char1;     // '\0'
    static bool bool1;   // false
    static MyClass mc1;     // {0, '\0'}
}
```

Per ulteriori informazioni sull'inizializzazione di oggetti statici globali, vedere la [funzione principale e gli argomenti della riga di comando](main-function-command-line-args.md).

### <a name="value-initialization"></a>Inizializzazione valore

L'inizializzazione valore si verifica nei casi seguenti:

- Un valore denominato viene inizializzato tramite l'inizializzazione con parentesi graffe vuote.

- Un oggetto temporaneo anonimo viene inizializzato con parentesi o parentesi graffe vuote.

- un oggetto viene inizializzato con la **`new`** parola chiave più le parentesi o le parentesi graffe vuote

L'inizializzazione valore prevede i comportamenti seguenti:

- Per le classi con almeno un costruttore pubblico, viene chiamato il costruttore predefinito.

- Per le classi non di unione che non hanno costruttori dichiarati, l'oggetto viene sottoposto a inizializzazione zero e viene chiamato il costruttore predefinito.

- Per le matrici, ogni elemento viene sottoposto a inizializzazione valore.

- In tutti gli altri casi, la variabile viene sottoposta a inizializzazione zero.

```cpp
class BaseClass {
private:
    int m_int;
};

int main() {
    BaseClass bc{};     // class is initialized
    BaseClass*  bc2 = new BaseClass();  // class is initialized, m_int value is 0
    int int_arr[3]{};  // value of all members is 0
    int a{};     // value of a is 0
    double b{};  // value of b is 0.00000000000000000
}
```

### <a name="copy-initialization"></a>Inizializzazione per copia

L'inizializzazione per copia è l'inizializzazione di un oggetto usando un oggetto diverso. Si verifica nei casi seguenti:

- Una variabile viene inizializzata usando un segno di uguale.

- Un argomento è passato a una funzione.

- Un oggetto viene restituito da una funzione.

- Un'eccezione viene generata o intercettata.

- Un membro dati non statico viene inizializzato con un segno di uguale.

- I membri di classi, struct e unioni vengono inizializzati tramite l'inizializzazione per copia durante l'inizializzazione aggregata. Per esempi, vedere [inizializzazione aggregata](#agginit) .

Il codice seguente mostra alcuni esempi di inizializzazione per copia:

```cpp
#include <iostream>
using namespace std;

class MyClass{
public:
    MyClass(int myInt) {}
    void set_int(int myInt) { m_int = myInt; }
    int get_int() const { return m_int; }
private:
    int m_int = 7; // copy initialization of m_int

};
class MyException : public exception{};
int main() {
    int i = 5;              // copy initialization of i
    MyClass mc1{ i };
    MyClass mc2 = mc1;      // copy initialization of mc2 from mc1
    MyClass mc1.set_int(i);    // copy initialization of parameter from i
    int i2 = mc2.get_int(); // copy initialization of i2 from return value of get_int()

    try{
        throw MyException();
    }
    catch (MyException ex){ // copy initialization of ex
        cout << ex.what();
    }
}
```

L'inizializzazione per copia non può richiamare costruttori espliciti.

```cpp
vector<int> v = 10; // the constructor is explicit; compiler error C2440: cannot convert from 'int' to 'std::vector<int,std::allocator<_Ty>>'
regex r = "a.*b"; // the constructor is explicit; same error
shared_ptr<int> sp = new int(1729); // the constructor is explicit; same error
```

In alcuni casi, se il costruttore di copia della classe viene eliminato o è inaccessibile, viene generato un errore del compilatore.

### <a name="direct-initialization"></a>Inizializzazione diretta

L'inizializzazione diretta usa parentesi o parentesi graffe non vuote. A differenza dell'inizializzazione per copia, può richiamare costruttori espliciti. Si verifica nei casi seguenti:

- Una variabile viene inizializzata con parentesi o parentesi graffe non vuote.

- una variabile viene inizializzata con la **`new`** parola chiave più parentesi o parentesi graffe non vuote

- una variabile viene inizializzata con**`static_cast`**

- In un costruttore le classi base e i membri non statici vengono inizializzati tramite un elenco di inizializzatori.

- Nella copia di una variabile acquisita in un'espressione lambda.

Il codice seguente illustra alcuni esempi di inizializzazione diretta:

```cpp
class BaseClass{
public:
    BaseClass(int n) :m_int(n){} // m_int is direct initialized
private:
    int m_int;
};

class DerivedClass : public BaseClass{
public:
    // BaseClass and m_char are direct initialized
    DerivedClass(int n, char c) : BaseClass(n), m_char(c) {}
private:
    char m_char;
};
int main(){
    BaseClass bc1(5);
    DerivedClass dc1{ 1, 'c' };
    BaseClass* bc2 = new BaseClass(7);
    BaseClass bc3 = static_cast<BaseClass>(dc1);

    int a = 1;
    function<int()> func = [a](){  return a + 1; }; // a is direct initialized
    int n = func();
}
```

### <a name="list-initialization"></a>Inizializzazione dell'elenco

L'inizializzazione elenco si verifica quando una variabile viene inizializzata tramite un elenco di inizializzatori racchiusi tra parentesi graffe. Gli elenchi di inizializzatori tra parentesi graffe possono essere usati nei casi seguenti:

- Una variabile viene inizializzata.

- una classe viene inizializzata con la **`new`** parola chiave

- Un oggetto viene restituito da una funzione.

- Un argomento viene passato a una funzione.

- Uno degli argomenti in un'inizializzazione diretta.

- In un inizializzatore di un membro dati non statico.

- In un elenco di inizializzatori del costruttore.

Il codice seguente illustra alcuni esempi di inizializzazione elenco:

```cpp
class MyClass {
public:
    MyClass(int myInt, char myChar) {}
private:
    int m_int[]{ 3 };
    char m_char;
};
class MyClassConsumer{
public:
    void set_class(MyClass c) {}
    MyClass get_class() { return MyClass{ 0, '\0' }; }
};
struct MyStruct{
    int my_int;
    char my_char;
    MyClass my_class;
};
int main() {
    MyClass mc1{ 1, 'a' };
    MyClass* mc2 = new MyClass{ 2, 'b' };
    MyClass mc3 = { 3, 'c' };

    MyClassConsumer mcc;
    mcc.set_class(MyClass{ 3, 'c' });
    mcc.set_class({ 4, 'd' });

    MyStruct ms1{ 1, 'a', { 2, 'b' } };
}
```

### <a name="aggregate-initialization"></a><a name="agginit"></a>Inizializzazione aggregata

L'inizializzazione aggregata è un tipo di inizializzazione elenco per matrici o tipi di classe (spesso struct o unioni) che non dispongono di:

- Membri privati o protetti.

- Costruttori forniti dall'utente, ad eccezione dei costruttori esplicitamente impostati come predefiniti o eliminati.

- Classi base.

- Funzioni membro virtuali.

> [!NOTE]
> <!--conformance note-->In Visual Studio 2015 e versioni precedenti, un'aggregazione non può avere inizializzatori di parentesi graffe o uguali per i membri non statici. Questa restrizione è stata rimossa nello standard C++ 14 ed è stata implementata in Visual Studio 2017.

Gli inizializzatori di aggregazione sono costituiti da un elenco di inizializzazione tra parentesi graffe, con o senza un segno di uguale, come illustrato nell'esempio seguente:

```cpp
#include <iostream>
using namespace std;

struct MyAggregate{
    int myInt;
    char myChar;
};

struct MyAggregate2{
    int myInt;
    char myChar = 'Z'; // member-initializer OK in C++14
};

int main() {
    MyAggregate agg1{ 1, 'c' };
    MyAggregate2 agg2{2};
    cout << "agg1: " << agg1.myChar << ": " << agg1.myInt << endl;
    cout << "agg2: " << agg2.myChar << ": " << agg2.myInt << endl;

    int myArr1[]{ 1, 2, 3, 4 };
    int myArr2[3] = { 5, 6, 7 };
    int myArr3[5] = { 8, 9, 10 };

    cout << "myArr1: ";
    for (int i : myArr1){
        cout << i << " ";
    }
    cout << endl;

    cout << "myArr3: ";
    for (auto const &i : myArr3) {
        cout << i << " ";
    }
    cout << endl;
}
```

Dovrebbe venire visualizzato l'output seguente.

```Output
agg1: c: 1
agg2: Z: 2
myArr1: 1 2 3 4
myArr3: 8 9 10 0 0
```

> [!IMPORTANT]
> I membri della matrice dichiarati ma non inizializzati in modo esplicito durante l'inizializzazione aggregata vengono inizializzati a zero, come `myArr3` descritto in precedenza.

#### <a name="initializing-unions-and-structs"></a>Inizializzazione di unioni e struct

Se un'unione non ha alcun costruttore, è possibile inizializzarla con un singolo valore (o un'altra istanza di un'unione). Il valore viene usato per inizializzare il primo campo non statico. Questo non accade con l'inizializzazione struct in quanto il primo valore dell'inizializzatore viene utilizzato per inizializzare il primo campo, il secondo per inizializzare il secondo campo e così via... Confrontare l'inizializzazione di unioni e struct nell'esempio seguente.

```cpp
struct MyStruct {
    int myInt;
    char myChar;
};
union MyUnion {
    int my_int;
    char my_char;
    bool my_bool;
    MyStruct my_struct;
};

int main() {
    MyUnion mu1{ 'a' };  // my_int = 97, my_char = 'a', my_bool = true, {myInt = 97, myChar = '\0'}
    MyUnion mu2{ 1 };   // my_int = 1, my_char = 'x1', my_bool = true, {myInt = 1, myChar = '\0'}
    MyUnion mu3{};      // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}
    MyUnion mu4 = mu3;  // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}
    //MyUnion mu5{ 1, 'a', true };  // compiler error: C2078: too many initializers
    //MyUnion mu6 = 'a';            // compiler error: C2440: cannot convert from 'char' to 'MyUnion'
    //MyUnion mu7 = 1;              // compiler error: C2440: cannot convert from 'int' to 'MyUnion'

    MyStruct ms1{ 'a' };            // myInt = 97, myChar = '\0'
    MyStruct ms2{ 1 };              // myInt = 1, myChar = '\0'
    MyStruct ms3{};                 // myInt = 0, myChar = '\0'
    MyStruct ms4{1, 'a'};           // myInt = 1, myChar = 'a'
    MyStruct ms5 = { 2, 'b' };      // myInt = 2, myChar = 'b'
}
```

#### <a name="initializing-aggregates-that-contain-aggregates"></a>Inizializzazione di aggregati che contengono aggregati

I tipi di aggregati possono contenere altri tipi di aggregati, ad esempio matrici di matrici, matrici di struct e così via. Questi tipi vengono inizializzati usando set annidati di parentesi graffe, ad esempio:

```cpp
struct MyStruct {
    int myInt;
    char myChar;
};
int main() {
    int intArr1[2][2]{{ 1, 2 }, { 3, 4 }};
    int intArr3[2][2] = {1, 2, 3, 4};
    MyStruct structArr[]{ { 1, 'a' }, { 2, 'b' }, {3, 'c'} };
}
```

### <a name="reference-initialization"></a>Inizializzazione di riferimento

Variabili di tipo riferimento devono essere inizializzate con un oggetto del tipo da cui il tipo riferimento viene derivato o con un oggetto di un tipo che possa essere convertito nel tipo da cui il tipo riferimento viene derivato. Ad esempio:

```cpp
// initializing_references.cpp
int iVar;
long lVar;
int main()
{
    long& LongRef1 = lVar;        // No conversion required.
    long& LongRef2 = iVar;        // Error C2440
    const long& LongRef3 = iVar;  // OK
    LongRef1 = 23L;               // Change lVar through a reference.
    LongRef2 = 11L;               // Change iVar through a reference.
    LongRef3 = 11L;               // Error C3892
}
```

L'unico modo per inizializzare un riferimento a un oggetto temporaneo è inizializzare un oggetto temporaneo costante. Dopo l'inizializzazione, una variabile di tipo riferimento punta sempre allo stesso oggetto; non può essere modificata per puntare a un altro oggetto.

Sebbene la sintassi possa risultare analoga, l'inizializzazione di variabili di tipo riferimento e l'assegnazione alle variabili di tipo riferimento sono semanticamente diverse. Nell'esempio precedente, le assegnazioni che modificano `iVar` e `lVar` sono simili alle inizializzazioni, ma hanno effetti diversi. L'inizializzazione specifica l'oggetto a cui la variabile di tipo riferimento punta; l'assegnazione assegna all'oggetto di riferimento tramite il riferimento.

Poiché sia il passare un argomento di tipo riferimento a una funzione che la restituzione di un valore di tipo riferimento da una funzione sono inizializzazioni, gli argomenti formali di una funzione vengono inizializzati correttamente, così come i riferimenti restituiti.

Variabili di tipo riferimento possono essere dichiarate senza inizializzatori solo in quanto segue:

- Dichiarazioni di funzione (prototipi). Ad esempio:

    ```cpp
    int func( int& );
    ```

- Dichiarazioni del tipo restituito dalla funzione. Ad esempio:

    ```cpp
    int& func( int& );
    ```

- Dichiarazione di un membro della classe di tipo riferimento. Ad esempio:

    ```cpp
    class c {public:   int& i;};
    ```

- Dichiarazione di una variabile specificata in modo esplicito come **`extern`** . Ad esempio:

    ```cpp
    extern int& iVal;
    ```

Nell'inizializzare una variabile di tipo riferimento, il compilatore utilizza il grafico di decisione illustrato nella figura che segue per scegliere tra la creazione di un riferimento a un oggetto o la creazione di un oggetto temporaneo a cui il riferimento punta.

![Grafico decisionale per l'inizializzazione dei tipi di riferimento](../cpp/media/vc38s71.gif "Grafico decisionale per l'inizializzazione dei tipi di riferimento") <br/>
Grafico decisionale per l'inizializzazione dei tipi di riferimento

I riferimenti ai **`volatile`** tipi (dichiarati come **`volatile`** *typename* <strong>&</strong> *identificatori*typeName) possono essere inizializzati con **`volatile`** oggetti dello stesso tipo o con oggetti che non sono stati dichiarati come **`volatile`** . Non possono, tuttavia, essere inizializzati con **`const`** oggetti di quel tipo. Analogamente, i riferimenti ai **`const`** tipi (dichiarati come **`const`** *typename* <strong>&</strong> *identificatore*typeName) possono essere inizializzati con **`const`** oggetti dello stesso tipo (o qualsiasi elemento che abbia una conversione in quel tipo o con oggetti che non sono stati dichiarati come **`const`** ). Non possono, tuttavia, essere inizializzati con **`volatile`** oggetti di quel tipo.

I riferimenti che non sono qualificati con la **`const`** **`volatile`** parola chiave o possono essere inizializzati solo con oggetti dichiarati come **`const`** né né **`volatile`** .

### <a name="initialization-of-external-variables"></a>Inizializzazione di variabili esterne

Le dichiarazioni di variabili automatiche, statiche ed esterne possono contenere inizializzatori. Tuttavia, le dichiarazioni di variabili esterne possono contenere inizializzatori solo se le variabili non sono dichiarate come **`extern`** .
