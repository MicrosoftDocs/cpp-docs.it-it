---
description: 'Altre informazioni su: funzioni generiche (C++/CLI)'
title: Funzioni generiche (C++/CLI)
ms.date: 10/12/2018
ms.topic: reference
helpviewer_keywords:
- functions [C++], generic
- generic methods
- generics [C++], functions
- methods [C++], generic
- generic functions
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
ms.openlocfilehash: cd2c5390499e6858824fae7a3368afe6de8c6c56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301737"
---
# <a name="generic-functions-ccli"></a>Funzioni generiche (C++/CLI)

Una funzione generica è una funzione dichiarata con parametri di tipo. Quando viene eseguita la chiamata, vengono usati i tipi effettivi invece dei parametri di tipo.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="remarks"></a>Commenti

Questa funzionalità non si applica a tutte le piattaforme.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Commenti

Questa funzionalità non è supportata in Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Una funzione generica è una funzione dichiarata con parametri di tipo. Quando viene eseguita la chiamata, vengono usati i tipi effettivi invece dei parametri di tipo.

### <a name="syntax"></a>Sintassi

```cpp
[attributes] [modifiers]
return-type identifier<type-parameter identifier(s)>
[type-parameter-constraints clauses]

([formal-parameters])
{function-body}
```

### <a name="parameters"></a>Parametri

*attributes*<br/>
(Facoltativo) Informazioni dichiarative aggiuntive. Per altre informazioni sugli attributi e sulle classi Attribute, vedere Attributi.

*modificatori*<br/>
(Facoltativo) Modificatore della funzione, ad esempio static.  **`virtual`** non è consentito perché i metodi virtuali potrebbero non essere generici.

*tipo restituito*<br/>
Tipo restituito dal metodo. Se il tipo restituito è nullo, non è richiesto il valore restituito.

*identifier*<br/>
Nome della funzione.

*type-parameter identifier(s)*<br/>
Elenco di identificatori delimitati da virgole.

*formal-parameters*<br/>
(Facoltativo) Elenco di parametri.

*type-parameter-constraints-clauses*<br/>
Specifica le restrizioni sui tipi che è possibile usare come argomenti di tipo e ha il formato specificato in [Vincoli su parametri di tipo generico (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md).

*corpo della funzione*<br/>
Corpo del metodo, che può fare riferimento agli identificatori dei parametri di tipo.

### <a name="remarks"></a>Commenti

Le funzioni generiche sono funzioni dichiarate con un parametro di tipo generico. Può trattarsi di metodi in una classe o uno struct o di funzioni autonome. Una dichiarazione generica singola dichiara in modo implicito una famiglia di funzioni che differiscono solo per la sostituzione di un tipo effettivo diverso per il parametro di tipo generico.

Un costruttore di classe o struct non può essere dichiarato con parametri di tipo generico.

Quando viene chiamato, il parametro di tipo generico viene sostituito da un tipo effettivo. Il tipo effettivo può essere specificato in modo esplicito tra parentesi angolari usando una sintassi simile a una chiamata di funzione di modello. Se la chiamata viene eseguita senza parametri di tipo, il compilatore proverà a dedurre il tipo effettivo dai parametri forniti nella chiamata di funzione. Se l'argomento di tipo designato non può essere dedotto dai parametri usati, il compilatore segnalerà un errore.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempio

L'esempio di codice seguente illustra una funzione generica.

```cpp
// generics_generic_function_1.cpp
// compile with: /clr
generic <typename ItemType>
void G(int i) {}

ref struct A {
   generic <typename ItemType>
   void G(ItemType) {}

   generic <typename ItemType>
   static void H(int i) {}
};

int main() {
   A myObject;

   // generic function call
   myObject.G<int>(10);

   // generic function call with type parameters deduced
   myObject.G(10);

   // static generic function call
   A::H<int>(10);

   // global generic function call
   G<int>(10);
}
```

È possibile eseguire l'overload di funzioni generiche in base alla firma o al grado, ovvero il numero di parametri di tipo in una funzione. È anche possibile eseguire l'overload di funzioni generiche con funzioni non generiche con lo stesso nome, a condizione che le funzioni differiscano per qualche parametro di tipo. È ad esempio possibile eseguire l'overload delle funzioni seguenti:

```cpp
// generics_generic_function_2.cpp
// compile with: /clr /c
ref struct MyClass {
   void MyMythod(int i) {}

   generic <class T>
   void MyMythod(int i) {}

   generic <class T, class V>
   void MyMythod(int i) {}
};
```

L'esempio seguente usa una funzione generica per trovare il primo elemento in una matrice. Dichiara `MyClass`, che eredita dalla classe di base `MyBaseClass`. `MyClass` contiene una funzione generica, `MyFunction`, che chiama un'altra funzione generica, `MyBaseClassFunction`, all'interno della classe di base. In `main` la funzione generica, `MyFunction`, viene chiamata usando argomenti di tipo diversi.

```cpp
// generics_generic_function_3.cpp
// compile with: /clr
using namespace System;

ref class MyBaseClass {
protected:
   generic <class ItemType>
   ItemType MyBaseClassFunction(ItemType item) {
      return item;
   }
};

ref class MyClass: public MyBaseClass {
public:
   generic <class ItemType>
   ItemType MyFunction(ItemType item) {
      return MyBaseClass::MyBaseClassFunction<ItemType>(item);
   }
};

int main() {
   MyClass^ myObj = gcnew MyClass();

   // Call MyFunction using an int.
   Console::WriteLine("My function returned an int: {0}",
                           myObj->MyFunction<int>(2003));

   // Call MyFunction using a string.
   Console::WriteLine("My function returned a string: {0}",
   myObj->MyFunction<String^>("Hello generic functions!"));
}
```

```Output
My function returned an int: 2003
My function returned a string: Hello generic functions!
```

## <a name="see-also"></a>Vedi anche

[Estensioni del componente per .NET e UWP](component-extensions-for-runtime-platforms.md)<br/>
[Generics](generics-cpp-component-extensions.md)
