---
title: I delegati generici (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- generic delegates
- delegates, generic [C++]
ms.assetid: 09d430b2-1aef-4fbc-87f9-9d7b8185d798
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1177b3c09649affc781a8c247a109f8efd8088d2
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49328285"
---
# <a name="generic-delegates-ccli"></a>I delegati generici (C + + CLI)

È possibile utilizzare parametri di tipo generico con i delegati. Per altre informazioni sui delegati, vedere [delegare (C + c++ /CLI e c++ /CLI CX)](../windows/delegate-cpp-component-extensions.md).

## <a name="syntax"></a>Sintassi

```cpp
[attributes]
generic < [class | typename] type-parameter-identifiers>
[type-parameter-constraints-clauses]
[accessibility-modifiers] delegate result-type identifier
([formal-parameters]);
```

### <a name="parameters"></a>Parametri

*Attributi*<br/>
(Facoltativo) Informazioni dichiarative aggiuntive. Per ulteriori informazioni sugli attributi e sulle classi di attributo, vedere Attributi.

*type-parameter-identifier(s)*<br/>
Elenco delimitato da virgole degli identificatori per i parametri di tipo.

*parametro di tipo-clausole di vincoli*<br/>
Assume il formato specificato [vincoli su parametri di tipo generico (C + + / CLI)](../windows/constraints-on-generic-type-parameters-cpp-cli.md)

*modificatori di accessibilità*<br/>
(Facoltativo) I modificatori di accessibilità (ad esempio **pubbliche**, **privati**).

*result-type*<br/>
Tipo restituito del delegato.

*identifier*<br/>
Il nome del delegato.

*parametri formali di*<br/>
(Facoltativo) Elenco di parametri del delegato.

## <a name="example"></a>Esempio

I parametri di tipo delegato sono specificati nel punto in cui viene creato un oggetto delegato. Sia il delegato sia il metodo associato a esso devono avere la stessa firma. Di seguito è riportato un esempio di una dichiarazione di delegato generico.

```cpp
// generics_generic_delegate1.cpp
// compile with: /clr /c
generic <class ItemType>
delegate ItemType GenDelegate(ItemType p1, ItemType% p2);
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene mostrato che:

- Non è possibile utilizzare lo stesso oggetto delegato con tipi costruiti diversi. Creare oggetti delegati diversi per tipi differenti.

- È possibile associare un delegato generico a un metodo generico.

- Quando un metodo generico viene chiamato senza specificare gli argomenti tipo, tramite il compilatore viene eseguito il tentativo di dedurre gli argomenti tipo per la chiamata.

```cpp
// generics_generic_delegate2.cpp
// compile with: /clr
generic <class ItemType>
delegate ItemType GenDelegate(ItemType p1, ItemType% p2);

generic <class ItemType>
ref struct MyGenClass {
   ItemType MyMethod(ItemType i, ItemType % j) {
      return ItemType();
   }
};

ref struct MyClass {
   generic <class ItemType>
   static ItemType MyStaticMethod(ItemType i, ItemType % j) {
      return ItemType();
   }
};

int main() {
   MyGenClass<int> ^ myObj1 = gcnew MyGenClass<int>();
   MyGenClass<double> ^ myObj2 = gcnew MyGenClass<double>();
   GenDelegate<int>^ myDelegate1 =
      gcnew GenDelegate<int>(myObj1, &MyGenClass<int>::MyMethod);

   GenDelegate<double>^ myDelegate2 =
      gcnew GenDelegate<double>(myObj2, &MyGenClass<double>::MyMethod);

   GenDelegate<int>^ myDelegate =
      gcnew GenDelegate<int>(&MyClass::MyStaticMethod<int>);
}
```

## <a name="example"></a>Esempio

Nell'esempio seguente viene dichiarato un delegato generico `GenDelegate<ItemType>` di cui, successivamente, viene creata un'istanza associandolo al metodo `MyMethod` in cui viene utilizzato il parametro di tipo `ItemType`. Vengono create e richiamate due istanze del delegato (Integer e double).

```cpp
// generics_generic_delegate.cpp
// compile with: /clr
using namespace System;

// declare generic delegate
generic <typename ItemType>
delegate ItemType GenDelegate (ItemType p1, ItemType% p2);

// Declare a generic class:
generic <typename ItemType>
ref class MyGenClass {
public:
   ItemType MyMethod(ItemType p1, ItemType% p2) {
      p2 = p1;
      return p1;
    }
};

int main() {
   int i = 0, j = 0;
   double m = 0.0, n = 0.0;

   MyGenClass<int>^ myObj1 = gcnew MyGenClass<int>();
   MyGenClass<double>^ myObj2 = gcnew MyGenClass<double>();

   // Instantiate a delegate using int.
   GenDelegate<int>^ MyDelegate1 =
      gcnew GenDelegate<int>(myObj1, &MyGenClass<int>::MyMethod);

   // Invoke the integer delegate using MyMethod.
   i = MyDelegate1(123, j);

   Console::WriteLine(
      "Invoking the integer delegate: i = {0}, j = {1}", i, j);

   // Instantiate a delegate using double.
   GenDelegate<double>^ MyDelegate2 =
      gcnew GenDelegate<double>(myObj2, &MyGenClass<double>::MyMethod);

   // Invoke the integer delegate using MyMethod.
   m = MyDelegate2(0.123, n);

   Console::WriteLine(
      "Invoking the double delegate: m = {0}, n = {1}", m, n);
}
```

```Output
Invoking the integer delegate: i = 123, j = 123
Invoking the double delegate: m = 0.123, n = 0.123
```

## <a name="see-also"></a>Vedere anche

[Generics](../windows/generics-cpp-component-extensions.md)