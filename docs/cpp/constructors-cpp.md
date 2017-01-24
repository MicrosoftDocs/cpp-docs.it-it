---
title: "Costruttori (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "costruttori [C++]"
  - "costruttori di istanza"
  - "oggetti [C++], creazione"
ms.assetid: 3e9f7211-313a-4a92-9584-337452e061a9
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttori (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un costruttore è un tipo di funzione membro che inizializza un'istanza della relativa classe.  Ha nome uguale a quello della classe e non restituisce alcun valore.  Un costruttore può avere parametri di qualsiasi tipo e una classe può avere qualsiasi numero di costruttori in overload.  I costruttori possono avere qualsiasi tipo di accessibilità, ovvero possono essere pubblici, protetti o privati.  Se non si definisce alcun costruttore, il compilatore genererà un costruttore predefinito che non accetta parametri. È possibile eseguire l'override di questo comportamento dichiarando un costruttore predefinito come eliminato.  
  
## Contenuto dell'argomento  
  
-   [Ordine di costruzione](#order_of_construction)  
  
-   [Elenchi dei membri](../cpp/constructors-cpp.md#member_lists)  
  
-   [Costruttori espliciti](../cpp/constructors-cpp.md#explicit_constructors)  
  
-   [Costruttori predefiniti](../cpp/constructors-cpp.md#default_constructors)  
  
-   [Copiare e spostare i costruttori](../cpp/constructors-cpp.md#copy_and_move_constructors)  
  
-   [Costruttori eliminati e impostati in modo esplicito come predefiniti](../cpp/constructors-cpp.md#explicitly_defaulted_and_deleted_constructors)  
  
-   [Costruttori nelle classi derivate](../cpp/constructors-cpp.md#constructors_in_derived_classes)  
  
-   [Costruttori di classi con ereditarietà multipla](../cpp/constructors-cpp.md#constructors_for_classes_that_have_multiple_inheritance)  
  
-   [Funzioni virtuali nei costruttori](../cpp/constructors-cpp.md#virtual_functions_in_constructors)  
  
-   [Costruttori e classi composite](../cpp/constructors-cpp.md#constructors_in_composite_classes)  
  
-   [Delega dei costruttori](../cpp/constructors-cpp.md#delegating_constructors)  
  
-   [Costruttori ereditanti (C++11)](../cpp/constructors-cpp.md#inheriting_constructors)  
  
-   [Regole per la dichiarazione di costruttori](../cpp/constructors-cpp.md#rules_for_declaring_constructors)  
  
-   Costruttori predefinito e di copia  
  
-   [Richiamare i costruttori in modo esplicito](../cpp/constructors-cpp.md#explicitly_invoking_constructors)  
  
##  <a name="order_of_construction"></a> Ordine di costruzione  
 Di seguito è indicato l'ordine in base al quale un costruttore esegue le attività.  
  
1.  Chiama i costruttori delle classi base e dei membri nell'ordine di dichiarazione.  
  
2.  Se la classe è derivata dalle classi base virtuali, inizializza i puntatori di base virtuali dell'oggetto.  
  
3.  Se la classe dispone di funzioni virtuali o le eredita, inizializza i puntatori a funzioni virtuali dell'oggetto.  I puntatori a funzioni virtuali puntano alla tabella delle funzioni virtuali della classe per consentire la corretta associazione delle chiamate di funzioni virtuali al codice.  
  
4.  Esegue il codice nel corpo della funzione.  
  
 L'esempio seguente illustra l'ordine in cui vengono chiamati i costruttori di classi base e di membri in un costruttore per una classe derivata.  Prima di tutto, viene chiamato il costruttore base, quindi i membri della classe base vengono inizializzati nell'ordine in cui vengono visualizzati nella dichiarazione di classe e infine viene chiamato il costruttore derivato.  
  
```cpp  
#include <iostream>  
using namespace std;  
  
class Contained1 {  
public:  
    Contained1() {  
        cout << "Contained1 constructor." << endl;  
    }  
};  
  
class Contained2 {  
public:  
    Contained2() {  
        cout << "Contained2 constructor." << endl;  
    }  
};  
  
class Contained3 {  
public:  
    Contained3() {  
        cout << "Contained3 constructor." << endl;  
    }  
};  
  
class BaseContainer {  
public:  
    BaseContainer() {  
        cout << "BaseContainer constructor." << endl;  
    }  
private:  
    Contained1 c1;  
    Contained2 c2;  
};  
  
class DerivedContainer : public BaseContainer {  
public:  
    DerivedContainer() : BaseContainer() {  
        cout << "DerivedContainer constructor." << endl;  
    }  
private:  
    Contained3 c3;  
};  
  
int main() {  
    DerivedContainer dc;  
    int x = 3;  
}  
  
```  
  
 Di seguito viene riportato l'output:  
  
```  
Contained1 constructor.  
Contained2 constructor.  
BaseContainer constructor.  
Contained3 constructor.  
DerivedContainer constructor.  
```  
  
 Se un costruttore genera un'eccezione, l'ordine di eliminazione permanente è l'inverso dell'ordine di costruzione:  
  
1.  Il codice nel corpo della funzione del costruttore viene rimosso.  
  
2.  Gli oggetti classe base e membro vengono eliminati in modo permanente nell'ordine inverso rispetto alla dichiarazione.  
  
3.  Se il costruttore non è delegante, tutti i membri e gli oggetti di classe base completamente costruiti vengono eliminati in modo permanente.  Tuttavia, poiché l'oggetto stesso non viene costruito completamente, il distruttore non viene eseguito.  
  
##  <a name="member_lists"></a> Elenchi dei membri  
 Inizializzare i membri delle classi dagli argomenti del costruttore usando un elenco di inizializzatori di membro.  Questo metodo usa l'*inizializzazione diretta*, che risulta più efficiente dell'uso di operatori di assegnazione nel corpo del costruttore.  
  
```cpp  
class Box {  
public:  
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height) // member init list  
    {}  
    int Volume() {return m_width * m_length * m_height; }  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
  
};  
  
```  
  
 Creare un oggetto Box:  
  
```  
Box b(42, 21, 12);  
cout << "The volume is " << b.Volume();  
```  
  
##  <a name="explicit_constructors"></a> Costruttori espliciti  
 Se una classe ha un costruttore con un singolo parametro o se tutti i parametri tranne uno hanno un valore predefinito, sarà possibile convertire implicitamente il tipo di parametro nel tipo di classe.  Ad esempio, se la classe `Box` ha un costruttore analogo al seguente:  
  
```  
Box(int size): m_width(size), m_length(size), m_height(size){}  
```  
  
 È possibile inizializzare un oggetto Box in modo analogo al seguente:  
  
```  
Box b = 42;  
```  
  
 Oppure passare un valore int a una funzione che accetta Box:  
  
```  
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
  
 Queste conversioni possono risultare utili in alcuni casi, ma provocano più spesso errori poco evidenti ma gravi nel codice.  Come regola generale, è consigliabile usare la parola chiave `explicit` su un costruttore e su operatori definiti dall'utente per evitare questo tipo di conversione implicita del tipo:  
  
```  
  
explicit Box(int size): m_width(size), m_length(size), m_height(size){}  
```  
  
 Quando il costruttore è esplicito, questa riga provoca un errore del compilatore: `ShippingOrder so(42, 10.8);`.  Per altre informazioni, vedere [Conversioni](../cpp/user-defined-type-conversions-cpp.md).  
  
##  <a name="default_constructors"></a> Costruttori predefiniti  
 I *costruttori predefiniti* non hanno parametri e seguono regole leggermente diverse:  
  
 I costruttori predefiniti sono una delle *funzioni membro speciali*. Se non viene dichiarato alcun costruttore in una classe, il compilatore fornisce un costruttore predefinito:  
  
```cpp  
class Box {  
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height){}  
};  
  
int main(){  
  
    Box box1{}; // call compiler-generated default ctor  
    Box box2;   // call compiler-generated default ctor  
}  
```  
  
 Quando si chiama un costruttore predefinito e si tenta di usare le parentesi, viene generato un avviso:  
  
```cpp  
class myclass{};  
int main(){  
myclass mc();     // warning C4930: prototyped function not called (was a variable definition intended?)  
}  
```  
  
 Di seguito è riportato un esempio del problema 'Most Vexing Parse'.  Poiché l'espressione di esempio può essere interpretata come dichiarazione di una funzione o come chiamata di un costruttore predefinito e dal momento che i parser C\+\+ favoriscono le dichiarazioni rispetto ad altri elementi, tale espressione viene considerata come una dichiarazione di funzione.  Per altre informazioni, vedere [Most Vexing Parse](http://en.wikipedia.org/wiki/Most_vexing_parse).  
  
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
    Box box4;     // compiler error C2512: no appropriate default constructor available  
}  
  
```  
  
 Se la classe non dispone di un costruttore predefinito, non è possibile costruire una matrice di oggetti di tale classe usando solo la sintassi tra parentesi quadre.  Ad esempio, nel caso del blocco di codice precedente, non è possibile dichiarare una matrice di Boxes nel modo seguente:  
  
```cpp  
Box boxes[3];    // compiler error C2512: no appropriate default constructor available  
  
```  
  
 È tuttavia possibile usare un set di elenchi di inizializzatori per inizializzare una matrice di caselle:  
  
```cpp  
Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };  
```  
  
##  <a name="copy_and_move_constructors"></a> Copiare e spostare i costruttori  
 Un *costruttore di copia* è una funzione membro speciale che accetta come input un riferimento a un oggetto dello stesso tipo e ne crea una copia.  Per altre informazioni, vedere [Costruttori di copia e operatori di assegnazione di copia \(C\+\+\)](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md).  Anche uno spostamento è una funzione membro speciale, che sposta la proprietà di un oggetto esistente in una nuova variabile, senza copiare i dati originali.  Per altre informazioni, vedere [Costruttori di spostamento e operatori di assegnazione di spostamento \(C\+\+\)](http://msdn.microsoft.com/it-it/1442de5f-37a5-42a1-83a6-ec9cfe0414db) e [Costruttori di spostamento e operatori di assegnazione di spostamento \(C\+\+\)](../cpp/move-constructors-and-move-assignment-operators-cpp.md).  
  
##  <a name="explicitly_defaulted_and_deleted_constructors"></a> Costruttori eliminati e impostati in modo esplicito come predefiniti  
 È possibile impostare in modo esplicito come predefiniti i costruttori di copia, i costruttori predefiniti, i costruttori di spostamento, gli operatori di assegnazione di copia, gli operatori di assegnazione di spostamento e i distruttori.  È possibile eliminare in modo esplicito tutte le funzioni membro speciali.  Per altre informazioni, vedere [Funzioni impostate come predefinite ed eliminate in modo esplicito](../cpp/explicitly-defaulted-and-deleted-functions.md).  
  
##  <a name="constructors_in_derived_classes"></a> Costruttori nelle classi derivate  
 Un costruttore di classi derivate chiama sempre un costruttore di classi base, in modo da poter usare le classi base completamente costruite prima che vengano completate eventuali operazioni aggiuntive.  I costruttori di classi base vengono chiamati in ordine di derivazione, ad esempio se ClassA è derivata da ClassB, che è a sua volta derivata da ClassC, viene chiamato per primo il costruttore di ClassC, quindi il costruttore di ClassB e infine il costruttore di ClassA.  
  
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
  
### Costruttori di classi con ereditarietà multipla  
 Se una classe è derivata da più classi base, i costruttori della classe base vengono richiamati nell'ordine in cui sono elencati nella dichiarazione della classe derivata:  
  
```cpp  
#include <iostream>  
using namespace std;  
  
class BaseClass1 {  
public:  
    BaseClass1() {  
        cout << "BaseClass1 constructor." << endl;  
    }  
};  
class BaseClass2 {  
public:  
    BaseClass2() {  
        cout << "BaseClass2 constructor." << endl;  
    }  
};  
class BaseClass3{  
public:  
    BaseClass3() {  
        cout << "BaseClass3 constructor." << endl;  
    }  
};  
class DerivedClass : public BaseClass1, public BaseClass2, public BaseClass3  {  
public:  
    DerivedClass() {  
        cout << "DerivedClass constructor." << endl;  
    }  
};  
  
int main() {  
    DerivedClass dc;  
}  
  
```  
  
 È necessario prevedere il seguente output:  
  
```  
BaseClass1 constructor.  
BaseClass2 constructor.  
BaseClass3 constructor.  
DerivedClass constructor.  
```  
  
##  <a name="virtual_functions_in_constructors"></a> Funzioni virtuali nei costruttori  
 È consigliabile prestare attenzione quando si chiamano le funzioni virtuali nei costruttori.  Poiché il costruttore della classe base viene sempre richiamato prima del costruttore della classe derivata, la funzione chiamata nel costruttore base è la versione della classe base, non quella della classe derivata.  Nell'esempio seguente, la costruzione di una classe `DerivedClass` fa in modo che l'implementazione di `BaseClass` da parte della classe `print_it()` venga eseguita prima che il costruttore della classe `DerivedClass` determini l'esecuzione dell'implementazione di `DerivedClass` da parte della classe `print_it()`:  
  
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
  
```  
BaseClass print_it  
Derived Class print_it  
```  
  
##  <a name="constructors_in_composite_classes"></a> Costruttori e classi composite  
 Le classi contenenti membri di tipo classe sono note come *classi composite*.  Quando viene creato un membro di tipo classe di una classe composita, il costruttore viene chiamato prima del costruttore della classe.  Quando una classe contenuta è priva di un costruttore predefinito, è necessario usare un elenco di inizializzazione nel costruttore della classe composita.  Nell'esempio precedente relativo a `StorageBox`, se si modifica il tipo della variabile membro `m_label` in una nuova classe `Label`, è necessario chiamare il costruttore della classe base e inizializzare la variabile `m_label` nel costruttore `StorageBox`:  
  
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
  
##  <a name="delegating_constructors"></a> Delega dei costruttori  
 Un *costruttore delegante* chiama un altro costruttore nella stessa classe per eseguire parte delle operazioni di inizializzazione.  Nell'esempio seguente, la classe derivata dispone di tre costruttori: il secondo costruttore delega al primo e il terzo costruttore delega al secondo:  
  
```cpp  
#include <iostream>  
using namespace std;  
  
class ConstructorDestructor {  
public:  
    ConstructorDestructor() {  
        cout << "ConstructorDestructor default constructor." << endl;  
    }  
    ConstructorDestructor(int int1) {  
        cout << "ConstructorDestructor constructor with 1 int." << endl;  
    }  
    ConstructorDestructor(int int1, int int2) : ConstructorDestructor(int1) {  
        cout << "ConstructorDestructor constructor with 2 ints." << endl;  
  
        throw exception();  
    }  
    ConstructorDestructor(int int1, int int2, int int3) : ConstructorDestructor(int1, int2) {  
        cout << "ConstructorDestructor constructor with 3 ints." << endl;  
    }  
    ~ConstructorDestructor() {  
        cout << "ConstructorDestructor destructor." << endl;  
    }  
};  
  
int main() {  
    ConstructorDestructor dc(1, 2, 3);  
}  
  
```  
  
 Di seguito viene riportato l'output:  
  
```  
ConstructorDestructor constructor with 1 int.  
ConstructorDestructor constructor with 2 ints.  
ConstructorDestructor constructor with 3 ints.  
```  
  
 L'oggetto creato dai costruttori viene completamente inizializzato non appena viene completato un costruttore.  `DerivedContainer(int int1)` ha esito positivo, ma `DerivedContainer(int int1, int int2)` ha esito negativo e viene chiamato il distruttore.  
  
```cpp  
class ConstructorDestructor {  
public:  
    ConstructorDestructor() {  
        cout << "ConstructorDestructor default constructor." << endl;  
    }  
    ConstructorDestructor(int int1) {  
        cout << "ConstructorDestructor constructor with 1 int." << endl;  
    }  
    ConstructorDestructor(int int1, int int2) : ConstructorDestructor(int1) {  
        cout << "ConstructorDestructor constructor with 2 ints." << endl;  
        throw exception();  
    }  
    ConstructorDestructor(int int1, int int2, int int3) : ConstructorDestructor(int1, int2) {  
        cout << "ConstructorDestructor constructor with 3 ints." << endl;  
    }  
  
    ~ConstructorDestructor() {  
        cout << "ConstructorDestructor destructor." << endl;  
    }  
};  
  
int main() {  
  
    try {  
        ConstructorDestructor cd{ 1, 2, 3 };  
    }  
    catch (const exception& ex){  
    }  
}  
  
```  
  
 Output:  
  
```  
ConstructorDestructor constructor with 1 int.  
ConstructorDestructor constructor with 2 ints.  
ConstructorDestructor destructor.  
```  
  
 Per altre informazioni, vedere [Inizializzazione uniforme e costruttori deleganti](../cpp/uniform-initialization-and-delegating-constructors.md).  
  
##  <a name="inheriting_constructors"></a> Costruttori ereditanti \(C\+\+11\)  
 Una classe derivata può ereditare i costruttori da una classe base diretta usando una dichiarazione using, come illustrato nell'esempio seguente:  
  
```  
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
  
int main(int argc, char argv[])  
{  
    cout << "Derived d1(5) calls: ";   
    Derived d1(5);  
    cout << "Derived d1('c') calls: ";  
    Derived d2('c');  
    cout << "Derived d3 = d2 calls: " ;  
    Derived d3 = d2;  
    cout << "Derived d4 calls: ";  
    Derived d4;   
  
    // Keep console open in debug mode:  
    cout << endl << "Press Enter to exit.";  
    char in[1];  
    cin.getline(in, 1);  
    return 0;  
}  
  
/* Output:  
Derived d1(5) calls: Base(int)  
Derived d1('c') calls: Base(char)  
Derived d3 = d2 calls: Base(Base&)  
Derived d4 calls: Base()  
  
Press Enter to exit.  
  
```  
  
 L'istruzione using porta nell'ambito tutti i costruttori dalla classe base, ad eccezione di quelli che hanno una firma identica ai costruttori disponibili nella classe derivata.  In genere, è consigliabile usare i costruttori ereditanti quando la classe derivata non dichiara nuovi membri dati o nuovi costruttori.  
  
 Un modello di classe può ereditare tutti i costruttori da un argomento di tipo, se tale tipo specifica una classe base:  
  
```  
template< typename T >  
class Derived : T {  
    using T::T;   // declare the constructors from T  
    // ...  
};  
  
```  
  
 Una classe di derivazione non può ereditare da più classi base, se tali classi base hanno costruttori con firma identica.  
  
##  <a name="rules_for_declaring_constructors"></a> Regole per la dichiarazione di costruttori  
 Un costruttore ha lo stesso nome della relativa classe.  È possibile dichiarare un numero qualsiasi di costruttori soggetti alle regole di funzioni in overload.  \(Per altre informazioni, vedere [Overload](../misc/overloading-cpp.md)\).  
  
 `argument-declaration-list` può essere vuoto.  
  
 C\+\+ definisce due tipi speciali di costruttori, predefinito e di copia, descritti nella tabella seguente.  
  
### Costruttori predefinito e di copia  
  
|Tipo di costruzione|Argomenti|Scopo|  
|-------------------------|---------------|-----------|  
|Costruttore predefinito|Può essere chiamato senza argomenti|Consente di costruire un oggetto predefinito del tipo di classe|  
|Costruttore di copia|Può accettare un unico argomento di riferimento allo stesso tipo di classe|Consente di copiare gli oggetti del tipo di classe|  
  
 I costruttori predefiniti possono essere chiamati senza argomenti.  È tuttavia possibile dichiarare un costruttore predefinito con un elenco di argomenti, se tutti gli argomenti hanno impostazioni predefinite.  Analogamente, i costruttori di copia devono accettare un unico argomento di riferimento allo stesso tipo di classe.  È possibile fornire altri argomenti, se tutti gli argomenti successivi hanno impostazioni predefinite.  
  
 Se non vengono forniti i costruttori, il compilatore tenta di generare un costruttore predefinito.  Se non viene fornito un costruttore di copia, il compilatore tenta di generarne uno.  Questi costruttori generati dal compilatore vengono considerati funzioni membro pubbliche.  Verrà generato un errore se si specifica un costruttore di copia con un primo argomento che è un oggetto e non un riferimento.  
  
 Un costruttore predefinito generato dal compilatore installa l'oggetto \(inizializza vftables e vbtables, come descritto in precedenza\) e chiama i costruttori predefiniti per le classi di base e i membri, ma non esegue altre operazioni.  I costruttori delle classi base e dei membri sono chiamati solo se esistono, sono accessibili e non sono ambigui.  
  
 Un costruttore di copia generato dal compilatore configura un nuovo oggetto ed esegue una copia membro per membro dei contenuti dell'oggetto da copiare.  I costruttori delle classi base o dei membri vengono chiamati solo se esistono; in caso contrario, viene eseguita la copia bit per bit.  
  
 Se tutte le classi base e dei membri di un `type` di classe hanno costruttori di copia che accettano un argomento **const**, il costruttore di copia generato dal compilatore accetta un unico argomento di tipo **const** `type`**&**.  In caso contrario, il costruttore di copia generato dal compilatore accetta un unico argomento di tipo `type`**&**.  
  
 È possibile usare un costruttore per inizializzare un oggetto **const** o `volatile`, ma il costruttore stesso non può essere dichiarato come **const** o `volatile`.  L'unica classe di archiviazione ammessa per un costruttore è **inline**; l'uso di qualsiasi altro modificatore di classe di archiviazione, inclusa la parola chiave `__declspec`, con un costruttore genera un errore del compilatore.  
  
 La convenzione di chiamata stdcall viene usata nelle funzioni membro statiche e nelle funzioni globali dichiarate con la parola chiave **\_\_stdcall** e che non usano un elenco di argomenti variabile.  Quando si usa la parola chiave **\_\_stdcall** in una funzione membro non statica, ad esempio un costruttore, il compilatore userà la convenzione di chiamata thiscall.  
  
 I costruttori delle classi base non vengono ereditate dalle classi derivate.  Quando un oggetto di tipo classe derivata viene creato, viene costruito a partire dai componenti della classe base; quindi passa ai componenti della classe derivata.  Il compilatore usa ogni costruttore della classe base poiché quella parte dell'oggetto completo è inizializzata, ad eccezione dei casi di derivazione virtuale, come descritto in [Inizializzazione delle classi base](../misc/initializing-base-classes.md).  
  
##  <a name="explicitly_invoking_constructors"></a> Richiamare i costruttori in modo esplicito  
 I costruttori possono essere chiamati in modo esplicito in un programma per creare gli oggetti di un tipo specifico.  Ad esempio, per creare due oggetti `Point` che descrivono la fine di una riga, è possibile scrivere il codice seguente:  
  
```  
DrawLine( Point( 13, 22 ), Point( 87, 91 ) );  
```  
  
 Vengono creati due oggetti di tipo `Point`, successivamente passati alla funzione `DrawLine` ed eliminati alla fine dell'espressione \(chiamata di funzione\).  
  
 Un altro contesto in cui un costruttore viene chiamato in modo esplicito è la fase di inizializzazione:  
  
```  
Point pt = Point( 7, 11 );  
```  
  
 Un oggetto di tipo `Point` viene creato e inizializzato tramite il costruttore che accetta due argomenti di tipo `int`.  
  
 Oggetti creati tramite la chiamata esplicita di costruttori, come nei due esempi precedenti, sono senza nome e con una durata pari a quella dell'espressione in cui vengono creati.  Questa situazione viene discussa più in dettaglio in [Oggetti temporanei](../cpp/temporary-objects.md).  
  
 Generalmente è consigliabile chiamare una funzione membro dall'interno di un costruttore poiché l'oggetto è stato completamente installato \(le tabelle virtuali sono state inizializzate e così via\) prima di eseguire la prima riga di codice utente.  Tuttavia, potrebbe non essere sicuro per una funzione membro chiamare una funzione membro virtuale per una classe base astratta durante la costruzione o l'eliminazione.  
  
 I costruttori possono chiamare funzioni virtuali  Quando vengono chiamate le funzioni virtuali, la funzione richiamata è quella definita per la classe del costruttore \(oppure ereditata dalle basi\).  L'esempio seguente mostra cosa si verifica quando una funzione virtuale viene chiamata dall'interno di un costruttore:  
  
```  
// specl_calling_virtual_functions.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
class Base  
{  
public:  
    Base();             // Default constructor.  
    virtual void f();   // Virtual member function.  
};  
  
Base::Base()  
{  
    cout << "Constructing Base sub-object\n";  
    f();                // Call virtual member function  
}                       //  from inside constructor.  
  
void Base::f()  
{  
    cout << "Called Base::f()\n";  
}  
  
class Derived : public Base  
{  
public:  
    Derived();          // Default constructor.  
    void f();           // Implementation of virtual  
};                      //  function f for this class.  
  
Derived::Derived()  
{  
    cout << "Constructing Derived object\n";  
}  
  
void Derived::f()  
{  
    cout << "Called Derived::f()\n";  
}  
  
int main()  
{  
    Derived d;  
}  
```  
  
 Quando viene eseguito il programma precedente, la dichiarazione `Derived d` comporta la sequenza di eventi seguente:  
  
1.  Viene chiamato il costruttore per la classe `Derived` \(`Derived::Derived`\).  
  
2.  Prima di inserire il corpo del costruttore della classe `Derived`, viene chiamato il costruttore della classe `Base` \(`Base::Base`\).  
  
 `Base::Base` chiama la funzione `f`, che è una funzione virtuale.  In genere, `Derived::f` viene chiamato perché l'oggetto `d` è di tipo `Derived`.  Poiché la funzione `Base::Base` è un costruttore, l'oggetto non è ancora del tipo `Derived` e viene chiamato `Base::f`.  
  
## Vedere anche  
 [Funzioni membro speciali](../misc/special-member-functions-cpp.md)