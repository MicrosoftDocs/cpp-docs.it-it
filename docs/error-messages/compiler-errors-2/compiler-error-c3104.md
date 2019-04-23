---
title: Errore del compilatore C3104
ms.date: 11/04/2016
f1_keywords:
- C3104
helpviewer_keywords:
- C3104
ms.assetid: b5648d47-e5d3-4b45-a3c0-f46e04eae731
ms.openlocfilehash: 3b2737bd67798fd467649be175d581ca551e1331
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59778117"
---
# <a name="compiler-error-c3104"></a>Errore del compilatore C3104

argomento dell'attributo non valido

È stato specificato un argomento non valido a un attributo.

Visualizzare [tipi di parametro di attributo](../../extensions/attribute-parameter-types-cpp-component-extensions.md) per altre informazioni.

Questo errore può verificarsi in seguito a operazioni di conformità del compilatore eseguite per Visual C++ 2005: passaggio di matrici gestite agli attributi personalizzati, il tipo della matrice non viene dedotto non è più nell'elenco di inizializzazione aggregata. Il compilatore ora è necessario specificare il tipo di matrice, nonché l'elenco di inizializzatori.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3104.

```
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

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C3104.

```
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
