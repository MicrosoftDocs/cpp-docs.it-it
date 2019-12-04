---
title: Errore del compilatore C3114
ms.date: 11/04/2016
f1_keywords:
- C3114
helpviewer_keywords:
- C3114
ms.assetid: b5d2df4f-87d0-4292-9981-25c6a6013c05
ms.openlocfilehash: 6f548c72a0e95c533ed711fe9f2583a7abd6c500
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74760761"
---
# <a name="compiler-error-c3114"></a>Errore del compilatore C3114

' argument ': non è un argomento di attributo denominato valido

Affinché un membro dati della classe Attribute sia un argomento denominato valido, non deve essere contrassegnato come `static`, `const`o `literal`. Se una proprietà, la proprietà non deve essere `static` e deve avere funzioni di accesso get e set.

Per ulteriori informazioni, vedere [Proprietà](../../extensions/property-cpp-component-extensions.md) e [attributi definiti dall'utente](../../extensions/user-defined-attributes-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C3114.

```cpp
// C3114.cpp
// compile with: /clr /c
public ref class A : System::Attribute {
public:
   static property int StaticProp {
      int get();
   }

   property int Prop2 {
      int get();
      void set(int i);
   }
};

[A(StaticProp=123)]   // C3114
public ref class R {};

[A(Prop2=123)]   // OK
public ref class S {};
```
