---
title: "Generic Classes (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
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
  - "classes [C++], generic"
  - "generic classes [C++], about generic classes"
  - "data types [C++], generic"
  - "generic classes"
  - "generics [C++], declaring generic classes"
ms.assetid: 0beb99e1-1ec4-4fee-9836-ce9657d67a3a
caps.latest.revision: 33
caps.handback.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Generic Classes (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una classe generica viene dichiarata utilizzando la forma seguente:  
  
## Sintassi  
  
```  
[attributes]  
generic <class-key type-parameter-identifier(s)>  
[constraint-clauses]  
[accessibility-modifiers] ref class identifier  [modifiers]  
[: base-list]   
{  
   class-body  
} [declarators] [;]  
```  
  
## Note  
 Nella sintassi in precedenza, i termini seguenti vengono utilizzati per:  
  
 `attributes` \(facoltativo\)  
 Informazioni dichiarative aggiuntive.  Per ulteriori informazioni sugli attributi e sulle classi di attributo, vedere Attributi.  
  
 *class\-key*  
 `class` o `typename`  
  
 *identificatori di parametro di tipo*,  
 Elenco delimitato da virgole di identificatori che specificano i nomi dei parametri di tipo.  
  
 *constraint\-clauses*  
 Un elenco \(non delimitato da virgole\) delle clausole **where** che specificano i vincoli dei parametri di tipo.  Assume il formato:  
  
 `where`  *type\-parameter\-identifier*  `:`  *constraint\-list*  `...`  
  
 *constraint\-list*  
 *class\-or\-interface*\[`,` *...*\]  
  
 *accessibility\-modifiers*  
 Modificatori di accessibilità per la classe generica.  Per [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], l'unico modificatore concesso è `private`.  Per Common Language Runtime, i modificatori consentiti sono `private` e `public`.  
  
 *identificatore*  
 Il nome della classe generica, qualsiasi identificatore valido di C\+\+.  
  
 *modifiers* \(facoltativo\)  
 I modificatori consentiti sono `sealed` e **abstract**.  
  
 *base\-list*  
 Un elenco contenente la classe base e tutte le interfacce implementate, completamente separati da virgole.  
  
 *class\-body*  
 Il corpo della classe, contenente i campi, le funzioni membro, e così via.  
  
 *declarators*  
 Dichiarazioni delle variabili di tale tipo.  Ad esempio: `^`*identifier*\[`,` ...\]  
  
 È possibile dichiarare le classi generiche come queste \(si noti che la parola chiave **class** può essere utilizzata al posto di **typename**\).  In questo esempio, `ItemType`, `KeyType` e `ValueType` sono tipi sconosciuti specificati nel punto in cui il tipo.  `HashTable<int, int>` è un tipo costruito di tipo generico `HashTable<KeyType, ValueType>`.  Una serie di tipi costruiti diversi possono essere creati da un singolo tipo generico.  I tipi costruiti costruiti dalle classi generiche vengono considerati come qualsiasi altro tipo classe di riferimento.  
  
```  
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
  
 Entrambi i tipi di valore \(tipi incorporati come `int` o `double`, o tipi di valore definiti dall'utente\) che i tipi di riferimento possono essere utilizzati come argomento di tipo generico.  La sintassi nella definizione generica è la stessa a prescindere.  Sintatticamente, il tipo sconosciuto è considerato come se fosse un tipo di riferimento.  Tuttavia, il runtime può determinare se il tipo utilizzato in realtà è un tipo di valore e sostituire il codice generato appropriato per accedere direttamente ai membri.  I tipi di valore utilizzati come argomenti di tipo generico non sono inscatolati e non sono soggetti alla riduzione delle prestazioni associata al boxing.  La sintassi utilizzata all'interno del corpo del tipo generico dovrebbe essere **T^** e '**\-\>**' anziché '**.**'.  Qualsiasi utilizzo di [ref new, gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md) per il parametro di tipo in modo appropriato verrà interpretato dal runtime come la creazione semplice di un tipo di valore se l'argomento di tipo è un tipo di valore.  
  
 È inoltre possibile dichiarare una classe generica con [Constraints on Generic Type Parameters \(C\+\+\/CLI\)](../windows/constraints-on-generic-type-parameters-cpp-cli.md) su tipi che possono essere utilizzati per il parametro di tipo.  Nell'esempio qualsiasi tipo utilizzato per `ItemType` deve implementare l'interfaccia di `IItem`.  Tentare di utilizzare `int`, ad esempio, che non implementa `IItem`, produrrebbe un errore in fase di compilazione perché l'argomento di tipo non soddisfa il vincolo.  
  
```  
// generic_classes_2.cpp  
// compile with: /clr /c  
interface class IItem {};  
generic <class ItemType>  
where ItemType : IItem  
ref class Stack {};  
```  
  
 Le classi generiche nello stesso spazio dei nomi non possono essere sottoposte a overload solo modificando il numero o i tipi di parametri di tipo.  Tuttavia, se ogni classe vive in uno spazio dei nomi diverso, possono essere sottoposte a overload.  Ad esempio, considerare le seguenti due classi, `MyClass` e `MyClass<ItemType>`, negli spazi dei nomi `A` e `B`.  Le due classi possono quindi essere sottoposte a overload in un terzo spazio dei nomi C:  
  
```  
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
  
 La classe base e interfacce di base non possono essere parametri di tipo.  Tuttavia, la classe base può includere il parametro di tipo come argomento, come nel seguente esempio:  
  
```  
// generic_classes_4.cpp  
// compile with: /clr /c  
generic <typename ItemType>  
interface class IInterface {};  
  
generic <typename ItemType>  
ref class MyClass : IInterface<ItemType> {};  
```  
  
 Costruttori e distruttori vengono eseguiti una volta per ogni istanza di oggetto \(come di consueto\); i costruttori statici vengono eseguiti una volta per ogni tipo costruito.  
  
## Campi nelle Classi Generiche  
 In questa sezione viene illustrato l'utilizzo dell'istanza e i campi statici nelle classi generiche.  
  
### Variabili di istanza  
 Le variabili di istanza di una classe generica possono disporre di tipi e inizializzatori di variabile che includono tutti i parametri di tipo della classe interna.  
  
## Esempio  
 Nell'esempio seguente, tre istanze diverse della classe generica, MyClass\<ItemType\>, vengono create utilizzando gli argomenti del tipo appropriato \(`int`, **double** e **string**\).  
  
```  
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
  
  **Campo Integer \= 123**  
**Campo double \= 1.23**  
**Campo stringa \= ABC**   
## Variabili statiche.  
 Riguardo la creazione di un nuovo tipo generico, le nuove istanze di tutte le variabili statiche vengono create e un costruttore statico per tale tipo viene eseguito.  
  
 Le variabili statiche possono utilizzare tutti i parametri di tipo della classe interna.  
  
## Esempio  
 Nell'esempio seguente viene illustrato l'utilizzo dei campi statici e di un costruttore statico in una classe generica.  
  
```  
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
  
  **Costruttore statico chiamato.**  
**Costruttore statico chiamato.**  
**Costruttore statico chiamato.**  
**Test1**   
## Metodi nelle classi generiche  
 I metodi nelle classi generiche possono essere generici essi stessi; i metodi non generici verranno parametrizzati in modo implicito dal parametro di tipo classe.  
  
 Le seguenti regole specifiche vengono applicate ai metodi nelle classi generiche:  
  
-   I metodi nelle classi generiche possono utilizzare i parametri di tipo come parametri, tipi restituiti, o variabili locali.  
  
-   I metodi nelle classi generiche possono utilizzare tipi costruiti aperti o chiusi come parametri, tipi restituiti, o variabili locali.  
  
### Metodi non generici nelle classi generiche  
 I metodi nelle classi generiche che non dispongono di parametri di tipo aggiuntivi in genere vengono definiti non generici sebbene in modo implicito siano parametri dalla classe generica che li contiene.  
  
 La firma di un metodo non generico può includere direttamente uno o più parametri di tipo della classe interna, o un tipo costruito aperto.  Di seguito è riportato un esempio.  
  
 `void MyMethod(MyClass<ItemType> x) {}`  
  
 Il corpo di questi metodi può utilizzare questi parametri di tipo.  
  
## Esempio  
 Nell'esempio seguente viene dichiarato un metodo non generico, `ProtectData`, all'interno di una classe generica, `MyClass<ItemType>`.  Il metodo utilizza il parametro di tipo `ItemType` della classe nella firma in un tipo costruito aperto.  
  
```  
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
  
  **Nome: Jeff Smith**  
**Quantità: $123.00\*\***   
## Metodi generici nelle classi generiche  
 È possibile dichiarare metodi generici nelle classi generiche che non generiche.  Di seguito è riportato un esempio.  
  
## Esempio  
  
```  
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
  
 Il metodo non generico è ancora generico nel senso che è parametrizzato dal parametro di tipo classe, ma non dispone di parametri di tipo aggiuntivi.  
  
 Tutti i tipi di metodi nelle classi generiche possono essere generici, inclusi static, istanza e metodi virtuali.  
  
## Esempio  
 Nell'esempio seguente vengono illustrati la dichiarazione e l'utilizzo di metodi generici nelle classi generiche:  
  
```  
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
  
  **MyMethod restituisce: 12**  
**MyMethod restituisce: Hello \#1**  
**MyMethod restituisce: Hello World\!**   
## Utilizzo di tipi annidati nelle classi generiche  
 Analogamente alle classi comuni, è possibile dichiarare altri tipi all'interno di una classe generica.  La dichiarazione di classe annidata in modo implicito è parametrizzata dai parametri di tipo di dichiarazione della classe esterna.  Pertanto, una classe annidata distinta viene definita per ogni tipo costruito esterno.  Ad esempio, nella dichiarazione.  
  
```  
// generic_classes_5.cpp  
// compile with: /clr /c  
generic <typename ItemType>  
ref struct Outer {  
   ref class Inner {};  
};  
```  
  
 Il tipo Outer\<int\>::Inner non corrisponde al tipo Outer\<double\>::Inner.  
  
 Come per i metodi generici nelle classi generiche, i parametri di tipo aggiuntivi possono essere definiti per il tipo annidato.  Se si utilizzano gli stessi nomi dei parametri di tipo nella classe interna e esterna, il parametro di tipo interno nascondere il parametro di tipo esterno.  
  
```  
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
  
 Poiché non è possibile fare riferimento al parametro di tipo esterno, il compilatore genererà un avviso in questa situazione.  
  
 Quando i tipi generici costruiti annidati sono denominati, il parametro di tipo per il tipo esterno non è incluso nell'elenco di parametri di tipo per il tipo interno, anche se il tipo interno è implicitamente parametrizzato dal parametro di tipo esterno del tipo.  Nel caso in precedenza, un nome di un tipo costruito sarebbe Outer\<int\>::Inner\<string\>.  
  
 Il seguente esempio illustra la compilazione e la lettura di un elenco collegato utilizzando i tipi annidati nelle classi generiche.  
  
## Esempio  
  
```  
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
  
  **Compilare l'elenco:**  
**0.1**  
**0.2**  
**0.3**  
**0.4**  
**0.5**  
**Nodi di lettura:**  
**0.5**  
**0.4**  
**0.3**  
**0.2**  
**0.1**   
## Proprietà, Eventi, Indicizzatori e Operatori nelle classi generiche  
  
-   Proprietà, eventi, indicizzatori e operatori possono utilizzare parametri di tipo della classe generica contenitore come valori restituiti, parametri, o variabili locali, ad esempio quando `ItemType` è un parametro di tipo di classe:  
  
    ```  
    public ItemType MyProperty {}  
    ```  
  
-   Proprietà, eventi, indicizzatori e operatori non possono essere parametrizzati a loro volta.  
  
## Esempio  
 Questo esempio mostra le dichiarazioni di una proprietà dell'istanza all'interno di una classe generica.  
  
```  
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
  
  **John, 234**   
## Esempio  
 Nell'esempio seguente viene illustrata una classe generica con un evento.  
  
```  
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
  
## Struttura generica  
 Le regole per la dichiarazione e l'utilizzo degli struct generici sono uguali a quelle per le classi generiche, ad eccezione delle differenze indicate nelle referenze del linguaggio Visual C\+\+.  
  
## Esempio  
 Nell'esempio seguente viene dichiarata una struttura generica, `MyGenStruct`, con un campo, `myField` e vengono assegnati valori di tipi diversi \(`int`, **double**, **String^**\) a questo campo.  
  
```  
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
  
  **Al campo viene assegnato il valore intero: 123.**  
**Al campo viene assegnato il valore double: 0.123**  
**Al campo viene assegnata la stringa: Hello Generics\!**   
## Vedere anche  
 [Generics](../windows/generics-cpp-component-extensions.md)