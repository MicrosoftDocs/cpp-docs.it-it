---
title: Funzioni generiche (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- functions [C++], generic
- generic methods
- generics [C++], functions
- methods [C++], generic
- generic functions
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bc930fdc142dc7b044b4dbd60cfd459b7ce52aea
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709149"
---
# <a name="generic-functions-ccli"></a>Funzioni generiche (C++/CLI)

Una funzione generica è una funzione dichiarata con i parametri di tipo. Quando viene chiamato, anziché i parametri di tipo vengono usati tipi effettivi.

## <a name="all-platforms"></a>Tutte le piattaforme

### <a name="remarks"></a>Note

Questa funzionalità non è applicabile a tutte le piattaforme.

## <a name="windows-runtime"></a>Windows Runtime

### <a name="remarks"></a>Note

Questa funzionalità non è supportata in Windows Runtime.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/ZW`

## <a name="common-language-runtime"></a>Common Language Runtime

Una funzione generica è una funzione dichiarata con i parametri di tipo. Quando viene chiamato, anziché i parametri di tipo vengono usati tipi effettivi.

### <a name="syntax"></a>Sintassi

```cpp
[attributes] [modifiers]
return-type identifier<type-parameter identifier(s)>
[type-parameter-constraints clauses]

([formal-parameters])  
{function-body}
```

### <a name="parameters"></a>Parametri

*Attributi*  
(Facoltativo) Informazioni dichiarative aggiuntive. Per altre informazioni sugli attributi e classi di attributi, vedere attributi.

*Modificatori*  
(Facoltativo) Modificatore di funzione, ad esempio statico.  **virtuale** non è consentita perché i metodi virtuali non possono essere generici.

*tipo restituito*  
Tipo restituito dal metodo. Se il tipo restituito è void, nessun valore restituito è obbligatorio.

*identifier*  
Nome della funzione.

*parametro di tipo identificatore/i*  
Elenco di identificatori delimitati da virgole.

*parametri formali di*  
(Facoltativo) Elenco di parametri.

*parametro di tipo-clausole di vincoli*  
Questo specifica le restrizioni sui tipi che possono essere utilizzati come argomenti tipo e assume il formato specificato nella [vincoli su parametri di tipo generico (C + + / CLI)](../windows/constraints-on-generic-type-parameters-cpp-cli.md).

*corpo della funzione*  
Il corpo del metodo, che può fare riferimento agli identificatori dei parametri di tipo.

### <a name="remarks"></a>Note

Funzioni generiche sono funzioni dichiarate con un parametro di tipo generico. Possono essere metodi in una classe o struct o autonomo funzioni. Una singola dichiarazione generica dichiara in modo implicito una famiglia di funzioni che differiscono solo per la sostituzione di un tipo effettivo diverso per il parametro di tipo generico.

In Visual C++, i costruttori di classe o struct non possono essere dichiarati con parametri di tipo generico.

Quando viene chiamato, il parametro di tipo generico viene sostituito da un tipo effettivo. Il tipo effettivo può essere specificato in modo esplicito in parentesi angolari usando una sintassi simile a una chiamata di funzione di modello. Se chiamata senza parametri di tipo, il compilatore proverà a dedurre il tipo effettivo rispetto ai parametri specificati nella chiamata di funzione. Se l'argomento tipo designato non può essere dedotto dai parametri utilizzati, il compilatore segnalerà un errore.

### <a name="requirements"></a>Requisiti

Opzione del compilatore: `/clr`

### <a name="examples"></a>Esempi

Esempio di codice seguente illustra una funzione generica.

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

Funzioni generiche possono essere sottoposti a overload basato su firma o arietà, il numero di parametri di tipo in una funzione. Funzioni generiche, inoltre, possono risultare sovraccarico con le funzioni non generica con lo stesso nome, purché le funzioni differiscono alcuni parametri di tipo. Ad esempio, le funzioni seguenti possono essere sottoposti a overload:

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

L'esempio seguente usa una funzione generica per individuare il primo elemento nella matrice. Dichiara `MyClass`, che eredita dalla classe di base `MyBaseClass`. `MyClass` contiene una funzione generica `MyFunction`, che chiama un'altra funzione generica, `MyBaseClassFunction`, all'interno della classe base. Nelle `main`, la funzione generica, `MyFunction`, viene chiamato utilizzando argomenti di tipo diverso.

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

## <a name="see-also"></a>Vedere anche

[Estensioni componenti per le piattaforme runtime](../windows/component-extensions-for-runtime-platforms.md)  
[Generics](../windows/generics-cpp-component-extensions.md)