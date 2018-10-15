---
title: Interfacce generiche (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 10/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- generic interfaces
- interfaces, generic [C++}
ms.assetid: f3da788a-ba83-4db7-9dcf-9b95a8fb9d1a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e36a4c1d9604753fd4bff6a51df060e1d26822fb
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328363"
---
# <a name="generic-interfaces-ccli"></a>Interfacce generiche (C + + CLI)

Le restrizioni applicate ai parametri di tipo nelle classi sono identici a quelli che si applicano ai parametri di tipo nelle interfacce (vedere [le classi generiche (C + + / CLI)](../windows/generic-classes-cpp-cli.md)).

Le regole che controllano l'overload di funzione sono gli stessi per le funzioni all'interno di classi generiche o interfacce generiche.

Implementazioni esplicite dell'interfaccia membro funzionano con i tipi di interfaccia costruita esattamente come con i tipi di interfaccia semplice (vedere gli esempi seguenti).

Per altre informazioni sulle interfacce, vedere [classe di interfaccia](../windows/interface-class-cpp-component-extensions.md).

## <a name="syntax"></a>Sintassi

```cpp
[attributes] generic <class-key type-parameter-identifier[, ...]>
[type-parameter-constraints-clauses][accesibility-modifiers] interface class identifier [: base-list] {   interface-body} [declarators] ;
```

## <a name="remarks"></a>Note

*Attributi*<br/>
(Facoltativo) Informazioni dichiarative aggiuntive. Per altre informazioni sugli attributi e classi di attributi, vedere **attributi**.

*chiave di classi*<br/>
**classe** o **typename**

*type-parameter-identifier(s)*<br/>
Elenco di identificatori delimitati da virgole.

*parametro di tipo-clausole di vincoli*<br/>
Assume il formato specificato [vincoli su parametri di tipo generico (C + + / CLI)](../windows/constraints-on-generic-type-parameters-cpp-cli.md)

*modificatori di accessibilità*<br/>
(Facoltativo) I modificatori di accessibilità (ad esempio **public, private**).

*identifier*<br/>
Il nome dell'interfaccia.

*base-list*<br/>
(Facoltativo) Un elenco che contiene uno o più interfacce di base esplicite separate da virgole.

*corpo di interfaccia*<br/>
Dichiarazioni dei membri di interfaccia.

*dichiaratori*<br/>
(Facoltativo) Dichiarazioni di variabili basate su questo tipo.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come dichiarare e creare un'interfaccia generica. Nell'esempio, l'interfaccia generica `IList<ItemType>` viene dichiarato. Viene quindi implementato da due classi generiche `List1<ItemType>` e `List2<ItemType>`, con implementazioni diverse.

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

## <a name="example"></a>Esempio

In questo esempio dichiara un'interfaccia generica `IMyGenIface`e due interfacce non generiche, `IMySpecializedInt` e `ImySpecializedString`, che specializzano `IMyGenIface`. Le due interfacce specializzate vengono quindi implementate dai due classi `MyIntClass` e `MyStringClass`. Nell'esempio viene illustrato come specializzare interfacce generiche, creare un'istanza di interfacce generiche e non generici e chiamare i membri implementati in modo esplicito nelle interfacce.

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

## <a name="see-also"></a>Vedere anche

[Generics](../windows/generics-cpp-component-extensions.md)