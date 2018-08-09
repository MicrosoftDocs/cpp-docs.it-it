---
title: Le classi generiche (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], generic
- generic classes [C++], about generic classes
- data types [C++], generic
- generic classes
- generics [C++], declaring generic classes
ms.assetid: 0beb99e1-1ec4-4fee-9836-ce9657d67a3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: deeb40e54c0324874d9c99a42a98e7e852394dc4
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39643189"
---
# <a name="generic-classes-ccli"></a>Classi generiche (C++/CLI)
Una classe generica viene dichiarata utilizzando il formato seguente:  
  
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
  
## <a name="remarks"></a>Note  
 Nella sintassi riportata sopra, vengono usati i termini seguenti:  
  
 *gli attributi* (facoltativo)  
 Informazioni dichiarative aggiuntive. Per ulteriori informazioni sugli attributi e sulle classi di attributo, vedere Attributi.  
  
 *chiave di classi*  
 Entrambi **classe** o **typename**  
  
 *tipo-parametro-identificatore/i*,  
 Elenco delimitato da virgole di identificatori che specifica i nomi dei parametri di tipo.  
  
 *clausole di vincolo*  
 Un elenco (non virgole) di **in cui** clausole che specifica i vincoli per i parametri di tipo. Assume il formato:  
  
 `where`  *il parametro-Type-identifier*`:`*-elenco di vincoli*  `...`  
  
 *elenco di vincoli*  
 *o-interfaccia della classe*[`,` *...* ]  
  
 *modificatori di accessibilità*  
 Modificatori di accessibilità per la classe generica. Per il Runtime di Windows, è il modificatore consentito solo **privato**. Per il common language runtime, sono consentiti i modificatori **privati** e **pubblico**.  
  
 *identifier*  
 Il nome della classe generica, qualsiasi identificatore C++ valido.  
  
 *modificatori* (facoltativo)  
 È consentito includono modificatori **sealed** e **astratta**.  
  
 *base-list*  
 Un elenco che contiene la classe base ed eventuali interfacce implementate, tutti separate da virgole.  
  
 *corpo-classe*  
 Il corpo della classe, che contiene i campi, le funzioni membro e così via.  
  
 *dichiaratori*  
 Dichiarazioni di tutte le variabili di questo tipo. Ad esempio: `^` *identificatore*[`,` ...]  
  
 È possibile dichiarare classi generiche, ad esempio queste (si noti che la parola chiave **classe** possono essere utilizzati al posto di **nomeTipo**). In questo esempio `ItemType`, `KeyType` e `ValueType` sono tipi sconosciuti specificati nel punto in cui il tipo. `HashTable<int, int>` è un tipo del tipo generico costruito `HashTable<KeyType, ValueType>`. Un numero di tipi costruiti diversi può essere costruito da un solo tipo generico. Tipi costruiti costruiti da classi generiche vengono considerati come qualsiasi altro tipo di classe di riferimento.  
  
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
  
 Entrambi i tipi di valore (uno predefinito, ad esempio i tipi **int** oppure **doppie**, o tipi di valore definito dall'utente) e i tipi di riferimento possono essere usati come argomento di tipo generico. La sintassi all'interno della definizione generica è lo stesso indipendentemente dal fatto che. Punto di vista sintattico il tipo sconosciuto viene trattato come se fosse un tipo di riferimento. Tuttavia, il runtime è in grado di determinare che se il tipo effettivamente usato è un tipo di valore e sostituire il codice generato appropriato per l'accesso diretto ai membri. I tipi di valore usati come argomenti tipo generico non sono di tipo boxed e pertanto non comportano la riduzione delle prestazioni associata a conversione boxing. La sintassi utilizzata all'interno del corpo del tipo generico deve essere `T^` e `->` invece di `.`. Qualsiasi utilizzo delle [ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md) per il tipo di parametro verrà correttamente interpretato dal runtime come la semplice creazione di un tipo di valore se l'argomento tipo è un tipo di valore.  
  
 È anche possibile dichiarare una classe generica con [vincoli su parametri di tipo generico (C + + / CLI)](../windows/constraints-on-generic-type-parameters-cpp-cli.md) sui tipi che possono essere utilizzati per il parametro di tipo. Nell'esempio seguente qualsiasi tipo usato per `ItemType` deve implementare il `IItem` interfaccia. Tentativo di utilizzare **int**, ad esempio, che non implementa `IItem`, produrrà un errore in fase di compilazione perché l'argomento di tipo non soddisfa il vincolo.  
  
```cpp  
// generic_classes_2.cpp  
// compile with: /clr /c  
interface class IItem {};  
generic <class ItemType>  
where ItemType : IItem  
ref class Stack {};  
```  
  
 Impossibile eseguire l'overload di classi generiche nello spazio dei nomi stesso modificando solo il numero o i tipi di parametri di tipo. Tuttavia, se ogni classe si trova in uno spazio dei nomi diversi, è possibile eseguire l'overload. Ad esempio, prendere in considerazione le seguenti due classi `MyClass` e `MyClass<ItemType>`, gli spazi dei nomi `A` e `B`. Le due classi possono quindi essere sottoposti a overload in uno spazio dei nomi terza c:  
  
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
  
 La classe di base e interfacce di base non possono essere parametri di tipo. Tuttavia, la classe di base può comportare il parametro di tipo come argomento, come nel caso seguente:  
  
```cpp  
// generic_classes_4.cpp  
// compile with: /clr /c  
generic <typename ItemType>  
interface class IInterface {};  
  
generic <typename ItemType>  
ref class MyClass : IInterface<ItemType> {};  
```  
  
 Costruttori e distruttori vengono eseguiti una sola volta per ogni istanza dell'oggetto (come di consueto); i costruttori statici vengono eseguiti una sola volta per ogni tipo costruito.  
  
## <a name="fields-in-generic-classes"></a>Campi in classi generiche  
 In questa sezione viene illustrato l'utilizzo dell'istanza e campi statici in classi generiche.  
  
### <a name="instance-variables"></a>Variabili di istanza  
 Le variabili di istanza di una classe generica possono avere tipi e gli inizializzatori di variabili che includono parametri di tipo dalla classe contenitore.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, tre istanze diverse della classe generica, MyClass\<ItemType >, vengono creati utilizzando gli argomenti di tipo appropriato (**int**, **double**e **stringa**).  
  
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
 Per la creazione di un nuovo tipo generico, vengono create nuove istanze di tutte le variabili statiche e viene eseguito alcun costruttore statico per quel tipo.  
  
 Le variabili statiche possono utilizzare eventuali parametri di tipo dalla classe contenitore.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente illustra l'uso di campi statici e un costruttore statico all'interno di una classe generica.  
  
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
  
## <a name="methods-in-generic-classes"></a>Metodi nelle classi generiche  
 I metodi nelle classi generiche possono essere generici. i metodi generici non verranno parametrizzati in modo implicito dal parametro di tipo classe.  
  
 Le regole speciali seguenti si applicano ai metodi all'interno di classi generiche:  
  
-   I metodi nelle classi generiche è possono usare i parametri di tipo come parametri, tipi restituiti o variabili locali.  
  
-   I metodi nelle classi generiche è possono usare tipi costruiti chiusi o aperti come le variabili locali, i tipi restituiti o parametri.  
  
### <a name="non-generic-methods-in-generic-classes"></a>Metodi non generici in classi generiche  
 I metodi nelle classi generiche che non dispongono di alcun parametro di tipo aggiuntive sono dette in genere non generici anche se essi vengono parametrizzate in modo implicito dalla classe generica che lo contiene.  
  
 La firma di un metodo generico non può includere uno o più parametri di tipo della classe contenitore, direttamente o in un tipo costruito aperto. Ad esempio:  
  
 `void MyMethod(MyClass<ItemType> x) {}`  
  
 Il corpo di tali metodi possa anche usare questi parametri di tipo.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente dichiara un metodo, non generiche `ProtectData`, all'interno di una classe generica, `MyClass<ItemType>`. Il metodo Usa il parametro di tipo classe `ItemType` nella sua firma in un tipo costruito aperto.  
  
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
 È possibile dichiarare i metodi generici in classi sia generiche e non generici. Ad esempio:  
  
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
  
 Il metodo non generico è ancora generico nel senso che contiene i parametri di parametro di tipo della classe, ma non ha parametri di tipo aggiuntivi.  
  
 Tutti i tipi di metodi nelle classi generiche possono essere generico, tra cui statico, istanza e metodi virtuali.  
  
## <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come dichiarare e utilizzare i metodi generici in classi generiche:  
  
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
  
## <a name="using-nested-types-in-generic-classes"></a>Utilizzo di tipi annidati in classi generiche  
 Proprio come con le classi normali, è possibile dichiarare gli altri tipi all'interno di una classe generica. La dichiarazione di classe annidati verrà impostati in modo implicito parametri dai parametri di tipo della dichiarazione di classe esterna. In questo modo, viene definita una classe annidata distinta per ogni tipo di outer costruito. Ad esempio, nella dichiarazione,  
  
```cpp  
// generic_classes_5.cpp  
// compile with: /clr /c  
generic <typename ItemType>  
ref struct Outer {  
   ref class Inner {};  
};  
```  
  
 Il tipo `Outer<int>::Inner` non è uguale al tipo di `Outer<double>::Inner`.  
  
 Come con i metodi generici in classi generiche, è possono impostare i parametri di tipo aggiuntivi per il tipo annidato. Se si usano gli stessi nomi di parametro di tipo nella classe interna ed esterna, il parametro di tipo interno nasconde il parametro di tipo esterno.  
  
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
  
 Se sono costruiti i tipi generici annidati, il parametro di tipo per il tipo esterno non è incluso nell'elenco di parametri di tipo per il tipo interno, anche se il tipo interno in modo implicito con i parametri di parametro di tipo del tipo esterno. In questo caso, sarebbe un nome di un tipo costruito `Outer<int>::Inner<string>`.  
  
 L'esempio seguente illustra la creazione e la lettura di un elenco collegato usando i tipi annidati in classi generiche.  
  
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
  
## <a name="properties-events-indexers-and-operators-in-generic-classes"></a>Proprietà, eventi, indicizzatori e gli operatori in classi generiche  
  
-   Proprietà, eventi, indicizzatori e gli operatori possono usare i parametri di tipo della classe generica che lo contiene come valori restituiti, parametri o variabili locali, ad esempio quando `ItemType` è un parametro di tipo di una classe:  
  
    ```cpp  
    public ItemType MyProperty {}  
    ```  
  
-   Proprietà, eventi, indicizzatori e gli operatori non possono stessi includere parametri.  
  
## <a name="example"></a>Esempio  
 Questo esempio illustra le dichiarazioni di una proprietà dell'istanza all'interno di una classe generica.  
  
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
 Le regole per la dichiarazione e utilizzo di struct generico sono identici a quelli per le classi generiche, ad eccezione delle differenze indicato nel riferimento del linguaggio Visual C++.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente dichiara uno struct generico `MyGenStruct`, con un campo, `myField`e assegna i valori di tipi diversi (**int**, **double**, `String^`) a questo campo.  
  
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
 [Generics](../windows/generics-cpp-component-extensions.md)