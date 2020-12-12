---
description: 'Altre informazioni su: errore del compilatore C3104'
title: Errore del compilatore C3104
ms.date: 11/04/2016
f1_keywords:
- C3104
helpviewer_keywords:
- C3104
ms.assetid: b5648d47-e5d3-4b45-a3c0-f46e04eae731
ms.openlocfilehash: b093c5daa96a4c0e9bf789dfcc67ac6b6d3f2561
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97116093"
---
# <a name="compiler-error-c3104"></a>Errore del compilatore C3104

argomento di attributo non valido

È stato specificato un argomento non valido per un attributo.

Per ulteriori informazioni, vedere [tipi di parametro dell'attributo](../../extensions/attribute-parameter-types-cpp-component-extensions.md) .

Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio 2005: quando si passano matrici gestite a attributi personalizzati, il tipo della matrice non viene più dedotto dall'elenco di inizializzazione aggregata. Il compilatore ora richiede di specificare il tipo della matrice e l'elenco di inizializzatori.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'C3104.

```cpp
// C3104a.cpp
// compile with: /clr /c
using namespace System;

[AttributeUsage(AttributeTargets::Class)]
public ref struct ABC : public Attribute {
   ABC(array<int>^){}
   array<double> ^ param;
};

[ABC( {1,2,3}, param = {2.71, 3.14})]   // C3104
// try the following line instead
// [ABC( gcnew array<int> {1,2,3}, param = gcnew array<double>{2.71, 3.14})]
ref struct AStruct{};
```

L'esempio seguente genera l'C3104.

```cpp
// C3104b.cpp
// compile with: /clr /c
// C3104 expected
using namespace System;

int func() {
   return 0;
}

[attribute(All)]
ref class A {
public:
   A(int) {}
};

// Delete the following 2 lines to resolve.
[A(func())]
ref class B {};

// OK
[A(0)]
ref class B {};
```
