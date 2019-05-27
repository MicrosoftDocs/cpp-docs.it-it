---
title: Classi generiche (C++/CLI)
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- classes [C++], generic
- generic classes [C++], about generic classes
- data types [C++], generic
- generic classes
- generics [C++], declaring generic classes
ms.assetid: 0beb99e1-1ec4-4fee-9836-ce9657d67a3a
ms.openlocfilehash: 71850807f6332f31195ef9bafbd9468f48cb6fb3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "65516386"
---
# <a name="generic-classes-ccli"></a>Classi generiche (C++/CLI)

Una classe generica viene dichiarata usando il formato seguente:

## <a name="syntax"></a>Sintassi

```cpp
[attributes]
generic <class-key type-parameter-identifier(s)>
[constraint-clauses]
[accessibility-modifiers] ref class identifier  [modifiers]
[: base-list]
{
class-body
} [declarators] [;]
```

## <a name="remarks"></a>Osservazioni

Nella sintassi precedente vengono usati i termini seguenti:

*Attributi*<br/>
(Facoltativo) Informazioni dichiarative aggiuntive. Per ulteriori informazioni sugli attributi e sulle classi di attributo, vedere Attributi.

*class-key*<br/>
**class** o **typename**

*type-parameter-identifier(s)*: elenco delimitato da virgole di identificatori che specificano i nomi dei parametri di tipo.

*constraint-clauses*<br/>
Elenco (non delimitato da virgole) di clausole **where** che specificano i vincoli per i parametri di tipo. Assume il formato:

> **where** *type-parameter-identifier* **:** *constraint-list*  **...**

*constraint-list*<br/>
*class-or-interface*[`,` *...*]

*accessibility-modifiers*<br/>
Modificatori di accessibilità per la classe generica. Per Windows Runtime, l'unico modificatore consentito è **private**. Per Common Language Runtime, i modificatori consentiti sono **private** e **public**.

*identifier*<br/>
Nome della classe generica, qualsiasi identificatore C# valido.

*modifiers*<br/>
(Facoltativo) I modificatori consentiti includono **sealed** e **abstract**.

*base-list*<br/>
Elenco che contiene la classe base ed eventuali interfacce implementate, tutte separate da virgole.

*class-body*<br/>
Corpo della classe, che contiene campi, funzioni membro e così via.

*declarators*<br/>
Dichiarazioni di qualsiasi variabile di questo tipo. Ad esempio: `^`*identificatore*[`,` ...]

È possibile dichiarare classi generiche come queste (notare che è possibile usare la parola chiave **class** invece di **typename**). In questo esempio `ItemType`, `KeyType` e `ValueType` sono tipi sconosciuti specificati nel punto in cui il tipo `HashTable<int, int>` è un tipo costruito del tipo generico `HashTable<KeyType, ValueType>`. È possibile costruire diversi tipi costruiti da un unico tipo generico. I tipi costruiti da classi generiche vengono considerati come qualsiasi altro tipo classe di riferimento.

```cpp
// generic_classes_1.cpp
// compile with: /clr
using namespace System;
generic <typename ItemType>
ref struct Stack {
   // ItemType may be used as a type here
   void Add(ItemType item) {}
};

generic <typename KeyType, typename ValueType>
ref class HashTable {};

// The keyword class may be used instead of typename:
generic <class ListItem>
ref class List {};

int main() {
   HashTable<int, Decimal>^ g1 = gcnew HashTable<int, Decimal>();
}
```

I tipi valore (tipi predefiniti come **int** o **double**) e i tipi riferimento possono essere usati entrambi come argomento di tipo generico. La sintassi all'interno della definizione generica è la stessa in ogni caso. Dal punto di vista sintattico il tipo sconosciuto viene considerato come se fosse un tipo riferimento. Tuttavia, il runtime è in grado di determinare se il tipo effettivamente usato è un tipo valore e sostituire il codice generato appropriato per l'accesso diretto ai membri. I tipi valore usati come argomenti di tipo generico non vengono sottoposti a conversione boxing e di conseguenza non subiscono il peggioramento delle prestazioni associato alla conversione boxing. La sintassi usata all'interno del corpo del tipo generico deve essere `T^` e `->` invece di `.`. Qualsiasi utilizzo di [ref new, gcnew](ref-new-gcnew-cpp-component-extensions.md) per il parametro di tipo verrà interpretato correttamente dal runtime come semplice creazione di un tipo valore se l'argomento tipo è un tipo valore.

È anche possibile dichiarare una classe generica con [vincoli su parametri di tipo generico (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md) per i tipi che possono essere utilizzati per il parametro di tipo. Nell'esempio seguente qualsiasi tipo usato per `ItemType` deve implementare l'interfaccia `IItem`. Ad esempio, il tentativo di usare **int**, che non implementa `IItem`, produrrà un errore in fase di compilazione perché l'argomento tipo non soddisfa il vincolo.

```cpp
// generic_classes_2.cpp
// compile with: /clr /c
interface class IItem {};
generic <class ItemType>
where ItemType : IItem
ref class Stack {};
```

Non è possibile eseguire l'overload di classi generiche solo modificando il numero o i tipi dei parametri di tipo. Tuttavia, se ogni classe si trova in uno spazio dei nomi diverso, è possibile eseguirne l'overload. Ad esempio, considerare le due classi `MyClass` e `MyClass<ItemType>` negli spazi dei nomi `A` e `B`. È quindi possibile eseguire l'overload delle due classi in un terzo spazio dei nomi C:

```cpp
// generic_classes_3.cpp
// compile with: /clr /c
namespace A {
   ref class MyClass {};
}

namespace B {
   generic <typename ItemType>
   ref class MyClass2 { };
}

namespace C {
   using namespace A;
   using namespace B;

   ref class Test {
      static void F() {
         MyClass^ m1 = gcnew MyClass();   // OK
         MyClass2<int>^ m2 = gcnew MyClass2<int>();   // OK
      }
   };
}
```

La classe base e le interfacce di base non possono essere parametri di tipo. Tuttavia, la classe base può richiedere il parametro di tipo come argomento, come nel caso seguente:

```cpp
// generic_classes_4.cpp
// compile with: /clr /c
generic <typename ItemType>
interface class IInterface {};

generic <typename ItemType>
ref class MyClass : IInterface<ItemType> {};
```

I costruttori e i distruttori vengono eseguiti una sola volta per ogni istanza di oggetto (come sempre). I costruttori statici vengono eseguiti una volta per ogni tipo costruito.

## <a name="fields-in-generic-classes"></a>Campi in classi generiche

Questa sezione mostra l'uso di campi statici e di istanza in classi generiche.

### <a name="instance-variables"></a>Variabili di istanza

Le variabili di istanza di una classe generica possono avere tipi e inizializzatori di variabili che includono parametri di tipo dalla classe contenitore.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono create tre istanze diverse della classe generica MyClass\<ItemType> usando gli argomenti di tipo appropriati (**int**, **double** e **string**).

```cpp
// generics_instance_fields1.cpp
// compile with: /clr
// Instance fields on generic classes
using namespace System;

generic <typename ItemType>
ref class MyClass {
// Field of the type ItemType:
public :
   ItemType field1;
   // Constructor using a parameter of the type ItemType:
   MyClass(ItemType p) {
   field1 = p;
   }
};

int main() {
   // Instantiate an instance with an integer field:
   MyClass<int>^ myObj1 = gcnew MyClass<int>(123);
   Console::WriteLine("Integer field = {0}", myObj1->field1);

   // Instantiate an instance with a double field:
   MyClass<double>^ myObj2 = gcnew MyClass<double>(1.23);
   Console::WriteLine("Double field = {0}", myObj2->field1);

   // Instantiate an instance with a String field:
   MyClass<String^>^ myObj3 = gcnew MyClass<String^>("ABC");
   Console::WriteLine("String field = {0}", myObj3->field1);
   }
```

```Output
Integer field = 123
Double field = 1.23
String field = ABC
```

## <a name="static-variables"></a>Variabili statiche

Alla creazione di un nuovo tipo generico, vengono create nuove istanze di tutte le variabili statiche e vengono eseguiti tutti i costruttori statici per il tipo.

Le variabili statiche possono usare qualsiasi parametro di tipo dalla classe contenitore.

## <a name="example"></a>Esempio

L'esempio seguente mostra l'uso di campi statici e di un costruttore statico all'interno di una classe generica.

```cpp
// generics_static2.cpp
// compile with: /clr
using namespace System;

interface class ILog {
   void Write(String^ s);
};

ref class DateTimeLog : ILog {
public:
   virtual void Write(String^ s) {
      Console::WriteLine( "{0}\t{1}", DateTime::Now, s);
   }
};

ref class PlainLog : ILog {
public:
   virtual void Write(String^ s) { Console::WriteLine(s); }
};

generic <typename LogType>
where LogType : ILog
ref class G {
   static LogType s_log;

public:
   G(){}
   void SetLog(LogType log) { s_log = log; }
   void F() { s_log->Write("Test1"); }
   static G() { Console::WriteLine("Static constructor called."); }
};

int main() {
   G<PlainLog^>^ g1 = gcnew G<PlainLog^>();
   g1->SetLog(gcnew PlainLog());
   g1->F();

   G<DateTimeLog^>^ g2 = gcnew G<DateTimeLog^>();
   g2->SetLog(gcnew DateTimeLog());

   // prints date
   // g2->F();
}
```

```Output
Static constructor called.
Static constructor called.
Static constructor called.
Test1
```

## <a name="methods-in-generic-classes"></a>Metodi in classi generiche

I metodi nelle classi generiche possono essere a loro volta generici. Ai metodi non generici verranno aggiunti parametri in modo implicito dal parametro di tipo di classe.

Le regole speciali seguenti si applicano ai metodi all'interno di classi generiche:

- I metodi nelle classi generiche possono usare parametri di tipo come parametri, tipi restituiti o variabili locali.

- I metodi nelle classi generiche possono usare tipi costruiti aperti o chiusi come parametri, tipi restituiti o variabili locali.

### <a name="non-generic-methods-in-generic-classes"></a>Metodi non generici in classi generiche

I metodi nelle classi generiche che non hanno parametri di tipo aggiuntivi vengono in genere considerati non generici anche se contengono parametri aggiunti in modo implicito dalla classe generica contenitore.

La firma di un metodo non generico può includere uno o più parametri di tipo della classe contenitore, direttamente o in un tipo costruito aperto. Ad esempio:

`void MyMethod(MyClass<ItemType> x) {}`

Anche il corpo di questi metodi può usare parametri di tipo.

## <a name="example"></a>Esempio

L'esempio seguente dichiara un metodo non generico `ProtectData` all'interno della classe generica `MyClass<ItemType>`. Il metodo usa il parametro di tipo di classe `ItemType` nella propria firma in un tipo costruito aperto.

```cpp
// generics_non_generic_methods1.cpp
// compile with: /clr
// Non-generic methods within a generic class.
using namespace System;

generic <typename ItemType>
ref class MyClass {
public:
   String^ name;
   ItemType data;

   MyClass(ItemType x) {
      data = x;
   }

   // Non-generic method using the type parameter:
   virtual void ProtectData(MyClass<ItemType>^ x) {
      data = x->data;
   }
};

// ItemType defined as String^
ref class MyMainClass: MyClass<String^> {
public:
   // Passing "123.00" to the constructor:
   MyMainClass(): MyClass<String^>("123.00") {
      name = "Jeff Smith";
   }

   virtual void ProtectData(MyClass<String^>^ x) override {
      x->data = String::Format("${0}**", x->data);
   }

   static void Main() {
      MyMainClass^ x1 = gcnew MyMainClass();

      x1->ProtectData(x1);
      Console::WriteLine("Name: {0}", x1->name);
      Console::WriteLine("Amount: {0}", x1->data);
   }
};

int main() {
   MyMainClass::Main();
}
```

```Output
Name: Jeff Smith
Amount: $123.00**
```

## <a name="generic-methods-in-generic-classes"></a>Metodi generici in classi generiche

È possibile dichiarare metodi generici in classi sia generiche sia non generiche. Ad esempio:

## <a name="example"></a>Esempio

```cpp
// generics_method2.cpp
// compile with: /clr /c
generic <typename Type1>
ref class G {
public:
   // Generic method having a type parameter
   // from the class, Type1, and its own type
   // parameter, Type2
   generic <typename Type2>
   void Method1(Type1 t1, Type2 t2) { F(t1, t2); }

   // Non-generic method:
   // Can use the class type param, Type1, but not Type2.
   void Method2(Type1 t1) { F(t1, t1); }

   void F(Object^ o1, Object^ o2) {}
};
```

Il metodo non generico è comunque generico, nel senso che contiene parametri aggiunti dal parametro di tipo della classe, ma non ha parametri di tipo aggiuntivi.

Tutti i tipi di metodi nelle classi generiche possono essere generici, inclusi metodi statici, di istanza e virtuali.

## <a name="example"></a>Esempio

L'esempio seguente mostra la dichiarazione e l'uso di metodi generici all'interno di classi generiche:

```cpp
// generics_generic_method2.cpp
// compile with: /clr
using namespace System;
generic <class ItemType>
ref class MyClass {
public:
   // Declare a generic method member.
   generic <class Type1>
   String^ MyMethod(ItemType item, Type1 t) {
      return String::Concat(item->ToString(), t->ToString());
   }
};

int main() {
   // Create instances using different types.
   MyClass<int>^ myObj1 = gcnew MyClass<int>();
   MyClass<String^>^ myObj2 = gcnew MyClass<String^>();
   MyClass<String^>^ myObj3 = gcnew MyClass<String^>();

   // Calling MyMethod using two integers.
   Console::WriteLine("MyMethod returned: {0}",
            myObj1->MyMethod<int>(1, 2));

   // Calling MyMethod using an integer and a string.
   Console::WriteLine("MyMethod returned: {0}",
            myObj2->MyMethod<int>("Hello #", 1));

   // Calling MyMethod using two strings.
   Console::WriteLine("MyMethod returned: {0}",
       myObj3->MyMethod<String^>("Hello ", "World!"));

   // generic methods can be called without specifying type arguments
   myObj1->MyMethod<int>(1, 2);
   myObj2->MyMethod<int>("Hello #", 1);
   myObj3->MyMethod<String^>("Hello ", "World!");
}
```

```Output
MyMethod returned: 12
MyMethod returned: Hello #1
MyMethod returned: Hello World!
```

## <a name="using-nested-types-in-generic-classes"></a>Uso di tipi annidati in classi generiche

Proprio come per le classi normali, è possibile dichiarare altri tipi all'interno di una classe generica. Alla dichiarazione di classe annidata verranno aggiunti parametri in modo implicito dai parametri di tipo della dichiarazione di classe esterna. In questo modo, viene definita una classe annidata distinta per ogni tipo esterno costruito. Ad esempio, nella dichiarazione seguente

```cpp
// generic_classes_5.cpp
// compile with: /clr /c
generic <typename ItemType>
ref struct Outer {
   ref class Inner {};
};
```

Il tipo `Outer<int>::Inner` non è uguale al tipo `Outer<double>::Inner`.

Come per i metodi generici in classi generiche, è possibile definire parametri di tipo aggiuntivi per il tipo annidato. Se si usano gli stessi nomi di parametro di tipo nella classe interna e in quella esterna, il parametro di tipo interno nasconderà il parametro di tipo esterno.

```cpp
// generic_classes_6.cpp
// compile with: /clr /c
generic <typename ItemType>
ref class Outer {
   ItemType outer_item;   // refers to outer ItemType

   generic <typename ItemType>
   ref class Inner {
      ItemType inner_item;   // refers to Inner ItemType
   };
};
```

Poiché non esiste alcun modo per fare riferimento al parametro di tipo esterno, il compilatore genera un avviso in questa situazione.

Quando i tipi generici annidati costruiti vengono denominati, il parametro di tipo per il tipo esterno non è incluso nell'elenco dei parametri di tipo per il tipo interno, anche se al tipo interno vengono aggiunti parametri in modo implicito dal parametro di tipo del tipo esterno. Nel caso precedente un nome di un tipo costruito sarà `Outer<int>::Inner<string>`.

L'esempio seguente mostra la creazione e la lettura di un elenco collegato tramite tipi annidati in classi generiche.

## <a name="example"></a>Esempio

```cpp
// generics_linked_list.cpp
// compile with: /clr
using namespace System;
generic <class ItemType>
ref class LinkedList {
// The node class:
public:
   ref class Node {
   // The link field:
   public:
      Node^ next;
      // The data field:
      ItemType item;
   } ^first, ^current;
};

ref class ListBuilder {
public:
   void BuildIt(LinkedList<double>^ list) {
      /* Build the list */
      double m[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
      Console::WriteLine("Building the list:");

      for (int n=0; n<=4; n++) {
         // Create a new node:
         list->current = gcnew LinkedList<double>::Node();

         // Assign a value to the data field:
         list->current->item = m[n];

         // Set the link field "next" to be the same as
         // the "first" field:
         list->current->next = list->first;

         // Redirect "first" to the new node:
         list->first = list->current;

         // Display node's data as it builds:
         Console::WriteLine(list->current->item);
      }
   }

   void ReadIt(LinkedList<double>^ list) {
      // Read the list
      // Make "first" the "current" link field:
      list->current = list->first;
      Console::WriteLine("Reading nodes:");

      // Read nodes until current == null:
      while (list->current != nullptr) {
         // Display the node's data field:
         Console::WriteLine(list->current->item);

         // Move to the next node:
         list->current = list->current->next;
      }
   }
};

int main() {
   // Create a list:
   LinkedList<double>^ aList = gcnew LinkedList<double>();

   // Initialize first node:
   aList->first = nullptr;

   // Instantiate the class, build, and read the list:
   ListBuilder^ myListBuilder = gcnew ListBuilder();
   myListBuilder->BuildIt(aList);
   myListBuilder->ReadIt(aList);
}
```

```Output
Building the list:
0.1
0.2
0.3
0.4
0.5
Reading nodes:
0.5
0.4
0.3
0.2
0.1
```

## <a name="properties-events-indexers-and-operators-in-generic-classes"></a>Proprietà, eventi, indicizzatori e operatori in classi generiche

- Proprietà, eventi, indicizzatori e operatori possono usare i parametri di tipo della classe generica contenitore come valori restituiti, parametri o variabili locali, ad esempio quando `ItemType` è un parametro di tipo di una classe:

    ```cpp
    public ItemType MyProperty {}
    ```

- A proprietà, eventi, indicizzatori e operatori non è possibile aggiungere parametri.

## <a name="example"></a>Esempio

Questo esempio mostra dichiarazioni di una proprietà dell'istanza all'interno di una classe generica.

```cpp
// generics_generic_properties1.cpp
// compile with: /clr
using namespace System;

generic <typename ItemType>
ref class MyClass {
private:
   property ItemType myField;

public:
   property ItemType MyProperty {
      ItemType get() {
         return myField;
      }
      void set(ItemType value) {
         myField = value;
      }
   }
};

int main() {
   MyClass<String^>^ c = gcnew MyClass<String^>();
   MyClass<int>^ c1 = gcnew MyClass<int>();

   c->MyProperty = "John";
   c1->MyProperty = 234;

   Console::Write("{0}, {1}", c->MyProperty, c1->MyProperty);
}
```

```Output
John, 234
```

## <a name="example"></a>Esempio

L'esempio seguente mostra una classe generica con un evento.

```cpp
// generics_generic_with_event.cpp
// compile with: /clr
// Declare a generic class with an event and
// invoke events.
using namespace System;

// declare delegates
generic <typename ItemType>
delegate void ClickEventHandler(ItemType);

// generic class that defines events
generic <typename ItemType>
ref class EventSource {
public:
   // declare the event OnClick
   event ClickEventHandler<ItemType>^ OnClick;
   void FireEvents(ItemType item) {
      // raises events
      OnClick(item);
   }
};

// generic class that defines methods that will called when
// event occurs
generic <typename ItemType>
ref class EventReceiver {
public:
   void OnMyClick(ItemType item) {
   Console::WriteLine("OnClick: {0}", item);
   }
};

int main() {
   EventSource<String^>^ MyEventSourceString =
                   gcnew EventSource<String^>();
   EventSource<int>^ MyEventSourceInt = gcnew EventSource<int>();
   EventReceiver<String^>^ MyEventReceiverString =
                   gcnew EventReceiver<String^>();
   EventReceiver<int>^ MyEventReceiverInt = gcnew EventReceiver<int>();

   // hook handler to event
   MyEventSourceString->OnClick += gcnew ClickEventHandler<String^>(
       MyEventReceiverString, &EventReceiver<String^>::OnMyClick);
   MyEventSourceInt->OnClick += gcnew ClickEventHandler<int>(
             MyEventReceiverInt, &EventReceiver<int>::OnMyClick);

   // invoke events
   MyEventSourceString->FireEvents("Hello");
   MyEventSourceInt->FireEvents(112);

   // unhook handler to event
   MyEventSourceString->OnClick -= gcnew ClickEventHandler<String^>(
        MyEventReceiverString, &EventReceiver<String^>::OnMyClick);
   MyEventSourceInt->OnClick -= gcnew ClickEventHandler<int>(
        MyEventReceiverInt, &EventReceiver<int>::OnMyClick);
}
```

## <a name="generic-structs"></a>Struct generici

Le regole per la dichiarazione e l'uso di struct generici sono identiche a quelle per le classi generiche, ad eccezione delle differenze indicate nelle informazioni di riferimento per il linguaggio Visual C++.

## <a name="example"></a>Esempio

L'esempio seguente dichiara uno struct generico `MyGenStruct` con un campo `myField` e assegna valori di tipi diversi (**int**, **double** e `String^`) a questo campo.

```cpp
// generics_generic_struct1.cpp
// compile with: /clr
using namespace System;

generic <typename ItemType>
ref struct MyGenStruct {
public:
   ItemType myField;

   ItemType AssignValue(ItemType item) {
      myField = item;
      return myField;
   }
};

int main() {
   int myInt = 123;
   MyGenStruct<int>^ myIntObj = gcnew MyGenStruct<int>();
   myIntObj->AssignValue(myInt);
   Console::WriteLine("The field is assigned the integer value: {0}",
            myIntObj->myField);

   double myDouble = 0.123;
   MyGenStruct<double>^ myDoubleObj = gcnew MyGenStruct<double>();
   myDoubleObj->AssignValue(myDouble);
   Console::WriteLine("The field is assigned the double value: {0}",
            myDoubleObj->myField);

   String^ myString = "Hello Generics!";
   MyGenStruct<String^>^ myStringObj = gcnew MyGenStruct<String^>();
   myStringObj->AssignValue(myString);
   Console::WriteLine("The field is assigned the string: {0}",
            myStringObj->myField);
}
```

```Output
The field is assigned the integer value: 123
The field is assigned the double value: 0.123
The field is assigned the string: Hello Generics!
```

## <a name="see-also"></a>Vedere anche

[Generics](generics-cpp-component-extensions.md)