---
description: 'Altre informazioni su: interfacce generiche (C++/CLI)'
title: Interfacce generiche (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- generic interfaces
- interfaces, generic [C++}
ms.assetid: f3da788a-ba83-4db7-9dcf-9b95a8fb9d1a
ms.openlocfilehash: 7ba7cec76d23262977180a050326a0c5cf2966e9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301698"
---
# <a name="generic-interfaces-ccli"></a>Interfacce generiche (C++/CLI)

Le restrizioni che si applicano ai parametri di tipo nelle classi corrispondono a quelle che si applicano ai parametri di tipo nelle interfacce (vedere [Classi generiche (C++/CLI)](generic-classes-cpp-cli.md)).

Le regole che controllano l'overload delle funzioni sono le stesse per le funzioni all'interno di classi generiche o di interfacce generiche.

Le implementazioni esplicite dei membri dell'interfaccia funzionano con i tipi di interfaccia costruita in modo analogo a come funzionano con i tipi di interfaccia semplice (vedere gli esempi seguenti).

Per altre informazioni sulle interfacce, vedere [interface class](interface-class-cpp-component-extensions.md).

## <a name="syntax"></a>Sintassi

```cpp
[attributes] generic <class-key type-parameter-identifier[, ...]>
[type-parameter-constraints-clauses][accesibility-modifiers] interface class identifier [: base-list] {   interface-body} [declarators] ;
```

## <a name="remarks"></a>Osservazioni

*attributes*<br/>
(Facoltativo) Informazioni dichiarative aggiuntive. Per ulteriori informazioni sugli attributi e sulle classi di attributi, vedere **attributi**.

*class-key*<br/>
**`class`** o **`typename`**

*type-parameter-identifier(s)*<br/>
Elenco di identificatori delimitati da virgole.

*type-parameter-constraints-clauses*<br/>
Ha il formato specificato in [Vincoli su parametri di tipo generico (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md)

*accessibility-modifiers*<br/>
Opzionale Modificatori di accessibilità, ad esempio **public, private**.

*identifier*<br/>
Nome dell'interfaccia.

*base-list*<br/>
(Facoltativo) Elenco che contiene una o più interfacce di base esplicite separate da virgole.

*interface-body*<br/>
Dichiarazioni dei membri di interfaccia.

*declarators*<br/>
(Facoltativo) Dichiarazioni di variabili basate su questo tipo.

## <a name="example-how-to-declare-and-instantiate-a-generic-interface"></a>Esempio: come dichiarare e creare un'istanza di un'interfaccia generica

L'esempio seguente illustra come dichiarare un'interfaccia generica e crearne un'istanza. Nell'esempio viene dichiarata l'interfaccia generica `IList<ItemType>`. Questa viene quindi implementata da due classi generiche `List1<ItemType>` e `List2<ItemType>`, con implementazioni diverse.

```cpp
// generic_interface.cpp
// compile with: /clr
using namespace System;

// An exception to be thrown by the List when
// attempting to access elements beyond the
// end of the list.
ref class ElementNotFoundException : Exception {};

// A generic List interface
generic <typename ItemType>
public interface class IList {
   ItemType MoveFirst();
   bool Add(ItemType item);
   bool AtEnd();
   ItemType Current();
   void MoveNext();
};

// A linked list implementation of IList
generic <typename ItemType>
public ref class List1 : public IList<ItemType> {
   ref class Node {
      ItemType m_item;

   public:
      ItemType get_Item() { return m_item; };
      void set_Item(ItemType value) { m_item = value; };

      Node^ next;

      Node(ItemType item) {
         m_item = item;
         next = nullptr;
      }
   };

   Node^ first;
   Node^ last;
   Node^ current;

   public:
   List1() {
      first = nullptr;
      last = first;
      current = first;
   }

   virtual ItemType MoveFirst() {
      current = first;
      if (first != nullptr)
        return first->get_Item();
      else
         return ItemType();
   }

   virtual bool Add(ItemType item) {
      if (last != nullptr) {
         last->next = gcnew Node(item);
         last = last->next;
      }
      else {
         first = gcnew Node(item);
         last = first;
         current = first;
      }
      return true;
   }

   virtual bool AtEnd() {
      if (current == nullptr )
        return true;
      else
        return false;
   }

   virtual ItemType Current() {
       if (current != nullptr)
         return current->get_Item();
       else
         throw gcnew ElementNotFoundException();
   }

   virtual void MoveNext() {
      if (current != nullptr)
       current = current->next;
      else
        throw gcnew ElementNotFoundException();
   }
};

// An array implementation of IList
generic <typename ItemType>
ref class List2 : public IList<ItemType> {
   array<ItemType>^ item_array;
   int count;
   int current;

   public:

   List2() {
      // not yet possible to declare an
      // array of a generic type parameter
      item_array = gcnew array<ItemType>(256);
      count = current = 0;
   }

   virtual ItemType MoveFirst() {
      current = 0;
      return item_array[0];
   }

   virtual bool Add(ItemType item) {
      if (count < 256)
         item_array[count++] = item;
      else
        return false;
      return true;
   }

   virtual bool AtEnd() {
      if (current >= count)
        return true;
      else
        return false;
   }

   virtual ItemType Current() {
      if (current < count)
        return item_array[current];
      else
        throw gcnew ElementNotFoundException();
   }

   virtual void MoveNext() {
      if (current < count)
         ++current;
      else
         throw gcnew ElementNotFoundException();
   }
};

// Add elements to the list and display them.
generic <typename ItemType>
void AddStringsAndDisplay(IList<ItemType>^ list, ItemType item1, ItemType item2) {
   list->Add(item1);
   list->Add(item2);
   for (list->MoveFirst(); ! list->AtEnd(); list->MoveNext())
   Console::WriteLine(list->Current());
}

int main() {
   // Instantiate both types of list.

   List1<String^>^ list1 = gcnew List1<String^>();
   List2<String^>^ list2 = gcnew List2<String^>();

   // Use the linked list implementation of IList.
   AddStringsAndDisplay<String^>(list1, "Linked List", "List1");

   // Use the array implementation of the IList.
   AddStringsAndDisplay<String^>(list2, "Array List", "List2");
}
```

```Output
Linked List
List1
Array List
List2
```

## <a name="example-declare-a-generic-interface"></a>Esempio: dichiarare un'interfaccia generica

Questo esempio dichiara un'interfaccia generica, `IMyGenIface`, e due interfacce non generiche, `IMySpecializedInt` e `ImySpecializedString`, che specializzano l'interfaccia `IMyGenIface`. Le due interfacce specializzate vengono quindi implementate da due classi, `MyIntClass` e `MyStringClass`. L'esempio illustra come specializzare le interfacce generiche, creare istanze di interfacce generiche e non generiche e chiamare i membri implementati in modo esplicito nelle interfacce.

```cpp
// generic_interface2.cpp
// compile with: /clr
// Specializing and implementing generic interfaces.
using namespace System;

generic <class ItemType>
public interface class IMyGenIface {
   void Initialize(ItemType f);
};

public interface class IMySpecializedInt: public IMyGenIface<int> {
   void Display();
};

public interface class IMySpecializedString: public IMyGenIface<String^> {
   void Display();
};

public ref class MyIntClass: public IMySpecializedInt {
   int myField;

public:
   virtual void Initialize(int f) {
      myField = f;
   }

   virtual void Display() {
      Console::WriteLine("The integer field contains: {0}", myField);
   }
};

public ref struct MyStringClass: IMySpecializedString {
   String^ myField;

public:
   virtual void Initialize(String^ f) {
      myField = f;
    }

   virtual void Display() {
      Console::WriteLine("The String field contains: {0}", myField);
   }
};

int main() {
   // Instantiate the generic interface.
   IMyGenIface<int>^ myIntObj = gcnew MyIntClass();

   // Instantiate the specialized interface "IMySpecializedInt."
   IMySpecializedInt^ mySpIntObj = (IMySpecializedInt^) myIntObj;

   // Instantiate the generic interface.
   IMyGenIface<String^>^ myStringObj = gcnew MyStringClass();

   // Instantiate the specialized interface "IMySpecializedString."
   IMySpecializedString^ mySpStringObj =
            (IMySpecializedString^) myStringObj;

   // Call the explicitly implemented interface members.
   myIntObj->Initialize(1234);
   mySpIntObj->Display();

   myStringObj->Initialize("My string");
   mySpStringObj->Display();
}
```

```Output
The integer field contains: 1234
The String field contains: My string
```

## <a name="see-also"></a>Vedi anche

[Generics](generics-cpp-component-extensions.md)
